#include<iostream>
#include<conio.h>
using namespace std;
struct node{
	int coff,power;
	node *next;
};
class linkedlist{
	node *head;
	public:
		linkedlist();
		void input();
		void add(linkedlist);
		void display();
};
int main()
{
linkedlist ob1,ob2;
char ch;
do{
	ob1.input();
	ob2.input();
	ob1.add(ob2);
	ob1.display();
	cout<<"If you want to continue then type y"<<endl;
	cin>>ch;
}while(ch=='y'||ch=='Y');
getch();
return 0;
}
linkedlist::linkedlist()
{
	head=NULL;
}
void linkedlist::display()
{
	 
    node *temp=head;
	if(head==NULL)
	{
		cout<<"list is empty"<<endl;
	}
    else{
    	while(temp!=NULL)
		
		{
    	cout<<temp->coff<<"x"<<"^"<<temp->power<<" + ";
    	temp=temp->next;
    }
    } 
}
void linkedlist::add(linkedlist a)
{
	node *p=a.head;
	node *q=head;
	while(p->power==0&&q->power==0)
	{
	if(p->power==q->power)
	{	
	q->coff=p->coff+q->coff;
		p=p->next;
		q=q->next;
	}
	else if(p->power>q->power)
	{
	node *x=new node;
  x->coff=p->coff;
  x->power=p->power;
  x->next=NULL;
  if(head==NULL)
  {
  	head=x;
  }
  else{
  	x->next=head;
  	head=x;
  }
	}
	else{
	    q=q->next;
	}
}
}
void linkedlist::input()
{
	int s;
	cout<<"Enter the highest power of polynomial"<<endl;
	cin>>s;
	cout<<"Enter the cofficients of polynomial"<<endl;
	for(int i=s;i>0;i--)
	{ int x;
	cin>>x;
	node *p=new node;
  p->coff=x;
  p->power=i;
  p->next=NULL;
  if(head==NULL)
  {
  	head=p;
  }
  else{
  	node *temp=head;
  	while(temp->next!=NULL)
  	{
  		temp=temp->next;
  	}
  		temp->next=p;
  }
	}
}

