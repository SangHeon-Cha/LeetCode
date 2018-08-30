// 641.DesignCircularDeque.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//https://leetcode.com/problems/design-circular-deque/description/

#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

class MyCircularDeque
{
public:
	vector<int> deque;

	/** Initialize your data structure here. Set the size of the deque to be k. */
	MyCircularDeque(int k)
	{
		deque.reserve(k);
	}

	/** Adds an item at the front of Deque. Return true if the operation is successful. */
	bool insertFront(int value)
	{
		if (deque.size() >= deque.capacity())
			return false;

		deque.insert(deque.begin(), value);

		return true;
	}

	/** Adds an item at the rear of Deque. Return true if the operation is successful. */
	bool insertLast(int value)
	{
		if (deque.size() >= deque.capacity())
			return false;

		deque.push_back(value);

		return true;
	}

	/** Deletes an item from the front of Deque. Return true if the operation is successful. */
	bool deleteFront()
	{
		if (deque.size() == 0)
			return false;

		deque.erase(deque.begin());

		return true;
	}

	/** Deletes an item from the rear of Deque. Return true if the operation is successful. */
	bool deleteLast()
	{
		if (deque.size() == 0)
			return false;

		deque.erase(deque.end() - 1);
		return true;
	}

	/** Get the front item from the deque. */
	int getFront()
	{
		if (deque.size() == 0)
		{
			return -1;
		}

		return deque.front();
	}

	/** Get the last item from the deque. */
	int getRear()
	{
		if (deque.size() == 0)
		{
			return -1;
		}
		return deque[deque.size() - 1];
	}

	/** Checks whether the circular deque is empty or not. */
	bool isEmpty()
	{
		if (deque.size() == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	/** Checks whether the circular deque is full or not. */
	bool isFull()
	{
		if (deque.size() == deque.capacity())
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};


int main()
{
	MyCircularDeque circleDeque = MyCircularDeque(100);

	int size = circleDeque.deque.size();

	for (int i = 0; i < size; i++)
	{
		cout << circleDeque.deque[i] << " ";
	}
	cout << endl;

	circleDeque.insertFront(5);
	circleDeque.insertFront(2);

	size = circleDeque.deque.size();

	for (int i = 0; i < size; i++)
	{
		cout << circleDeque.deque[i] << " ";
	}
	cout << endl;

	circleDeque.insertLast(8);
	circleDeque.insertLast(10);

	size = circleDeque.deque.size();

	for (int i = 0; i < size; i++)
	{
		cout << circleDeque.deque[i] << " ";
	}
	cout << endl;

	circleDeque.deleteFront();

	size = circleDeque.deque.size();

	for (int i = 0; i < size; i++)
	{
		cout << circleDeque.deque[i] << " ";
	}
	cout << endl;

	circleDeque.deleteLast();

	size = circleDeque.deque.size();

	for (int i = 0; i < size; i++)
	{
		cout << circleDeque.deque[i] << " ";
	}
	cout << endl;

	circleDeque.deleteLast();
	circleDeque.deleteLast();
	cout << circleDeque.getFront() << endl;
	cout << circleDeque.getRear() << endl;


	cin.get();
}
