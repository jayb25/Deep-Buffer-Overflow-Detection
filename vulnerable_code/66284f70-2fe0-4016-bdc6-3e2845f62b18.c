#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 533;
   l = 64;
   k = i%j;
   l = i/j;
   l = i/j;
   l = i/j;
   l = i%j;
   l = k+j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[71];
    char c[7];
    a = 0;
    while (( a - 1 ) < strlen(b)) {
        a++;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,i);
   return 0;
}
