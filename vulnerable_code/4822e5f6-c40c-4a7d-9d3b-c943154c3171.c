#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=43;
   int k;
   int l;
   j = 533;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = j/j;
   l = l%j;
   l = j+j;
   k = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[98];
    char c[63];
    a = 0;
    do {
        a++;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(( a - 1 ) < strlen(b));
    /* END VULNERABILITY */
    //random
    
   printf("%d%de\n",k,l);
   return 0;
}
