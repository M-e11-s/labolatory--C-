#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<time.h>




int Menu()
{
  int num;
  printf("------ Menu --------\n");
  printf("1)Task_1\n");
  printf("2)Task_2\n");
  printf("3)Task_3\n");
  printf("4)Task_4\n");





  printf("-> ");
  scanf("%d", &num);
  return num;
}

int main()
{
  srand(time(NULL));
  
  int num;
  do {
    num = Menu();
    switch (num)
    {
    		case 1:
    				{
    					const int column=4, line=4;
    					int a[column][line];
    					int c,l;
    					int next=0;

    					for (c=0;c<column;c++)
    						for(l=0;l<line;l++)
    						{
    							a[c][l]=c-(2*l);
    							printf("%d\t",a[c][l]);
    							next++;
    							if (next%line==0)
    							{
    								printf("\n");
    							}
                }
                printf("\n\n");
              for (c=0;c<column;c++)
                for(l=0;l<line;l++)
                {
                  if (a[c][l]!=0)
                  {
                    a[c][l]=1;
                  }
                  printf("%d\t",a[c][l]);
                  next++;
                  if (next%line==0)
                  {
                    printf("\n");
                  }

                }
              printf("\n");
              break;
    				}
        case 2:
            {
              const int column=5, line=5;
              float sum1=0,sum2=0,change_sum=0;
              float multi;
              float avarage1,avarage2,avarage3,avarage4,avarage5;
              float max=-100000,min=100000;
              int index_1, index_2, index_3, index_4;
              float a[column][line];
              int c=0,l=0;
              int next=0;


              for (c=0;c<column;c++)
                for (l=0;l<line;l++)
                {
                  a[c][l]= (rand()% 3615-780)/100.0;
                  printf("%.1f\t",a[c][l] );
                  next++;
                  if (next%5==0)
                  {
                    printf("\n");
                  }
                }
              for (c=0;c<column;c++)
                for (l=0;l<line;l++)
                {
                  if (max<a[c][l])
                  {
                    max=a[c][l];
                    index_1=c;
                    index_2=l;
                  }
                 if (min>a[c][l])
                  {
                    min=a[c][l];
                    index_3=c;
                    index_4=l;
                  }
                }
                printf("max:%.1f  index[%d,%d]\n",max,index_1+1,index_2+1);
                printf("min:%.1f  index[%d,%d]\n",min,index_3+1,index_4+1);
                printf("\n");

                //avarage

                for (l=0;l<line;l++)
                {
                  change_sum+=a[0][l];
                }
                avarage1=change_sum/column;
                change_sum=0;

                for (l=0;l<line;l++)
                {
                  change_sum+=a[1][l];
                }
                avarage2=change_sum/column;
                change_sum=0;

                for (l=0;l<line;l++)
                {
                  change_sum+=a[2][l];
                }
                avarage3=change_sum/column;
                change_sum=0;

                for (l=0;l<line;l++)
                {
                  change_sum+=a[3][l];
                }
                avarage4=change_sum/column;
                change_sum=0;

                for (l=0;l<line;l++)
                {
                  change_sum+=a[4][l];
                }
                avarage5=change_sum/column;
                change_sum=0;

                printf("avarage1=%.2f\n",avarage1);
                printf("avarage2=%.2f\n",avarage2);
                printf("avarage3=%.2f\n",avarage3);
                printf("avarage4=%.2f\n",avarage4);
                printf("avarage5=%.2f\n",avarage5);
                printf("\n");



                for (c=0;c<column;c++)
                  for(l=0;l<line;l++)
                  {
                    if (c==l)
                    {
                      sum1+=a[c][l];
                    }
                  }
                printf("sum main diag:%.2f\n", sum1 );
                printf("\n");
                for (c=0;c<column;c++)
                  for(l=0;l<line;l++)
                  {
                    if (c<l)
                    {
                      sum2+=a[c][l];
                    }
                  }
                printf("sum under main diag:%.2f\n", sum2 );
                printf("\n");
                break;
            }
            case 3:
            {
              const int column=100,line=100;
              int c,l;
              int n,m;
              int a,b;
              int next;
              int buffer_1=0,buffer_2=0;
              int A[column][line];

              printf("input column_num:");
              scanf("%d",&m);
              if (m>column)
              {
                printf("Sorry but column must be <100\n");
                printf("input column_num:");
                scanf("%d",&m);
              }
              printf("input line_num:");
              scanf("%d",&n);
              if (n>line)
              {
                printf("Sorry but column must be <100\n");
                printf("input column_num:");
                scanf("%d",&n);
              }

              printf("Rand generator\n");
              printf("firs_num<second_num\n");
              printf("Input firs_num:");
              scanf("%d",&a);
              printf("Input second_num:");
              scanf("%d",&b);
              if (a>b)
              {
                printf("firs_num<second_num\n");
                printf("Input firs_num: ");
                scanf("%d",&a);
                printf("Input second_num: ");
                scanf("%d",&b);

              }
              printf("\n");

              for (c=0;c<m;c++)
                  for (l=0;l<n;l++)
                  {
                    A[c][l]=a+ (rand() % (b-a+1));

                    printf("%5d",A[c][l] );
                    next++;
                    if (next%n==0)
                    {
                      printf("\n");
                    }
                  }
              printf("\n");
              buffer_2=A[0][n-1];
              for (c=0;c<m;c++)
                  for (l=0;l<n;l++)
                  {
                    if (c==l)
                    {
                      buffer_1=A[c][l];
                      A[c][l]=buffer_2;
                      
                    }

                    if (c+l==n-1)
                    {
                      buffer_2=A[c][l];
                      A[c][l]=buffer_1;
                    }

                    printf("%5d",A[c][l] );
                    next++;
                    if (next%n==0)
                    {
                      printf("\n");
                      printf("\n");

                    }
                  }
              printf("\n");
              break;
            }

            case 4:
            {
              const int column=100, line=100;
              int A[column][line];
              int c,l;
              int index_1,index_2;
              int k;
              int n,m;
              int max=-100000000;
              int next=0;


              printf("input column_num:");
              scanf("%d",&m);
              printf("input line_num:");
              scanf("%d",&n);
              k=m/2;


              for (c=0;c<m;c++)
                for(l=0;l<n;l++)
                {
                  A[c][l]= -1000+ (rand() % (2001));
                  printf("%d\t",A[c][l]);
                  next++;


                  if (next%n==0)
                  {
                    printf("\n");
                  }
                }
                printf("\n\n");
                for (c=0;c<m;c++)
                {
                  for(l=n-1;l<=n && l<=k;l++)
                  {
                    if(A[c][l]>max)
                    {
                      max=A[c][l];
                      index_1=c;
                      index_2=l;
                    }
                  }
                  for (l=0;l>=n && l>k; l--)
                  {
                    if(A[c][l]>max)
                    {
                      max=A[c][l];
                      index_1=c;
                      index_2=l;
                    }
                  }

                }
                printf("max= %d  A[%d,%d]\n",max,index_1, index_2 );    
              }




            
    }
    

  } while (num != 0);
  
    
  

  return 0;
}
