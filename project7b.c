#include <stdio.h>
int main(){
int num1,num2;
int choice;
	printf("Enter first number:-\n");
scanf("%d",&num1);
	printf("Enter second number:-\n");
scanf("%d",&num2);

printf("choose you oprations!\n");

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

 scanf("%d", &choice);
switch(choice){
	case 1:
printf("Addition is:-%d\n",num1+num2);
break;
	case 2:
printf("substraction is:-%d\n",num1-num2);
break;
	case 3:
printf("Multiplication is:-%d\n",num1*num2);
break;	
	case 4:
if(num2==0)

printf("divisible by zero not valide");
else
printf("Division is:-%d\n",num1/num2);
break;
default:
printf("invalide choice");
}
return 0;
}
