#include <stdio.h>

    int main(){
        int movimentocompleto = 1;

        while (movimentocompleto --)
        {
            for (int i =0; i < 2; i++) {
                printf("Cima\n");
            }
            printf("Direita\n");
        }

        return 0;
    }
