#include <iostream>
using namespace std;

class A;
{
public:
    int summa(int j, int i)
    {
        return j + i;
    }
   double summa(double j, double i)
   {
    return j + i;
   }
private:
};

int main()
{
    A a; cout << a.summa(12, 13) << endl;
}