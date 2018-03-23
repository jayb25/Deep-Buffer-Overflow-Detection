#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=142;
   int k;
   int l;
   k = 533;
   k = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = k-j;
   l = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[49];
    char c[67];
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
