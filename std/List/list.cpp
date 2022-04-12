#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> l;

    list<int> n(5, 100);
    cout << "printing n : " << endl;
    for (int i : n)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "____________________" << endl;

    l.push_back(1);
    l.push_front(2);

    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "before erase : ";
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    l.erase(l.begin());
    cout << "after erase : ";
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Size of List : " << l.size() << endl;
}