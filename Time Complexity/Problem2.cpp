#include <iostream>

using namespace std;

void func(int n)
{
    int sum = 0;
    int product = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ("%d, %d", i, j) << endl;
        }
    }
}
int main()
{
    func(4);

    return 0;
}
// eska time complexity = O(n²) hoga: