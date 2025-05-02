#include<iostream>
using namespace std;
struct queue{
	struct node{
		int data;
		node *next;
	};
	node *first =NULL;
	node *last =NULL;
	int counter = 0;
	
	
		void add(int item){
			node *q = new node;
			q -> data = item;
			q -> next = NULL;
			cout<<"add item "<<item<<endl;
			if (first == NULL){ 
				first = last = q;
				
			}else{
				q -> next = last;
				last = q;
			}
			counter++;
		}
		void print(){
						cout<<endl<<"the couner" << counter<<endl;

			node *curent = last;
			while (curent != NULL){
				cout<<curent -> data<<endl;
				curent = curent -> next;
			}
		}
		bool empty(){
			
			return counter == 0;
		}
		void deleted(){
			if (empty()){
				cout<<"it's null"<<endl;
			}else{
			
			node *current = last;
			while(current -> next != first){
				current = current -> next;
				
			}
			first = current;
			current = current -> next;
			cout<< "delete item "<<current -> data<< endl;
			delete current;
			
			counter--;
			//first -> next = NULL;
		}
		}
		
};
	main(){
		queue q;
		q.add(100);
		q.add(101);
		q.add(102);
		q.print();
		q.deleted();
		q.deleted();
	q.deleted();
		
		q.print();
		}
