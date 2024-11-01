/*

  [Problem]
  Aditya adalah seorang trader saham. Dengan bantuan orang dalam, ia diberikan data
  harga saham yang sudah diatur dari hari ke hari. Setiap harinya, dia dapat memutuskan
  untuk membeli dan/atau menjual stok saham. Ia hanya dapat memegang 1 (satu) stok saham
  saja dalam satu waktu, namun dia bisa membeli dan menjual stok sahamnya pada hari yang sama.
  Aditya meminta tolong padamu untuk mencari keuntungan tertinggi yang bisa didapatkan, dengan
  imbalan bisa berbagi hasil keuntungan saham bersamamu.

  [Input Format]
  Baris pertama berupa integer h, sebagai jumlah hari dari data harga saham yang didapatkan.
  Baris kedua berupa data harga saham dari hari ke hari secara berurutan selama h hari,
  masing-masing dipisahkan oleh spasi. Perlu diingat bahwa input berupa struktur data array
  harga, dimana harga[i] adalah harga dari stok saham pada hari ke-i.
  
  [Constraints]
  1 ≤ h ≤ 10 0 ≤ harga ≤ 10^2
  
  [Output Format]
  Output berupa total dari keuntungan yang didapat dengan cara menjual dan membeli stok saham dari hari ke hari.
  
  [Sample Input 0]
  8
  7 1 3 5 10 6 2 8
  
  [Sample Output 0]
  15
  
  [Explanation 0]
  Baris pertama berupa angka 8, yang berarti data saham yang diterima adalah selama 8 hari.
  Beli pada hari ke-2 (harga = 1) lalu menjualnya pada hari ke-5 (harga = 10),
  untung 10 - 1 = 9 Lalu beli pada hari ke-7 (harga = 2) lalu menjualnya lagi pada hari ke-8
  (harga = 8), untung 8 - 2 = 6. Maka total keuntungannya adalah 9 + 6 = 15.
  
  [Sample Input 1]
  7
  1 2 3 4 5 6 7
  
  [Sample Output 1]
  6
  
  [Explanation 1]
  Baris pertama berupa angka 7, yang berarti data saham yang diterima adalah selama 7 hari.
  Beli pada hari ke-1 (harga = 1) lalu menjualnya pada hari ke-7 (harga = 7)
  maka total keuntungannya adalah 7 - 1 = 6.
  
  [Sample Input 2]
  5
  9 7 5 3 1
  
  [Sample Output 2]
  0
  
  [Explanation 2]
  Baris pertama berupa angka 5, yang berarti data saham yang diterima adalah selama 5 hari.
  Karena harga stok saham justru turun dan tidak naik sama sekali, maka tidak ada cara untuk
  mendapatkan keuntungan dari membeli stok. Jadi keuntungan maksimalnya adalah 0.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int H;
    scanf("%d", &H);
    
    int *harga = (int*)malloc(sizeof(int) * H);
    for (int i = 0; i < H; i++) {
        scanf("%d", &harga[i]);
    }

    int totalUntung = 0;
    for (int i = 1; i < H; i++) {
        if (harga[i] > harga[i - 1]) {
            totalUntung += harga[i] - harga[i - 1];
        }
    }
    
    printf("%d", totalUntung);

    return 0;
}
