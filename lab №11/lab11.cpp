#define _CRT_SECURE_NO_WARNINGS_
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>
#include<math.h>



int Menu()
{
  int num;
  printf("------ Menu --------\n");
  printf("1)Task_1\n");
  printf("2)Task_2\n");
  printf("3)Task_3\n");
  printf("4)Task_4\n");
  printf("0)Exit\n");






  printf("-> ");
  scanf("%d", &num);
  return num;
}

int main()
{
  int num;
  int n,m,k,f=0,g=0;
  int j[m];
  float h[n];
  double o[n];
  int i;
  int w[n];
  int sum=0;
  int p=1;
  int b,a,min=10000,max=-10000;
  int num_first, num_second;
  double hzz[19];
  do {
    num = Menu();
    switch (num)
    {
        case 1: 
                printf ("Hi, I`m boss of the num_generator.\nPlz input num (1-10): ");
                scanf("%d", &n);
                    switch (n)
                    {
                        case 1: 
                                for (i=1; i<=20; i++)
                                {
                                  hzz[i]= -4+ (rand() % 3 );
                                  printf("hzz[%d]: %.0f\n",i,hzz[i]);
                                }
                        hzz[i]=0;
                        break;

                        case 2: 
                                for (i=1; i<=20; i++)
                                {
                                  hzz[i]= 100+ (rand() % 200 )/1.0;
                                  printf("hzz[%d]: %.2f\n",i,hzz[i]);
                                }
                        hzz[i]=0;
                        break;

                        case 3: 
                                for (i=1; i<=20; )
                                {
                                  hzz[i]= -35+(rand() % 35 );
                                   if (fmod(hzz[i],2.0)==0)
                                    {
                                      printf("hzz[%d]: %.0f\n",i,hzz[i]);
                                    } 
                                  i++; 
                                }
                        hzz[i]=0;
                        break;
                        case 4: 
                                for (i=1; i<=20; i++)
                                {
                                  hzz[i]= -128+(rand() % 256 );
                                  printf("hzz[%d]: %.0f\n",i,hzz[i]);
                                   
                                }
                        hzz[i]=0;
                        break;
                        case 5: 
                                for (i=1; i<=20; )
                                {
                                  hzz[i]= -7+(rand() % 20 );
                                   if (fmod(hzz[i],2.0)!=0)
                                    {
                                      printf("hzz[%d]: %.0f\n",i,hzz[i]);
                                    } 
                                  i++; 
                                }
                        hzz[i]=0;
                        break;
                        case 6: 
                                for (i=1; i<=20; i++)
                                {
                                  hzz[i]= (rand() % 3615 -785)/100.0;
                                  printf("hzz[%d]: %.2f\n",i,hzz[i]);
                                }
                        hzz[i]=0;
                        break;
                        case 7: 
                                for (i=1; i<=20; i++)
                                {
                                  hzz[i]= -100+(rand() % 201);
                                  printf("hzz[%d]: %.2f\n",i,hzz[i]);
                                }
                        hzz[i]=0;
                        break;
                        case 8: 
                                for (i=1; i<=20; i++)
                                {
                                  hzz[i]= 23+(rand() % 42);
                                  printf("hzz[%d]: %.2f\n",i,hzz[i]);
                                }
                        hzz[i]=0;
                        break;
                        case 9: 
                                for (i=1; i<=20; i++)
                                {
                                  hzz[i]= (rand() % 2);
                                  printf("hzz[%d]: %.2f\n",i,hzz[i]);
                                }
                        hzz[i]=0;
                        break;
                        case 10: 
                                for (i=1; i<=20; i++)
                                {
                                  hzz[i]= (412+(rand() % 494 ))/100.0;
                                  printf("hzz[%d]: %.2f\n",i,hzz[i]);
                                }
                        hzz[i]=0;
                        break;




                    }
      break;
      case 2: 
              printf("M: ");
              scanf("%d", &m);
              printf("N: ");
              scanf("%d", &n);
              printf("K (3<=k<=10): ");
              scanf("%d", &k);
              if (k>=3 && k<=10)
              {
                  for (i=1; i<=m; i++)
                  {
                    j[m]= (-45+(rand() % 91));
                    printf("%d \t", j[m]);
                    if (i%k==0) 
                    {
                      printf("\n");
                    }
                    
                  }
                  printf("\n\n");
                  for (i=1; i<=n; i++)
                  {
                    o[n]= (-5000.0+(rand() % 5001))/1000.0;
                    printf("%.3f \t", o[n]);
                    if (i%k==0) 
                    {
                      printf("\n");
                    }
                    
                  }
                  printf("\n\n\n");
              }
      break;
      case 3: 
             printf("n: ");
             scanf("%d", &n);
             printf("a: ");
             scanf("%d", &a);
             printf("b: ");
             scanf("%d", &b);
             for(i=0; i<n; i++)
             {
               h[i] = a+rand()%(b-a+1);
               if(min>=h[i]) min=h[i];
               printf("%f \t", h[i]);
             }
             
             printf("\nmin: %d\t", min);
             for (i=0; i<n;i++)
             {
               if (h[i]>0)
               {
               num_first=i+1;
               
               break;
               }
             }
             printf ("\n\n");
             for (i=n-1; i>=0;i--)
             {
               if (h[i]>0)
               {
               num_second=i;
               
               break;
               }
             }
              if (num_second==num_first) 
              {
                printf("none positive element\n");
              }
             else 
             {
               for(i=num_first; i<=num_second-1; i++)
               {
                 sum+=(h[i]);
                 printf("h[i]: %f\n", h[i]);
               }
             }
             printf("sum: %d\n", sum);
      break;

      case 4: 
              for(i=1; i<=12; i++)
              {
               w[i] = -500+rand()%(1001);
               if(max<w[i]) 
               {
                 max=w[i]; 
                 p=i;
               }
               printf("%.2d\t", w[i]);
              }
              printf("\n");
              w[p]=w[11];
              w[11]=max;
              for(i=1; i<=12; i++)
              {
               printf("%.2d\t", w[i]);
              }
              printf("\n");
              




    }
    

  } while (num != 0);
  return 0;
}
