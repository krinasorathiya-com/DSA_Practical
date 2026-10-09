#include <iostream>
using namespace std;

#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

void enqueue()
{
    int value;

    if ((rear + 1) % MAX == front)
    {
        cout << "Queue Overflow" << endl;
        return;
    }

    cout << "Enter token number: ";
    cin >> value;

    if (front == -1)
        front = 0;

    rear = (rear + 1) % MAX;
    queue[rear] = value;

    cout << "Token inserted successfully" << endl;
}

void dequeue()
{
    if (front == -1)
    {
        cout << "Queue Underflow" << endl;
        return;
    }

    cout << "Deleted token: " << queue[front] << endl;

    if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front = (front + 1) % MAX;
    }
}

void display()
{
    if (front == -1)
    {
        cout << "Queue is Empty" << endl;
        return;
    }

    cout << "Queue elements: ";

    int i = front;

    while (true)
    {
        cout << queue[i] << " ";

        if (i == rear)
            break;

        i = (i + 1) % MAX;
    }

    cout << "\nFront token: " << queue[front] << endl;
}

int main()
{
    int choice;

    do
    {
        cout << "\n--- Token Counter ---" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {enqueue();}
        else if (choice == 2)
        {dequeue();}
        else if (choice == 3)
        {display();}
        else if (choice == 4)
        {cout << "Program ended" << endl;}
        else
        {cout << "Invalid choice" << endl;}

    } while (choice != 4);

    return 0;
}