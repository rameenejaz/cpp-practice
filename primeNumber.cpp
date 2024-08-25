#include <iostream>
using namespace std;

int main()
{
    int number;
    bool isPrime = true;
    int i;
    cout << "enter a number n:" << '\n';
    cin >> number;

    for (i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime == true)
    {
        cout << "Prime" << '\n';
    }
    else
    {
        cout << "Not Prime" << '\n';
    }

    return 0;
}
