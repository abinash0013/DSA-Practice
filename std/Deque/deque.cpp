#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(2);

    // for (int i : d)
    // {
    //     cout << i << " ";
    // }

    // d.pop_back();
    // d.pop_front();
    // cout << endl;

    // for (int i : d)
    // {
    //     cout << i << " ";
    // }
    cout << endl;

    // cout << "Print First Index of the Element : " << d.at(1) << endl;

    cout << "Before Erase Size of an Array is : " << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1);
    cout << "After Erase Size of an Array is : " << d.size() << endl;
    for (int i : d)
    {
        cout << "Now the element of an array is : " << i << endl;
    }
}