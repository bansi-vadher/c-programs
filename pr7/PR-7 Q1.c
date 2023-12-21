#include<stdio.h>

int Addition(int a, int b) {
	return a+b;
}
int Subtraction(int a, int b) {
	return a-b;
}
int Multiplication(int a, int b) {
	return a*b;
}
int Division(int a, int b) {
	return a/b;
}
int Moduls(int a, int b) {
	return a%b;
}


 int main() {
	
	int n,a,b;
	
	do {
		
		printf("\nPress 1 for +\n");
	printf("Press 2 for -\n");
	printf("Press 3 for *\n");
	printf("Press 4 for /\n");
	printf("Press 5 for %%\n");
	printf("Press 0 for the exit\n");
	
	printf("\n\nEnter your choice : ");
	scanf("%d",&n);
	
	switch(n) {
		
		case 1 :
			printf("Enter the first number : ");
			scanf("%d",&a);
			printf("Enter the second number : ");
			scanf("%d",&b);
			printf("Addition of %d and %d is %d\n\n",a,b,Addition(a,b));
			break;
			
		case 2 :
			printf("Enter the first number : ");
			scanf("%d",&a);
			printf("Enter the second number : ");
			scanf("%d",&b);
			printf("Subtraction of %d and %d is %d\n\n",a,b,Subtraction(a,b));
			break;
			
		case 3 :
			printf("Enter the first number : ");
			scanf("%d",&a);
			printf("Enter the second number : ");
			scanf("%d",&b);
			printf("Multiplication of %d and %d is %d\n\n",a,b,Multiplication(a,b));
			break;
			
		case 4 :
			printf("Enter the first number : ");
			scanf("%d",&a);
			printf("Enter the second number : ");
			scanf("%d",&b);
			printf("Division of %d and %d is %d\n\n",a,b,Division(a,b));
			break;
			
		case 5 :
			printf("Enter the first number : ");
			scanf("%d",&a);
			printf("Enter the second number : ");
			scanf("%d",&b);
			printf("Moduls of %d and %d is %d",a,b,Moduls(a,b));
			break;
			
           case 0 : 
                  printf("\nExit!!!!...\n\n");   
               break; 

		default : printf("\nInvalie Number.......\n\n"); 
				
			
	}
		
	}while(n!=0);

     return 0;
}