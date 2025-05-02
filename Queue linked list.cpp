#include<iostream>
using namespace std;
struct queue{
	struct Node{
		int data;
		Node *next;
	};
	Node *first = NULL;
	Node *last = NULL;
	int counter = 0;
	
	bool isEnpty(){
		return counter == 0;
	}
	
	void push(int item){
		
		Node *newNode = new Node;
		newNode->data = item;
		newNode->next = NULL;
		cout<<"add item "<<item<<endl;
		if(first == NULL){
			first = last = newNode;
        }else{
        	last->next =newNode;
	  		last = newNode;
		}
		counter++;
		
	}
	
	
	void pop(){
		if(isEnpty()){
			cout<<"the queue is empty "<<endl;
		}else{
			Node *current = first;
			first = first->next;
			cout<<"pop item "<< current->data<<endl;
			delete current;
			counter--;
		}
		
		         
		
	}
	
	void print(){
		int current = 0 ;
		Node *c = first;
		while (current <counter ){
			cout<< c->data<<"  ";
			c =  c->next;
			current++;
		}
		
		cout<<endl;
	}

	
	
};

main(){
	queue q;
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	q.push(50);
	q.push(60);
	
	cout<<".............................................."<<endl;
	
	q.pop();
	q.pop();
	q.pop();
	q.pop();
	q.pop();
	q.pop();
	q.pop();	
	q.pop();
	q.pop();
	cout<<".............................................."<<endl;
	
		q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	q.push(50);
	q.push(60);
		q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	q.push(50);
	q.push(60);
	
	q.print();
	
	
}
