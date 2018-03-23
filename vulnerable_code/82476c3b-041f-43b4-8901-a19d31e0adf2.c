#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=1248;
   int k;
   int l;
   k = 55;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = i%j;
   l = i+j;
   i = i-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[49];
    char c[26];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\t",k,l);
   return 0;
}
