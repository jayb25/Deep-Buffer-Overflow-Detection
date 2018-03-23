#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=11;
   int k;
   int l;
   k = 633;
   l = 9;
   k = i/j;
   l = i/j;
   l = l%j;
   l = k-j;
   k = k--*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[42];
    long c[11];
    a = 0;
    do {
        a++;
        //random
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(( a - 1 ) < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
