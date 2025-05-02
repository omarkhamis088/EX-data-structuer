#include<iostream>
using namespace std;
struct stack{
	struct Node {
		int data;
		Node *next;
	};
	Node *top = NULL;
	
	bool isEmpty(){
		return top == NULL;
	}
	
	void pop(int item){
		Node *newNode = new Node ;
		newNode->data =  item;
		newNode->next = top;
		top = newNode;
		
		cout<<"add itme " <<  item << endl;
		
	}
	
	void push(){
		if(isEmpty()){
			cout<< "the stack is empty "<<endl;
		}else{
			Node *current = top;
			top = top->next;
			cout<<"delete item  "<<current->data<<endl;
			
		}
		
	}
	
	void print(){
		if(!isEmpty()){
		
			Node *current = top;
			while(current != NULL){
				cout<< current->data<<endl;
				current =  current->next;
			}	
			cout<<endl;
			
		}
		
		
	}
	
	
	
};


main(){
	stack s;
	s.pop(10);
	s.pop(20);
	s.pop(30);
	s.pop(40);
	
	s.print();
	
	s.push();
	s.push();
	s.push();
	
	s.print();
}
