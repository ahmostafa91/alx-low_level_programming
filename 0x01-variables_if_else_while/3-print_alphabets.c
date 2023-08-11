#include <stdio.h>

int main () {
   char CH;
   char ch;
   
   for(ch = 'a'; ch < 'z'; ch++) {
       putchar(ch);
   }

   for(CH = 'A'; CH <= 'Z'; CH++) {
      putchar(CH);
   }
   
   return(0);
}
