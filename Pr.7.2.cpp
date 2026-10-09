#include <iostream>
using namespace std;

struct Node
{
    int patient;
    Node* next;
};

Node* front = NULL;
Node* rear = NULL;

void enqueue()
{
    int id;
    cout << "Enter patient ID: ";
    cin >> id;
    Node* newNode = new Node;
    newNode->patient = id;
    newNode->next = NULL;

    if (front == NULL)
    {front = rear = newNode;}
    else
    {rear->next = newNode;
        rear = newNode;}

    cout << "Patient arrived successfully" << endl;
    cout << "Current Front Patient: " << front->patient << endl;
}

void dequeue()
{
    if (front == NULL)
    {cout << "Error: No patients waiting" << endl;return;}

    Node* temp = front;
    cout << "Attended Patient: " << front->patient << endl;
    front = front->next;
    if (front == NULL)
    {rear = NULL;}

    delete temp;

    if (front == NULL)
        cout << "Current Front: No patients waiting" << endl;
    else
        cout << "Current Front Patient: " << front->patient << endl;
}

void display()
{
    if (front == NULL)
    {
        cout << "No patients waiting" << endl;
        return;
    }

    Node* temp = front;

    cout << "Waiting Patients: ";

    while (temp != NULL)
    {cout << temp->patient << " ";
        temp = temp->next;}
    cout << "\nCurrent Front Patient: " << front->patient << endl;
}

int main()
{
    int choice;

    do
    {
        cout << "\n--- Hospital Emergency Ward ---" << endl;
        cout << "1. Arrive (Enqueue)" << endl;
        cout << "2. Attend (Dequeue)" << endl;
        cout << "3. Display Patients" << endl;
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

    while (front != NULL)
    {Node* temp = front;
        front = front->next;
        delete temp;}

    rear = NULL;
    return 0;
}