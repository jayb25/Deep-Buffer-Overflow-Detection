#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1421;
   int k;
   int l;
   k = 533;
   l = 54;
   k = i/j;
   l = i/j;
   l = l/j;
   l = i-j;
   l = l-j;
   k = i-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[30];
    char c[64];
    a = 0;
    do {
        a++;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(( a - 1 ) < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
