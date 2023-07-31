    #include <iostream>
    using namespace std;
    class Node {
    	public :
    	int data;
    	Node *next;

    	Node(int data) {
        	this->data = data;
        	next = NULL;
    	}
	};




class StackUsingLL {
    Node *head;
    int size;
	// Define the data members
   public:
    StackUsingLL() {
        // Implement the Constructor
        head=NULL;
        size=0;
    }

	/*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        // Implement the getSize() function
        return size;
    }

    bool isEmpty() {
        // Implement the isEmpty() function
        // if (head==NULL) return true;
        // else return false;
        return size==0;
    }

    void push(int element) {
        // Implement the push() function
        Node *newNode = new Node(element);
        if(head==NULL){
            head=newNode;
    
        }else{
            newNode->next=head;
            head=newNode;
        }
        size++;
    }

    int pop() {
        // Implement the pop() function
        if(this->isEmpty()){
            cout<<"Stack underflow"<<endl;
            return 0 ;
        }
        // if(head->next=NULL) { 
        //  }

        Node *temp=head;
        head=head->next;
        int popped=temp->data;
        delete temp;
        size--;
        return popped;
        
    }

    int top() {
        // Implement the top() function
        if(this->isEmpty()){
            cout<<"Stack underflow"<<endl;
            return 0 ;
        }
        return head->data;
    }
};


int main(){
    StackUsingLL s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
            cout<<s.getSize()<<endl;
    cout<<s.pop()<<endl; 
    // \<<   s.pop();    
    cout<<s.pop()<<endl;
     cout<<s.pop()<<endl;
      cout<<s.pop()<<endl;
       cout<<s.pop()<<endl;
        cout<<s.pop()<<endl;
        cout<<s.getSize()<<endl;

        cout<<s.isEmpty()<<endl;
         cout<<s.pop();
}