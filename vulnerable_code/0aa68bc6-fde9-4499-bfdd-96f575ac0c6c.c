#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=132;
   int k;
   int l;
   j = 533;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l+j;
   l = l+j;
   k = i-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[77];
    long c[97];
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
