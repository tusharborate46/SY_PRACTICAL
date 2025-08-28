#include <iostream>
using namespace std;

class node{
	public:
	int priority;
	int est_time;
	node*next;
};
void newnode(node* &head,int priority,int est_time){
	node* newnode=new node;
	{
	newnode->priority=priority;
	newnode->est_time=est_time;
	newnode->next=NULL;
}
if(!head || head->priority<priority){
	newnode->next=head;
	head=newnode;
	return;
}
node* temp=head;

while(temp->next&&temp->next->priority>=priority){
	temp=temp->next;
}
newnode->next=temp->next;
temp->next=newnode;
}
void ext_node(node* &head){
	while(head){
		cout<<"Tasks with priority "<<head->priority<<" in time "<<head->est_time<<endl;
		node* temp1=head;
		head=head->next;
		delete temp1;
	}
}

int main(){
	node* task_scheduler=NULL;
	newnode(task_scheduler,4,200);
	newnode(task_scheduler,1,150);
	newnode(task_scheduler,5,180);	
	newnode(task_scheduler,1,250);
	newnode(task_scheduler,2,120);
	newnode(task_scheduler,6,350);
	newnode(task_scheduler,3,100);
	
	ext_node(task_scheduler);

	
	
	return 0;
	

}
	
	
	
