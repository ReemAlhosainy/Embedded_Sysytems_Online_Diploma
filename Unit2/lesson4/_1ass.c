#include <stdio.h>
#include<string.h>
int main()
{
	/*1:
	int arr1[2][2],arr2[2][2];
	printf("Enter the elements of 1st matrix\n");
	fflush(stdout);
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("Enter a%d%d : ",i+j,j+1);
			fflush(stdout);
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("Enter the elements of 2nd matrix\n");
	fflush(stdout);
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("Enter b%d%d : ",i+j,j+1);	
			fflush(stdout);
			scanf("%d",&arr2[i][j]);
		}
	}
	printf("Sum Of Matrix:\n");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("%d ",arr1[i][j]+arr2[i][j]);
		}
		printf("\n");
	}
	//2:
	int len;
	printf("Enter the number of elements  ");
	fflush(stdout);
	scanf("%d",&len);
	int arr[len],sum=0;
	for(int i=0;i<len;i++)
	{
		printf ("%d Enter number : ",i+1);
		fflush(stdout);
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	printf("Average = %f",sum/(float)len);
	return 0;
 //ex3:
	int r,c;
 	printf("Enter rows and column of matrix : ");
	fflush(stdout);
	scanf(" %d %d",&r,&c);
	int arr[r][c],tr[c][r];
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("Enter element of a%d %d\n",i+1,j+1);
			fflush(stdout);
			scanf(" %d",&arr[i][j]);
		}
	}
	printf("Entered Matrix:\n");
	fflush(stdout);
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	printf("Transpose of the matrix :\n");
	fflush(stdout);
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			tr[j][i]=arr[i][j];
		}	
	}
	for(int i=0;i<c;i++)
	{
		for(int j=0;j<r;j++)
		{
			printf("%d ",tr[i][j]);
		}	
		printf("\n");
	}

//ex4:<insert element in the array>
	int len, item, index;
	printf("Enter the number of elements then enter the elements ");
	fflush(stdout);
	scanf("%d",&len);
	int arr[len+1];
	for(int i=0;i<len;i++)
	{
		scanf(" %d",&arr[i]);
	}
	printf("Enter the element to be inserted : ");
	fflush(stdout);
	scanf(" %d",&item);
	printf("Enter the location : ");
	fflush(stdout);
	scanf(" %d",&index);
	for(int i=len;i>=index;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[index-1]=item;
	for(int i=0;i<=len;i++)
	{
		printf(" %d ",arr[i]);
	}
	//char arr[11]="The african queen";
	//printf("%s",arr);
	
	//ex5:
	int len, item,i;
	printf("Enter the number of elements then enter the elements ");
	fflush(stdout);
	scanf("%d",&len);
	int arr[len];
	for(int i=0;i<len;i++)
	{
		scanf(" %d",&arr[i]);
	}
	printf("Enter the element to be searched : ");
	fflush(stdout);
	scanf(" %d",&item);
	for( i=0;i<len;i++)
	{
		if(arr[i]==item)
		{
			break;
		}
	}
	if(i<len)
		printf("Number found at the location %d",i+1);
	else
		printf("Number is not found");

	//ex6:
	char str[100],item;int i=0,count=0;
	printf("Enter the string : ");
	fflush(stdout);
	gets(str);
	printf("Enter a character to find a frequency : ");
	fflush(stdout);
	scanf(" %c",&item);
	while(str[i]!=0)	
	{
		if(str[i]==item)
		{
			count++;
		}
		i++;
	}
	printf("Frequency of %c = %d",item,count);
	fflush(stdout);


//ex7:
	char str[100];int i=0,len=0;
	printf("Enter a string : ");
	fflush(stdout);
	gets(str);
	while(str[i]!=0)	i++;
	printf("Length of string : %d",i);
	*/
//ex8:
	char str[100];int i=0,len=0;
	printf("Enter a string : ");
	fflush(stdout);
	gets(str);
	len=strlen(str);
	printf("Reverse string is : ");
	for(i=len-1;i>=0;i--)
	{
		printf("%c",str[i]);
	}

	return 0;
}