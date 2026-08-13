#include <iostream>

using namespace std;

int main()
{
    int a, b;

    /*
        In C language, when we want to take input until the end of a file,
        we usually check the return value of scanf() with EOF.

        Example:
            scanf("%d %d", &a, &b) != EOF

        But in C++, cin automatically detects whether the input operation
        is successful or the file/input has ended.

        If input is available, cin returns true and the loop continues.
        If input ends or fails, cin returns false and the loop stops.

        Also, cin does not require format specifiers like %d, %f, etc.
    */

    while (cin >> a >> b) // C equivalent: scanf("%d %d", &a, &b) != EOF
    {
        // In C language, we print output using printf().
        // Example:
        // printf("%d %d\n", a, b);

        // C++ equivalent of printf() is cout.
        // cout does not need format specifiers.
        cout << a << " " << b << endl;
        /*
        intput: 10 20
                30 40
                50 100

        output: 10 20
                30 40
                50 100

        */
    }

    return 0;
}