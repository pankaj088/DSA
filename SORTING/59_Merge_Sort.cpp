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

void Merge(int A[], int Mid, int Low, int High)
{
    int i, j, k, B[High + 1];
    i = Low;
    j = Mid + 1;
    k = Low;

    while (i <= Mid && j <= High)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }
    while (i <= Mid)
    {
        B[k] = A[i];
        k++;
        i++;
    }
    while (j <= High)
    {
        B[k] = A[j];
        k++;
        j++;
    }
    for (int i = Low; i <= High; i++)
    {
        A[i] = B[i];
    }
}

void MergeSort(int A[], int Low, int High)
{
    int mid;
    if (Low < High)
    {
        mid = (Low + High) / 2;
        MergeSort(A, Low, mid);
        MergeSort(A, mid + 1, High);
        Merge(A, mid, Low, High);
    }
}

int main()
{
    // int A[] = {9, 14, 4, 8, 7, 5, 6};
    int A[] = {9, 1, 4, 14, 4, 15, 6};
    int n = 7;
    PrintArray(A, n);
    MergeSort(A, 0, 6);
    PrintArray(A, n);

    return 0;
}