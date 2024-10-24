#include <iostream>
using namespace std;


class Queue {
private:
    int front;
    int back;        
    char items[10]; 

public:
    Queue() {
        front = -1;
        back = -1;
    }

    ~Queue() {
    }

    bool isEmpty() {
        return (front == -1 && back == -1);
    }

    bool isFull() {
        return (back == 10 - 1);
    }


    void enQueue(char element) {
        if (isFull()) {
            cout << "Queue is full"<< endl;
            return;
        }
        if (isEmpty()) {
            front = back = 0;
        } else {
            back++;
        }
        items[back] = element;
    }

    void deQueue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue." << endl
            return;
        }
        if (front == back) {
            front = back = -1;
        } else {
            front++;
        }
    }

    char getFront() {
        if (isEmpty()) {
            cout << "Queue is empty. No front element." << endl;
            return '\0'; 
        }
        return items[front];
    }

    char getRear() {
        if (isEmpty()) {
            cout << "Queue is empty. No rear element." << endl;
            return '\0';
        }
        return items[back];
    }
};