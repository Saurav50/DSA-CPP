#include<iostream>
using namespace std;
 
class a;
 
class b
{
    int number;
    public:
    b(int x)
    {
        number=x;
    }
    void friend greatest(a a1,b b1);
};
 
class a
{
    int number;
    public:
    a(int x)
    {
        number=x;
    }
    void friend greatest(a a1,b b1);
};
 
void greatest(a a1,b b1)
{
    if(a1.number>b1.number)
    {
        cout<<"Number in class 1 is greatest: "<<a1.number;
    }
    else if(a1.number<b1.number)
    {
        cout<<"Number in class 2 is greatest: "<<b1.number;
    }
    else
    {
        cout<<"Number in both classes are equal";
    }
}
 
int main() {
    int num;
 
    cout<<"number for class 1 - ";
    cin>>num;
    a a1(num);
 
    cout<<"number for class 2 - ";
    cin>>num;
    b b1(num);
 
    greatest(a1,b1);
    cout<<"\n";
 
    return 0;
}
