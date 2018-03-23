#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=122;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l%j;
   l = l-j;
   k = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[46];
    int c[40];
    a = 0;
    do {
        a++;
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(b[( a - 1 )] != 0);
    /* END VULNERABILITY */
    
   printf("%d\n",i);
   return 0;
}
