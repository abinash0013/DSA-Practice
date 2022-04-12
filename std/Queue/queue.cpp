#include <iostream>
#include <queue>

using namespace std;
int main()
{
    queue<string> q;

    q.push("Abinash");
    q.push("Sonar");
    q.push("Biswakarma");

    cout << "The Name First Element of this Queue : " << q.front() << endl;
    cout << "After Delete the Element form this Queue : " << q.size() << endl;
    q.pop();
    cout << "After Delete the First Element of this Queue : " << q.front() << endl;
    cout << "After Delete the Element form this Queue : " << q.size() << endl;
}