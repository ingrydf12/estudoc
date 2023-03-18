#include <stdio.h>

int main()
{
    int n1, n2, n3, n4;
    float media;
    printf("Escreva as notas do aluno X\n");
    scanf("%d,%d,%d,%d", &n1, &n2, &n3, &n4);
    
    media = (n1 + n2 + n3 + n4) / 4;

    printf("A media do aluno X: %f", media);

    return 0;
}
