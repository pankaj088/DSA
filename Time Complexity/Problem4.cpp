#include <iostream>

using namespace std;

int isprime(int n)
{
    if (n == 1)
    {
        return 0;
    }
    for (int i = 2; i * i < 1000; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
    isprime(15);
}

int main()
{

    return 0;
}
// Time complexity= O(1) hoga: