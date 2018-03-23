#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1482;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = j%j;
   l = i/j;
   k = k--*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[41];
    char c[28];
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
    //random
    
   printf("%d\n",l);
   return 0;
}
