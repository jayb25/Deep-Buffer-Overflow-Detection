#include <string.h>
#include <stdio.h>
int main() {
   float i=4;
   int j=12;
   int k;
   int l;
   k = 533;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = j%j;
   l = l+j;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[97];
    char c[63];
    a = 0;
    while (( a - 1 ) < strlen(b)) {
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
