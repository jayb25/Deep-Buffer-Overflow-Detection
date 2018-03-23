#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 533;
   l = 6;
   k = i/j;
   l = i/j;
   l = i/j;
   l = i-j;
   l = j+j;
   l = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[71];
    char c[51];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        //random
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
