#ifndef _B42_
#define _B42_
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <stack>
#include <map>
#include <set>
#include <random>
#include <string>
#include <list>
#include <iterator>
using namespace std;
#include "b42.h"
struct queueNode {
	int data;
	queueNode* next;
	queueNode(int d){
		data = d;
		next = NULL;
	}
};
struct queue {
	queueNode* front, * rear;
	queue() {
		front = rear = NULL;
	}
	void enqueue(int x) {
		queueNode* temp = new queueNode(x);
		if (rear == NULL) {
			front = rear = temp;
			return;
		}
		rear->next = temp;
		rear = temp;
	}
	void dequeue() {
		if (front == NULL) {
			return;
		}
		queueNode* temp = front;
		front = front->next;
		if (front == NULL) {
			rear = NULL;
		}
		delete (temp);
	}
};
#endif