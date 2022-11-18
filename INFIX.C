#include<stdio.h>
#include<conio.h>

char stack[100];

int top=-1;

void push(charx )

{
	stack[++top]=x;


}

char pop()
{
	if(top==-1)
		return-1;
	else
		return stack[top--]

}

int priority (charx)

{
	if(x=="1")
		return 0;
	if(x=='+'||x=='-')
		return 1;
	if (x=="*"||x=="/")
		retrun 2;
	return 0;

}
 int main()

 {
 	char exp[100];

 	char *e*x;

 	printf("Enter the expression");
 	scanf("%s",exp);

 	printf("/n")

 	e=exp

 	while(*e!='10')
 	{

 		if(isalnun(*e))
 			printf("%c",*e);
 		else if(re=='c')
 			puh(*e);
 			
 			else if(*e=='1')

 			{
 				while((x=pop()!='c'))
 					
 					print("%c",x);

 			}
 			else
 				{
 					while(priority(stock[top])==priority(*e))
 						
 						printf("%c",pop());
 					
 					push(*e);




 				}

 				e++;
 			}

 			while(top1=-1)

 				printf("%c",pop() );

 			return 0;

 			


 }