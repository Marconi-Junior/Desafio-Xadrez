#include <stdio.h>

// Funções recursivas
void moverTorre (int casas){
    if (casas > 0){
        printf("Direita\n");
        moverTorre( casas - 1);
    }
}

void moverBispo (int casas){ 
    if (casas > 0){
        for (int i = 0; i < 1; i++){
            for (int j = 0; j < 1; j++)
            printf("Cima\n");
        }
        printf("Direita\n");
        moverBispo(casas - 1);
    }
}

void moverRainha (int casas){
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

int main(){

int cavalo;

// chamada das funções recursivas
printf("Torre:\n");
moverTorre(5);
printf("\nBispo:\n");
moverBispo(5);
printf("\nRainha:\n");
moverRainha(8);

// Lógica para movimentação do cavalo
printf("\nCavalo:\n");
    while (cavalo < 1){
        for (int i = 0; i <= 5; i++){
            if (i > 1) break; // condição especial para iniciar o segundo movimento
            printf("Cima\n");
        }
        printf("Direita\n");
        cavalo++;
    }
    

return 0;
}
