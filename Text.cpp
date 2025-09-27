// "text" 'a'

#include <iostream>
#include <string>
using namespace std;

int main()
{
    char a = 'a';
    char b[] = "text"; // c style
    char c[] = {'t','e','x','t','\0'};

    string d = "text"; // c++ style

    return 0;
}