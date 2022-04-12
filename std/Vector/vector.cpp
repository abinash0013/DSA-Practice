#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    // cout << "Capacity of vactor is:" << v.capacity() << endl;

    vector<int> a(5, 2);

    vector<int> last(a);
    cout << "Print Last" << endl;

    // cout << "Output are : " << endl;
    for (int i : last)
    {
        cout << i << " " << endl;
    }

    v.push_back(1);
    cout << "Capacity : " << v.capacity() << endl;
    cout << "Size of an array is : " << v.size() << endl;

    v.push_back(2);
    cout << "Capacity is : " << v.capacity() << endl;
    cout << "Size of an array is : " << v.size() << endl;

    v.push_back(3);
    cout << "Capacity is : " << v.capacity() << endl;
    cout << "Size of an array is : " << v.size() << endl;

    v.push_back(4);
    cout << "Capacity is : " << v.capacity() << endl;
    cout << "Size of an array is : " << v.size() << endl;

    v.push_back(5);
    cout << "Capacity is : " << v.capacity() << endl;
    cout << "Size of an array is : " << v.size() << endl;

    cout << "Element at 2nd Index is : " << v.at(2) << endl;

    cout << "First Element of an Array is : " << v.front() << endl;
    cout << "Last Element of an Array is " << v.back() << endl;

    cout << "Before Pop : " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();

    cout << "after pop" << endl;
    for (int i : v)
    {
        cout << i << "";
    }
    cout << endl;

    cout << "Before Clear Size is : " << v.size() << endl;
    cout << "Before Clear Capacity is : " << v.capacity() << endl;
    v.clear();
    cout << "After Clear Size : " << v.size() << endl;
    cout << "After Clear Capacity is : " << v.capacity() << endl;
}