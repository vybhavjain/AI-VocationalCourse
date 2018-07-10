//  N-PUZZLE PROBLEM LEVEL 1
// using an arary representation
int q[10],s[10],t[10];
#include<stdio.h>

void represent1()  // function to represent the starting state 
{
    printf("+---+---+---+ \n");
    printf("| %d | %d | %d |\n",q[0],q[1],q[2]);
    printf("+---+---+---+ \n");
    printf("| %d | %d | %d |\n",q[3],q[4],q[5]);
    printf("+---+---+---+ \n");
    printf("| %d | %d | %d |\n",q[6],q[7],q[8]);
    printf("+---+---+---+ \n");
}

void represent2()  // function to represent the final state
{
    printf("+---+---+---+ \n");
    printf("| %d | %d | %d |\n",s[0],s[1],s[2]);
    printf("+---+---+---+ \n");
    printf("| %d | %d | %d |\n",s[3],s[4],s[5]);
    printf("+---+---+---+ \n");
    printf("| %d | %d | %d |\n",s[6],s[7],s[8]);
    printf("+---+---+---+ \n");
} 

void represent3() // function to represent the state after each change is made
{
    printf("+---+---+---+ \n");
    printf("| %d | %d | %d |\n",t[0],t[1],t[2]);
    printf("+---+---+---+ \n");
    printf("| %d | %d | %d |\n",t[3],t[4],t[5]);
    printf("+---+---+---+ \n");
    printf("| %d | %d | %d |\n",t[6],t[7],t[8]);
    printf("+---+---+---+ \n");
}


void main()
{
	int i=0,flag=0,j,p,temp,start;
	char m;
	printf("enter the puzzle , enter 0 for blank \n");
	for(i=0;i<=8;i++)
	 scanf("%d",&q[i]);
	for(i=0;i<=8;i++)
	 t[i]=q[i];
	represent1();
	printf("enter the puzzle's final state \n");
	for(i=0;i<=8;i++)
	 scanf("%d",&s[i]);
	i=0;
	represent2();
	while(flag!=1)
	{
	    for(p=0;p<=8;p++)    // intialises the value of start to the position of the zero tile each time
    {
        if(t[p]==0)
        start=p;
    }
	    i=0;
	    j=0;
	    while(i!=9&&j!=9)
	    {
	        if(s[i]==t[i])
	        i++;
	        j++;
	    }
	    if(i==9)       // checks if all tiles of start and final state match 
	    flag=1;
	    printf("enter the next move to change the position of the zero.Press u for up, d for down , l for left and r for right %d \n",start);
	    scanf("%c",&m);
	    if(m=='l')
	    {	
	        if(t[0]==0||t[3]==0||t[6]==0)
	         printf("this move is invalid, try another move\n");
	        else
	        {
	         t[start]=t[start-1];
	         t[start-1]=0;
	        }
	        represent3();
	    }
	    if(m=='r')
	    {
	        if(t[2]==0||t[5]==0||t[8]==0)
	         printf("this move is invalid, try another move\n");
	        else
	        {
	         t[start]=t[start+1];
	         t[start+1]=0;
	        }
	        represent3();
	     }
	    if(m=='u')
	    {
	        if(t[0]==0||t[1]==0||t[2]==0)
	         printf("this move is invalid, try another move \n");
	        else
	        {
	         t[start]=t[start-3];
	         t[start-3]=0;
	        }
	        represent3();
	    }
	    if(m=='d')
	    {
	        if(t[6]==0||t[7]==0||t[8]==0)
	         printf("this move is invalid, try another move\n");
	        else
	        {
	         t[start]=t[start+3];
	         t[start+3]=0;
	        }
	        represent3();
	    }
	}
	printf("you have solved the 8 puzzle problem, congratulations!!! \n");
}
