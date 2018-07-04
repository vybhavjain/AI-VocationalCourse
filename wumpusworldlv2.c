//WUMPUS PROBLEM LEVEL 2

#include<stdio.h>

int p[50];
int flag2[50];
char start;
char question[20];

void reveal()
{

        if (start==25&&flag2[start]==1)
         {
                p[1]='s';
                p[2]=' ';
                flag2[start]=0;
         }

        if (start==26&&flag2[start]==1)
         {
                p[3]=' ';
                p[4]=' ';
                flag2[start]=0;
         }

        if (start==27&&flag2[start]==1)
         {
                p[5]='b';
                p[6]=' ';
                flag2[start]=0;
         }

        if (start==28&&flag2[start]==1)
         {
                p[7]='P';
                p[8]=' ';
                flag2[start]=0;
         }

        if (start==29&&flag2[start]==1)
         {
                p[9]='W';
                p[10]='s';
                flag2[start]=0;
         }

        if (start==30&&flag2[start]==1)
         {
                p[49]='s';
                p[11]='G';
                p[12]='b';
                flag2[start]=0;
         }

        if (start==31&&flag2[start]==1)
         {
                p[13]='P';
                p[14]=' ';
                flag2[start]=0;
         }

        if (start==32&&flag2[start]==1)
         {
                p[15]='b';
                p[16]=' ';
                flag2[start]=0;
         }

        if (start==33&&flag2[start]==1)
         {
                p[17]='s';
                p[18]=' ';
                flag2[start]=0;
         }

        if (start==34&&flag2[start]==1)
         {
                p[19]=' ';
                p[20]=' ';
                flag2[start]=0;
         }

        if (start==35&&flag2[start]==1)
         {
                p[21]='b';
                p[22]=' ';
                flag2[start]=0;
         }

        if (start==36&&flag2[start]==1)
         {
                p[23]=' ';
                p[24]=' ';
                flag2[start]=0;
         }

        if (start==37&&flag2[start]==1)
         {
                p[41]=' ';
                p[42]=' '; 
                flag2[start]=0;
         }

        if (start==38&&flag2[start]==1)
         {
                p[43]='b';
                p[44]=' ';
                flag2[start]=0;
         }

        if (start==39&&flag2[start]==1)
         {
                p[45]='P';
                p[46]=' ';
                flag2[start]=0;
         }

        if (start==40&&flag2[start]==1)
         {
                p[47]='b';
                p[48]=' ';
                flag2[start]=0;
         }
}


representation()
        {
            printf("+---+---+---+---+ \n");
                printf("|%c?%c|%c?%c|%c?%c|%c?%c|\n",p[1],p[2],p[3],p[4],p[5],p[6],p[7],p[8]);
                printf("|  %c|  %c|  %c|  %c|\n",p[25],p[26],p[27],p[28]);
                printf("+---+---+---+---+ \n");
                printf("|%c?%c|%c?%c|%c?%c|%c?%c|\n",p[9],p[10],p[11],p[12],p[13],p[14],p[15],p[16]);
                printf("|  %c|%c %c|  %c|  %c|\n",p[29],p[49],p[30],p[31],p[32]);
                printf("+---+---+---+---+ \n");
                printf("|%c?%c|%c?%c|%c?%c|%c?%c|\n",p[17],p[18],p[19],p[20],p[21],p[22],p[23],p[24]);
                printf("|  %c|  %c|  %c|  %c|\n",p[33],p[34],p[35],p[36]);
                printf("+---+---+---+---+ \n");
                printf("|%c?%c|%c?%c|%c?%c|%c?%c|\n",p[41],p[42],p[43],p[44],p[45],p[46],p[47],p[48]);
                printf("|  %c|  %c|  %c|  %c|\n",p[37],p[38],p[39],p[40]);
                printf("+---+---+---+---+ \n");

        }


