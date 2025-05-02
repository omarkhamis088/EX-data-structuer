# include<iostream>
using namespace std;
struct queue{
	struct node{
		int item;
		node *next;
	};
	   node *first=NULL;
	   node *last=NULL;
	   int counter=0;
	   
	   bool isempty(){
	   	return first==NULL;
	   }

	   void push(int value){
	   	node *newnode= new node;
	   	newnode->item=value;
	   	newnode->next=NULL;
	   	if(first==NULL)
	   	last=first=newnode;
	   	else{
	   		last->next=newnode;
	   		last=newnode;
		   }
		   cout<<"Push Item : "<<value<<endl;
		   counter++;
	   }
	   
	   void pop(){
	   	if(isempty())
	   	cout<<"Queue Is Empty "<<endl;
	   	else{
	   		node *curr=first;
	   		first=first->next;
	   		cout<<"Pop Item : "<<curr->item<<endl;
	   		delete curr;
		   }
	   	counter--;
	   	
	   }
	   
	   void print(){
	   	 	if(isempty())
	   	cout<<"Queue Is Empty "<<endl;
	   	else{
		   	node *curr=first;
		   	while(curr != NULL){
		   		cout<<curr->item<<"\t";
		   		curr=curr->next;
			   }
			   cout<<endl;
		   
		   }
	   }
	   
};
main(){
	queue q;
	q.push(10);
	q.push(20);
	q.push(30);
	q.print();
	q.pop();
    q.pop();
	q.print();
	q.push(40);
	q.push(50);
	q.push(60);
	q.pop();
    q.pop();
	q.print();
	q.pop();
    q.pop();
	q.print();
}
