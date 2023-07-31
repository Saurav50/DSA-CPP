#include<iostream>
using namespace std;
template <typename T>
class Node {
    	public :
    	T data;
    	Node<T> *next;

    	Node( T data) {
        	this->data = data;
        	next = NULL;
    	}
	};

template <typename T>

class Queue {
	// Define the data members
    Node<T> *head;
    Node<T> *tail;
    int size;
   public:
    Queue() {
		// Implement the Constructor
        head = NULL;
        tail = NULL;
        size=0;
	}
	
	int getSize() {
		return size;
	}

    bool isEmpty() {
        return size==0;
	}

    void enqueue(int data) {
		Node<T> *newNode=new Node<T>(data);
        if(head==NULL){
            head=newNode;
            tail=newNode;
            size++;
            return;
        }
        tail->next=newNode;
        tail=newNode;
        size++;
	}

    T dequeue() {
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return 0;
        }
        T data=head->data;
        Node<T> *temp=head;
        head=head->next;
        delete temp;
        size--;
        return data;
    }

    T front() {
         if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return 0;
        }
        return head->data;
    }
};
int main(){
    Queue<int> q;
    q.enqueue(10);
        q.enqueue(20);

    q.enqueue(30);

    q.enqueue(40);

    q.enqueue(50);
    cout<<q.front()<<endl;
        cout<<q.dequeue()<<endl;
            // cout<<q.front()<<endl;


        cout<<q.dequeue()<<endl;

        cout<<q.dequeue()<<endl;

        cout<<q.dequeue()<<endl;

        cout<<q.dequeue()<<endl;
                cout<<q.dequeue()<<endl;
                 cout<<q.dequeue()<<endl;
                  cout<<q.isEmpty()<<endl;



}