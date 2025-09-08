#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
 int user,computer;
printf("you choose rock/1,paper/2,scissors/3\n");
	scanf("%d",&user);

srand(time(0));
computer= rand() % 3 +1;
  printf("computer choose:%d\n" ,computer);
if(user ==computer)
{
printf("its a draw!\n");
}
else if 
((user== 1 && computer== 3)||
(user == 2 && computer== 1)||
(user == 3 && computer==  2))
	{
	printf("you win\n");
} else{
printf("you loss!\n");
}
return 0;
}


