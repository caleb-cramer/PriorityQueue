/* Circular array-based implementation.
 * The array has indexes to the front and back of the
 * queue. A counter tracks the number of items currently
 * in the queue. 
 *
 * @author Caleb Cramer
 * @version Homework 1
 * @file PQueue.cpp
 */
 

#include "PQueue.h"  // header file
#include<iostream>
using namespace std;

PriorityQueue::PriorityQueue()
{
}  // end default constructor

//@pre This will override the virtual enqueue function that is defined in QueueA.cpp
//@post It will enqueue with priority based on 'newItem's' value.
//@return no return
//@param gets the address of a 'QueueItemType' which is effectively an integer
//@throw if the queue is full then it will not enqueue
void PriorityQueue::enqueue(QueueItemType& newItem)
{
   	if (count<15)
	{
		int i = front;
		while(items[i]>=newItem){
			i=(i+1)%MAX_QUEUE;
		}
		for (int x = back; x >= i; x--)
		{
			items[(x+1)%MAX_QUEUE]=items[x];
		}
		back=(back+1)%MAX_QUEUE;
		items[i]=newItem;
		count++;
	}
	else
	{
		cout<<"You cant do that! The Queue is full!" <<endl;
	}
   
}  // end enqueue


// End of implementation file.