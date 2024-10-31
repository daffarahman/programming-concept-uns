/*
  === BAGIAN INI GAUSA DI COPAS ===

  [Problem]
  Di Informatika kelas A diadakan pengukuran tinggi untuk setiap mahasiswanya.
  Terdapat N mahasiswa di kelas A dan setiap mahasiswa akan didata menjadi 2 kelompok,
  yaitu kelompok x dan y dimana kelompok x adalah kelompok siswa yang tingginya lebih dari (>) a,
  kelompok y adalah kelompok yang tingginya kurang dari (<) b. Hitunglah jumlah siswa di tiap kelompok.
  
  [Input Format]
  Baris 1 berisi satu bilangan N yang menandakan jumlah siswa. Baris 2 berisi N buah bilangan bulat yang menyatakan tinggi para siswa, urut dari terkecil hingga terbesar. Baris 3 berisi dua bilangan bulat, yaitu a dan b.

  [Constraints]
  1 < N < 50 1 < tinggi tiap siswa < 500 1 < a < b < 500

  [Output Format]
  Keluaran berupa dua buah bilangan berisi jumlah siswa di tiap kelompok.

  [Sample Input 0]
  6
  150 155 160 165 175 180
  160 155
  
  [Sample Output 0]
  3
  2
  
  [Explanation 0]

  Output menunjukan angka 3 karena kelompok X berisi mahasiswa yang tingginya 165 175 dan 180.
  Output menunjukan angka 2 karena kelompok Y berisi mahasiswa yang tingginya 150 dan 155.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N, a, b;
    int kelompokX = 0, kelompokY = 0;
    scanf("%d", &N);
    
    int *tinggiSiswa = (int*)malloc(sizeof(int) * N);
    
    for(int i=0;i<N;i++) scanf("%d", &tinggiSiswa[i]);
    
    scanf("%d%d", &a, &b);
    
    for(int i=0;i<N;i++) {
        if(tinggiSiswa[i] > a)
            kelompokX++;
        if(tinggiSiswa[i] <= b)
            kelompokY++;
    }
    
    printf("%d\n%d", kelompokX, kelompokY);
    
    return 0;
}
