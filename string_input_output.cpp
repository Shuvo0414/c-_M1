#include <iostream>
#include <string.h>
#include <string>

using namespace std;

int main()
{

    char s[1000];

    /*
        If we take input without spaces, we can use:

            cin >> s;

        But cin stops reading when it finds a space.

        Example:
            Input:
            Hello World

            cin >> s will only store:
            Hello

        For taking input with spaces, we use getline().
    */

    int a;

    cin >> a;

    /*
        After taking integer input, we press Enter.

        That Enter key creates a newline character ('\n') in the input buffer.

        If we directly use getline() after cin, getline() will read that
        leftover newline instead of taking the actual string input.

        getchar() removes that extra newline character from the input buffer.
    */

    getchar();

    // strlen() function is used to find the length of a string.
    // To use strlen(), we need to include the <string.h> header file.

    // cout << strlen(s) << endl;

    /*
        In C language, we use fgets() to take input with spaces.

        Example:

            fgets(s, 1000, stdin);

        fgets() also stores the newline character, so we usually need to
        handle the extra newline.
    */

    /*
        In C++, cin.getline() is used to take a complete line of input,
        including spaces.

        Syntax:

            cin.getline(variable, size);
    */

    cin.getline(s, 1000);

    getchar();

    cout << a << '\n'
         << s << endl;

    /*
        Important Note:

        If we need to take input without spaces, and before that we already
        take an integer or another value, then using cin >> works normally.

        Example:

            int age;
            char name[100];

            cin >> age;
            cin >> name;

        But if we use cin.getline() after cin >>, there is a problem.

        The reason is:

            cin >> age;

        only takes the integer value and leaves the Enter key ('\n') in the
        input buffer.

        Then cin.getline() reads that leftover Enter and takes an empty line
        instead of the actual string.


        Solution:

        We need to remove that leftover newline before using getline().

        We can do this by using:

            getchar();

        between the integer input and string input.

        Example:

            int age;
            char name[100];

            cin >> age;
            getchar();
            cin.getline(name, 100);

        Now getline() will correctly take the string with spaces.
    */

    return 0;
}