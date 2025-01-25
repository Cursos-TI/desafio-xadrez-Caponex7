#include <stdio.h>

#define BISPO_MOVIMENTO 5
#define TORRE_MOVIMENTO 5
#define RAINHA_MOVIMENTO 8

// Função para movimentação do Bispo
void moverBispo() {
    for (int i = 0; i < BISPO_MOVIMENTO; i++) {
        printf("Cima\n");   // Movimentação na diagonal superior direita
        printf("Direita\n");
    }
}

// Função para movimentação da Torre
void moverTorre() {
    for (int i = 0; i < TORRE_MOVIMENTO; i++) {
        printf("Direita\n");  // Movimentação para a direita
    }
}

// Função para movimentação da Rainha
void moverRainha() {
    for (int i = 0; i < RAINHA_MOVIMENTO; i++) {
        printf("Esquerda\n");  // Movimentação para a esquerda
    }
}


int main() {
    // Declaração de variáveis
    int escolha;
    
    // Exibição do menu para o usuário
    printf("Escolha a peça para movimentar:\n");
    printf("1. Bispo\n");
    printf("2. Torre\n");
    printf("3. Rainha\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);
    
    // Com base na escolha do usuário, chama a função correspondente
    switch (escolha) {
        case 1:
            printf("Movimentação do Bispo:\n");
            moverBispo();
            break;
        case 2:
            printf("Movimentação da Torre:\n");
            moverTorre();
            break;
        case 3:
            printf("Movimentação da Rainha:\n");
            moverRainha();
            break;
        default:
            printf("Opção inválida!\n");
    }

    return 0;
}
