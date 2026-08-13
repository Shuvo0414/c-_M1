#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;

    /*
        Here we use the expression x % 2 inside the switch statement.

        The modulus operator (%) gives the remainder after division.

        If x % 2 gives:

        0 → the number is Even
        1 → the number is Odd

        Therefore, our case values will be 0 and 1.
    */

    switch (x % 2)
    {
    case 0:
        // case 0 means the remainder is 0, so the number is even.

        cout << "Even number" << endl;
        break;

    case 1:
        // case 1 means the remainder is 1, so the number is odd.

        cout << "Odd" << endl;
        break;
    }

    return 0;
}