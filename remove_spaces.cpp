#include <iostream>
#include <cstring>
using namespace std;
// function to remove spaces
string removespace(string a)
{
    string s1; // creating an new string to store
    int i = 0;
    while(a[i]!='\0')
    {
        if (a[i] == ' ')
        {
        }
        else
        {
            s1 += a[i];
        }
        i++;
    }
    return s1;
}
int main()
{
    string a;
    cout<<"Enter a string with spaces : ";
    getline(cin,a);

    cout<<"after removal of spaces: ";
    cout << removespace(a);
    return 0;
}