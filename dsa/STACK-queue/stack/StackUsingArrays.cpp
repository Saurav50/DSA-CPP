#include<iostream>
using namespace std;
#include<climits>
class StackUsingArrays{
    int *data; // array pointer
    int nextIndex; // index at which insertion can be done
    int capacity; // total size of the stack
    public:
    StackUsingArrays(int totalSize){
        data=new int[totalSize];
        nextIndex=0;
        capacity=totalSize;
    }
    int size(){//no. of elements in the stack currently
        return nextIndex;
    }
    bool isEmpty(){
        return nextIndex==0;
    }
    void push(int item){
        if(nextIndex==capacity){
            cout<<"Stack overflow"<<endl;
            return;
        }
        data[nextIndex]=item;
        nextIndex++;
    }
    int pop(){
        if(isEmpty()){
            cout<<"Stack underflow"<<endl;
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
    }
    int top(){
        if(isEmpty()){
            cout<<"Stack underflow"<<endl;
            return INT_MIN;
        }
        return data[nextIndex-1];
    }
};

int main(){
    StackUsingArrays s(4);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    cout<<s.top();
}