#include <iostream>

using namespace std;

int main()
{
    int x = 4;

    /*
        The switch statement is another way to handle multiple conditions.

        It is useful when we compare one variable with multiple fixed values.

        The case works like:

            if (x == value)

        The switch automatically compares the value of x with each case.
    */

    switch (x)
    {
    case 1:
        // case 1 means: if (x == 1)
        cout << "One\n";
        break;

    case 2:
        cout << "Two\n";
        break;

    case 3:
        cout << "Three\n";
        break;

    case 4:
        cout << "Four\n";
        break;

    case 5:
        cout << "Five\n";
        break;

        /*
            break is used to stop the execution of the switch statement.

            Without break, after finding a matching case, the program will
            continue executing the statements of the following cases.

            Example:
            If x = 3 and there is no break after case 3, the output will be:

            Three
            Four
            Five

            This behavior is called "fall-through".
        */

    default:
        // default works like the final else condition.
        // It executes when no case matches with the switch value.

        cout << "Nothing matched";
    }

    /*
        The switch statement can replace multiple if-else-if conditions.

        It is useful when we have many fixed choices.

        The same logic can be written more cleanly using switch.
    */
    //    if (x == 2)
    //         {
    //             cout << "Two";
    //         }
    //         else if (x == 3)
    //         {
    //             cout << "Three";
    //         }
    //         else if (x == 4)
    //         {
    //             cout << "Four";
    //         }

    return 0;
}