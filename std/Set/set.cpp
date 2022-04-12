#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(0);
    s.insert(0);
    s.insert(0);
    s.insert(0);
    s.insert(3);
    s.insert(3);

    cout << "Before Delete the Element in Sets are : " << endl;

    for (auto i : s)
    {
        cout << i << endl;
    }

    cout << "After Delete the Element in Sets are : " << endl;
    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);

    for (auto i : s)
    {
        cout << i << endl;
    }

    cout << "-5 is present or not :  " << s.count(-5);
}