#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=124;
   int k;
   int l;
   i = 53;
   l = 64;
   k = i/j;
   l = i%j;
   l = i+(i-j);
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[68];
    int c[90];
    a = 0;
    do {
        a++;
        //random
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(( a - 1 ) < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
