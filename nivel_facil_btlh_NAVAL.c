#include <stdio.h>

// Tamanho fixo do tabuleiro
#define TAMANHO 10
// Tamanho fixo dos navios
#define TAM_NAVIO 3

// Função para inicializar o tabuleiro com água (valor 0)
void inicializarTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            tabuleiro[i][j] = 0;
        }
    }
}

// Função para imprimir o tabuleiro
void exibirTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    printf("Tabuleiro:\n\n");
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

// Função para posicionar um navio horizontalmente
int posicionarNavioHorizontal(int tabuleiro[TAMANHO][TAMANHO], int linha, int coluna) {
    // Verifica se o navio cabe no tabuleiro horizontalmente
    if (coluna + TAM_NAVIO > TAMANHO) return 0;

    // Verifica se já existe outro navio nas posições desejadas
    for (int i = 0; i < TAM_NAVIO; i++) {
        if (tabuleiro[linha][coluna + i] != 0) return 0;
    }

    // Posiciona o navio (valor 3)
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linha][coluna + i] = 3;
    }
    return 1;
}

// Função para posicionar um navio verticalmente
int posicionarNavioVertical(int tabuleiro[TAMANHO][TAMANHO], int linha, int coluna) {
    // Verifica se o navio cabe no tabuleiro verticalmente
    if (linha + TAM_NAVIO > TAMANHO) return 0;

    // Verifica se já existe outro navio nas posições desejadas
    for (int i = 0; i < TAM_NAVIO; i++) {
        if (tabuleiro[linha + i][coluna] != 0) return 0;
    }

    // Posiciona o navio (valor 3)
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linha + i][coluna] = 3;
    }
    return 1;
}

int main() {
    // Declara o tabuleiro
    int tabuleiro[TAMANHO][TAMANHO];

    // Inicializa o tabuleiro com água
    inicializarTabuleiro(tabuleiro);

    // Coordenadas iniciais dos navios
    int linhaH = 2, colunaH = 4; // Navio horizontal
    int linhaV = 5, colunaV = 6; // Navio vertical

    // Posiciona os navios, verificando validade
    if (!posicionarNavioHorizontal(tabuleiro, linhaH, colunaH)) {
        printf("Erro ao posicionar navio horizontal.\n");
        return 1;
    }

    if (!posicionarNavioVertical(tabuleiro, linhaV, colunaV)) {
        printf("Erro ao posicionar navio vertical.\n");
        return 1;
    }

    // Exibe o tabuleiro no console
    exibirTabuleiro(tabuleiro);

    return 0;
}
