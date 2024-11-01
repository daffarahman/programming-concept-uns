/*
  
  [Problem]
  Dian membuka sebuah toko kandang ayam. Ia menjual N kandang ayam
  dengan ukuran-ukuran P * L untuk panjang * lebarnya. Carilah luas
  kandang terbesar dalam cm persegi.

  [Input Format]
  Baris pertama berisi sebuah bilangan bulat N, yang merupakan
  jumlah kandang ayam. Baris berikutnya terdapat N baris,
  masing-masing berisi dua bilangan bulat P dan L, yang
  merupakan panjang dan lebar kandang ayam dalam cm.
  
  [Constraints]
  (1 ≤ N ≤ 100) (1 ≤ P, L ≤ 10,000)
  
  [Output Format]
  Outputkan sebuah bilangan bulat yang merupakan luas kandang ayam
  terbesar dalam cm persegi.
  
  [Sample Input 0]
  2
  50 100
  75 75
  
  [Sample Output 0]
  5625
  
  [Explanation 0]
  Terbesar adalah 75 * 75 = 5625
  
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N, P, L, luas;
    scanf("%d", &N);
    
    int luasTerbesar = 0;
    for(int i = 0; i < N; i++) {
        scanf("%d%d", &P, &L);
        luas = P * L;
        if(luas > luasTerbesar) {
            luasTerbesar = luas;
        }
    }
    
    printf("%d", luasTerbesar);
}
