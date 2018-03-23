#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=62;
   int k;
   int l;
   k = 533;
   l = 64;
   k = i/j;
   l = i/j;
   l = l%j;
   l = i+l;
   j = i-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[93];
    char c[78];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        //random
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
