#include <iostream>

using namespace std;

int main()
{
    /*
        Loops and array operations are almost the same in C++ as in C.

        The main difference is the input and output method.

        C uses:
            scanf() for input
            printf() for output

        C++ uses:
            cin for input
            cout for output
    */

    int n;

    // C language input:
    // scanf("%d", &n);

    // C++ input:
    cin >> n;

    int ar[n];

    for (int i = 0; i < n; i++)
    {
        // C language array input:
        // scanf("%d", &ar[i]);

        // C++ array input:
        cin >> ar[i];
    }

    for (int i = 0; i < n; i++)
    {
        // C language output:
        // printf("%d ", ar[i]);

        // C++ output:
        cout << " " << ar[i];
    }

    return 0;
}