#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<string> s;
    s.push("Abinash");
    s.push("Sonar");
    s.push("CPP");

    cout << "Our Top Element of this Stack is : " << s.top() << endl;

    cout << "Removing The Top Element of this Stack " << endl;
    s.pop();

    cout << "Now Our Top Element of this Stack is : " << s.top() << endl;

    cout << "Size of this Stack is : " << s.size() << endl;

    cout << "Check the Stack is Empty or Not " << s.empty() << endl;
}