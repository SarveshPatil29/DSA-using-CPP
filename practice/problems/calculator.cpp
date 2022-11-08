#include <iostream>
using namespace std;

int main()
{

    int a = 0, b = 0,
        ans = 0;
    char op = 'a';

    cout << "Enter the two numbers: ";
    cin >> a >> b;

    cout << "Enter the operator for the operation that you want to perform: ";
    cin >> op;

    switch (op)
    {
        {
        case '+':
            ans = a + b;
            break;

        case '-':
            ans = a - b;
            break;

        case '*':
            ans = a * b;
            break;

        case '/':
            ans = a / b;
            break;

        case '%':
            ans = a % b;
            break;

        default:
            cout << "Invalid operator" << endl;
            return 0;
            break;
        }
    }
    cout << "Answer is: " << ans << endl;
    return 0;
}