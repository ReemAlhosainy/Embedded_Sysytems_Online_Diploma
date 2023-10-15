#include <stdio.h>

int main (void){
	int n1,n2,n3;
	float f1,f2;
	char c1;
	printf("C Programming\n");
	printf("Enter an integer:");
	fflush(stdout);
	scanf("%d",&n1);
	printf("You Entered:%d\n",n1);
	printf("Enter two integers:");
	fflush(stdout);
	scanf("%d %d",&n2,&n3);
	printf("Sum=%d\n",n2+n3);
	fflush(stdout);
	printf("Enter two numbers:");
	fflush(stdout);
	scanf("%f %f",&f1,&f2);
	printf("Product=%f\n",f1*f2);
	fflush(stdout);
	printf("Enter a character:");
	fflush(stdout);
	scanf(" %c",&c1);
	printf("ASCII value for %c =%d\n",c1,c1);
	fflush(stdout);
	printf("temp method:\n");
	printf("Enter two integers:");
	fflush(stdout);
	scanf("%d %d",&n2,&n3);
	printf("Before swapping value of a= %d\n",n2);
	printf("Before swapping value of a= %d\n",n3);
	int temp=n2;
	n2=n3;
	n3=temp;
	printf("After swapping value of a= %d\n",n2);
	printf("After swapping value of a= %d\n",n3);
	fflush(stdout);
	printf("ADD & SUB method:\n");
	printf("Enter two integers:");
	fflush(stdout);// 5 10
	scanf("%d %d",&n2,&n3);
	printf("Before swapping value of a= %d\n",n2);
	printf("Before swapping value of a= %d\n",n3);
	fflush(stdout);
	n2=n2+n3;//15
	n3=n2-n3;//5
	n2=n2-n3;//15-5=10	
	printf("After swapping value of a= %d\n",n2);
	printf("After swapping value of a= %d\n",n3);
	fflush(stdout);
	
	printf("XOR method:\n");
	printf("Enter two integers:");
	fflush(stdout);// 5 10
	scanf("%d %d",&n2,&n3);
	printf("Before swapping value of a= %d\n",n2);
	printf("Before swapping value of a= %d\n",n3);
	fflush(stdout);
	n2=n2^n3;
	n3=n2^n3;
	n2=n2^n3;
	printf("After swapping value of a= %d\n",n2);
	printf("After swapping value of a= %d\n",n3);
	fflush(stdout);
	
	printf("MUL & DIV method:\n");
	printf("Enter two integers:");
	fflush(stdout);// 5 10
	scanf("%d %d",&n2,&n3);
	printf("Before swapping value of a= %d\n",n2);
	printf("Before swapping value of a= %d\n",n3);
	fflush(stdout);
	n2=n2*n3;//50
	n3=n2/n3;//50/10=5
	n2=n2/n3;//50/5=10	
	printf("After swapping value of a= %d\n",n2);
	printf("After swapping value of a= %d\n",n3);
	fflush(stdout);

	return 0;
}