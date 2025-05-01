#include <stdio.h>

// ------------------------------
// Função recursiva para movimentar a Torre
// Move a Torre para a Direita
// ------------------------------
void moverTorre(int casasRestantes) {
    if (casasRestantes == 0) {
        return; // Caso base: parar
    }
    printf("Direita\n");
    moverTorre(casasRestantes - 1); // Chamada recursiva
}

// ------------------------------
// Função recursiva para movimentar a Rainha
// Move a Rainha para a Esquerda
// ------------------------------
void moverRainha(int casasRestantes) {
    if (casasRestantes == 0) {
        return; // Caso base: parar
    }
    printf("Esquerda\n");
    moverRainha(casasRestantes - 1); // Chamada recursiva
}

// ------------------------------
// Função recursiva para o Bispo
// Usa loops aninhados dentro da recursão
// Move o Bispo na diagonal (Cima Direita)
// ------------------------------
void moverBispo(int movimentosVerticais, int movimentosHorizontais) {
    if (movimentosVerticais == 0) {
        return; // Caso base: parar
    }

    for (int v = 1; v <= movimentosVerticais; v++) { // Loop externo (vertical)
        for (int h = 1; h <= movimentosHorizontais; h++) { // Loop interno (horizontal)
            printf("Cima Direita\n");
        }
    }

    moverBispo(movimentosVerticais - 1, movimentosHorizontais - 1); // Chamada recursiva (reduz uma casa em cada direção)
}

// ------------------------------
// Movimento complexo do Cavalo
// Duas casas para cima e uma para a direita, usando loops aninhados e controle de fluxo
// ------------------------------
void moverCavalo(int movimentosVerticais, int movimentosHorizontais) {
    printf("Movimento do Cavalo:\n");
    for (int v = 1; v <= movimentosVerticais; v++) {
        if (v == 2) {
            for (int h = 1; h <= movimentosHorizontais; h++) {
                if (h == 1) {
                    printf("Direita\n");
                } else {
                    continue; // não imprime mais nada além de 1 movimento horizontal
                }
            }
        } else {
            printf("Cima\n");
        }
    }
}

// ------------------------------
// Função principal
// ------------------------------
int main() {
    // ------------------------------
    // Movimento da Torre (recursivo)
    // ------------------------------
    printf("Movimento da Torre:\n");
    int casasTorre = 5;
    moverTorre(casasTorre);
    printf("\n");

    // ------------------------------
    // Movimento do Bispo (recursivo com loops aninhados)
    // ------------------------------
    printf("Movimento do Bispo:\n");
    int movimentosVerticaisBispo = 5;
    int movimentosHorizontaisBispo = 5;
    moverBispo(movimentosVerticaisBispo, movimentosHorizontaisBispo);
    printf("\n");

    // ------------------------------
    // Movimento da Rainha (recursivo)
    // ------------------------------
    printf("Movimento da Rainha:\n");
    int casasRainha = 8;
    moverRainha(casasRainha);
    printf("\n");

    // ------------------------------
    // Movimento do Cavalo (loops aninhados com múltiplas variáveis/condições)
    // ------------------------------
    int movimentosVerticaisCavalo = 2;
    int movimentosHorizontaisCavalo = 1;
    moverCavalo(movimentosVerticaisCavalo, movimentosHorizontaisCavalo);

    return 0;
}
