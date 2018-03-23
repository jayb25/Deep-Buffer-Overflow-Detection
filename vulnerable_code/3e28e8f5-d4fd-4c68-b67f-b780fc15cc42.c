#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 6;
   k = i/j;
   l = i/j;
   l = j/j;
   l = l%j;
   l = l/j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[69];
    char c[67];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,i);
   return 0;
}
