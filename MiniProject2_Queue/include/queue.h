/*
Queue.h
Declares a circular queue data structure with fixed capacity

By: Charles Wan
EECE 2140 - Professor Nafa - Mini Project 2
14 Febuary, 2026
*/

#ifndef QUEUE_H
#define QUEUE_H

class Queue{
private:
    static const int cap = 5;
    int queue[cap];
    int counter; // Number of filled queue positions
    int front;
    int rear;

public:
    // default constructor
    Queue() : counter(0), front(0), rear(0) {}

    // Adds a new element to the back (rear) of the queue.
    void enqueue(int item);

    // Removes and returns the element at the front of the queue 
    int dequeue();

    // Removes all elements from the queue, resetting it to an empty state.
    void clear();

    // Returns the number of elements currently stored in the queue.
    int size();

    // Returns the element at the front without removing it. 
    int peek();

    // Returns true if the queue has no elements; otherwise false. 
    bool isEmpty();

    // Returns true if the queue cannot accept more elements because it has reached its maximum size.
    bool isFull();
};

#endif