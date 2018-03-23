#include <string.h>
#include <stdio.h>
int main() {
   int i=04;
   int j=1;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = j/j;
   l = l-j;
   l = k-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[66];
    long c[49];
    a = 0;
    do {
        a++;
        //random
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(( a - 1 ) < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
