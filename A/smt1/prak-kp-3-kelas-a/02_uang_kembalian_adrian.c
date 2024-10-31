/*

  [Problem]
  Adrian bekerja sebagai kasir di SigmaMart. Tugasnya adalah menghitung jumlah harga barang
  yang dibeli oleh para pembeli, dan menerima uang yang harus dibayar. Terkadang uang yang
  diberikan tidak pas, sehingga Adrian harus memberikan uang kembalian kepada pembeli tersebut.
  Bantu Adrian menghitung jumlah uang yang perlu dikembalikan dalam bentuk pecahan uang kertas
  rupiah dengan jumlah lembar minimum.

  [Input Format]
  Input berisi nilai integer positif N, sebagai nilai dari uang kembalian.
  Tidak perlu menambah 3 digit terakhir ( 10 berarti Rp10.000, 50 berarti Rp50.000).
  
  [Constraints]
  1 ≤ N ≤ 1000
  
  [Output Format]
  Output berisi 7 baris, masing-masing baris terdiri dari 2 angka, angka pertama merupakan nilai dari uang kertas, dan angka kedua merupakan jumlah dari nilai uang kertas tersebut.
  
  [Sample Input 0]
  65
  
  [Sample Output 0]
  100 0
  50 1
  20 0
  10 1
  5 1
  2 0
  1 0
  
  [Explanation 0]
  Uang 65.000 bisa diberi kembalian minimum menggunakan 1 lembar 50.000, 1 lembar 10.000 dan 1 lembar 5.000.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct {
    int nominal;
    int jumlah;
} UangKertas;

int main() {

    int N;
    scanf("%d", &N);

    UangKertas *banyakUang = (UangKertas*)malloc(sizeof(UangKertas) * 7);
    
    banyakUang[0].nominal = 100;
    banyakUang[1].nominal = 50;
    banyakUang[2].nominal = 20;
    banyakUang[3].nominal = 10;
    banyakUang[4].nominal = 5;
    banyakUang[5].nominal = 2;
    banyakUang[6].nominal = 1;
    
    banyakUang[0].jumlah = 0;
    banyakUang[1].jumlah = 0;
    banyakUang[2].jumlah = 0;
    banyakUang[3].jumlah = 0;
    banyakUang[4].jumlah = 0;
    banyakUang[5].jumlah = 0;
    banyakUang[6].jumlah = 0;
    
    for(int i = 0; i < 7; i++) {
        
        if(N > 200) {
            banyakUang[0].jumlah++;
            N -= 100;
            i--;
        }
        
        else if(banyakUang[i].nominal == N) {
            banyakUang[i].jumlah++;
            break;
        }
        else if(banyakUang[i].nominal < N) {
            
            if(banyakUang[i].nominal == 20) {
                if((N - banyakUang[i].nominal) > 20 && (N - banyakUang[i].nominal) < 50) {
                    banyakUang[i].jumlah++;
                    N -= banyakUang[i].nominal;
                    i--;
                    continue;
                }
            } 
            
            if ((N - banyakUang[i].nominal) <= banyakUang[i].nominal) {
                banyakUang[i].jumlah++;
                N -= banyakUang[i].nominal;
                i--;
            }
        }
    }
    
    for(int i = 0; i < 7; i++) {
        printf("%d %d\n", banyakUang[i].nominal, banyakUang[i].jumlah);
    }
    
    return 0;
}
