#include <iostream>

using namespace std;

int main()
{
    double a;

    cin >> a;
    // printf("%.6lf\n", a);

    /*
        In C language, if we need to control how many digits appear
        after the decimal point, we use format specifiers in printf().

        Example:
            printf("%.6lf\n", a);

        Here:
            %.6lf means print 6 digits after the decimal point.
    */

    /*
        In C++, we use setprecision() to control the number of digits
        shown after the decimal point.

        For using setprecision(), we need to include the <iomanip> header file.

        Example:

            #include <iomanip>

            cout << fixed << setprecision(2) << a;

        fixed:
            It tells cout to show the number in fixed decimal format.

        setprecision(2):
            It tells cout to show 2 digits after the decimal point.

        Note:
            fixed and setprecision() are commands for formatting output.
            They do not print anything by themselves; cout understands
            these commands and formats the output accordingly.
    */

    cout << a << endl;

    return 0;
}