#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 9;
   k = i/j;
   l = i/j;
   l = l-j;
   l = l-j;
   l = j%j;
   l = l%j;
   j = i-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[97];
    char c[52];
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
    
   printf("%d%d\n",k,i);
   return 0;
}
