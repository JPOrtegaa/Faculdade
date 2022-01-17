#include "matrizEsparsa.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
    Matriz *x, *y, *resultado;
    x = inicializarMatriz();
    y = inicializarMatriz();

    lerArquivoMatriz(x, "matriz3.txt");
    lerArquivoMatriz(y, "matriz4.txt");
    resultado = subtraiMatriz(x, y);

    //criarCabecasMatriz(x); agora dentro do lerArquivoMatriz!!!


    //direita->
    //abaixo->

    printf("linha = %d\n", resultado->cabeca->abaixo->abaixo->abaixo->abaixo->abaixo->direita->linha);
    printf("coluna = %d\n", resultado->cabeca->abaixo->abaixo->abaixo->abaixo->abaixo->direita->coluna);
    printf("valor = %d\n", resultado->cabeca->abaixo->abaixo->abaixo->abaixo->abaixo->direita->valor);

 /*       for(i = 0; i < 3; i++){
        printf("colunaDireita = %d\n", p->coluna);
        printf("linhaDireita = %d\n", p->linha);
        printf("valor = %d\n", p->valor);
        p = p->direita;
    }*/


 /*   printf("totalLinha = %d\n", x->totalLinha);
    printf("totalColuna = %d\n", x->totalColuna);*/



    //x->totalColuna = 0;
    //printf("TotalColuna = %d", x->totalColuna);

    return 0;
}
