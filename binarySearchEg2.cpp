#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int key)
{

    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key > arr[mid]) // Right m jana hai
        {
            start = mid + 1;
        }
        else if (key < arr[mid]) // left m jana hai
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int key)
{

    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key > arr[mid]) // Right m jana hai
        {
            start = mid + 1;
        }
        else if (key < arr[mid]) // left m jana hai
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{

    int arr[10] = {1, 2, 3, 3, 3, 3, 3, 3, 3, 5};

    cout << "First Occurrence of 3 is: " << firstOcc(arr, 10, 3) << endl;
    cout << "Last Occurrence of 3 is: " << lastOcc(arr, 10, 3) << endl;

    return 0;
}