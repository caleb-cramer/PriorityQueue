/** @file Test.cpp 
 * The test file for for QueueA.h and QueueA.cpp as well as for PQueue.cpp and PQueue.h.
 * It will demonstrate all the functions of both parent and derived class. 
 * @author Caleb Cramer (ccramer2)
 * @version Homework 1 
 * @date 25 January 2019
 */

#include "PQueue.h"
#include <iostream>
using namespace std;

//make 15 items (largest is 90) (order is [12,21,1,3,4,9,31,5,6,8,32,90,15,71,2])
	QueueItemType Q1(12), Q2(21), Q3(1), Q4(3), Q5(4), Q6(9),Q7(31), 
		Q8(5), Q9(6), Q10(8), Q11(32), Q12(90), Q13(15), Q14(71), Q15(2);
	Queue number1, *ptr;
	PriorityQueue number2;

	void MassEnqueue(){
		ptr->enqueue(Q1);
		ptr->enqueue(Q2);
		ptr->enqueue(Q3);
		ptr->enqueue(Q4);
		ptr->enqueue(Q5);
		ptr->enqueue(Q6);
		ptr->enqueue(Q7);
		ptr->enqueue(Q8);
		ptr->enqueue(Q9);
		ptr->enqueue(Q10);
		ptr->enqueue(Q11);
		ptr->enqueue(Q12);
		ptr->enqueue(Q13);
		ptr->enqueue(Q14);
		ptr->enqueue(Q15);

		//option to test break in parent class
		//ptr->enqueue(Q1);
	}



// @pre Main will only run if PQueue and all the other .h and .cpp files have been linked
// Then main will accept those class deifinitions and display their use.
// @post The queues will have elements
// @param No parameters are passed to main
// @returns 0
int main()
{	

	/**Start testing QueueA*/
	//pointer to regular queue
	ptr=&number1;
	cout<< "QueueA has been initialized."<< endl;

	//should display a 1 (true)
	cout<<"QueueA is empty? " <<boolalpha<< ptr->isEmpty()<< endl;

	//enqueue 15 items
	MassEnqueue();

	cout<<"15 items have been added"<<endl;

	//should display a 0 (false)
	cout<<"After enqueue, QueueA is empty? " << ptr->isEmpty()<< endl;

	//should be 12
	cout<<"What is the front number in QueueA? (Should be 12) "<<ptr->getFront()<<endl;

	//dequeue 2x to show a change
	cout<<"Dequeue the two top values."<<endl;
	ptr->dequeue();
	ptr->dequeue();

	//should be 1
	cout<<"After dequeue, what is the front number in QueueA? (Should be 1) "<<ptr->getFront()<<"\n\n";
	


	/**Moving on to test priority queue*/


	ptr=&number2;
	cout<<endl<< "PriorityQueue has been initialized."<< endl;

	//should display a 1
	cout<<"PriorityQueue is empty? "<< ptr->isEmpty()<< endl;

	//enqueue 15 items
	MassEnqueue();
	cout<<"15 items have been added"<<endl;
	
	//should display a 0
	cout<<"After enqueue, PriorityQueue is empty? "<< ptr->isEmpty()<< endl;

	//should be 12
	cout<<"What is the biggest number of PriorityQueue? (Should be 90) "<<ptr->getFront()<<endl;
	
	//dequeue 2x to show a change
	cout<<"Dequeue the the two largest values."<< endl;
	ptr->dequeue();
	ptr->dequeue();

	//should be 32
	cout<< "After dequeue, what is the biggest number in PriorityQueue? (Should be 32) "<<ptr->getFront()<<endl;


	return 0;
}
//end main

