#include <stdio.h>
#include<string.h>
void findprime(int n1,int n2);
int findfactorial(int n1);
char * reverseStr(char * str);
int getPower(int base,int power);

char p[100];
int j,mul=1;
void main(void)
{
	int num1,num2;
	char str[100];
	/*printf("Enter two numbers : ");
	fflush(stdout);
	scanf("%d %d",&num1,&num2);
	printf("prime numbers are : ");
	fflush(stdout);
	findprime(num1,num2);
	printf("\n#########################################");
	printf("\nFactorial is %d",findfactorial( num1));
	printf("Enter any sentence : ");
	fflush(stdout);
	gets(str);
	printf("%s",reverseStr(str));*/
	printf("Enter base number : ");
	fflush(stdout);
	scanf("%d",&num1);
	printf("Enter power number (positive integer): ");
	fflush(stdout);
	scanf("%d",&num2);
	printf("%d ^ %d = %d",num1,num2,getPower(num1,num2));
	
}
void findprime(int n1,int n2)
{	
	for(int i=n1;i<=n2;i++)
	{
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				break;
			}
		}
		if(j==i/2+1)
		{
			printf("%d ",i);
		}
	}
}
char * reverseStr(char * str)
{	
	int len;
	len=strlen(str);
	for(int i=0;str[i]!=0;i++)
	{
		p[i]=str[len-1-i];
	}

	return p;
}
int findfactorial(int n1)
{	
	if(n1>1)
		return n1*findfactorial(--n1);
}
int getPower(int base,int power)
{
	if(power)
	return base*getPower(base,power--);
}
