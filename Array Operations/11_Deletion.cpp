#include <iostream>

using namespace std;
void display(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

void Delation(int arr[], int size, int capacity, int index)
{
    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
}

int main()
{

    int arr[100] = {7, 15, 18, 30, 36};
    int size = 5, capacity = 100, index = 2;
    Delation(arr, size, capacity, index);
    size -= 1;
    display(arr, size);

    return 0;
}