#include <iostream>
#include <cctype>
#include "worker.h"
#include "queuetp.h"

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;

	cout << "Enter maximum size of queue: ";
	int qs;
	cin >> qs;
	
	
	Worker * pWorker; 
	QueueTp<Worker *>line(qs);
	
	char selection;
	cout << "Do you want to add a new worker into the queue(y/n): ";

	while (cin >> selection && std::tolower(selection) == 'y')
	{
		while (std::cin.get() != '\n')
			continue;
		pWorker = new Worker;
		pWorker->Set();
		line.enqueue(pWorker);
		cout << pWorker->Name() << " has been added into the queue\n"
			<< "Queue length: " << line.queuecount() << endl;
		if (line.isfull())
		{
			cout << "Queue is full\n";
			break;
		}
		cout << "Do you want to add a new worker into the queue(y/n): ";
	}

	cout << "#######################################################\n";

	while (!line.isempty())
	{
		line.dequeue(pWorker);
		pWorker->Show();
		cout << pWorker->Name() << " has been removed from the queue\n"
			<< "Queue length: " << line.queuecount() << endl;
		delete pWorker;
	}
	
	cout << "Bye!\n";

	return 0;
}




