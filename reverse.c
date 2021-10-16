//Reverse of number, add digits of number, greatest of 2 number
#include<stdio.h>
#include<conio.h>
int reverse(int a,int rev)
{ 
	if(a>0)
	{
		rev=rev*10+(a%10);
		reverse(a/10,rev);
	}
	else{
		return rev;
	}
}
void main()
{
	int n,r=0;
	printf("Enter the number ");
	scanf("%d",&n);
	int rev=reverse(n,r);
	printf("The reverse of number is : %d",rev);
	printf("Enter the number to find the sum of digits");
	int num;
	scanf("%d",&num);
	int sum=0;
	while(num>0)
	{
		sum=sum+num%10;
		num=num/10;
	}
	printf("The sum of digits is : %d",sum);
	getch();
	
}
