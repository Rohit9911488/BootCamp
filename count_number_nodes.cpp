//Count of Nodes

/*

count=0
curr=head
while curr!=NULL
count++
curr=curr.next
print count

*/

#include<iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node *next;
		Node(int x)
		{
			data=x;
			next=NULL;
		}
		
};

int main()
{
	int n;
	int c=0;
	
		cout<<"Enter size";
		cin>>n;
		Node *head=NULL;
		Node *tail=NULL;
		
		
		cout<<"Enter elements";
		for(int i=0;i<n;i++)
		{  int x;
		    cin>>x;
			Node* newNode=new Node(x);
		   
		  
		  if(head==NULL) {
		  	head=newNode;
		  	tail=newNode;
		  }
		  else
		  {
		  	tail->next=newNode;
		  	tail=newNode;
		  }
	}
	Node *curr=head;
		  while(curr!=NULL)
		{
			c++;
			curr=curr->next;
			//cout<<c;
		}
		cout<<c;
}
