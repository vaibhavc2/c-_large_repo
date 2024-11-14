#include <iostream>
using namespace std;

class numberMethods
{
public:
    static int greatest(int *x, int *y, int *z)
    {
        if (*x > *y)
        {
            if (*x > *z)
            {
                return *x;
            }
            else
            {
                return *z;
            }
        }
        if (*x < *y)
        {
            if (*y > *z)
            {
                return *y;
            }
            else
            {
                return *z;
            }
        }
        return 0;
    }

    static int sumTill_n(int *n)
    {
        return (*n * ((*n + 1) / 2));
    }

    static bool isPrime(int *num)
    {
        if (*num == 0 || *num == 1)
        {
            return false;
        }
        for (int i = 2; i <= *num / 2; i++)
        {
            if (*num % i != 0)
            {
                if (i == *num / 2)
                {
                    return true;
                }
                continue;
            }
            else
            {
                return false;
            }
        }
        return true;
    }

    static int fibonacciTerm(int n)
    {
        if (n == 1)
        {
            return 0;
        }
        else if (n == 2)
        {
            return 1;
        }
        else
        {
            return (fibonacciTerm(n - 1) + fibonacciTerm(n - 2));
        }
    }
};

int main()
{
    // int a, b, c;
    // cin >> a >> b >> c;
    // cout << numberMethods::greatest(&a, &b, &c) << endl;

    // int n;
    // cin >> n;
    // cout << "\n"
    //      << numberMethods::sumTill_n(&n);

    // int n;
    // cin >> n;
    // if (numberMethods::isPrime(&n))
    // {
    //     cout << "Prime Number" << endl;
    // }

    int numberOfTerms;
    cin >> numberOfTerms;
    for (int i = 1; i <= numberOfTerms; i++)
    {
        cout << numberMethods::fibonacciTerm(i) << endl;
    }    

    return 0;
}