#include<iostream>
using namespace std;
int main(){
    int num, index = 0;
    cout << "Enter a number: ";
    cin >> num;
    do
    {
        cout << index << endl;
        index = index + 1;
    } while (index < num);
    return 0;
}