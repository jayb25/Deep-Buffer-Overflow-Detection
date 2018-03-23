#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=321;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i%j;
   l = l/j;
   l = l-j;
   l = l%4;
   l = k%j;
   l = l-j;
   k = --k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[13];
    long c[60];
    a = 0;
    do {
        a++;
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(( a - 1 ) < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
