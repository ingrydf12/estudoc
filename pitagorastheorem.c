#include <stdio.h> 
#include <math.h>

int main(){
    int b, c;
    double a;

    printf("insira a medida dos lados do triângulo na qual se tem conhecimento\n");
    scanf("%d, %d", &b, &c);

    a = sqrt(b*b + c*c);
    a > b > c;

    printf("a hipotenusa de tal triangulo é: %f", &a);

   return 0;
}

//problemas
