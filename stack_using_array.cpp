#include <iostream>
using namespace std;

class Stack {
	int stk[10];
	int top=-1;
public:
	void push() {
		if(top>=9) {
			cout << "Stack Overflow" << endl;
		}
		else {
			cout<<"enter the value :";
			int val;
			cin>>val;
			top=top+1;
			stk[top]=val;

		}
	}
	void pop() {
		if(top==-1) {
			cout<<"Stack underflow"<< endl;
		}
		else {

			top=top-1;
		}
	}
	void size() {
		cout<<"the size of stack is"<< top+1<<endl;
	}
	void view_top() {
		cout<<"the top element is"<< stk[top];
	}
};
int main() {
	Stack s1;
	int choice=0;
	do {
		cout<<"1 for push"<<endl;
		cout<<"2 for pop"<<endl;
		cout<<"3 for top"<<endl;
		cout<<"4 for size"<<endl;
		cout<<"5 for end"<<endl;
		cin>>choice;
		switch(choice) {
		case 1:
			s1.push();
			break;
		case 2:
			s1.pop();
			break;
		case 3:
			s1.view_top();
			break;
		case 4:
			s1.size();
			break;
		case 5:
			cout<<"ty"<< endl;
			break;
		default:
			cout<<"error";
		}
	} while(choice!=5);
	return 0;
}