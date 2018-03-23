#include <string.h>
#include <stdio.h>
int main() {
   int i=04;
   int j=122;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = j%j;
   l = i/j;
   k = k-k*i;
   k = i-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[92];
    char c[55];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
