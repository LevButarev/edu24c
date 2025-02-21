#include <iostream>
using namespace std;

int main()
{
     setlocale(LC_ALL, "Russian");

   int n = 0, i = 0;

   cout << "Введите числа (нуль, чтобы окончить ввод): ";

   do{

       cin >> n;

       if(n > 30000){

           break;

       }

       else{

           if((n % 4 == 0) && (n % 7 != 0))

       i = i + 1;

       }

   }

   while(n != 0);

   cout << endl << "Ответ: " <<  i;
    return 0;
}