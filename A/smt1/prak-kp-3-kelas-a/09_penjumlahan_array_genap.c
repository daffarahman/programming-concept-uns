/*
  [Problem]
  Seorang programmer sedang mengerjakan proyek yang melibatkan pengolahan data.
  Dia ingin menghitung jumlah semua elemen genap dalam sebuah array.
  Bantulah dia untuk menyelesaikan tugas ini!
  
  [Input Format]
  Baris pertama: Integer nn (jumlah elemen dalam array).
  Baris kedua: nn bilangan bulat yang merupakan elemen array.
  
  [Constraints]
  1 ≤ n ≤ 100 −1000 ≤ elemen array ≤ 1000
  
  [Output Format]
  Cetak jumlah dari semua elemen genap dalam array.
  
  [Sample Input 0]
  5
  1 2 3 4 5
  
  [Sample Output 0]
  6
  
  [Explanation 0]
  Jumlah elemen genap dalam array adalah 2 dan 4, sehingga hasilnya adalah 6.
  
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void sumArrayGenap(int *arr, int *dest, int length) {
    for(int i = 0; i < length; i++) {
        if(arr[i] % 2 == 0) {
            *dest += arr[i];
        }
    }
}

int main() {
    int N, total = 0;
    scanf("%d", &N);
    
    int *arr = (int*)malloc(sizeof(int) * N);
    
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    sumArrayGenap(arr, &total, N);
    
    printf("%d", total);
    
    return 0;
}
