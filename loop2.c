#include <stdio.h>

int main() {
    int num, a;
    unsigned long long factorial = 1; 
    
	 printf("Enter any number: ");
    scanf("%d", &num);
    
    for (a = 1; a <= num; a++) {
        factorial *= a;
    }
 printf(" factorial is: %llu\n", factorial);
    
}
