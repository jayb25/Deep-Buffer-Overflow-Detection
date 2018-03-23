#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=32;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = i/j;
   l = j%j;
   l = l%3;
   k = k-k*k;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[31];
    char c[92];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        //random
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
