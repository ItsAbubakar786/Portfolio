#include <stdio.h>

int main() {
    int prev = 1, curr = 1, next, n;
    printf("\nPlease enter how many Fibonacci numbers are required:\n");
    scanf("%d", &n);
    
    printf("\n%d", prev);
    printf("\n%d", curr);
    for(int i = 3; i <= n; ++i){
        next = prev + curr;
        printf("\n%d", next);
        prev = curr;
        curr = next;
    }

    return 0;
}
