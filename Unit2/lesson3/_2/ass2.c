#include <stdio.h>

int main (void){
	//ex1:
	/*int n1;
	printf("Enter a number to check:");
	fflush(stdout);
	scanf("%d",&n1);
	switch (n1%2)
	{
		case 0:
			printf("%d is even\n",n1);
			break;
		default:
			printf("%d is odd\n",n1);
			break;
	}
	
	//ex2:
	char c1;
	printf("Enter a character to check:");
	fflush(stdout);
	scanf(" %c",&c1);
	switch (c1)
	{
		case 'a':
		case 'o':
		case 'e':
		case 'u':
		case 'i':
		case 'A':
		case 'O':
		case 'E':
		case 'U':
		case 'I':
			printf("%c is a vowel",c1);
		break;
		default:
			printf("%c is a constant",c1);
		break;
	}
	//ex3:
	float a,b,c;
	printf("Enter the first number:");
	fflush(stdout);
	scanf(" %f",&a);
	printf("Enter the second number:");
	fflush(stdout);
	scanf(" %f",&b);
	printf("Enter the third number:");
	fflush(stdout);
	scanf(" %f",&c);
	if(a>b&&a>c)
	{
		printf("%f is the largest number",a);
	}
	else if(b>a&&b>c)
	{
		printf("%f is the largest number",b);
	}
	else{
		printf("%f is the largest number",c);

	}
	//ex4:
	int num;
	printf("Enter a number to check:");
	fflush(stdout);
	scanf(" %d",&num);
	switch (num)
	{
		case 0:
			printf("%d is zero\n",num);
			break;
		default:
		if(num>0)
			printf("%d is positive\n",num);
		else
			printf("%d is negative\n",num);
		break;
	}
	//ex5:
	//alphabet or not
	char c2;
	printf("Enter a character to check:");
	fflush(stdout);
	scanf("%c",&c2);
	if(c2>=90&&c2<=122)
		printf("%d is an alphabet",c2);
	else
		printf("%d is not alphabet",c2);

	//ex6:
	int num2,sum=0;
	printf("Enter a natural number :");
	fflush(stdout);
	scanf(" %d",&num2);
	for(int i=1;i<=num2;i++)
	{
		sum+=i;
	}
	printf("%d",sum);
	fflush(stdout);
	
	//ex7:
	int num3;
	printf("Enter a number to calculate the factorial:");
	fflush(stdout);
	scanf(" %d",&num3);
	if(num3<0)
		printf("Error!!! Factorial of negative number doesn't exist");
	else if(num3==0)
		printf("Factorial = 1");
	else
	{
		int j=num3;
		
		do{
			num3*=--j;
		}while(j>1);
		printf("Factorial = %d",num3);

	}
	*/
	//ex8:
	float fn1,fn2,prod=0;
	char op;
	printf("Enter operator either + or - or * or divide : ");
	fflush(stdout);
	scanf(" %c",&op);
	printf("Enter two operands: ");
	fflush(stdout);
	scanf(" %f %f",&fn1,&fn2);
	switch (op)
	{
		case '+':	prod=fn1+fn2;	break;
		case '-':	prod=fn1-fn2;	break;
		case '*':	prod=fn1*fn2;	break;
		case '/':	prod=fn1/fn2;	break;
		default: 	printf("Error!"); break;
	}
	printf("%f %c %f = %.1f",fn1,op,fn2,prod);
	return 0;
}