#include <stdio.h>
#include <math.h>

int main(){
    double n1 = 123.25;
    double n2 = 3.141592;
    double n3 = 1.27;
    double n4 = 1.931;
    double n5 = 1.010101;

    printf("%6.2lf  %6.2lf  %6.2lf  %6.2lf  %6.2lf  %6.2lf", n1,n2,n3,n4,n5,(n1/n2/n3/n4/n5));

    return 0;
}