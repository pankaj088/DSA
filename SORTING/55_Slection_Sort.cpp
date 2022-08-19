#include <iostream>

using namespace std;

void printArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << " " << endl;
}

void Slection_Sort(int A[], int n)
{
    int indexofMinum, temp;
    cout << " Running Slection Sort" << endl;
    for (int i = 0; i < n - 1; i++)
    {
        indexofMinum = i;
        for (int j = i + 1; j < n; j++) // j= i+1(0+1, 1+1, 2+1, ...) yese
        {
            if (A[j] < A[indexofMinum])
            {
                indexofMinum = j;
            }
        }
        // Swap A[i] and A[indexofMinum]
        temp = A[i];
        A[i] = A[indexofMinum];
        A[indexofMinum] = temp;
    }
}

int main()
{

    // Input Array (There will be total n-1 passes. 5-1 = 4 in this case!)

    //  00  01  02  03  04  - yai index hai
    // |03, 05, 02, 13, 12  - or ye element hai(jo element minium hoga oo pahle ayiga) yaha 2 minium hai islye 3 bale index pe 2 aa jyiga or                                    2 balae index pe 3 chala jyiga : dono elements interchange kariga

    // After first pass
    //  00  01  02  03  04
    //  02,|05, 03, 13, 12

    // After second pass
    // 00  01  02  03  04
    // 02, 03,|05, 13, 12

    // After third pass
    // 00  01  02  03  04
    // 02, 03, 05,|13, 12

    // After fourth pass
    // 00  01  02  03  04
    // 02, 03, 05, 12,|13

    int A[] = {3, 5, 2, 13, 12, 1};
    int n = 6;
    printArray(A, n);
    Slection_Sort(A, n);
    printArray(A, n);

    return 0;
}