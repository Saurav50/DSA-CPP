
#include<iostream>
using namespace std;
#include<climits>
template  <typename T>
class StackUsingTemplate{
    T *data; // array pointer
    int nextIndex; // index at which insertion can be done
    int capacity; // total size of the stack
    public:
    StackUsingTemplate(){
        data=new T[4];
        nextIndex=0;
        capacity=4;
    }
    int size(){//no. of elements in the stack currently
        return nextIndex;
    }
    bool isEmpty(){
        return nextIndex==0;
    }
    void push(T item){
        if(nextIndex==capacity){
            T *newData=new T[2*capacity];
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
    T pop(){
        if(isEmpty()){
            cout<<"Stack underflow"<<endl;
            return 0;
        }
        nextIndex--;
        return data[nextIndex];
    }
    T top(){
        if(isEmpty()){
            cout<<"Stack underflow"<<endl;
            return 0;
        }
        return data[nextIndex-1];
    }
};

int main(){
    StackUsingTemplate<char> s;
    s.push(101);
    s.push(102);
    s.push(103);
    s.push(104);
    s.push(105);
    s.push(106);
    cout<<s.top();
}