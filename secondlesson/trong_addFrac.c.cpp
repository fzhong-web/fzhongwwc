#include <stdio.h>

int main() {
    int a, b, c, d; 
    int numerator, denominator; //Tu so va Mau so 

    printf ("Enter first fraction a/b:"); scanf ("%d /%d", &a, &b); getchar();
    printf ("Enter second fraction c/d:"); scanf ("%d /%d", &c, &d); getchar();

    numerator = a*d + c*b; 
    denominator = b*d;

    printf ("The sum %d/%d + %d/%d = %d/%d", a,b,c,d,numerator,denominator);

    return 0;

}
