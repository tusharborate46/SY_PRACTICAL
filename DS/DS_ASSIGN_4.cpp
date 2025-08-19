#include <iostream>
using namespace std;

class node{
	public:
	int data;
	node*next;
};

int main(){
	//node* head=NULL;
	node* head=new node;
	head->data=0;
	node* first=new node;
	first->data=5;
	
	node* second=new node;
	second->data=10;
	
	head->next=first;
	first->next=second;
	
	second->next=NULL;
	
	cout<<head->next<<endl;
	
	cout<<first->data<<endl;
	cout<<first->next<<endl;
	
	cout<<second->data<<endl;
	cout<<second->next;
	
	
	return 0;
	

}
	
	
	
