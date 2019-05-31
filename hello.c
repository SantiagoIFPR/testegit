#include <stdio.h>

int main()
{
    int idade, *p;

    idade = 22;
    p = &idade;
    
    *p = 18;

    idade = p;

    printf("Olá mundo, a idade é %i\n" ,idade);
    printf("O endereco da variavel idade é: %p\n" ,p);


    return 0;
}
