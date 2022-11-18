#include<stdio.h>
#include<conio.h>
struct node
{

	float coef;
	int coef;
	struct node*next;

};

struct node*create(struct node*);

struct node*insert(struct*,float,int);

struct node*insert(struct*,float,int);
 
void display(struct node*ptr);

void poly-add(struct node*struct node*);

void poly-sub(struct node*struct node*);

void poly-mul(struct node*struct node*);
 
 main()
 {

 	
 	struct node*p1=NULL,*p2=NULL;
 	
 	printf("Enter the polynomial 1: \n");
    
     p1=create(p1);
    
    printf("Enter the polynomial 2:s: ");
    
    p2=create (p2);
    poly-add(p1,p2);
    poly-sub(p1,p2);
    poly-mul(p1,p2);



 }


struct node*create(struct node*start)
{

	int i,n,ex;

	float co;
   
   printf("Enter the number of terms: ");

   scanf("%d",&n);

   for(i=1;i<=n;i++)
   {

   	printf("Enter the coefficient for terms %d");
     
     scanf("%f",&co);

     printf("Enter the exponent for terms %d,i");

     scanf("%d",&ex);

     start=insert-> (start,co,ex);

   }

   return start;

}

struct node*insert-s(struct node*start,float,10,int,ex)

{
	struct node*ptr*temp;

	temp=(struct node*)malloc(size of (struct node));

	temp->coef=co;
	temp->ex;

	if(start==NULL||ex>start->expo){
		
		temp->next=start
		
		start=temp;

	}
	else{

		ptr=start;
		
		while(ptr->next!=NULL&&ptr->next->expo>=ex)

			ptr=ptr ->next;

		temp->next=ptr ->next;

		ptr->next=temp;


	}

	return start;

} 

struct node*insert(struct node*start,float,co,int,ex){

	struct node*ptr,*temp;

	temp=(struct node*)malloc(size of(struct node));

	temp->coef=co;

	temp->expo=ex;

	if (start ==NULL){

		temp->next=start

		start=temp;


	}
	else{

		ptr=start;
		
		while(ptr->next!=NULL)
        
        ptr=ptr->next;

        temp->next=ptr->next

        ptr ->next=temp;

	}

	return start;

}

void display(struct node*ptr)
 
 {

 	if(ptr==NULL){

    printf("Zero polynomial\n");

    return n;

}
 	
 	while(ptr!=NULL){

 		printf("(%f x^ %d)",ptr->coef,ptr->expo );

 		ptr=ptr->next;

 		if (ptr!=NULL);

 		printf("+");

 		else
 			printf("\n");

 	}
}

void poly-add(struct node*p1 struct node*p2)

{
	struct node*p3;

	p3=NULL;

while(p1!=NULL&&p2!=NULL)
{
	if (p1->expo>p2->expo){

		p3=insert(p3,p1->coef,p,->expo);

		p1=p1->next;

	}

	else if(p2->expo>p1>expo)
	{

		p3=(B3,p2->coef,p2->expo);

		p2=p2->next;

	}
	else if(p1->expo==p2->expo){

		p3=insert (p3,p1,->coef+p2=>coef,p1->expo)
		
		p1=p1->next;
        
        p2=p2->next;
	}
	
		}


		while(p1!=NULL){

			p3=insert(p3,p1->coef,p1->expo);

			p1=p1->next;

		}

		while(p2!=NULL){

			p3=insert(p3,p2->coef,p2->expo);

			p2=p2->next;

		}

		printf("Added polynomial is " );

		display(p3);



}

void poly-sub(struct node*p1,struct node*p2){

	struct node*p3;

	p3=NULL

	while(p1!=NULL&&p2!=NULL)
	{
		if(p1->expo>p2->expo){

			p3=insert(p3,p2)
		}
	}
}
	


 

	

