#include<iostream>
using namespace std;

	class Node{
		public:
		int data;
		Node *next;	
	};
	

	
	Node *input(Node* head,int d){
		Node *ptr=head;
		Node *temp= new Node();
		temp->data=d;
		temp->next=NULL;
		
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
	
		ptr->next=temp;
		
		return head;
	}
	void printList(Node*root){
		while(root!=NULL){
			cout<<root->data<<" ";
			root=root->next;
		}
	}
	int main(){
		int n;
		Node *head= NULL;
		cout<<"enter no. of elements in a list"<<endl;
		cin>>n;
		cout<<"enter elements"<<endl;
		int temp;
		cin>>temp;
		head = new Node();
		head->data=temp;
		head->next=NULL;
		
		for(int i=0; i<n-1;i++)
		{
			cin>>temp;
			head=input(head,temp);	
		}
		printList(head);
		return 0;
		
	}


