#include<stdio.h>
int j=1,area[20];
int right()
{
 printf("block %d is perceived empty, so now we move right \n ",j);
 j=j+1;
}

int left()
{
 j=j-1;
}

int suck()
{
 printf("block %d has been detected dirty \n ",j);
 area[j++]=0;
 printf("block %d has been cleaned and now moves right to block %d to
check for dirtyness \n",j-1,j);
}

void main()
{
 int area[20],i,n;
 printf("enter the number of blocks");
 scanf("%d",&n);
 printf("enter the pattern of dirt to be cleaned , enter 1 for dirt, 0
for clean \n");
 for(i=1;i<=n;i++)
 {
  scanf("%d",&area[i]);
 }
 while(j<=n)
 {
  if(area[j]==1)
   suck();
  else
   right();
 }
}
