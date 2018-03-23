#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=1424;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i%j;
   l = i+j;
   i = i-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[74];
    long c[30];
    a = 0;
    while (( a - 1 ) < strlen(b)) {
        a++;
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,i);
   return 0;
}
