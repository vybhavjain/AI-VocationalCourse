//  N-PUZZLE PROBLEM level 1
//using a 2D array

int q[10][10],s[10][10],t[10][10];
#include<stdio.h>

void represent1()
{
    printf("+---+---+---+ \n");
    printf("| %d | %d | %d |\n",q[1][1],q[1][2],q[1][3]);
    printf("+---+---+---+ \n");
    printf("| %d | %d | %d |\n",q[2][1],q[2][2],q[2][3]);
    printf("+---+---+---+ \n");
    printf("| %d | %d | %d |\n",q[3][1],q[3][2],q[3][3]);
    printf("+---+---+---+ \n");
}

void represent2()
{
    printf("+---+---+---+ \n");
    printf("| %d | %d | %d |\n",s[1][1],s[1][2],s[1][3]);
    printf("+---+---+---+ \n");
    printf("| %d | %d | %d |\n",s[2][1],s[2][2],s[2][3]);
    printf("+---+---+---+ \n");
    printf("| %d | %d | %d |\n",s[3][1],s[3][2],s[3][3]);
    printf("+---+---+---+ \n");
} 

void represent3()
{
    
    printf("+---+---+---+ \n");
    printf("| %d | %d | %d |\n",t[1][1],t[1][2],t[1][3]);
    printf("+---+---+---+ \n");
    printf("| %d | %d | %d |\n",t[2][1],t[2][2],t[2][3]);
    printf("+---+---+---+ \n");
    printf("| %d | %d | %d |\n",t[3][1],t[3][2],t[3][3]);
    printf("+---+---+---+ \n");
}

/*
manhattan()
{
	int sum1[10];
	sutile1();
	tile2();
	tile3();
	tile4();
	tile5();
	tile6();
	tile7();
	tile8();
	tile9();
}
*/


void main()
{
	int i=0,flag=0,j,p,temp,start,l=0,v;
	char m;
	printf("enter the 8-puzzle , enter 0 for blank \n");
	for(i=1;i<=3;i++)
	 for(l=1;l<=3;l++)
	  scanf("%d",&q[i][l]);
	for(i=1;i<=3;i++)
	 for(l=1;l<=3;l++)
	  t[i][l]=q[i][l];
	represent1();
	printf("enter the puzzle's final state \n");
	for(i=1;i<=3;i++)
	 for(l=1;l<=3;l++)
	  scanf("%d",&s[i][l]);
	i=0;
	represent2();
	while(flag!=1)
	{
	    for(p=1;p<=3;p++)
	     for(l=1;l<=3;l++)
   		 {
          if(t[p][l]==0)
          start=p;
      	  int start1=l;
    	}
	    i=0;
	    j=0;
	    v=0;
	    while(i!=9&&j!=9&&v!=9)
	    {
	        if(s[i][j]==t[i][j])
	        {
	        	i++;
	            j++;
	        }
	        v++;
	    }
	    if(i==9&&j==9)
	    flag=1;
	    printf("enter the next move to change the position of the zero. press u for up, d for down , l for left and r for right %d \n",start);
	    scanf("%c",&m);
	    if(m=='l')
	    {	
	        if(t[1][1]==0||t[2][1]==0||t[3][1]==0)
	         printf("this move is invalid\n");
	        else
	        {
	         t[start][start1]=t[start-1][start1];
	         t[start-1][start1]=0;
	        }
	        represent3();
	    }
	    if(m=='r')
	    {
	        if(t[1][3]==0||t[2][3]==0||t[3][3]==0)
	         printf("this move is invalid\n");
	        else
	        {
	         t[start][start1]=t[start+1][start1];
	         t[start+1][start1]=0;
	        }
	        represent3();
	     }
	    if(m=='u')
	    {
	        if(t[1][1]==0||t[1][2]==0||t[1][3]==0)
	         printf("this move is invalid \n");
	        else
	        {
	         t[start][start1]=t[start][start1+1];
	         t[start][start1+1]=0;
	        }
	        represent3();
	    }
	    if(m=='d')
	    {
	        if(t[3][1]==0||t[3][2]==0||t[3][3]==0)
	         printf("this move is invalid\n");
	        else
	        {
	         t[start][start1]=t[start][start1-1];
	         t[start][start1-1]=0;
	        }
	        represent3();
	    }
	}
	printf("you have solved the 8 puzzle problem, congratulations!!! \n");
}
