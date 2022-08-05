#include <iostream>

using namespace std;

int linearsearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 3, 5, 56, 4, 3, 23, 54, 76, 88};
    int size = sizeof(arr) / sizeof(int); // sizeof(arr) pura array ka size deta hai intiger ke sath
    int element = 54;
    int searchindex = linearsearch(arr, size, element);
    cout << " The element " << element << " is on " << searchindex << " index " << endl;

    return 0;
}

// Linear Search- one by one karke sare element ko traverse karte jye or jaise hi element mile to uske index ko return kar do agar nhi mile to  -1 return kar do: