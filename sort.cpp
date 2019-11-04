#include<iostream>
#include<conio.h>
using namespace std;
class sort{
	int s,ar[10];
	public:
		void input();
		void insertion();
		void bubble();
		void seletion();
		void display();
};
int main()
{int choice;
char ch;
sort a;
a.input();
	do{
		cout<<"Enter the choice among the following"<<endl;
		cout<<"1 for insertion sort"<<endl;
		cout<<"2 for seletion sort"<<endl;
		cout<<"3 for bubble sort"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1: a.insertion();
				a.display();
			break;
			case 2: a.seletion();
			a.display();
			break;
			case 3:a.bubble();
			a.display();
			break;
			default:cout<<"You have entered a wrong choice"<<endl;
		}cout<<"If you want to continue then type 'y' "<<endl;
		cin>>ch;
	}while(ch=='y'||ch=='Y');
	getch();
	return 0;
}
void sort::input()
{
	cout<<"Enter the number of elements"<<endl;
	cin>>s;
	cout<<"Enter the elements"<<endl;
	for(int i=0;i<s;i++)
	{
		cin>>ar[i];
	}
}
void sort::display()
{
	cout<<"After sorting"<<endl;
	for(int i=0;i<s;i++)
	{
	cout<<ar[i]<<" ";
	}
}
void sort::bubble()
{
	for(int i=0;i<s;i++)
	{
		for(int j=i+1;j<s;j++)
		{
			if(ar[i]>ar[j])
			{
				int temp=ar[i];
				ar[i]=ar[j];
				ar[j]=temp;
			}
		}
	}
}
void sort::insertion()
{
	for(int i=1;i<s;i++)
	{
		for(int j=i-1;j>=0;j--)
		{
			if(ar[i]<ar[j])
			{
			int temp=ar[i];
				ar[i]=ar[j];
				ar[j]=temp;	
				i=j;
			}else{
				break;
			}
		}
	}
}
void sort::seletion()
{
	int min,index;
	for(int k=0;k<=s-1;k++)
	{
	   min=ar[k];
    	index=k;
    	for(int i=k+1;i<s;i++)
	     {
	     	if(min>ar[i])
	       	{
       			min=ar[i];
	    		index=i;
	        }
        }
	  
	    if(index!=k)
     	{
	      int temp=ar[k];
	       ar[k]=ar[index];
	       ar[index]=temp;		
	    }
    }
	
}
