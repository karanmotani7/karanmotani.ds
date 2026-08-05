#include<iostream>
using namespace std;

#define MAX 100
int queue[MAX];
int front = -1;
int rear = -1;
void insert (int value)
{
    if(rear == MAX - 1)
    {
        cout << "Queue is full" << endl;
    }
    else
    {
        if(front == -1)
            front = 0;
        rear++;
        queue[rear] = value;
        cout << "Inserted " << value << endl;
    }
}
void delete_element()
{
    if(front == -1 || front > rear)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Deleted " << queue[front] << endl;
        front++;
    }
}
switch (choice)
    {
        case 1:
            cout << "Enter value to insert: ";
            cin >> value;
            insert(value);
            break;
        case 2:
            delete_element();
            break;
        case 3:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
    }
} while(choice != 3);
  void display()
{
    if(front == -1 || front > rear)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Queue elements: ";
        for(int i = front; i <= rear; i++)
        {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}
