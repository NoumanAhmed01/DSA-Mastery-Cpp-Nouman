// Question 5 : Check if the number is prime or not.

// #include <iostream>
// using namespace std;

// int main()
// {
//     bool isPrime = true;
//     int n;
//     cout << "Enter number to check:" << endl;
//     cin >> n;
//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             isPrime = false;
//         }
//     }
//     if (isPrime)
//     {
//         cout << "Number is Prime";
//     }
//     else
//     {
//         cout << "Not Prime";
//     }

//     return 0;
// }
// Optimize Version
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    bool isPrime = true;
    int n;
    cout << "Enter number to check:" << endl;
    cin >> n;
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
        }
    }
    if (isPrime)
    {
        cout << "Number is Prime";
    }
    else
    {
        cout << "Not Prime";
    }

    return 0;
}