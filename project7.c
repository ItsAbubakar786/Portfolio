# include <stdio.h>
int main(){
 int num1,num2;
int choise;
	printf("ENTER NUMBER1\n");
scanf("%d",&num1);
	printf("Enter NUMBER2\n");
scanf("%d",&num2);


printf("Choise operation:-\n");
printf("1. addition\n");
printf("2. substraction\n");
printf("3. multiplication\n");
printf("4. division\n");
scanf("%d",&choise);

if(choise==1){
	printf("Addition is:%d",num1+num2);}
else if(choise==2){
	printf("Substraction is:%d",num1-num2);}
else if(choise==3){
	printf("multiplication is:%d",num1*num2);}
else if(choise==4){
	printf("multiplication is:%d",num1/num2);}
else {
printf("Error! division by zero or invalide choise!");
}
return 0;
}