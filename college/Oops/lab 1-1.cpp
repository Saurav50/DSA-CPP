#include <bits/stdc++.h>
#include<iostream>
using namespace std;
class person{
    public:
    char name[50];
    char address[100];
    int age;
    float salary;
    inline void displayData(){
        cout<<"Name: "<<name<<endl;
        cout<<"Address: "<<address<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};
int main(){
    person p;
    cout<<"Enter your name :";
    cin.getline(p.name,50,'\n');
    cout<<"Enter your aaddress :";
    cin.getline(p.address,100,'\n');
    cout<<"Enter your age :";
    cin>>p.age;
    cout<<"Enter your salary :";
    cin>>p.salary;
    p.displayData();   
}
