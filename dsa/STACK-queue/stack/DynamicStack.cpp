#include<iostream>
using namespace std;
#include<climits>
class DynamicStack{
    int *data; // array pointer
    int nextIndex; // index at which insertion can be done
    int capacity; // total size of the stack
    public:
    DynamicStack(){
        data=new int[4];
        nextIndex=0;
        capacity=4;
    }
    int size(){//no. of elements in the stack currently
        return nextIndex;
    }
    bool isEmpty(){
        return nextIndex==0;
    }
    void push(int item){
        if(nextIndex==capacity){
            int *newData=new int[2*capacity];
            for(int i=0;i<capacity;i++){
                newData[i]=data[i];
            }
            capacity*=2;
            delete[] data;
            data=newData;
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
    DynamicStack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    cout<<s.top();
}