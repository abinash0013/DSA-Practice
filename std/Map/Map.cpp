#include <iostream>
#include <map>

using namespace std;

int main()
{

    map<int, string> m;

    // first way to insert into map
    m[1] = "Abinash";
    m[13] = "Abi";
    m[2] = "Sonar";

    // second way to insert into map
    m.insert({5, "Sonar"});

    cout << "Before Delete the array : " << endl;

    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << "Finding 13 in this Map : " << m.count(13) << endl;

    // m.erase(13);
    // m.erase(5);

    // cout << "After Delete the array : " << endl;
    // for (auto i : m)
    // {
    //     cout << i.first << " " << i.second << endl;
    // }
    // cout << "_____________________" << endl;
    auto it = m.find(5);

    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << endl;
    }
}