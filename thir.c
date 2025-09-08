#include <stdio.h>
 int main(){
	int n;
printf("enter a number :",n);
scanf("%d",&n);
if(n>0)
	printf("is postive",n);
else 
if(n<0)
	printf("is negative",n);
else 
	printf("either positive or negative",n);

return 0;
}