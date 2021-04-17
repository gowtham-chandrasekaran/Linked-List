//Inserting an element in the first position of the list everytime.
#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* link;
};
Node* head;
Node* temp;
void insert(int x){

	
	//scenario for empty list
	// if(head==NULL){
	// 	cout<<"\nAdding to empty list!";
	// 	//Node* temp;
	// 	temp->data=x;
	// 	head=temp;
	// 	temp->link=NULL;
	// }
	// else{
	// 	//Node* travel;
	// 	temp=head;
	// 	cout<<"\n Existing elements: ";
	// 	while(temp->link!=NULL){
	// 		cout<<" "<<temp->data;
	// 		temp=temp->link;
	// 	}
	// 	temp->data=x;
	// }

	Node* temp = new Node();
	temp->data = x;
	temp->link = NULL;
	if(head!=NULL){
		temp->link=head;
	}
	head = temp;
	
}
void print(){
	Node* temp;
	temp = head;
	cout<<"\nElements in list: ";
	while(temp!=NULL){
		cout<<" "<<temp->data;
		temp=temp->link;
	}
}
int main(){
	head = NULL;
	int n;
	int x;
	cout<<"\nEnter No of elements you will insert: ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"\nEnter element: ";
		cin>>x;
		insert(x);
		print();
	}
	cout<<"\n";
}