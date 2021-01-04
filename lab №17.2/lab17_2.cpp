#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <time.h>


int Menu(){
  int num;
  printf("------ Menu --------\n");
  printf("1)Task_1\n");
  printf("2)Task_2\n");
  printf("3)Task_3.1\n");
  printf("4)Task_3.2\n");
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
    switch (num) {
    case 1: 
    {

      int column, line;
      int arr[100][100];
      int brr[10000];
      int c, l;
      int fl;
      int next = 0;
      int buffer;
      int tmp;
      printf("Matrix column size: ");   scanf("%d", &column);
      printf("Matrix line size: ");       scanf("%d", &line);
      for (l = 0; l < line; l++)
        for (c = 0; c < column; c++)
        {
          arr[l][c] = -100 + rand() % 201;
          printf("%d\t", arr[l][c]);
          next++;
          if (next%line== 0)
            printf("\n\n");

        }

        for (l = 0; l < line;l++)
        {
        	if(l%2==0)
        	{
        
        			do
        			{
        				fl=0;
        				for (c = 1; c < column; c++)
        				
        					if (arr[l][c-1]<arr[l][c])
        					{
        						tmp=arr[l][c];
        						arr[l][c]=arr[l][c-1];
        						arr[l][c-1]=tmp;
        						fl=1;
        					}
        				
        		
        			}while(fl);

        	}
        	else tmp=arr[l][1];
        }

        printf("\n\n");

        for (l = 0; l < line; l++)
        	for (c = 0; c < column; c++)
        		{
        		  printf("%d\t", arr[l][c]);
        		  next++;
        		  if (next%line== 0)
        		    printf("\n\n");

        		}
        break;
	}

	case 2:
	{
		int arr[100][100]; 
		int c,l;
		int line, column;
		int next=0;
		int tmp;
		int without_0 = 0;
		printf("Matrix column size: ");     scanf("%d", &column);
      	printf("Matrix line size: ");       scanf("%d", &line);

      	for (l = 0; l < line; l++)
        	for (c = 0; c < column; c++)
        	{
        	  arr[l][c] = rand() % 2;
        	  printf("%d\t", arr[l][c]);
       	   	  next++;
        	  if (next%line== 0) printf("\n\n");

        	}
        for (l = 0; l < line; l++)
        {
        	if(arr[l][c]!=0 && 0)
        		printf("1\n");
        }
        



        printf("without_0: %d\n\n",without_0 );


        break;
	}

	case 3:
	{
		float arr[100][100]; 
		int c,l;
		int line, column;
		int next=0;
		int tmp;
		int fl;
		int x=0;
		int i, brr[10000];
		printf("Matrix column size: ");     scanf("%d", &column);
      	printf("Matrix line size: ");       scanf("%d", &line);

		for (l = 0; l < line; l++)
        	for (c = 0; c < column; c++)
        	{
        	  arr[l][c] = (-100001+rand() % 200001)/100.0;
        	  printf("%.2f\t", arr[l][c]);
       	   	  next++;
        	  if (next%line== 0) printf("\n\n");

        	}
        printf("\n\n");

        for (l = 0; l < line; l++)
        	for (c = 0; c < column; c++)
        	{
        		brr[x]=arr[l][c];
        		x++;
        	}

        do 
        {
        	fl=0;
        	for (i=1;i<x;i++)
        	{
        		if(brr[i-1]>brr[i])
        		{
        			tmp=brr[i];
        			brr[i]=brr[i-1];
        			brr[i-1]=tmp;
        			fl=1;
        		}
        	}
        }while(fl);
        x=0;
        for (l = 0; l < line; l++)
        	for (c = 0; c < column; c++)
        	{
        		arr[l][c]=brr[x];
        		x++;
        	}
        for (l = 0; l < line; l++)
        	for (c = 0; c < column; c++)
        	{
        		printf("%.2f\t", arr[l][c]);
       	   	  	next++;
        	  	if (next%line== 0) printf("\n\n");

        	}
        break;
	}
	case 4:
	{
		float arr[100][100]; 
		int c,l;
		int line, column;
		int next=0;
		int tmp;
		int fl;
		int x=0;
		int i, brr[10000];
		printf("Matrix column size: ");     scanf("%d", &column);
      	printf("Matrix line size: ");       scanf("%d", &line);

		for (l = 0; l < line; l++)
        	for (c = 0; c < column; c++)
        	{
        	  arr[l][c] = (-100001+rand() % 200001)/100.0;
        	  printf("%.2f\t", arr[l][c]);
       	   	  next++;
        	  if (next%line== 0) printf("\n\n");

        	}
        printf("\n\n");

        for (l = 0; l < line; l++)
        	for (c = 0; c < column; c++)
        	{
        		brr[x]=arr[l][c];
        		x++;
        	}
        for (i=1;i<x;i++)
        {
        	tmp=brr[i];
        	for (int j=i-1;j>=0 && brr[j]>tmp;j--)
        	{
        		brr[j+1]=brr[j];
        		brr[j]=tmp;
        	}
        }
        x=0;
        for (l = 0; l < line; l++)
        	for (c = 0; c < column; c++)
        	{
        		arr[l][c]=brr[x];
        		x++;
        	}
        for (l = 0; l < line; l++)
        	for (c = 0; c < column; c++)
        	{
        		printf("%.2f\t", arr[l][c]);
       	   	  	next++;
        	  	if (next%line== 0) printf("\n\n");

        	}
        break;


	}


    }
  } while (num != 0);
  return 0;
}