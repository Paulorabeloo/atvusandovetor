#include <stdio.h>

void exerc()
{
    int vetor[10];
    int soma = 0; // Inicializar soma para garantir que comece de zero
    int k = 0;    // Inicializar k para contar ímpares
    int i;

    // Solicitar entrada dos elementos do vetor
    for(i = 0; i < 10; i++)
    {
        printf("Informe o nr %i do vetor: ", i + 1);
        scanf("%i", &vetor[i]); // Corrigido para usar vetor[i]
    }

    // Calcular soma dos números pares e contar ímpares
    for(i = 0; i < 10; i++) // Corrigido para usar i < 10
    {
        if(vetor[i] % 2 == 0)
        {
            soma += vetor[i];
        }
        else
        {
            k++;
        }
    }

    printf("\n A soma dos Pares: %i", soma);
    printf("\n A quantidade de impares: %i", k);
}

int main()
{
    exerc();
    return 0;
}
