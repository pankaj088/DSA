#include <iostream>

using namespace std;

void PrintArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << " " << endl;
}

void BubbleSort(int A[], int n)
{
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n - 1; i++) // For Number of PASS
    {
        cout << " Checking For " << i + 1 << " Pass" << endl;

        for (int j = 0; j < n - 1 - i; j++) // For comprassion in each Pass
        {
            if (A[j] > A[j + 1]) // For Swap
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

void BubbleSortAdaptive(int A[], int n)
{
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n - 1; i++) // For Number of PASS
    {
        cout << " Checking For " << i + 1 << " Pass" << endl;
        isSorted = 1;
        for (int j = 0; j < n - 1 + i; i++) // For comprassion in each Pass
        {
            if (A[j] > A[j + 1]) // For Swap
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                isSorted = 0;
            }
        }
        if (isSorted)
        {
            return;
        }
    }
}

int main()
{
    int A[] = {1, 5, 22, 8, 65, 85, 75, 95};
    int n = 8;

    PrintArray(A, n);
    BubbleSort(A, n);
    // BubbleSortAdaptive(A, n);
    PrintArray(A, n);
    return 0;
}