// Project method 3?

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
 7.watch
 8.right shoelace
 9.left shoelace

 array creation2
 array name: action1[20]
 1. gotoshop
 2.inshop
 3.flour
 4.eggs
 5.milk
 6.bill
 7.home
 8.bake
*/

#include<stdio.h>
#include<stdlib.h>

int action[20];
int action1[20];
int i,t,k,j,n;
void callrandom();

void wearshirt()
{
   	if(action[5]==0)
	{
   	 printf("\t shirt\n");
	 action[5]=1;
	}
	if(action[5]==1)
	{
   	 printf("\t tie\n");
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

void wearwatch()
{
	if(action[7]==0)
	{
   	 printf("\t watch\n");
	 action[7]=1;
	}
}

void tieshoelace()
{
	if(action[4]==1&&action[8]==0)
	{
   	 printf("\t rightshoelace\n");
	 action[8]=1;
	}
	if(action[3]==1&&action[9]==0)
	{
   	 printf("\t leftshoelace\n");
	 action[9]=1;
	}
}

void bakecake()
{
	if(action1[7]==1&&action1[8]==0)
		{
		 printf("\t Bake cake.\n");
		 action1[8]=1;
		}
}

void gotoshop()
{
	if(action1[1]==0)
		{
		 printf("\t Go to shop.\n");
		 action1[1]=1;
		}
}

void inshop()
{
	if(action1[1]==1&&action1[2]==0)
		{
		 printf("\t Gather materials.\n");
		 action1[2]=1;
		}
}

void paybill()
{
	if(action1[3]==1&&action1[4]==1&&action1[5]==1&&action1[6]==0)
		{
		 printf("\t pay bill.\n");
		 action1[6]=1;
		}
}

void gatherflour()
{
	if(action1[1]==1&&action1[3]==0)
		{
		 printf("\t Gather flour.\n");
		 action1[3]=1;
		}
}

void gathereggs()
{
	if(action1[1]==1&&action1[4]==0)
		{
		 printf("\t Gather eggs.\n");
		 action1[4]=1;
		}
}

void gathermilk()
{
	if(action1[1]==1&&action1[5]==0)
		{
		 printf("\t Gather milk.\n");
		 action1[5]=1;
		}
}

void gohome()
{
	if(action1[6]==1&&action1[7]==0)
		{
		 printf("\t Go home.\n");
		 action1[7]=1;
		}
}


void choose(int k)
{
	if(k==1)
	wearshirt();
	else if(k==2)
	wearleftshoe();
	else if(k==3)
	wearrightshoe();
	else if(k==4)
	wearwatch();
	else
	tieshoelace();
		
}

void choose1(int k)
{
	if(k==1)
	gotoshop();
	else if(k==2)
	gathermilk();
	else if(k==3)
	gathereggs();
	else if(k==4)
	gatherflour();
	else if(k==5)
	paybill();
	else if(k==6)
	gohome();
	else
	bakecake();		
}

void callrandom(int t) // random
{
	int l=0;
	for(j=0;j<=10;j++)
		action[j]=0;
    while(l!=100)
    {
    	int num = (rand() % 5) + 1;
    	choose(num);
    	l++;
    }
    printf("Hence the %d plan has been deliverd.\n \n",t+1);
}

void callrandom1(int t) // random
{
	int l=0;
	for(j=0;j<=10;j++)
		action1[j]=0;
    while(l!=100)
    {
    	int num = (rand() % 7) + 1;
    	choose1(num);
    	l++;
    }
    printf("Hence the %d plan has been deliverd.\n \ns",t+1);
}


void main()
{
	int t=0,i;
	int choice;
	printf(" \t \t \t  FINAL PROJECT FOR ARTIFICIAL INTELLIGENCE AND ITS APPLICATIONS: \n \n ");
	printf("Choose which environment you want a plan in : \n");
	printf("1.Getting ready in the morning \n");
	printf("2.Baking a cake \n ");
	scanf("%d",&choice);
	if(choice==1)
	{
		printf("An agent that plans effectively in partial order planning and in a dynamic environment. \n \n");
		printf("Enter the total number of plans you want: \n");
		scanf("%d",&i);
		printf("You will now be delivered %d random plans : \n \n",i);
		for(t=0;t<i;t++)
		{
		 printf("Plan number %d is: \n",t+1);
		 callrandom(t);
		}
	}
	else if(choice==2)
	{
		printf("An agent that plans effectively in partial order planning and in a dynamic environment. \n \n");
		printf("Enter the total number of plans you want: \n");
		scanf("%d",&i);
		printf("You will now be delivered %d random plans : \n \n",i);
		for(t=0;t<i;t++)
		{
		 printf("Plan number %d is: \n",t+1);
		 callrandom1(t);
		}
	}
	else
		printf("Please enter a valid number \n");
}
