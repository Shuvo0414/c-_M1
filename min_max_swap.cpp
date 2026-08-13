#include <iostream>

#include <algorithm> // Provides built-in functions like min() and max()

#include <utility> // Provides built-in function swap()

using namespace std;

// Custom swap function using pointers.
/*
void My_Swap (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
*/

int main()
{

    // int a, b;
    // cin >> a >> b;
    /*
        Finding minimum and maximum value using if-else.

        But C++ provides built-in functions to make this easier.
    */
    //    if (a < b)
    //             cout << a;
    //         else
    //             cout << b;

    /*
        Using built-in min() and max() functions.

        For using these functions, we need to include the <algorithm> header file.

        Example:

            int minimum = min(a, b);
            int maximum = max(a, b);

        Input:
            20 10

        Output:
            Minimum = 10
            Maximum = 20
    */

    /*
        If we want to compare multiple values, we can use curly brackets {}.

        Example:

            int mn = min({a,b,c,d});
            int mx = max({a,b,c,d});

        Input:
            10 5 2 20

        Output:
            Minimum = 2
            Maximum = 20
    */

    // Swapping two variables.

    int a, b;
    cin >> a >> b;

    //    Normal swap method:
    // int temp = a;
    // a = b;
    // b = temp;
    /*
        Before swap:
            a = 10, b = 20

        After swap:
            a = 20, b = 10
    */

    /*
        Using our own swap function:
        We need to pass the address of variables using '&'.

        The function receives those addresses using pointers (*).

        This is called call by reference.

        If we pass values normally, the function creates new copies
        of variables, and changes inside the function will not affect
        the original variables.

        Therefore, we use pointers to modify the original variables.
    */
    //    My_Swap(&a, &b); // function call

    /*
        C++ provides a built-in swap() function.

        For using swap(), we need to include the <utility> header file.

        swap(a, b) directly exchanges the values of two variables.
    */

    swap(a, b);

    cout << a << " " << b << endl;

    return 0;
}