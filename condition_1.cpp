#include <iostream>

using namespace std;

int main()
{
    int x = 10;

    /*
        In C++, the if-else condition works the same way as in C language.

        The logic, comparison operators, and structure are the same.
        The main difference is the way we take input and display output.

        C language uses printf() for output,
        while C++ uses cout.
    */

    if (x == 10)
    {
        // C language output:
        // printf("It's ten out of ten");

        // C++ output:
        cout << "It's ten out of ten\n";
    }
    else
    {
        // C language output:
        // printf("It's not ten");

        // C++ output:
        cout << "It's not ten\n";
    }

    return 0;
}