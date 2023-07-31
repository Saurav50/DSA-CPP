#include <iostream>
using namespace std;
#include<conio.h>
class sample{
    private:
     int x;
    public:
     inline void getdata();
     friend void display(class sample);
};

inline void sample::getdata(){
    cout<<"Enter value of x :";
    cin>>x;
}
inline void display( sample obj){
    cout<<"Entered number is : "<<obj.x<<endl;
}
int main(){
    sample obj;
    obj.getdata();
    cout<<"Accessing private data by non-member function "<<endl;
    display(obj);
    return 0;

}