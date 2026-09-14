#include <iostream>
using namespace std;

struct node{
    node* next;
    int value;
};

class queue{
    private:
    node* start= nullptr;
    node* end= nullptr;
    int val;
    int count=0;
    public:
    void push(){
        node* temp= new node;
        cout<<"Enter the value:";
        cin>>val;
        temp->value=val;
        node* prev =new node;
        if (start== nullptr && end == nullptr){
            temp->value=val;
            start=temp;
            end=temp;
            count++;
        }
         else{
        // Queue has elements: link old end to new node, then move end pointer
        end->next = temp; 
        end = temp;   
        count++;
    }
    
}
    void pop(){
        node* temp =new node;
        if(count==0){
            cout<<"queue's empty"<<endl;
        }
        else if(count==1){
            temp= start;
            delete temp;
            start->next=nullptr;
            end->next=nullptr;
            count--;
        }
        else{
        node* temp= new node;
        temp=start;
        start= start->next;
        delete temp;
        count--;
        }
            
        }
    void top(){
        if(count==0){
            cout<<"queue's empty"<<endl;
        }
        else{
            cout<<start->value<<endl;
        }
    }
    void size(){
        if(count==0){
            cout<<"queue's empty"<<endl;
        }
        else{
            cout<<count<<endl;
        }
    }
    void print_end(){
        if(count==0){
            cout<<"queue's empty"<<endl;
        }
        else{
            cout<<end->value<<endl;
        } 
    }
};
int main() {
		queue q1;
		int choice=0;
		do {
		    cout<<"-------------------"<<endl;
			cout<<"1 for push"<<endl;
			cout<<"2 for pop"<<endl;
			cout<<"3 for top"<<endl;
			cout<<"4 for size"<<endl;
			cout<<"5 for end"<<endl;
			cout<<"6 for exit"<<endl;
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
				q1.size();
				break;
			case 5:
			    q1.print_end();
			    break;
			    case 6:
				cout<<"ty"<< endl;
				break;
			default:
				cout<<"error"<<endl;
			}
		} while(choice!=6);
		return 0;
	}