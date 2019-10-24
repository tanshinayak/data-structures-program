#include<iostream>
#include<conio.h>
using namespace std;
class Queue
{
	int arr[20];
	int size;
	int front,rear;
	public:
		Queue(int Size)
		{
			size=Size;
			arr[size];
			front=-1;
			rear=-1;
		}
		void enqueue(int ele);
		void dequeue();
};
void Queue::enqueue(int ele)
{
	if((rear==front-1) || (rear==(size-1) && front==0))
	{
		cout<<"Since, queue is full so, no more elements accepted...\n";
		return;
	}
	else if(rear==size-1 && front!=0)
	{
		rear=0;
		arr[rear]=ele;
	}
	else
	{
		if(front==-1)
		{
			front++;
		}
		arr[++rear]=ele;
	}
}
void Queue::dequeue()
{
	if(front==-1)
	{
		cout<<"Queue is empty....\n";
	}
	else if(front==size-1)
	{
		cout<<"Elements after dequeue is : ";
		cout<<arr[front]<<endl;
		front=0;
	}
	else if(front==rear)
	{
		cout<<"Elemets after dequeue is : "<<arr[front]<<endl;
		front=-1;
		rear=-1;
	}
	else
	{
		cout<<"Elements after dequeue is : "<<arr[front++]<<endl;
	}
}
int main()
{
	int size;
	cout<<"Enter the size of array : ";
	cin>>size;
	Queue ob(size);
	int choice;
	int ele;
	char more;
	do
	{
		cout<<"1. Enqueue()\n";
		cout<<"2. Dequeue()\n";
		cout<<endl<<endl<<"What would you like to perform from the above given menu : ";
		cin>>choice;
		switch(choice)
		{
			case 1:{
				cout<<"What element would you like to enqueue : ";
				cin>>ele;
				ob.enqueue(ele);
				break;
			}
			case 2:{
				ob.dequeue();
				break;
			}
			default:cout<<"You entered a wrong choice...\n";
		}
		cout<<"Would you like to perform more : ";
		cin>>more;
	}while(more=='y');
	getch();
	return 0;
}
