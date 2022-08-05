#include <iostream>

using namespace std;

int binarySearch(int arr[], int size, int element)
{

    int low, mid, high;
    low = 0;
    high = size - 1;
    // keep searching untill low <= high
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    // array sorted hona chye binary search ke liye
    int arr[] = {2, 4, 6, 8, 12, 14, 16, 24, 34, 44, 56, 72, 76, 88};
    int size = sizeof(arr) / sizeof(int); // sizeof(arr) pura array ka size deta hai integer ke sath
    int element = 24;
    int searchindex = binarySearch(arr, size, element);
    cout << " The element " << element << " is on " << searchindex << " index" << endl;

    return 0;
}