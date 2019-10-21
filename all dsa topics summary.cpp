#include<iostream>
using namespace std;
struct SingleNode
{
	int data;
	SingleNode *next;
};
SingleNode *h;
struct DoubleNode
{
	int data;
	SingleNode *next;
	SingleNode *prev;
};
DoubleNode *head, *tail;
int main()
{
	int arr[5] = {1,2,3,4,5};
	cout<<"N = 5\n";
	cout<<"Static array of size 5\n";
	for(int i = 0; i<5; i++)
	{
		cout<<arr[i]<<" ";
	}
	int dynArr[5];
	int n;
	cout<<"Enter n\n";
	cin>>n;
	cout<<endl;
	n*=2;
	cout<<"This is dynamic array\nEnter "<<n<<" elements\n";
	for(int i = 0; i<n ; i++)
	{
		cin>>dynArr[i];
	}
	h = new SingleNode();
	h->data = 1;
	SingleNode *node2 = new SingleNode();
	node2->next = NULL;
	
	cout<<"Single link list\n";
	for(SingleNode *ptr = h; h!=NULL; ptr = ptr->next)
	cout<<ptr->data<<endl;
	
	head = new DoubleNode();
	head->data = 1;
	head->next = NULL;
	head->prev = tail->next;
	tail = head;
	
	//doubly link list
	for(DoubleNode *ptr = head; head!=NULL; ptr = ptr->next)
	cout<<ptr->data<<endl;
	
	//circulsr link list
	head->data = 1;
	head->prev = tail;
	tail->next = head;
	head->next = NULL;
}
