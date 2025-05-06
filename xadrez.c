#include <stdio.h>

// Função recursiva para simular o movimento da Torre
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para simular o movimento da Rainha
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para o Bispo
void moverBispo(int casas) {
    if (casas <= 0) return;
    printf("Cima Direita\n");
    moverBispo(casas - 1);
}

// Função usando loops aninhados para o movimento adicional do Bispo
void bispoComLoops(int casas) {
    printf("\nMovimento do Bispo com loops aninhados (vertical e horizontal):\n");
    for (int v = 1; v <= casas; v++) {  // Movimento vertical
        for (int h = 1; h <= 1; h++) {  // Movimento horizontal (fixo para direita)
            printf("Cima Direita (Etapa %d)\n", v);
        }
    }
}

// Função para o movimento complexo do Cavalo
void moverCavalo() {
    printf("\nMovimento do Cavalo (duas casas para cima e uma para a direita):\n");
    int movimentosRealizados = 0;

    for (int i = 1; i <= 2; i++) { // Duas casas para cima
        if (i == 2) continue;      // Apenas para demonstrar uso de continue (simulação)
        printf("Cima\n");
        movimentosRealizados++;
    }

    int direita = 1;
    while (direita <= 1) { // Uma casa para a direita
        printf("Direita\n");
        movimentosRealizados++;
        if (movimentosRealizados >= 3) break; // Parar após 3 movimentos totais
        direita++;
    }
}

int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Torre com recursão
    printf("Movimento da Torre (recursivo - 5 casas para a direita):\n");
    moverTorre(casasTorre);

    printf("\n");

    // Bispo com recursão
    printf("Movimento do Bispo (recursivo - 5 casas na diagonal superior direita):\n");
    moverBispo(casasBispo);

    // Bispo com loops aninhados adicionais
    bispoComLoops(casasBispo);

    printf("\n");

    // Rainha com recursão
    printf("Movimento da Rainha (recursivo - 8 casas para a esquerda):\n");
    moverRainha(casasRainha);

    // Cavalo com loops complexos
    moverCavalo();

    return 0;
}
