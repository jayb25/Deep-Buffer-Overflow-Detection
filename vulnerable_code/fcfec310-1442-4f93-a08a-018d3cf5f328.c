#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=14;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = i-j;
   l = j+j;
   k = i-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[42];
    long c[39];
    a = 0;
    do {
        a++;
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(( a - 1 ) < strlen(b));
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
