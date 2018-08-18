//PROBLEM 3: Create an agent that plans effectively in partial order planning and in dynamic environment.
//(Example: wear tie , after wearing shoes, or wear tie, then goes for wearing tie, given time and objects  (shirt, shoes, socks) made to appear in order for specific time. 
// static and dynamic
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
int i,k,j;
void wear7();

void weartie()
{	
	if(action[5]==1)
	{
   	 printf("wear tie \n");
	 action[6]=1;
	}
   	else if(action[6]==1)
   	 printf("tie already worn \n");
	else  
	 printf("no shirt worn \n");
}

void wearshirt()
{
	if(action[5]!=1)
	{
   	 printf("wear shirt \n");
	 action[5]=1;
	}
   	else
   	 printf("shirt already worn \n");
}

void wearleftsocks()
{
	if(action[1]==0)
	{
	 printf("left socks worn \n");
	 action[1]=1;
	}
	else
	 printf("left socks already worn \n");
}

void wearrightsocks()
{
	if(action[2]==0)
	{
	 printf("right socks worn \n");
	 action[2]=1;
	}
	else
	 printf("right socks already worn \n");
}

void wearleftshoe()
{
	if(action[1]==1&&action[3]==0)
	{
	 printf("left shoes worn \n");
	 action[3]=1;
	}
	else if(action[1]==1&&action[3]==1)
	 printf("left shoe already worn \n");
	else 
	 printf("wear left socks first \n");
}

void wearrightshoe()
{
	if(action[2]==1&&action[4]==0)
	{
	 printf("right shoes worn \n");
	 action[4]=1;
	}
	else if(action[2]==1&&action[4]==1)
	 printf("right shoe already worn \n");
	else 
	 printf("wear right socks first \n");
}

void wear1() // shirt,left,right
{
	wearshirt();
	weartie();
	wearleftsocks();
	wearleftshoe();
	wearrightsocks();
	wearrightshoe();
}

void wear2() // shirt,right,left
{
	wearshirt();
	weartie();
	wearrightsocks();
	wearrightshoe();
	wearleftsocks();
	wearleftshoe();
}

void wear3() // left,shirt,right
{
	wearleftsocks();
	wearleftshoe();
	wearshirt();
	weartie();
	wearrightsocks();
	wearrightshoe();
}

void wear4() // left,right,shirt
{
	wearleftsocks();
	wearleftshoe();
	wearrightsocks();
	wearrightshoe();
	wearshirt();
	weartie();
}

void wear5() // right,left,shirt
{
	wearrightsocks();
	wearrightshoe();
	wearleftsocks();
	wearleftshoe();
	wearshirt();
	weartie();
}

void wear6() // right,shirt,left
{
	wearrightsocks();
	wearrightshoe();
	wearshirt();
	weartie();
	wearleftsocks();
	wearleftshoe();
}

void choose(int k)
{
	if(k==1)
	 wear1();
	else if(k==2)
	 wear2();
	else if(k==3)
	 wear3();
	else if(k==4)
	 wear4();
	else if(k==5)
	 wear5();
	else if(k==6)
	 wear6();
	else
	 wear7();
}

void wear7() // random
{
    int l=0;
    while(l!=1)
    {
    	int num = (rand() % 6) + 1;
    	choose(num);
    	printf("enter 1 to stop, enter 0 to get another random order \n \n");
    	scanf("%d",&l);
    	for(j=0;j<=10;j++)
		 action[j]=0;
    }
}

void main()
{
	int i=0;
	for(j=0;j<=10;j++)
		action[j]=0;
	printf("enter 1 for wearing for shirt ,then left shoes and then right shoes in that order \n");
	printf("enter 2 for wearing for shirt,then right shoes and then left shoes in that order \n");
	printf("enter 3 for wearing for left shoes,then right shoes and then shirt in that order \n");
	printf("enter 4 for wearing for left shoes,then right shoes and then shirt in that order \n");
	printf("enter 5 for wearing for right shoes,then left shoes and then shirt in that order \n");
	printf("enter 6 for wearing for right shoes,then shirt and then left shoes in that order \n");
	printf("enter 7 for wearing for left shoes,right shoes and shirt in a random order \n");
	scanf("%d",&i);
	choose(i);
}	

