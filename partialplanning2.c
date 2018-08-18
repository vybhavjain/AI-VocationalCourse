// Project method 2

//PROBLEM 3: Create an agent that plans effectively in partial order planning and in dynamic environment.
//(Example: wear tie , after wearing shoes, or wear tie, then goes for wearing tie, given time and objects  (shirt, shoes, socks) made to appear in order for specific time. 

 // create an array where each pos indicates if a particular task/function /action has been performed or not.

 /*
 array creation
 array name: action[20]
 index pos,action
 1. left sock on
 2.right sock on
 3.left shoe on
 4.right shoes on
 5.shirt is on
 6.tie is on
*/

#include<stdio.h>
#include<stdlib.h>

int action[20];
int i,t,k,j,n;
void callrandom();

void wearshirt()
{
   	if(action[5]==0)
	{
   	 printf("\t wear shirt\n");
	 action[5]=1;
	}
	if(action[5]==1)
	{
   	 printf("\t wear tie\n");
	 action[6]=1;
	 action[5]=2;  // to make sure if condition is not repeated.
	}
}


void wearleftshoe()
{
	if(action[1]==1&&action[3]==0)
	{
	 printf("\t left shoes\n");
	 action[3]=1;
	}
	if(action[1]==0)
	{
	 printf("\t left socks\n");
	 action[1]=1;
	}

}

void wearrightshoe()
{
	if(action[2]==1&&action[4]==0)
	{
	 printf("\t right shoes\n");
	 action[4]=1;
	}
	if(action[2]==0)
	{
	 printf("\t right socks\n");
	 action[2]=1;
	}
}

void choose(int k)
{
	if(k==1)
	wearshirt();
	else if(k==2)
	wearleftshoe();
	else
	wearrightshoe();
}

void callrandom(int t) // random
{
	int l=0;
	for(j=0;j<=10;j++)
		action[j]=0;
    while(l!=100)
    {
    	int num = (rand() % 3) + 1;
    	choose(num);
    	l++;
    }
    printf("Hence the %d plan has been deliverd.\n \n ",t+1);
}

void main()
{
	int t=0,i;
	printf(" \t \t \t  FINAL PROJECT FOR ARTIFICIAL INTELLIGENCE AND ITS APPLICATIONS: \n \n ");
	printf("An agent that plans effectively in partial order planning and in dynamic environment. \n \n");
	printf("Enter the total number of plans you want: \n");
	scanf("%d",&i);
	printf("You will now be delivered %d random plans : \n \n",i);
	for(t=0;t<i;t++)
	{
	 printf("Plan number %d is: \n",t+1);
	 callrandom(t);
	}
}
