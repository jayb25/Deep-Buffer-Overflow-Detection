#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=124;
   int k;
   int l;
   k = 533;
   l = 64;
   k = l/j;
   l = i/j;
   l = i/j;
   l = l/j;
   l = j%j;
   l = l-j;
   j = k-i*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[30];
    long c[73];
    a = 0;
    do {
        a--;
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(( a - 1 ) > -1);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
