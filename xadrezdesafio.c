#include <stdio.h>

void torre(int casas){
    if (casas > 0){
        printf ("Torre - para Direita!\n");
        torre (casas -1);
    }
}
void bispo(int casas){
    if (casas > 0){
        printf ("Bispo - Cima/Diagonal Direita!\n");
        bispo (casas -1);
    }
}
void rainha(int casas){
    if (casas > 0){
        printf ("Rainha - para Esquerda\n");
        rainha (casas -1);
    }
}
void cavalo1(int casas){
    if (casas > 0){
        printf ("Cavalo - para cima\n");
        cavalo1 (casas -1); 
    }
}
void cavalo1_2(int casas){
    if (casas > 0){
        printf ("Cavalo - para direita\n");
        cavalo1_2 (casas -1); 
    }
}




int main () {
    torre (5);
    bispo (5);
    rainha (8);
    cavalo1 (2);
    cavalo1_2 (1);


return 0;

}