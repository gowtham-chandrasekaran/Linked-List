#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* head;
void insert(int data, int n){
    Node* temp1 = new Node();
    temp1->data = data; //Initially store the data here and next to NULL
    temp1->next = NULL;
    if(n==1) //To insert in first position
    {
        temp1->next = head;
        head = temp1;
        return;
    }
    else //To insert in any other position
    {
        Node* temp2 = head;
        for(int i=0;i<n-2;i++)//To travel to one before node where you want to insert
        {
            temp2 = temp2->next;
        }
        temp1->next = temp2->next;
        temp2->next = temp1;
    }

}
void print(){
    Node *temp = head;
    cout<<"Elements in thie list are: ";
    while(temp!=NULL){
        cout<<" "<<temp->data;
        temp=temp->next;
    }
}
int main(){
     head = NULL;
     int flag=0,n,data,ans;
     while(flag==0){
         cout<<"\n Enter element to be inserted: ";
         cin>>data;
         cout<<"\n Enter position to be inserted: ";
         cin>>n;
         insert(data,n);
         print();
         cout<<"\n Press 1 to stop or any other number to continue ";
         cin>>ans;
         if(ans==1) flag=1;
     }
}