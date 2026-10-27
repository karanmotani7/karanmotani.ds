
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* head = NULL;

// Insert at beginning
void insertBeginning()
{
    int value;
    cout << "Enter value: ";
    cin >> value;

    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = head;
    head = newNode;

    cout << "Node inserted at beginning.\n";
}

// Insert at end
void insertEnd()
{
    int value;
    cout << "Enter value: ";
    cin >> value;

    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node* temp = head;

        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newNode;
    }

    cout << "Node inserted at end.\n";
}

// Insert after a given node value
void insertAfter()
{
    int key, value;
    cout << "Enter node value after which to insert: ";
    cin >> key;

    Node* temp = head;

    while (temp != NULL && temp->data != key)
        temp = temp->next;

    if (temp == NULL)
    {
        cout << "Given node not found.\n";
        return;
    }

    cout << "Enter new value: ";
    cin >> value;

    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = temp->next;
    temp->next = newNode;

    cout << "Node inserted successfully.\n";
}

// Delete first node
void deleteBeginning()
{
    if (head == NULL)
    {
        cout << "List is empty.\n";
        return;
    }

    Node* temp = head;
    head = head->next;
    delete temp;

    cout << "First node deleted.\n";
}

// Delete last node
void deleteEnd()
{
    if (head == NULL)
    {
        cout << "List is empty.\n";
        return;
    }

    if (head->next == NULL)
    {
        delete head;
        head = NULL;
    }
    else
    {
        Node* temp = head;

        while (temp->next->next != NULL)
            temp = temp->next;

        delete temp->next;
        temp->next = NULL;
    }

    cout << "Last node deleted.\n";
}

// Delete node after a given node value
void deleteAfter()
{
    int key;
    cout << "Enter node value after which to delete: ";
    cin >> key;

    Node* temp = head;

    while (temp != NULL && temp->data != key)
        temp = temp->next;

    if (temp == NULL)
    {
        cout << "Given node not found.\n";
    }
    else if (temp->next == NULL)
    {
        cout << "No node exists after the given node.\n";
    }
    else
    {
        Node* delNode = temp->next;
        temp->next = delNode->next;
        delete delNode;

        cout << "Node after given node deleted.\n";
    }
}

// Display linked list
void display()
{
    if (head == NULL)
    {
        cout << "List is empty.\n";
        return;
    }

    Node* temp = head;

    cout << "Linked List: ";

    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL\n";
}

int main()
{
    int choice;

    do
    {
        cout << "\n--- SINGLY LINKED LIST ---\n";
        cout << "1. Insert at beginning\n";
        cout << "2. Insert at end\n";
        cout << "3. Insert after a given node\n";
        cout << "4. Delete first node\n";
        cout << "5. Delete last node\n";
        cout << "6. Delete node after a given node\n";
        cout << "7. Display\n";
        cout << "8. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1: insertBeginning(); break;
            case 2: insertEnd(); break;
            case 3: insertAfter(); break;
            case 4: deleteBeginning(); break;
            case 5: deleteEnd(); break;
            case 6: deleteAfter(); break;
            case 7: display(); break;
            case 8: cout << "Program ended.\n"; break;
            default: cout << "Invalid choice.\n";
        }

    } while (choice != 8);

    return 0;
}
