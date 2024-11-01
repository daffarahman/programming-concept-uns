/*

  [Problem]
  Di sebuah desa terpencil, terdapat sebuah kuil kuno bernama Gan An Wo yang dipercaya
  oleh penduduk setempat memiliki kekuatan mistis. Di dalam kuil ini, terdapat sebuah
  lantai yang terbuat dari ubin berbentuk persegi yang disusun dalam pola matriks N x N.
  Setiap ubin memiliki nilai energi yang berbeda, yang dinyatakan dalam bentuk bilangan bulat.

  Menurut legenda, kekuatan kuil ini dipengaruhi oleh dua garis mistis yang membentang
  di lantai tersebut. Garis mistis pertama membentang dari sudut kiri atas hingga sudut
  kanan bawah, dikenal sebagai Garis Utama. Garis mistis kedua membentang dari sudut
  kanan atas hingga sudut kiri bawah, dikenal sebagai Garis Sekunder.

  Sebagai penjaga kuil, tugas Anda adalah menghitung total energi yang terkumpul di sepanjang 
  Garis Utama dan Garis Sekunder. Hasil perhitungan ini akan digunakan untuk memastikan bahwa
  kuil tetap berfungsi dan memberikan perlindungan bagi desa.

  [Input Format]
  Baris pertama berisi bilangan bulat N yang merupakan ukuran dari matriks lantai kuil.
  Baris berikutnya berisi N baris, masing-masing berisi N bilangan bulat yang merupakan
  nilai energi pada setiap ubin.

  [Constraints]
  1 ≤ N ≤ 100

  [Output Format]
  Cetak dua bilangan bulat yang merupakan total energi di sepanjang Garis Utama dan Garis Sekunder,
  dipisahkan oleh spasi.

  [Sample Input 0]
  3
  1 2 3
  4 5 6
  7 8 9
  
  [Sample Output 0]
  15 15
  
  [Explanation 0]
  1 + 5 + 9 = 15 3 + 5 + 7 = 15
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int *energi = (int*)malloc(sizeof(int) * (N * N));
    for(int i = 0; i < N * N; i++) {
        scanf("%d", &energi[i]);
    }
    
    int garisUtama = 0, garisSekunder = 0;
    
    for(int i = 0; i < N; i++) {
        garisUtama += energi[i * N + i];
        garisSekunder += energi[i * N + ((N-1) - i)];
    }
    
    printf("%d %d", garisUtama, garisSekunder);
}
