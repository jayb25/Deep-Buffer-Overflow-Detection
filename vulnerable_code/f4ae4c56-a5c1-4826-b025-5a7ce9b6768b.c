#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   k = 53;
   i = 64;
   k = i%j;
   l = i/j;
   l = i/j;
   l = l/j;
   l = l%j;
   j = l%j;
   k = l-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[13];
    char c[39];
    a = 0;
    do {
        a++;
        //random
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(b[( a - 1 )] != 0);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
