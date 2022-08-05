#include <iostream>

using namespace std;

void display(int arr[], int n)
{
    // Code for  Traversal
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

void insertion(int arr[], int size, int element, int capacity, int index)
{
    // Code for Insertion
    if (size >= capacity)
    {
        cout << "its size is grater than its capacity" << endl;
    }
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
}

int main()
{
    // int arr[100] = {1, 2,5,25};
    // display(arr, 4);

    int arr[100] = {5, 8, 12, 25, 85};
    int size = 5, element = 45, index = 3;
    display(arr, size);
    insertion(arr, size, element, 100, index);
    size += 1;
    display(arr, size);

    return 0;
}