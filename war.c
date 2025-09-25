#include <stdio.h>
#include <string.h>

// Definição da struct Territorio
// Esta struct armazena as informações de cada território:
// - nome: nome do território
// - cor: cor do exército
// - tropas: quantidade de tropas alocadas
struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

int main() {
    // Vetor de structs para armazenar 5 territórios
    struct Territorio territorios[5];

    // Cadastro dos territórios usando laço for
    for (int i = 0; i < 5; i++) {
        printf("=== Cadastro do Território %d ===\n", i + 1);

        printf("Digite o nome do território: ");
        scanf("%s", territorios[i].nome);  // Lê o nome (sem espaços)

        printf("Digite a cor do exército: ");
        scanf("%s", territorios[i].cor);   // Lê a cor (sem espaços)

        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);

        printf("\n");
    }

    // Exibição dos dados após o cadastro
    printf("\n=== Dados dos Territórios Cadastrados ===\n");
    for (int i = 0; i < 5; i++) {
        printf("Território %d:\n", i + 1);
        printf(" Nome: %s\n", territorios[i].nome);
        printf(" Cor do Exército: %s\n", territorios[i].cor);
        printf(" Tropas: %d\n", territorios[i].tropas);
        printf("--------------------------\n");
    }

    return 0;
}
