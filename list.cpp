#include<iostream>
using namespace std;

struct node {
	string role;
	int prn;
	node* next;
};

class list {
public:
	node* head;
	node* ptr;
	int count =0;
// 	ptr=head;
// 	while(prt->next!=null) {
// 		ptr=ptr->next;
// 		count++;
// 	}
void addhead() {
		node* newnode=new node();
		cout<<"Enter the role of the student: ";
		cin>>newnode->role;
		cout<<"Enter the prn of the student: ";
		cin>>newnode->prn;
		newnode->next=head;
		head=newnode;
	}
void	addtail() {
		node* newnode=new node();
		cout<<"Enter the role of the student: ";
		cin>>newnode->role;
		cout<<"Enter the prn of the student: ";
		cin>>newnode->prn;
		newnode->next=NULL;
		if(head==NULL) {
			head=newnode;
			return;
		}
		ptr=head;
		while(ptr->next!=NULL) {
			ptr=ptr->next;
		}
		ptr->next=newnode;
	}
void	addinmiddle() {
		cout<<"Enter the position where you want to add the student: ";
		int pos;
		cin>>pos;
		node* newnode=new node();
		cout<<"Enter the role of the student: ";
		cin>>newnode->role;
		cout<<"Enter the prn of the student: ";
		cin>>newnode->prn;
		if(pos=1) {
			newnode->next=head;
			head=newnode;
			return;
		}
		else if(pos<=count) {
			ptr=head;
			for(int i=1; i<count; i++) {
				ptr=ptr->next;
			}
			newnode->next=ptr->next;
			ptr->next=newnode;
		}
		else {
			cout<<"ERROR"<<"Only"<<count<<" elments are present in the list"<<endl;
		}
	}
void	deletinghead() {
		ptr=head->next;
		head=nullptr;
		ptr=head;
	}
void	deletingtail() {
		node* prev;
		ptr=head;
		while(ptr->next!=NULL) {
			prev=ptr;
			ptr=ptr->next;
		}
		ptr=nullptr;
		prev->next=NULL;
	}
void	deleteinmiddle() {
		int pos;
		node* prev;
		ptr=head;
		if(pos=1) {
			ptr=head->next;
			head=nullptr;
			ptr=head;
		}
		else if(pos<count) {
			for(int i=1; i<count; i++) {
				prev=ptr;
				ptr=ptr->next;
			}
			prev->next=ptr->next;
			ptr=nullptr;

		}
		else {
			cout<<"ERROR Only"<<count<<" elements are present in the list"<<endl;
		}

	}
void	display() {
		ptr=head;
	do {
        cout<<ptr->role<<endl;
        cout<<ptr->prn<<endl;
        ptr=ptr->next;
		}while(ptr->next=NULL);
		cout<<"NULL"<<endl;
	}
};
int main(){
    list l1;
    l1.addhead();
    l1.display();
	int input=0;
	int count=1;
	do(
		cout<<"Press 1 for Displaying the list "<<endl;
		cout<<"Press 2 for Adding Head "<<endl;
		cout<<"Press 3 for Adding Tail "<<endl;
		cout<<"Press 4 for Adding in Middle "<<endl;
		cout<<"Press 5 for Deleting Head "<<endl;
		cout<<"Press 6 for Deleting Tail "<<endl;
		cout<<"Press 7 for Deleting in Middle "<<endl;
		cout<<"Press 8 for exit "<<endl;
		switch(input)(
			case 1:
				l1.display();
			break;
			case 2:
				l1.addhead();
			break;
			case 3:
				l1.addtail();
			break;
			case 4:
				l1.addinmiddle();
				
			break;
			case 5:
			l1.deletehead();
				
			break;
			case 6:
			l1.deletetail();
				
			break;
			case 7
			l1.deleteinmiddle();
			break;
			default:
				count=0;
		)

	)while(count=1);
}