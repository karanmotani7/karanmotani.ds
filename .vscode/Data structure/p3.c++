
#include <iostream>
using namespace std;

#define SIZE 5

int stack[SIZE];
int top = -1;

void push()
{
    int value;

    if (top == SIZE - 1)
    {
        cout << "Stack Overflow!" << endl;
    }
    else
    {
        cout << "Enter value to push: ";
        cin >> value;

        top++;
        stack[top] = value;

        cout << "Element pushed successfully." << endl;
    }
}

void pop()
{
    if (top == -1)
    {
        cout << "Stack Underflow!" << endl;
    }
    else
    {
        cout << "Popped element: " << stack[top] << endl;
        top--;
    }
}

void peek()
{
    if (top == -1)
    {
        cout << "Stack is empty!" << endl;
    }
    else
    {
        cout << "Top element: " << stack[top] << endl;
    }
}

void display()
{
    if (top == -1)
    {
        cout << "Stack is empty!" << endl;
    }
    else
    {
        cout << "Stack elements (top to bottom): ";
        for (int i = top; i >= 0; i--)
        {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int choice;

    do
    {
        cout << "\n--- STACK MENU ---" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Display" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                cout << "Program ended." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    } while (choice != 5);

    return 0;
}
