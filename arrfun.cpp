#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "Printing of array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "printing done" << endl;
}

int main()
{
    int number[15];
    cout << "value of number are : " << number[15] << endl;

    int third[15] = {2,
                     3};

    int n = 15;
    printArray(third, 15);
}