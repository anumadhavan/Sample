#include<stdio.h>
void push();
void pop();
void display();
int stack[100],d,n,size,no;
int top[50],bott[50],limit[50],i,ch;
int main()
{
printf("\nTHe total available size is 100\n");
printf("Enter the number of stack:");
scanf("%d",&n);
size=100/n;
bott[0]=-1;
for(i=1;i<n-1;i++)
{
	bott[i]=bott[i-1]+size;
}
for(i=0;i<n;i++)
{
	limit[i]=bott[i]+size;
}
for(i=0;i<n;i++)
{
	top[i]=bott[i];
}
do
{
	printf("\n1)push\n2)pop\n3)display\n4)exit");
	printf("\nenter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1 : push();
		break;
		case 2:pop();
		break;
		case 3:display();
		break;
		case 4:break;
		default:printf("wrong choice");
	}
}while(ch<4);
return 0;
}


void push()
{
		printf("Enter the stack no:");
		scanf("%d",&no);
	
	if(top[no-1]==limit[no-1])
				printf("stack is overflow");
	else
	{
	printf("Enter the data :");
	scanf("%d",&d);
		top[no-1]++;
		stack[top[no-1]]=d;
		printf("The pushed element is %d and stack no is %d",d,no);
	}
}
void pop()
{
	printf("Enter the stack no:");
		scanf("%d",&no);
	if(top[no-1]==bott[no-1])
	printf("The stack is underflow");		
	else
	{
	printf("the poped element is %dand  stack no is%d",stack[top[no-1]],no);
	top[no-1]--;
	}
}
void display()
{

int j,k;
printf("enter the stack no");
 scanf("%d",&no);
for(k=0;k<100;k++)
{
 
printf("The stack is:");
  for(j=bott[no-1]+1;j<=top[no-1];j++)
  {
  printf("%d\n",stack[j]);
 }
 break;
 }
 }



