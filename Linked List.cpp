#include <iostream>
using namespace std;
struct LinkedList {
	struct Node {
		int data;
		Node *next;
	};
	int counter = 0;
	Node *first = NULL;
	Node *last = NULL;

	bool isEmpty() {
		return first == NULL;
	}

	///////////////////////////////////////////////
	///////////////// Add ////////////////////////
	void Add_first(int item) {
		Node *newNode = new Node;
		newNode->data = item;
		newNode->next = NULL;
		cout<< "add form first "<< item << endl;

		if(first ==  NULL) {
			first = last = newNode;
		} else {
			newNode->next = first;
			first =  newNode;
		}
		counter++;
	}
	void Add_last(int item) {

		Node *newNode = new Node;
		newNode->data = item;
		newNode->next = NULL;
		cout<<"add form last "<< item << endl;

		if(first == NULL) {
			first = last = newNode;
		} else {
			last->next = newNode;
			last = newNode;
		}
		counter++;
	}
	void Add_position(int item, int position) {
		if(position == 0) {
			Add_first(item);
		} else if(position == counter) {
			Add_last(item);
		} else {
			Node *newNode = new Node;
			newNode->data = item;

			Node *current =  first;
			for(int i = 0 ; i<position-1 ;  i++) {
				current = current->next;
			}

			Node *exactly = current->next;

			current->next =  newNode;
			newNode->next =  exactly;
			cout<<"add form positon "<<position << " item " << item<<endl;
		}
		counter++;

	}

	//////////////////////////////////////////////////////////
	///////////////////////// Delete ////////////////////////

	void delete_first() {
		if(isEmpty()) {

			cout<<"the linked list is empty "<<endl;

		} else {
			Node *current = first;
			first = first->next;
			cout<<"delete form first "<< current->data<<endl;

			delete current;
			counter--;
		}

	}


	void delete_last() {
		Node *currnet =  first;
		if(currnet == last ) {
			delete_first();
		}

		while(currnet->next != last ) {
			currnet =  currnet->next;
		}
		last = currnet;
		currnet = currnet->next;
		last->next = NULL;
		cout<<"delete form last "<< currnet->data<<endl;
		

		delete currnet;
		
		counter--;

	}
	
	void delete_position(int position){
		if(position > counter || position<0){
			cout<<"Out of rang "<<endl;
			return;
		}
		if(position == 0) {
			
			delete_first();
			
		} else if(position == counter) {
			
			delete_last();
			
		} else {
			
			Node *current =  first;
			for(int i = 0 ; i<position-1 ;  i++) {
				current = current->next;
			}
			Node *exactly = current->next;
			
			//cout<<" current  " <<current->next << "  exactly  "<< exactly->next << endl;
			
			current->next = exactly->next;
			cout<<"delete from position "<<exactly->data<<endl;
			delete exactly;
			
			counter--;
			//cout<<" current  " <<current->next  << "  exactly  "<< exactly->next << endl;
		}
	
	}




	////////////////////////////////////////////////////////
	///////////////////// print ///////////////////////////

	void print() {
		Node *current = first;
		while(current != NULL) {
			cout<<current->data << "  ";
			current = current->next;
		}
		cout<<endl;
	}
	
	void get(){
		
		cout<<"the first Node is "<<first->data << endl;
		cout<<"the last Node is  "<<last->data << endl;
		
	}

};

main() {

	LinkedList ls;

	//ls.Add_last(50);
//	ls.Add_last(51);
//	ls.Add_last(52);


	ls.Add_first(12);
	ls.Add_first(11);
	ls.Add_first(10);



	ls.print();

	ls.Add_last(13);
	ls.Add_last(14);
	ls.Add_last(15);

	ls.print();

	cout<<".........................................................." <<endl;

	ls.Add_position(100,3);
//	ls.Add_position(43,3);
//	ls.Add_position(42,3);

	ls.print() ;



	cout<<endl<<".......................... Delete part ....................."<<endl;

//	ls.delete_first();
//	ls.delete_first();
//	ls.delete_first();

	ls.print();
	
//	ls.delete_last();
//	ls.delete_last();
//	ls.delete_last();
	
//	ls.print() ;
	cout<<endl;
	ls.get();

	cout<<endl<<"..........................  ....................."<<endl;
	
	ls.delete_position(3);
	ls.print();


}
