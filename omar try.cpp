#include<iostream>
using namespace std;

struct stack{
	struct node{
		int data;
		node *next;
		 
	};
	node *top = NULL;
	bool empty(){
		return top == NULL;
	}
	void push(int item){
		node *n = new node;
		n -> data = item;
		if (empty()){
			n -> next = NULL;
			
		}else{
			n -> next = top;
		}
		top = n;
		cout<<"that's item "<<n->data<<endl; 
	}
	void pop(){
		node *curent = top;
		top = top -> next;
		cout<<"deleted item "<<curent -> data <<endl<<"tha last item is " <<top -> data<<endl;
		delete curent;
	}
	void print(){
		node *current = top;
		while(current != NULL){
			cout<<current -> data<<endl;
			current = current -> next;
		}
	}
	

};
int main(){
	stack o;
	o.push(10);
	o.push(11);
	o.push(12);
	o.push(13);
	o.push(14);
	o.push(15);
	o.print();
	o.pop();
	o.pop();
	o.print();
}
