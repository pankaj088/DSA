#include <iostream>

using namespace std;

void func1(int array[], int length)
{
    int sum = 0;
    int product = 1;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    for (int i = 0; i < length; i++)
    {
        product *= array[i];
    }
}

int main()
{

    int array[] = {3, 5, 66};
    func1(array, 3);

    return 0;
}
// eska time complexity = Bigi(O): O(length) hoga: