#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{

    vector<int> v;

    v.push_back(1);
    v.push_back(4);
    v.push_back(5);
    v.push_back(9);

    cout << "Finding six in an Array: " << binary_search(v.begin(), v.end(), 6) << endl;

    cout << "Lower Bound : " << lower_bound(v.begin(), v.end(), 5) - v.begin() << endl;
    cout << "Upper Bound : " << upper_bound(v.begin(), v.end(), 5) - v.begin() << endl;

    int a = 3;
    int b = 5;

    cout << "Max is : " << max(a, b);
    cout << endl;

    cout << "Min is : " << min(a, b);
    cout << endl;

    cout << "Before Swap the Value of a : " << a;
    cout << endl;
    cout << "Before Swap the Value of b : " << b;
    cout << endl;
    swap(a, b);
    cout << "After Swap the Value of a is : " << a << endl;
    cout << "After Swap the Value of b is : " << b << endl;

    cout << "Reverse the String" << endl;
    string name = "Abinash";
    reverse(name.begin(), name.end());
    cout << endl;
    cout << "Reverse Name is : " << name << endl;
}