#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=11;
   int k;
   int l;
   k = 533;
   l = 644;
   k = i/j;
   l = i/j;
   l = l/j;
   l = j%j;
   l = l-j;
   j = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[54];
    long c[54];
    a = 0;
    do {
        a++;
        //random
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(b[( a - 1 )] != 0);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
