#include <stdio.h>

int main() {
    int a; //variable called a holds integer data 

    printf("Enter a: "); scanf("%d", &a); getchar();
    printf("You have just entered value %d for a\n", a);

    float b;
    printf("Enter b: "); scanf("%f", &b); getchar();
    printf("You have just entered value %.2f for b\n", b);

    return 0;
}
