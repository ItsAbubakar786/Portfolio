#include <stdio.h>

int main(){
 char task[10][100];
 int choice;
 int count = 0;
do{
printf("\n===TO-DO LIST===\n");
printf("1.Add Task\n");
printf("2.View Task\n");
printf("3.Delete Task\n");
printf("4.Exite\n");
printf("Enter your Choice: ");
scanf("%d",&choice);
getchar();

switch(choice){
case 1:
if(count<10){
printf("New task:%d\n");
fgets(task[count],sizeof(task[count]),stdin);
count++;
printf("Task Added\n");
}else{
printf("Task list full\n");
}break;
case 2:
printf("___Your tasks__\n");
if(count == 0){
	printf("No task added yet\n");
}else{
for(int i=0; i<count; i++){
	printf("%d.%s",i+1, task[i]);
}
}
break;
case 3:
if(count == 0){
	printf("no task to delete\n");
}else{
 int del;
	printf("Enter task number to delete\n");
scanf("%d",&del);
getchar();
if(del<1|| del>count){
	printf("Invalide task number\n");
}else{
for(int i=del -1; i<count -1; i++){
	for(int j=0; j<100; j++){
	task[i][j]= task[i+1][j];
}}
count--;
printf("Task deleted\n");
}
}
break;
case 4:
printf("Thankyu for exiting...\n");
break;
default:
printf("Invalide statement\n");
}
}while(choice!=4);

return 0;
}




