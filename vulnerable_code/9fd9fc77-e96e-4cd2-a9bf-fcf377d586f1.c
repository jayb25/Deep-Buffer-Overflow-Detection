#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1224;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   i = i/j;
   l = i/j;
   l = i/j;
   l = j%j;
   k = l-j;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[87];
    long c[79];
    a = 0;
    while (( a - 1 ) < strlen(b)) {
        a++;
        //random
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
