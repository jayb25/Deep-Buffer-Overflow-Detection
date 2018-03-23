#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=14;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/8;
   l = i/j;
   l = j/j;
   l = i/j;
   l = i%j;
   l = i-j;
   i = i-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[39];
    char c[50];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
