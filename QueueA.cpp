/** @file QueueA.cpp
 * Circular array-based implementation.
 * The array has indexes to the front and back of the
 * queue. A counter tracks the number of items currently
 * in the queue. 
 * @author Caleb Cramer
 * @version Homework 1
 * @file PQueue.cpp*/

#include "QueueA.h"  // header file
#include <iostream>
using namespace std;

// sets front to 0, back to the correct index, and resets the count
Queue::Queue() : front(0), back(MAX_QUEUE-1), count(0)
{
}  // end default constructor

//checks to see if the queue is empty.
//returns a true false
bool Queue::isEmpty() 
{
	bool status;

	if(count > 0)
   		status = false;
	else
		status = true;
	return status;
}  // end isEmpty

// adds an item to the back and then moves the back 
// only if the queue isn't full.
// utilizes a circular queue
void Queue::enqueue(QueueItemType& newItem)
{
	if (count<15)
	{
		back=(back+1)%MAX_QUEUE;
		items[back]=newItem;
		count++;
	}
	else
	{
		cout<<"You cant do that! The Queue is full!" <<endl;
	}
	
}  // end enqueue
 
// checks to see if empty and then prints and removes an element from the front.
void Queue::dequeue()
{
	if(isEmpty()){
   		cout << "The queue is empty.\n";
	}
	else
  	{
   		cout << items[front]<< "\n";
   		front=(front+1)%MAX_QUEUE;
		count--;
	}
}  // end dequeue

//returns the value of the front number
QueueItemType Queue::getFront() 
{
	if(isEmpty()){
   		cout << "The queue is empty.\n";
   		return 0;
	}
	else
  	{
   		return items[front];
	}
}  // end getFront
// End of implementation file.
