
#include <iostream>
using namespace std;

int main()
{
    int size = 0;
    int number = 0;
    int minn = 0;
    cout << "Введите количество чисел";
    int arr[size] = {};
    int c = 0;
    for(int i = 1; i <= size; i++)
    {
        cout << "Введите " << i << " число ";
        cin >> arr[i];
    }

    for(int j = 0; j < size; j++)
    {
        if (arr[j] & 3 == 0)
        {
            if (arr[j] < minn)
            {
                minn = arr[j];
            }
        
            }
        }
        return 0;
        cout << minn << endl;
}
