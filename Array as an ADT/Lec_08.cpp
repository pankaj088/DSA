#include <iostream>

using namespace std;

class MyArray
{
protected:
    int total_size;
    int used_size;
    int *arr;

public:
    MyArray(int tsize, int usize)
    {
        total_size = tsize;
        used_size = usize;

        arr = new int[total_size];

        // for (int i = 0; i < used_size; i++)
        // {
        //     cout << "enter the element" << i + 1;
        //     cin >> arr[i];
        // }
        // for (int i = 0; i < used_size; i++)
        // {
        //     cout << arr[i] << endl;
        // }
    }
    void setvalue()
    {
        for (int i = 0; i < used_size; i++)
        {
            cout << "enter the element:" << i + 1 << ":" << endl;
            cin >> arr[i];
        }
    }

    void show()
    {
        for (int i = 0; i < used_size; i++)
        {
            cout << arr[i] << endl;
        }
    }
};

int main()
{
    MyArray marks(20, 5);
    marks.setvalue();
    marks.show();

    return 0;
}
