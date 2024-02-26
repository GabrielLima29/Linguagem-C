#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("Olá mundo!");
    return 0;

    // Aula 2: Especificadores de formato
    printf("Valores inteiros:%d.\n", 10);
    printf("Valor real: %f.\n", 3.14159265);
    printf("Valor com apenas duas casas: %.2f.\n", 3.14159265);
    printf("Dados com letra única: %c.\n", 'a');
    printf("Dados com texto: %s.\n", "testando");
}
    // Tipos de Dados:
    // char(Texto): até 8 bits.
    //int(Numero e texto)(short): 16 bits.
    // int (long): 32 bits
    // float(Numero em casa decimal): 32 bits.
    //double: 64 bits.

    #define texto "Entrada e saida de dados"
    int main(){
        printf("%s\n", texto);

        int idade = 0;
        float altura = 0.0;
        char nome[50] = "";

        printf("Digite a idade:\n");
        scanf("%d", &idade);

        printf("Digite a altura:\n");
        scanf("%f", &altura);

        printf("Digite o nome:\n");
        scanf("%s", &nome);

        printf("Dados Informados:\n");
        printf("Idade: %d.\n", idade);
        printf("Altura: %.2f.\n", altura);
        printf("Nome: %s.\n", nome);

    }


    //Sequencia de escape:
    //\a: Alarme sonoro do sistema.
    //\b: Backstage.
    //\n: Quebra de linha.
    //\t: Tabulação horizontal.
    //\r: Retorna ao início da linha.
    //\0: Caracter nulo.
    //\v: Tabulação vertical.


// Entrada de Dados:
    int main(){

    int idade = 0;
    float peso = 0.0;

    printf("Valor inicial da idade: %d.\n", idade);

    printf("Digite a idade:\n");
    scanf("%d", &idade);

    printf("Digite a peso:\n");
    scanf("%f", &peso);

    printf("Idade informada: %d.\n", idade);
    printf("Peso informada: %f.\n", peso);

}

// Operações Matematicas:
    int main(){
        int A, B, subtr, soma, mult, divis;

        printf("Digite o primeiro valor:\n");
        scanf("%d", &A);
        printf("Digite o segundo valor:\n");
        scanf("%d", &B);

        soma = A + B;
        subtr = A - B;
        mult = A * B;
        divis = A / B;

        printf("Resultados:\n");
        printf("Soma: %d.\n", soma);
        printf("Subtração: %d.\n", subtr);
        printf("Multiplicação: %d.\n", mult);
        printf("Divisão: %d.\n", divis);



    }
// Incrementação e decrementação por unidade:
    int main(){
        int dado = 10;
        printf("Dado antes incremento: %d.\n", dado);
// dado = 10

        dado++;
        printf("Depois do incremento: %d.\n", dado);
//dado = 11

        dado--;
        Printf("Depois do decremento: %d.\n", dado);
//dado = 10

        dado+= 3;
        Printf("Depois do incremento em 3 unidades: %d.\n", dado);
//dado = 13

        dado-= 2;
        Printf("Depois do decremento em 3 unidades: %d.\n", dado);
//dado = 11

        dado*= 10;
        Printf("Depois de multiplcar em 10: %d.\n", dado);
//dado = 110
}
