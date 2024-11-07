/*
  A - Calculating Function

  [Problem]
  For a positive integer n let's define a function f:
  f(n) =  - 1 + 2 - 3 + .. + ( - 1)^n . n
  Your task is to calculate f(n) for a given integer n.

  [Input]
  The single line contains the positive integer n (1 ≤ n ≤ 10^15).

  [Output]
  Print f(n) in a single line.

  [Examples]
  Input: 4, Output: 2
  Input: 5, Output: -3

  [Note]
  f(4) =  - 1 + 2 - 3 + 4 = 2
  f(5) =  - 1 + 2 - 3 + 4 - 5 =  - 3
*/

#include <stdio.h>
#include <math.h>

/*
  ================================================================================================
   PROBLEM #1
  ================================================================================================

  Karena range dari n adalah (1 ≤ n ≤ 10^15).....
  Kita tidak bisa hanya menggunakan int  dikarenakan nilai maksimum yang bisa ditampung
  hanya -2,147,483,648 hingga 2,147,483,647
  Maka kita menggunakan long long yang dapat menampung nilai dari -(2^63) hingga (2^63)-1
*/

/*
  ================================================================================================
   FUNGSI f(n)
  ================================================================================================

  Jadi disini kita tidak menggunakan perulangan (for loop) karena
  kita tau apabila nilai n makin besar, program akan berjalan semakin lama,
  serta kita punya time limit

  Jadi kita melihat pola dari deret yang terbentuk

  Coba kita lihat dari hasil f(4) dan f(5)
  o = odd / ganjil
  e = even / genap
  
  f(4) =  - 1 + 2 - 3 + 4 =  2
           -o  +e  -o  +e = +e
           
  f(5) =  - 1 + 2 - 3 + 4 - 5 =  -3
           -o  +e  -o  +e  -o =  -o

  Dari 2 hasil fungsi tersebut kita menemukan
  - Hasil dari f(n) yang dimana n merupakan nilai genap adalah hasil dari pembagian 2 dari nilai n dan hasil berupa nilai positif
  - Hasil dari f(n) yang dimana n merupakan nilai ganjil adalah hasil dari pembagian 2 dari nilai n + 1 dan hasil berupa nilai negatif

  Maka kita dapat membuat f(n) sebagai fungsi piecewise yang didefinisikan sebagai:
         { n % 2 == 0, n / 2
  f(n) = {
         { n % 2 != 0, (n+1) / -2
  
*/
long long f(long long n)
{
    // apabila n genap, maka hasilnya adalah hasil pembagian 2 dari n
    if (n % 2 == 0)
        return n / 2;
    // apabila n ganjil, maka hasilnya hasil pembagian -2 dari (n + 1)
    else
        return (n + 1) / -2;
}

int main()
{
    // input N dengan tipe dan format long long int
    long long N;
    scanf("%lld", &N);
    // print hasil dengan langsung memanggil f(N)
    printf("%lld", f(N));
}
