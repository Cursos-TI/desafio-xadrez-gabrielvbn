#include <stdio.h>

int main () {

int bispo = 1, rainha , torre = 1, cavalo = 1 ;

while (torre <= 5) {
    printf ("Torre - para Direita!\n");
    torre ++ ;
}
do {
    printf ("Bispo - Cima/Diagonal Direita!\n");
    bispo ++ ;
} while (bispo <= 5);

for (rainha = 1; rainha <=8; rainha ++){
    printf ("Rainha - para Esquerda\n");
}

while (cavalo--){

    for (int i = 0; i < 2; i++){
        printf ("Cavalo - para Baixo\n");
    }
printf ("Cavalo - para Esquerda\n");
}



return 0;

}