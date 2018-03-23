#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=14;
   int k;
   int l;
   k = 53;
   l = 65;
   k = i/j;
   l = i/j;
   l = l/j;
   l = i%j;
   l = l-j;
   k = l-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[92];
    long c[12];
    a = 0;
    while (( a - 1 ) > -1) {
        a--;
        //random
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
