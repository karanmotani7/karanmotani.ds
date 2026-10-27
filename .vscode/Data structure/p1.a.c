
#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, i, pos, value, key;
    int choice;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    do
    {
        cout << "\n\n1. Insertion";
        cout << "\n2. Deletion";
        cout << "\n3. Traversal";
        cout << "\n4. Search";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter position and value: ";
                cin >> pos >> value;

                if (n >= 100 || pos < 1 || pos > n + 1)
                {
                    cout << "Invalid position or array full!";
                }
                else
                {
                    for (i = n; i >= pos; i--)
                    {
                        arr[i] = arr[i - 1];
                    }

                    arr[pos - 1] = value;
                    n++;

                    cout << "Element inserted successfully.";
                }
                break;

            case 2:
                cout << "Enter position to delete: ";
                cin >> pos;

                if (pos < 1 || pos > n)
                {
                    cout << "Invalid position!";
                }
                else
                {
                    for (i = pos - 1; i < n - 1; i++)
                    {
                        arr[i] = arr[i + 1];
                    }

                    n--;

                    cout << "Element deleted successfully.";
                }
                break;

            case 3:
                cout << "Array elements are: ";
                for (i = 0; i < n; i++)
                {
                    cout << arr[i] << " ";
                }
                break;

            case 4:
                cout << "Enter element to search: ";
                cin >> key;

                for (i = 0; i < n; i++)
                {
                    if (arr[i] == key)
                    {
                        break;
                    }
                }

                if (i < n)
                    cout << "Element found at position " << i + 1;
                else
                    cout << "Element not found.";
                break;

            case 5:
                cout << "Program ended.";
                break;

            default:
                cout << "Invalid choice!";
        }

    } while (choice != 5);

    return 0;
}
