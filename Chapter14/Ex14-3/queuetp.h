#ifndef QUEUETP_H_
#define QUEUETP_H_

template <class Type>
class QueueTp
{
private:
	struct Node { Type item; struct Node * next; };
	enum { Q_SIZE = 10 };

	Node * front;
	Node * rear; 
	int items; 
	const int qsize;
	// preemptive definitions to prevent public copying
	//QueueTp(const Queue & q) : qsize(0) { }
	//QueueTp & operator=(const Queue & q) { return *this; }
public:
	QueueTp(int qs = Q_SIZE); // create queue with a qs limit
	~QueueTp();
	bool isempty() const { return items == 0; }
	bool isfull() const { return items == qsize; }
	int queuecount() const { return items; }
	bool enqueue(const Type &item); // add item to end
	bool dequeue(Type &item); // remove item from front
};

template <class Type>
QueueTp<Type>::QueueTp(int qs) : qsize(qs)
{
	front = rear = NULL;
	items = 0;
}

template <class Type>
QueueTp<Type>::~QueueTp()
{
	Node * temp;
	while (front != NULL) // while queue is not yet empty
	{
		temp = front; // save address of front item
		front = front->next;// reset pointer to next item
		delete temp; // delete former front
	}
}

template <class Type>
bool QueueTp<Type>::enqueue(const Type &item)
{
	if (isfull())
		return false;
	Node * add = new Node; // create node
	// on failure, new throws std::bad_alloc exception
	add->item = item; // set node pointers
	add->next = NULL; // or nullptr;
	items++;
	if (front == NULL) // if queue is empty,
		front = add; // place item at front
	else
		rear->next = add; // else place at rear
	rear = add; // have rear point to new node
	return true;
}

template <class Type>
bool QueueTp<Type>::dequeue(Type &item)
{
	if (front == NULL)
		return false;
	item = front->item; // set item to first item in queue
	items--;
	Node * temp = front; // save location of first item
	front = front->next; // reset front to next item
	delete temp; // delete former first item
	if (items == 0)
		rear = NULL;
	return true;
}

#endif 

