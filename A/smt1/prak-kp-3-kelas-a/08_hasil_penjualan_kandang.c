/*

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int nToko, nMerek;
    scanf("%d%d", &nToko, &nMerek);
    
    int *pMerek = (int*)malloc(sizeof(int) * (nMerek + 1));
    for(int i = 0; i < nToko; i++) {
        for(int j = 0; j < nMerek; j++) {
            int panjang = 0, lebar = 0;
            scanf("%d%d", &panjang, &lebar);
            pMerek[j + 1] += panjang * lebar;
        }
    }
    
    for(int i = 1; i <= nMerek; i++) {
        int harga = 0;
        scanf("%d", &harga);
        printf("%d\n", pMerek[i] * harga);
    }   
}
