#include <iostream>
using namespace std;

// int main()
// {
//     int a, b;

//     cout << "Enter the value of a : " << endl;
//     cin >> a;

//     cout << "Enter the value of b: " << endl;
//     cin >> b;

//     char op;
//     cout << "Enter the Operation you want to perform" << endl;
//     cin >> op;

//     switch (op)
//     {
//     case '+':
//         cout << (a + b) << endl;
//         break;

//     case '-':
//         cout << (a - b) << endl;
//         break;

//     case '*':
//         cout << (a * b) << endl;
//         break;

//     case '/':
//         cout << (a / b) << endl;
//         break;

//     case '%':
//         cout << (a % b) << endl;
//         break;

//     default:
//         break;
//     }
// }

// int update(int a)
// {
//     a = 5;
//     return a;
// }
// int main()
// {
//     int a = 15;
//     update(a);
//     cout << a << endl;
// }

int update(int a)
{
    int ans = a * a;
    return ans;
}
int main()
{
    int a = 14;
    a = update(a);

    cout << a << endl;
}