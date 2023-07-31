#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
        Node(int data){
            this->data=data;
            this->next=NULL;
        }
};
/*
Node* take_input(){ //time complexity O(n^2)
    int data;
    cin>>data;
    Node *head=NULL;
    while(data!=-1){
        Node *newnode=new Node(data);
        if(head==NULL){
            head=newnode;
        }
        else{
            Node *temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=newnode;
        }
        cin>>data;
    }
    return head;
}
*/

//taking input
Node* take_input_better(){// time complexity O(n)
    int data;
    cin>>data;
    Node *head=NULL;
    Node *tail=NULL;
    while(data!=-1){
        Node *newnode=new Node(data);
        if(head==NULL){
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=tail->next;
        }
        cin>>data;
    }
    return head;
}

//insert the node
Node* Insert(Node* head,int i,int data){//inserting an node in linked list
    int count=0;
    Node* temp=head;
    Node *newnode=new Node(data);
    if(i==0){
        newnode->next=head;
        head=newnode;
        return head;

    }
    while(temp!=NULL && count<i-1){
        temp=temp->next;
        count++;
    }
    if(temp!=NULL){
        
        newnode->next=temp->next;
        temp->next=newnode;
    }
    return head;
}

//delete the node 
Node *deleteNode(Node *&head, int pos)
{
    Node* temp=head;
	int count=0;
	if(head==NULL){
		return head;
	}
	if(pos==0){
		head=head->next;
		delete temp;
		return head;

	}
	
	while(temp->next!=NULL&&count<pos-1){
		temp=temp->next;
		count++;
	}
	if(temp->next!=NULL){
		Node* a=temp->next;
		Node* b=a->next;
		temp->next=b;
		delete a;
	}
	return head;
}

//printing the linked-list
void print(Node *head ){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}

//finding legth recursively
int length(Node *head) {
	Node* temp=head;
    if(temp==NULL){
		return 0;
	}
	int small_size=length(temp->next);
	return small_size+1;
}

int main(){
    /*
    Node *n1=new Node(10);
    Node *n2=new Node(20);
    Node *n3=new Node(30);
    Node *n4=new Node(40);
    Node *n5=new Node(50);
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    */
    Node *head=take_input_better();
    print(head);
    cout<<endl;
    cout<<"Enter index and data:";
    int i,data;
    cin>>i>>data;
    Node* temp=Insert(head,i,data);
    print(temp);
    Node*  newHead=deleteNode(temp,2);
    print(newHead);
}