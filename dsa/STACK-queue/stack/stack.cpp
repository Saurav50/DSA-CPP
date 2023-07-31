#include<iostream>
using namespace std;
#include<climits>
class stackData
{
    int *data;
    int nextIndex;
    int capacity;

public:
    stackData(int size){
        data=new int[size];
        nextIndex=0;
        capacity=size;
    }
    int size(){
        return nextIndex;
    }
    bool isEmpty(){
        return nextIndex==0;
    }
    void push(int elem){
        if(nextIndex==capacity){
            cout<<"Stack overflow" <<endl;
        }
        else{
        data[nextIndex]=elem;
        nextIndex++;}
    }
    int pop(){
        if(isEmpty()){
            cout<<"stack underflow"<<endl;
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
    }
    int top(){
        if(isEmpty()){
            cout<<"stack underflow"<<endl;
            return INT_MIN;
        }
        return data[nextIndex-1];
    }
};

int main(){
    stackData s(4);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.top()<<endl;
cout<<s.pop()<<endl;


}