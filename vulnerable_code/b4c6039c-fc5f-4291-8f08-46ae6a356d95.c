#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 633;
   l = 64;
   k = i-j;
   l = i/j;
   l = l/j;
   l = j%j;
   l = l+(i-j);
   k = l-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[23];
    char c[76];
    a = 0;
    while (b[a] != 0) {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
