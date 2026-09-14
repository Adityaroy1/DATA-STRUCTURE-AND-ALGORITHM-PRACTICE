#include <iostream>
using namespace std;

class queue{
private:
	int size=4;
	int start,end=-1;
	int qu[4];
	int currsize=0;
public:
	void push() {
		if (currsize==size) {
			cout<<"queue is full"<< endl;
		}
	
		else if(currsize==0) {
			int val;
			cout<<"enter the value:";
			cin>> val;
			start=start+1;
			end=end+1;
			qu[start]=val;
			currsize+=1;
		}
	else{
			int val;
			cout<<"enter the value:";
			cin>> val;
			end=(end+1)%size;
			qu[end]=val;
			currsize+=1;
		}
	}
		void pop() {
			if(currsize=0) {
				cout<<"queue's empty"<<endl;
			}
			else {
				start=(start+1)%size;
				currsize-=1;
			}
		}
		void top() {
			if(currsize=0) {
				cout<<"queue's empty"<<endl;
			}
			else {
				cout<<qu[start]<<endl;
			}

		}
		void view_size() {
			cout<<currsize<<endl;
		}
	};
	
	
	int main() {
		queue q1;
		int choice=0;
		do {
			cout<<"1 for push"<<endl;
			cout<<"2 for pop"<<endl;
			cout<<"3 for top"<<endl;
			cout<<"4 for size"<<endl;
			cout<<"5 for end"<<endl;
			cout<<"-------------------"<<endl;
			cin>>choice;
			switch(choice) {
			case 1:
				q1.push();
				break;
			case 2:
				q1.pop();
				break;
			case 3:
				q1.top();
				break;
			case 4:
				q1.view_size();
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