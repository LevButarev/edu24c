#include <iostream>
#include <string>
using namespace std;

int main()
{
   
    char a[] = "hello world";  
    for(int i = 0; a[i] != '\0'; i++) 
    {  
        if(a[i] == 'w') 
        {  
            cout << i << endl;  
              
        }  
    }  
       
    string b = "hello world";  
    size_t pos = b.find('w');  
    if(pos != string::npos) 
    {  
        cout << find << endl;  
    }  
      
   

    return 0;
}