void main()
        {
                int flag =0,flag1,point=0;
                char mov;
                for(int i=0;i<50;i++)
                {
                    question[i]='?';
                    flag2[i]=1;
                    p[i]=' ';
                }
                start=37;
            p[start]='^';
            reveal();
                representation();
                
                while(flag!=1)
                {
                        printf("enter l for turning left, r for turning right,f for moving forward in the facing direction,g for grabbing and s for shooting \n");
                        scanf("%c",&mov);
                        //printf("%c",mov);
                    if(mov=='l')
                        {
                                if(p[start]=='^')
                                 p[start]='<';
                            else if(p[start]=='<')
                             p[start]='v';
                            else if(p[start]=='v')
                             p[start]='>';
                            else
                             p[start]='^';      
                                representation();
                        }

                        if(mov=='r')
                        {
                                if(p[start]=='^')
                                 p[start]='>';
                            else if(p[start]=='<')
                             p[start]='^';
                            else if(p[start]=='v')
                             p[start]='<';
                            else
                             p[start]='v';      
                                representation();
                        }

                        if(mov=='f')
                        {
                                char temp=p[start];
                                int temp1=start;
                                if(p[start]=='^')
                                {
                                  if(start==25)
                                        printf("invalid move try again \n");
                                  else if(start==26)
                                        printf("invalid move try again \n");
                                  else if(start==27)
                                        printf("invalid move try again \n");
                                  else if(start==28)
                                        printf("invalid move try again \n");    
                                  else
                                   start-=4;
                                   reveal();
                                }
                                else if(p[start]=='<')
                                {
                                  if(start==25)
                                        printf("invalid move try again \n");
                                  else if(start==29)
                                        printf("invalid move try again \n");
                                  else if(start==33)
                                        printf("invalid move try again \n");
                                  else if(start==37)
                                        printf("invalid move try again \n");    
                                  else
                                   start-=1;
                                   reveal();

                                }
                                else if(p[start]=='v')
                                 {
                                  if(start==37)
                                        printf("invalid move try again \n");
                                  else if(start==38)
                                        printf("invalid move try again \n");
                                  else if(start==39)
                                        printf("invalid move try again \n");
                                  else if(start==40)
                                        printf("invalid move try again \n");    
                                  else
                                        start+=4;
                                    reveal();
                                 }
                                else
                                {
                                  if(start==28)
                                        printf("invalid move try again \n");
                                  else if(start==32)
                                        printf("invalid move try again \n");
                                  else if(start==36)
                                        printf("invalid move try again \n");
                                  else if(start==40)
                                        printf("invalid move try again \n");    
                                  else
                                 start+=1;
                                 reveal();
                                }
                                p[temp1]=' ';
                            p[start]=temp;
                            point-=1;
                                representation();
                        }

                        if(mov=='s')
                        {
                                if(p[start]=='^'&&start==33)
                           {
                                                p[9]=' ';
                                                printf("you have shot the wumpus!! \n");
                                                point-=10;
                                }
                                else if(p[start]=='<'&&start==30)
                                {
                                                p[9]=' ';
                                                printf("you have shot the wumpus!! \n");
                                                point-=10;
                                }
                                else if(p[start]=='v'&&start==25)
                                {
                                        p[9]=' ';
                                        printf("you have shot the wumpus!! \n");
                                        point-=10;
                                }
                                else if(p[start]=='>'&&p[start+1]=='W')
                                {
                                                p[9]=' ';
                                                printf("you have shot the wumpus!! \n");
                                                point-=10;
                                }
                                else
                                {
                                        printf("arrow shot , no wumpus present !! \n");
                                        point-=10;

                                }

                        }


                        if(mov=='g')  // must write present on gold square
                        {
                                if(start==30)
                                {
                                point+=1000;
                                printf("you have grabbed the gold, go back to start \n");
                                printf("or do you want to exit? press 1 for yes , 0 for no \n");
                                scanf("%d",&flag1);
                                if(flag1==1)
                                        flag=1;
                            }
                            else
                            {
                                printf("nothing to grab here , try in another square \n");
                            }
                        }
                        if(start==29)
                        {
                                printf("wumpus detected, you are dead!! \n ");
                                point-=1000;
                                flag=1;
                        }
                        if(start==28) // 31,39
                        {
                                printf("Pit detected, you are dead!! \n ");
                                point-=1000;
                                flag=1;
                        }
                        if(start==31) // 31,39
                        {
                                printf("Pit detected, you are dead!! \n ");
                                point-=1000;
                                flag=1;
                        }
                        if(start==39) // 31,39
                        {
                                printf("Pit detected, you are dead!! \n ");
                                point-=1000;
                                flag=1;
                        }
                }
                printf(" your score is %d \n",point);
    }


//left,right,forward,grab,shoot

