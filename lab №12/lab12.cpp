#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>


int Menu()
{
	int num;
	printf("------ Menu --------\n");
	printf("1. Task_1\n");
	printf("2. Task_2\n");
	printf("3. Task_3.1\n");
	printf("4. Task_3.2\n");
	printf("5. Task_3.3\n");

	printf("-> ");
	scanf("%d", &num);
	printf("\n");
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
				int N;
				int j_1;
				int score=0;
				int A;
				int a[10000] = {2,4,6,-5,-10,12,3,6,9,12};
				printf("a[N], please input N: ");
				scanf("%d", &N);
				for (int i=1; i<=N;i++)
				{
    		/*a[i]=-500+ rand()%1001;
    		printf("a[%d]: %d \t", i,a[i]);
    		if (i%5==0) printf ("\n"); */
					A=a[i+1]-a[i];
					if (A==a[i+2]-a[i+1] && A>0) score++;
					else A=0;
				}
				printf("score= %d", score);
				printf("\n");
				break;
			}
			case 2:
			{
				int A[1000];
				int B[1000];
				int N;
				int i=1;
				int j=1;
				printf("A[N], please input N: ");
				scanf("%d", &N);
				for (; i<=N;i++)
				{
					A[i]=-500+rand()%1001;
					printf("A[%d]: %d \t", i,A[i]);
					if (i%5==0) printf("\n");


				}
				printf("\n");

				for (i=2;i<=N;i+=2)
				{
					B[i]=A[i];
					printf("B[%d]: %d\t",i,B[i]);
					if (i%5==0) printf("\n");
				}
				for (i=1;i<=N;i+=2)
				{
					B[i]=A[i];
					printf("B[%d]: %d\t",i,B[i]);

				}
				printf("\n");


				break;
			}

			case 3:
			{
				int A[10000];
				int k;
				int N;
				int i;
				int j;
				int buffer;
				int b;
				printf("Please input N: ");
				scanf("%d",&N);
				printf("Please input k: ");
				scanf("%d", &k);

				if (k>1 && k<4 && k<N)
				{
					for (i=0;i<N;i++)
					{
						A[i]=-500+rand()%1001;
						printf("A[%d]: %d\t",i,A[i]);
						if (i%5==0) printf("\n");
					}
					printf("\n");
				}
				for (j=1;j<=k;j++)
				{
					buffer = A[1];
					for (i=0;i<N;i++)
					{
						A[i]=A[i+1];
					}
					A[N-1]=buffer;
				}
				for (i=0;i<N;i++)
				{
					printf("A[%d]: %d\t",i+1, A[i] );

					if (i+1%5==0) printf("\n");
				}
				break;

			}

			case 4:
			{
				int A[1000];
				int N;
				int i;
				int fl;
				int min;
				printf("Please input N: ");
				scanf("%d",&N);
				for (i=0;i<N;i++)
					{
						A[i]=-500+rand()%1001;
						printf("A[%d]: %d\t",i+1,A[i]);
						if (i+1%5==0) printf("\n");
					}
				printf("\n");
				do 
				{
					fl=0;
					for (i=1;i<N;i++)
					{
						if(A[i-1]<A[i])
						{
							min = A[i]; 
							A[i] = A[i-1];
							A[i-1]=min;
							fl=1;
						}
					}
				}while(fl);
				printf("\n");
				for (i=0;i<N;i++)
				{
					printf("A[%d]: %d\t ",i+1,A[i]);
					if(i+1%5==0) printf("\n");
				}

				printf("\n");
				break;
			}





			case 5:
			{
				int N;
				int A[1000]={5,5,6,6,6,234,353,786,7,7,7,10,34};
				int fl;
				int B[1000];
				int score=0;
				int min;
				int j=0;
				int i;
				int change_b;
				int b=0;
				printf("Please input N:");
				scanf("%d", &N);

				for (i=0;i<N;i++)
				{
					printf("A[%d]: %d\t",i+1,A[i]);
					b++;
					if (b%5==0) printf("\n");
				}
				printf("\n");


				do 
				{
					fl=0;
					for (i=1;i<N;i++)
					{
						if(A[i-1]>A[i])
						{
							min = A[i]; 
							A[i] = A[i-1];
							A[i-1]=min;
							fl=1;
						}
					}
				}while(fl);

				printf("\n");
				for (i=0;i<N;i++)
				{
					printf("A[%d]: %d\t ",i+1,A[i]);
					b++;
					if(b%5==0) printf("\n");
				}
				printf("\n");

				
				/*for (i=0;i<N;i++)
				{
					if(A[i]!=B[j])
					{
						for(j=0;j=<i;j++)
						{
							B[j]=A[i];

						}
					}
				}

				for (i=0;i<j;i++)
				{
					printf("%d\t",B[i]);
				} */



				for (i=0;i<N;i++)
				{
					
					if (A[i]==A[i+1])
					{
						A[i]=0;
						score++;
					}
				}

				for (i=0;i<10;i++)
				{
					if (A[i]==0)
					{
						printf("");
					}
					else
					{
						b++;
						if (b%5==0) printf("\n");
						printf("%d\t",A[i] );
					}
				}
				printf("\n");

			}
		}

			} while (num != 0);
			return 0;
		}
