#include <iostream>
using namespace std;

#define MAX 100

int st[MAX], top = -1;


void push(int x) {
    if (top == MAX - 1) {
        cout << "Stack Overflow! Can't push " << x << endl;
    } else {
        st[++top] = x;
        cout << x << " pushed into the stack" << endl;
    }
}


void pop() {
    if (top == -1) {
        cout << "Stack Underflow! Nothing to pop" << endl;
    } else {
        cout << st[top--] << " popped from the stack" << endl;
    }
}


void peek() {
    if (top == -1) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Top element: " << st[top] << endl;
    }
}


void isEmpty() {
    if (top == -1) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }
}


void isFull() {
    if (top == MAX - 1) {
        cout << "Stack is full" << endl;
    } else {
        cout << "Stack is not full" << endl;
    }
}


void display() {
    if (top == -1) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack elements are: ";
        for (int i = top; i >= 0; i--) {
            cout << st[i] << " ";
        }
        cout << endl;
    }
}


int main() {
    int choice, value;

    while (true) {
        cout << "\n1. Push\n2. Pop\n3. Peek\n4. isEmpty\n5. isFull\n6. Display\n7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the value to push: ";
                cin >> value;
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                isEmpty();
                break;

            case 5:
                isFull();
                break;

            case 6:
                display();
                break;

            case 7:
                cout << "Exiting..." << endl;
                return 0;

            default:
                cout << "Invalid choice! Please try again" << endl;
                break;
        }
    }
}
