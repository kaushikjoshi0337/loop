#include <stdio.h>

int main() {
  
int num, x, sum = 0;
    
printf("Enter any number: ");
scanf("%d", &num);
    
for (x = 1; x <= num; x++) {
sum += x;
}
printf("The sum of all numbers: %d\n", sum);
}
