#include <stdio.h>

int main(){
 int bal =1000;
 int choice;
 int amount;
do{
printf("\n=====ATM MENU====\n");
printf("1.Check Balance:\n");
printf("2.Deposite Money:\n");
printf("3.withdraw Mony\n");
printf("4.Exit\n");
printf("Enter Your Choice");
scanf("%d",&choice);

	switch(choice){
case 1:
 printf("your balance:%d\n",bal);
break;
case 2:
printf("Enter amaunt to Deposite :\n");
scanf("%d",&amount);
bal += amount;
printf("deposited new balamce:%d",bal);
break;
case 3:
printf(" Enter amount to withdraw:\n");
scanf("%d",&amount);
if(bal<amount){
	printf("insufficiant balance!\n");
}else
bal -= amount;
printf("withdrwan! new balance:%d\n",bal);
break;
case 4:
printf("Exiting..... Thanks for using ATM:\n");
break;
default:
	printf(" Sorrrrry...! invalide Choise");
}
}
while(choice !=4);
return 0;
}
