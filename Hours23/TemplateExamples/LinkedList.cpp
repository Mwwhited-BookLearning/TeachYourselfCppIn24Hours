
#include <iostream>

enum {
	kIsSmaller,
	kIsLarger,
	kIsSame,
};

template <class T> class Node {
public:
	Node() {}
	virtual ~Node() {}
	virtual Node* Insert(T* obj) = 0;
	virtual void Show() = 0;
};

template <class T> class InternalNode : public Node<T> {
public:
	InternalNode(T* obj, Node<T>* next);
	~InternalNode() {
		delete _next;
		delete _obj;
	}
	virtual Node<T>* Insert(T* obj);
	virtual void Show() {
		T deref = *_obj;
		if (_obj != nullptr) {
			std::cout << "T" << deref << std::endl;
		}
		_next->Show();
	}
private:
	T* _obj;
	Node<T>* _next;
};

template <class T> InternalNode<T>::InternalNode(T* obj, Node<T>* next) :
	_obj(obj), _next(next)
{
}

template <class T> Node<T>* InternalNode<T>::Insert(T* obj) {
	switch (_obj->Compare(*obj)) {

	case kIsSame:
	case kIsLarger:
		return new InternalNode<T>(obj, this);

	case kIsSmaller:
		_next = _next->Insert(obj);

	default:
		return this;

	}
}

template <class T> class TailNode :public Node<T> {
public:
	TailNode() {}
	virtual ~TailNode() {}
	virtual Node<T>* Insert(T* obj);
	virtual void Show() {}
};

template <class T> Node<T>* TailNode<T>::Insert(T* obj) {
	return new InternalNode<T>(obj, this);
}

template <class T> class HeadNode :public Node<T> {
public:
	HeadNode();
	virtual ~HeadNode() {
		delete _next;
	}
	virtual Node<T>* Insert(T* obj);
	virtual void  Show() {
		_next->Show();
	}

private:
	Node<T>* _next;

};

template <class T> HeadNode<T>::HeadNode() {
	_next = new TailNode<T>();
}

template <class T> class LinkedList {
public:
	LinkedList();
	~LinkedList() {
		delete _head;
	}
	void Insert(T* obj);
	void ShowAll() {
		_head->Show();
	}

private:
	HeadNode<T>* _head;
};

template <class T> LinkedList<T>::LinkedList() {
	_head = new HeadNode<T>;
}

template <class T> void LinkedList<T>::Insert(T* obj) {
	_head->Insert(obj);
}
