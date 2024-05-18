#include <stdio.h>

int main() {
    int num, m;
    
    printf("Enter any number: ");
    scanf("%d", &num);
    
    printf("Multiplication table %d:\n", num);

    for (m = 1; m <= 10; m++) {
        printf("%d X %d = %d\n", num, m, num * m);
    }
    
}
