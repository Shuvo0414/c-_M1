#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;

    /*
        The ternary operator is a short form of the if-else statement.

        It is useful when we have only one condition and two possible
        results (true or false).

        Syntax:

        condition ? true_statement : false_statement;

        First, we write the condition.
        If the condition is true, the statement before ':' will execute.
        If the condition is false, the statement after ':' will execute.

        It can replace simple if-else conditions and make the code shorter.
        However, using nested ternary operators (multiple conditions inside
        another condition) can make the code complex and difficult to read.

        Therefore, it is better to use the ternary operator only when the
        condition is simple and limited to if-else.
    */

    (a % 2 == 0) ? cout << "It's Even number\n" : cout << "It's Odd number";

    /*
        The above ternary operator is the short form of this if-else statement:

        if (a % 2 == 0)
        {
            cout << "It's Even number\n";
        }
        else
        {
            cout << "It's Odd number";
        }
    */

    return 0;
}