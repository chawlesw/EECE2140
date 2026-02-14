/*
queue.cpp
Implementation of circular queue data structure

By: Charles Wan
EECE 2140 - Professor Nafa - Mini Project 2
14 February, 2026
*/

#include "../include/queue.h"
#include <iostream>
using namespace std;

// Adds a new element to the back (rear) of the queue.
void Queue::enqueue(int item){
    if (!isFull()) {
        queue[rear] = item;
        counter += 1;
        rear = (rear + 1) % cap;
    } else {
        cout << "Error: Queue is full." << endl;
    }
}

// Removes and returns the element at the front of the queue 
int Queue::dequeue(){
    if (!isEmpty()) {
        counter -= 1;
        int front_element = queue[front];
        front = (front + 1) % cap;
        return front_element;
    } else {
        cout << "Error: Queue is empty." << endl;
        return -1;
    }
}

// Removes all elements from the queue, resetting it to an empty state.
void Queue::clear(){
    front = 0;
    rear = 0;
    counter = 0;
}

// Returns the element at the front without removing it. 
int Queue::peek(){
    if (!isEmpty()) {
        return queue[front];
    } else {
        cout << "Error: Queue is empty." << endl;
        return -1;
    }
}

// Returns the number of elements currently stored in the queue.
int Queue::size(){
    return counter;
}

// Returns true if the queue has no elements; otherwise false. 
bool Queue::isEmpty(){
    return counter == 0;
}

// Returns true if the queue cannot accept more elements because it has reached its maximum size.
bool Queue::isFull(){
    return counter == cap;
}