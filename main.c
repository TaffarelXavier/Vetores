/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Taffarel Xavier <taffarel_deus@hotmail.com>
 *
 * Created on 11 de Abril de 2019, 19:35
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * 
 * @param mulCinco
 * @param vetorSize
 * @param tipo
 */
void orderBubbleSort(int mulCinco[], int vetorSize, char tipo) {

    for (int k = 0; k < vetorSize; k++) {

        for (int d = 0; d < vetorSize - k - 1; d++) {

            if (tipo == 'd') { //decrescente
                if (mulCinco[d] < mulCinco[d + 1]) {

                    int temp = mulCinco[d];

                    mulCinco[d] = mulCinco[d + 1];

                    mulCinco[d + 1] = temp;

                }
            } else if (tipo == 'c') { //Crescente

                if (mulCinco[d] > mulCinco[d + 1]) {

                    int temp = mulCinco[d];

                    mulCinco[d] = mulCinco[d + 1];

                    mulCinco[d + 1] = temp;
                }
            }
        }
    }
}

void HollowDiamond() {
    int i, j, k;

    int n = 25;

    for (i = 1; i <= n; i++) {

        for (j = 1; j <= (n + 1) - i; j++) {
            printf("*");
        }

        for (k = 1; k < i; k++) {
            printf("  ");
        }

        //        for (j = 1; j <= 6 - i; j++)
        //        {
        //            printf("*");
        //        }
        // 
        printf("\n");
    }

    for (i = 2; i <= n; i++) {

        for (j = 1; j <= i; j++) {
            printf("*");
        }

        for (k = 1; k <= n - i; k++) {
            printf("  ");
        }
        // 
        //        for (j = 1; j <= i; j++)
        //        {
        //            printf("*");
        //        }

        printf("\n");
    }

}

/*
 * 
 */
int main() {

    int soma = 0, i = 0;

    for (i = 0; i <= 3; ++i) {

        printf("%d\n", i);

        soma += i;

    }

    printf("\n\n%d", soma);

    //HollowDiamond();

    /*int vetor[] = {12, 30, 100, 12, 5, 10, 15, 20, 25};


    int matrizSize = 9;

    for (int k = 0; k < matrizSize; k++) {
        //printf("%d\n", vetor[k]);
    }
    printf("---------\n\n---------\n");

    int temp = 0;

    for (int k = 0; k < matrizSize; k++) {

        temp = vetor[0];

        vetor[0] = vetor[matrizSize - 1];

        vetor[matrizSize - 1] = temp;

    }

    for (int k = 0; k < matrizSize; k++) {
        printf("%d\n", vetor[k]);
    }*/
    /*
    orderBubbleSort(mulCinco, matrizSize, 'c');

    for (int k = 0; k < matrizSize; k++) {
        printf("%d\n", mulCinco[k]);
    }*/

    return 0;
}

