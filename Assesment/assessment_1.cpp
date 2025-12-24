#include<stdio.h>

//function for addition of two numbers
int add(int a, int b){
	return a+b;
}

//function for subtraction of two numbers
int sub(int a, int b){
	return a-b;
}

//function for multiplication of two numbers
int mul(int a, int b){
	return a*b;
}

//function for division of two numbers
float div(int a, int b){
	return (float)a/b;
}

main(){
	while(1){	//infinite loop to continuously display the menu
		printf("---------------MENU--------------\n\n");
		printf("1. Addition\n");
		printf("2. Subtraction\n");
		printf("3. Multiplication\n");
		printf("4. Division\n");
		
		int ch, a, b;
		printf("\nEnter Your choice : ");
		scanf("%d", &ch);	//take user's choice from the menu
		printf("\n");
		
		if(ch>0 && ch<5){
			printf("Enter first number : ");
			scanf("%d", &a);	//take first input from user
			printf("Enter second number : ");
			scanf("%d", &b);	//take second input from user
		}
			
		//conditional block to only run user's choice
		if(ch==1){
			printf("\nAddition = %d\n\n", add(a, b));	 //print addition of the two numbers
		}
		else if(ch==2){
			printf("\nSubtraction = %d\n\n", sub(a, b));	 //print subtraction of the two numbers
		}
		else if(ch==3){
			printf("\nMultiplication = %d\n\n", mul(a, b));	 //print multiplicaiton of the two numbers
		}
		else if(ch==4){
			printf("\nDivision = %.2f\n\n", div(a, b));	 //print division of the two numbers
		}
		else{
			printf("Invalid choice !!!!");	//error message for invalid input
			break;	//ends code on invalid input
		}
	}
}