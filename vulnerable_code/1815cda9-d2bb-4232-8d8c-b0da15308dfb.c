#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   i = 53;
   i = 64;
   k = i/j;
   l = i%j;
   l = i-i;
   l = i/j;
   k = i-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[38];
    char c[33];
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
