#include <stdio.h>

int main() {
    // ------------------------------
    // Movimento da Torre: 5 casas para a direita (usando for)
    // ------------------------------
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n"); // Linha em branco para separar as saídas

    // ------------------------------
    // Movimento do Bispo: 5 casas na diagonal cima-direita (usando while)
    // ------------------------------
    int casasBispo = 5;
    int contadorBispo = 1;
    printf("Movimento do Bispo:\n");
    while (contadorBispo <= casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    printf("\n"); // Linha em branco para separar as saídas

    // ------------------------------
    // Movimento da Rainha: 8 casas para a esquerda (usando do-while)
    // ------------------------------
    int casasRainha = 8;
    int contadorRainha = 1;
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    printf("\n"); // Linha em branco para separar as saídas

    // ------------------------------
    // Movimento do Cavalo: 2 casas para baixo e 1 para a esquerda
    // Usando loops aninhados (for + while)
    // ------------------------------
    int movimentosVerticais = 2; // número de casas para baixo
    int movimentosHorizontais = 1; // número de casas para esquerda
    printf("Movimento do Cavalo:\n");

    // Loop externo: movimentação vertical (for)
    for (int i = 1; i <= movimentosVerticais; i++) {
        printf("Baixo\n");
        
        // Loop interno: só executa no último movimento vertical
        if (i == movimentosVerticais) {
            int j = 1;
            while (j <= movimentosHorizontais) {
                printf("Esquerda\n");
                j++;
            }
        }
    }

    return 0;
}

