#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=53;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l-j;
   l = j-j;
   l = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[24];
    long c[60];
    a = 0;
    while (( a - 1 ) < strlen(b)) {
        a++;
        //random
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
