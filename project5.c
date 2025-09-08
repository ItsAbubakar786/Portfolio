#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 int main(){
   int a , guess;
srand(time(0));
a= rand() % 50 +1;

printf("guess the number(1-50):\n");
scanf("%d",&guess);


while(guess !=a){
	if(a>guess){
 printf("Increase the number please \n");
}
else {
printf("Decrease number the please \n");
}

printf("try again");
scanf("%d" ,&guess);
}

printf("correct guessing");

return 0;
}



