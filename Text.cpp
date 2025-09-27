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
    string f("text");

    int sizeb0 = sizeof(b[0]);
    int sizeb = sizeof(b);
    int count = (sizeb / sizeb0) - 1;
    cout << count << endl;  // c style

    
    int lengthb = d.length();
    cout << lengthb << endl; // c++ style
    return 0;
}