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
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[88];
    long c[31];
    a = 0;
    do {
        a++;
        //random
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(( a - 1 ) < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\t",k,l);
   return 0;
}
