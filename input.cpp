#include <iostream>

/*
    Using namespace std allows us to use cout, cin, endl, etc.
    without writing std:: every time.

    cin and cout are inside the std namespace, and the std namespace
    is provided by the iostream header file.

    This line should be written after the header file and before main().

    Without this line:
        cout << "Hello";

    will give an error because cout is inside std namespace.

    We need to write:
        std::cout << "Hello";
*/

using namespace std;

int main()
{
    // int a, b;

    // In C language, we take input using scanf() and need format specifiers.
    // Example:
    // scanf("%d", &a);

    /*
        In C++, we use cin for taking input.

        cin does not require format specifiers like %d, %f, etc.
        Also, we do not need to use & (address operator) like scanf().

        Example:
            cin >> a >> b;
    */

    // cin >> a >> b;
    // cout << a << " " << b << endl;

    // int a;
    // char c;

    // cin >> a >> c;
    // cout << a << " " << c << endl;

    char c;

    cin >> c;

    // One way to get the ASCII value of a character.
    // A character can be converted into an integer because every character
    // has a corresponding ASCII value.

    // int ascii = c;

    // Another way to perform type conversion.
    // Here char is converted into int temporarily.

    // cout << int(c) << endl;

    /*
        Type Conversion:

        Type conversion means changing one data type into another data type.

        Examples:

        1. long long int  -----> int

        2. int -----> long long int

           Converting int into long long usually gives no special benefit
           because long long can already store larger values.

        3. char -----> int

           Example:
           Character 'A' becomes its ASCII value 65.

        4. float/double -----> int

           Decimal values will lose the fractional part.

           Example:

           double x = 5.75;
           int y = x;

           Result:
           y = 5

           The .75 part is lost.

           Changing the data type does not bring back lost information.
           If the value was already stored in a smaller type, the lost data
           cannot be recovered.
    */

    int a = 10;

    /*
        Here we are converting int into long long int.

        Wrong way:

            long long int(a);

        This will not work because "long long int" contains multiple words,
        and the compiler cannot understand it as a simple type conversion.

        For multi-word data types, we need to use parentheses:

            (long long int)(a)

        Single-word types work directly:

            int(c)

        because "int" is a single-word data type.
    */

    long long int b = (long long int)(a);

    cout << b << endl;

    return 0;
}