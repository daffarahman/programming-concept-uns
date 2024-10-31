/*
  === BAGIAN INI GAUSA DI COPAS ===

  [Problem]
  Sebuah perusahaan perangkat lunak ingin membuat program yang dapat memutar
  elemen-elemen dalam sebuah array ke kanan sebanyak kk langkah.
  Bantulah mereka untuk mengimplementasikan fungsi ini!

  [Input Format]
  Baris pertama: Integer nn (jumlah elemen dalam array).
  Baris kedua: nn bilangan bulat yang merupakan elemen array.
  Baris ketiga: Integer kk (jumlah langkah pemutaran).
  
  [Constraints]
  Baris pertama: Integer n (jumlah elemen dalam array).
  Baris kedua: n bilangan bulat yang merupakan elemen array.
  Baris ketiga: Integer k (jumlah langkah pemutaran).
  
  [Output Format]
  Cetak elemen array setelah diputar ke kanan sebanyak k langkah.
  
  [Sample Input 0]
  5
  1 2 3 4 5
  2
  
  [Sample Output 0]
  4 5 1 2 3
  
  [Explanation 0]
  Setelah memutar elemen ke kanan sebanyak 2 langkah,
  array yang awalnya [1, 2, 3, 4, 5] akan menjadi [4, 5, 1, 2, 3].
  
  Putaran ke-1: 1 2 3 4 5 -> 5 1 2 3 4 Putaran ke-2: 5 1 2 3 4 -> 4 5 1 2 3
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    
    int N, K;
    scanf("%d", &N);
    
    int *arr = (int*)malloc(sizeof(int) * N);
    
    for(int i=0;i<N;i++) {
        scanf("%d", &arr[i]);
    }
    
    scanf("%d", &K);
    
    for(int i=0;i<K;i++) {
        for(int i = 0; i < (N - 1);i++) {
            swap(&arr[i], &arr[N - 1]);
        }
    }
    
    for(int i=0;i<N;i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
