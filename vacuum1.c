#include<stdio.h>
int j=1,area[20];
int right() // used to move the block pointer in the right direction
{
 printf("block %d is perceived empty, so now we move right \n ",j);
 j=j+1;
}
 
/*  // function not used here as we assume the pointer to be at the start point and not in the middle.
int left()  // used to move the block pointer in the left direction
{
 j=j-1;
}
*/

int suck() // clears the block of any dirt
{
 printf("block %d has been detected dirty \n ",j);
 area[j++]=0;
 printf("block %d has been cleaned and now moves right to block %d to perceive for dirtyness \n",j-1,j);
}

void main()
{
 int i,n;
 printf("enter the number of blocks");
 scanf("%d",&n);
 printf("enter the pattern of dirt to be cleaned,enter 1 for dirt, 0 for clean \n");
 for(i=1;i<=n;i++)
  scanf("%d",&area[i]);
 while(j<=n)
 {
  if(area[j]==1)
   suck();
  else
   right();
 }
}
