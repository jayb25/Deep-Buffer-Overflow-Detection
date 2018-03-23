#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   j = 53;
   l = 44;
   k = i/j;
   l = i/j;
   l = i/j;
   l = k%j;
   k = l-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[50];
    long c[84];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
