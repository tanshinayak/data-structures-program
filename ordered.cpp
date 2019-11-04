#include<iostream>
#include<conio.h>
using namespace std;
struct node{
	int info;
	node *next;
};
class linkedlist{
	node *head;
	public:
		linkedlist();
		void insert(int);
		void input();
		void deletion(int);
		void display();
		void merge(linkedlist);
};
int main()
{
linkedlist ob;
linkedlist ob2;
int choice;
char ch;
int x;
do{
	cout<<"Enter the choice among the following"<<endl;
cout<<"1 for Inserting an element "<<endl;
cout<<"2 for Deletion element "<<endl;
cout<<"3 for merging two linked list"<<endl;
cout<<"4 for displaying the list"<<endl;
cin>>choice;
switch(choice)
{
	case 1:cout<<"Enter the element to be inserted"<<endl;
	       cin>>x;
	       ob.insert(x);
	       break;    
	case 2:cout<<"Enter the number to be deleted"<<endl;
	cin>>x;
	ob.deletion(x);
	       break;
	case 3: ob2.input();
	        ob.merge(ob2);
			break;
	case 4: ob.display();
	break;
	default: cout<<"You have entered a wrong choice"<<endl;    
}
cout<<"If you want to continue then type 'y'"<<endl;
cin>>ch;
}while(ch=='y'||ch=='Y');
getch();
return 0;
}
void linkedlist::insert(int a)
{
  node *p=new node;
  p->info=a;
  p->next=NULL;
  if(head==NULL)
  {
  	head=p;
  }
  else{node *temp=head;
  	while(temp!=NULL)
  	{
  		if(p->info<temp->info)
  		{
  			p->next=head;
  	        head=p;
  	        break;
		  }
		  else if(p->info>temp->info&&p->info<temp->next->info)
		  {
		  	p->next=temp->next;
		  	temp->next=p;
		  	break;
		  }
		  else if(temp->next==NULL&&p->info>temp->info)
		  {
		  	temp->next=p;
		  }
		  else
		  {
		  	temp=temp->next;
		  }
	  }
  }
}
void linkedlist::deletion(int x)
{node *temp=head;
  while(temp!=NULL)
  {
  	if(temp->next->info==x)
  	{
  		node *d=temp->next;
  		temp=temp->next->next;
  		d->next=NULL;
  		delete d;
  		return;
	}
	else
	{
		temp=temp->next;
	}
  }
  cout<<"Element not present in the list"<<endl;
}

void linkedlist::display()
{   
    node *temp=head;
	if(head==NULL)
	{
		cout<<"list is empty";
	}
    else{
    	while(temp!=NULL)
		
		{
    	cout<<temp->info<<"->";
    	temp=temp->next;
    }
    } 

}
linkedlist::linkedlist()
{
	head=NULL;
}
void linkedlist::merge(const linkedlist ob)
{
	node *temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=ob.head;
}
void linkedlist::input()
{int l;
int x;
	cout<<"Enter the size of linked list"<<endl;
	cin>>l;
	while(l!=0)
	{  cout<<"Enter the value to be inserted"<<endl;
	cin>>x; 
		insert(x);
		l--;
	}
}

