#include <string.h>
#include <stdio.h>
int main() {
   float i=4;
   int j=122;
   int k;
   int l;
   j = 13;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = j%j;
   l = l+j;
   k = k-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[99];
    char c[41];
    a = 0;
    while (( a - 1 ) > -1) {
        a--;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
