#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=13;
   int k;
   int l;
   k = 3;
   l = 64;
   k = i/j;
   l = l/j;
   l = i/j;
   l = i%j;
   l = l/j;
   l = k-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[52];
    char c[25];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        //random
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    
   printf("%d\n",k);
   return 0;
}
