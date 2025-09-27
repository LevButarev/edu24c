#include <iostream>
#include <string>
using namespace std;

int main()
{
    char a[20] = "hello"; char b[] = "world";
    
    for (int i = 0; i < 20; i++)
    {
        a[i] = b[i-5];
    }
    
    cout << a << endl;

    return 0;
}