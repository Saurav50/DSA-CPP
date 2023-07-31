#include<iostream>
#include <math.h>
using namespace std;
int reverse_num(int x){
    int sum=0,rem,c=0;
    while(x>0){
        rem=x%10;
        // sum+=rem*pow(10,c++);
        sum=sum*10+rem;
        x/=10;
    }
    return sum;
}
int main(){
    int x=5441;
    int num=reverse_num(x);
    if(num==x)
        cout<<"yes";
    else{
        cout<<"no";
        cout<<num;
    }
}