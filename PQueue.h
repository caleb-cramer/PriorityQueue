/** @file PQueue.h 
 * @author Caleb Cramer
 * @version Homework 1
 * @file PQueue.cpp*/

#include "QueueA.h"

#ifndef PRIORITYQUEUEA_H
#define PRIORITYQUEUEA_H


/** @class Queue
 * ADT queue - Array-based implementation. */
class PriorityQueue: public Queue
{
public:

   /** Default constructor. */
   PriorityQueue();
   /* New enqueue to overwrite the virtual function*/
   void enqueue(QueueItemType& newItem);
}; // end Queue
#endif
// End of header file.