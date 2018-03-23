#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1242;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i%j;
   l = i-j;
   j = l-i*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[94];
    long c[50];
    a = 0;
    do {
        a++;
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(( a - 1 ) < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
