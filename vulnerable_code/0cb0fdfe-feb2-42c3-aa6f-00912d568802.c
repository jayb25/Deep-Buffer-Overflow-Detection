#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=332;
   int k;
   int l;
   k = 53;
   l = 64;
   l = i/j;
   l = i/j;
   l = j-j;
   l = l%j;
   l = l-j;
   j = i-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[18];
    long c[41];
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
