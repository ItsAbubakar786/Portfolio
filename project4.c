#include<stdio.h>

int main(){
	int num, original, digit, reversed = 0;

	printf("Enter a number:");
	scanf("%d",&num);
original=num;
 while(num>0){
	digit= num % 10;
reversed = reversed * 10 + digit;
	num = num / 10;
}
if(reversed == original)
	printf("%d is a palindrome.\n", original);
else
	printf("%d is  not a palindrome.\n", original);
return 0;
}

