Node *deleteNodeRec(Node *head, int pos) {
	//base case
	Node* temp=head;
	if(temp==NULL){
		return NULL;
	}
	if(pos==0){
		temp=temp->next;
		delete head;
		return temp;
	}
	//recursive call
	Node *x=deleteNodeRec(temp->next, pos-1);
	temp->next=x;

}