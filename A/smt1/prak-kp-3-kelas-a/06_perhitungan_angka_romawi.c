/*

  [Problem]
  Bantulah Budi mengkonversi romawi menjadi bilangan bulat.
  Perlu diingat bahwa angka integer 4 bukanlah IIII, melainkan IV.
  Hal ini juga berlaku bagi angka integer 9 yang merupakan IX,
  bukan VIIII, dan seterusnya hingga simbol M.
  
  [Input Format]
  Input berupa string n yang berisi gabungan simbol romawi
  yang dapat dikonversi menjadi integer.
  
  [Constraints]
  Output berupa hasil konversi simbol romawi pada input, dalam bentuk integer.
  
  [Output Format]
  1 ≤ panjang n ≤ 15 n hanya terdiri dari huruf/char
  (‘I’, ‘V’, ‘X’, ‘L’, ‘C’, ‘D’, ‘M’).
  n adalah angka romawi yang valid dalam rentang [1, 3999].
  
  [Sample Input 0]
  LVIII
  
  [Sample Output 0]
  58
  
  [Explanation 0]
  L = 50, V = 5, VIII = 8
  
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char *input = (char*)malloc(sizeof(char) * 32);
    scanf("%s", input);
    
    int total = 0;
    for(int i = 0; i < strlen(input); i++) {
        char r = input[i];
        if(r == 'I') total += 1;
        else if(r == 'V') total += 5;
        else if(r == 'X') total += 10;
        else if(r == 'L') total += 50;
        else if(r == 'C') total += 100;
        else if(r == 'D') total += 500;
        else if(r == 'M') total += 1000;
        
        if (i > 0) {
            if ((r == 'V' || r == 'X') && input[i - 1] == 'I') {
                total -= 2;
            } else if ((r == 'L' || r == 'C') && input[i - 1] == 'X') {
                total -= 20;
            } else if ((r == 'D' || r == 'M') && input[i - 1] == 'C') {
                total -= 200;
            }
        }
    }
    
    printf("%d", total);
}
