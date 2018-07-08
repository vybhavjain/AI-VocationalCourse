#include<stdio.h>

int n,a[20][20],b[20][20],i,j,x,k=0,t,f=0,min;
int dist[10];
int sld[10];
int hu[10];
char name[10];

void allocatesld()   // this function passes the straight line distance values to the program.
{
  sld[1]=366; // arad
  sld[2]=374; //zerind
  sld[3]=253; //sibiu
  sld[4]=329; //timisoara
  sld[5]=176; //fragaras
  sld[6]=193; // rimmi
  sld[7]=380; //oradea
  //sld[8]=;
  //sld[9]=; 
}

/*
void allocatesname()   // can be created and used if name of cities is to be mentioned instead of node numbers.
{
   name[1] ='arad';
   name[2] ='zerind';
   name[3] ='sibiu';
   name[4] ='timisoara';
   name[5] ='fragaras';
   name[6] ='rimmi';
   name[7] ='oradea';
}
*/
int minimum()  // returns the minimum value of the heuristic function for each available node which here is only g(n)
{
	int l=0;
	min=999;
	for(l=0;l<=f;l++)
	{
		if(dist[l]<=min)
			{
				t=l;
				min=dist[l];
			}
	}
	return min;
}

int minimum1()  // returns the minimum value of the heuristic function for each available node which is h(n)+g(n)
{
	int l=0;
	min=999;
	for(l=0;l<=f;l++)
	{
		if(hu[l]<=min)
			{
				t=l;
				min=hu[l];
			}
	}
	return min;
}

void read_graph() // reads the graph 
{
   printf("Enter number of vertices: \n");
 scanf("%d",&n);
 printf("Enter the adjacency matrix: \n");
 for(i=1;i<=n;i++)
  for(j=1;j<=n;j++)
   scanf("%d",&a[i][j]);

}
void read_cost()  // reads the distance or cost
{
 printf("Enter the cost matrix: \n");
 for(i=1;i<=n;i++)
  for(j=1;j<=n;j++)
   scanf("%d",&b[i][j]);
}

void main()
{
	int source;
	int count=0;
	read_graph();
	read_cost();
 	printf("Enter the source node \n");
    scanf("%d",&source);
    int temp1=source;
    allocatesld();
    //allocatesname();
    for(i=1;i<=n;i++)
    	if(a[source][i]==1) // chechks the connection among every node that is BFS
    	{
    		dist[k++]=sld[i];
    		f++;
    		count=1;
    	}
    x=minimum();	
    source=t;
    printf("path starts from starting point which is arad and then visits node %d and distance travelled is %d \n",source,b[temp1][source]);
    int total=b[temp1][source];  // to store the distance travelled each time
    while(count!=2&&source!=6)  // count refers to a particular level in the tree and source number refers to the destination
    	{
    		k=0;
    		temp1=source;
    		f=0;
    		for(i=1;i<=n;i++)
        	if(a[source][i]==1)  // chechks the connection among every node that is BFS
     		{
    		 hu[k++]=sld[i]+b[source][i];
    		 f++;
    	    }
            source=t+source;
         	count+=1;
         	int y=minimum1();
         	total+=b[temp1][source];
         	printf("from there, next visits %d which is at a distance of %d \n",source,b[temp1][source]);	
		}    
		printf("Total distance travelled is %d \n",total);
}
