#include<iostream>
using namespace std;
struct stack{
	struct node{
		string data;
		node *next;
		 
	};
	node *top = NULL;
	bool empty(){
		return top == NULL;
	}
	void stack_push(string item){
		node *s = new node;
		s -> data = item;
		if (empty()){
			s -> next = NULL;
			
		}else{
			s -> next = top;
		}
		top = s;
		cout<<"that's item "<<s->data<<endl; 
	}
	void stack_pop(){
		node *curent = top;
		top = top -> next;
		cout<<"deleted item "<<curent -> data <<endl;
		delete curent;
	}
	void stack_print(){
		node *current = top;
		while(current != NULL){
			cout<<current -> data<<endl;
			current = current -> next;
		}
	}
	void stack_first(){
		node *current = top;
		while(current != NULL){
			if(current -> next == NULL){
			cout<<current -> data<<endl;

				
			}
			
			current = current -> next;

		}		
	}
	

};
int main(){
	stack s;f
	s.stack_push("omar");
	s.stack_push("ali");
	s.stack_push("osama");
	s.stack_push("said");
	s.stack_print();
	s.stack_pop();
	s.stack_first();
	s.stack_print();
}
