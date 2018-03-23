#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=14;
   int k;
   int l;
   k = 53;
   i = 64;
   k = i-j;
   l = i/j;
   l = i%j;
   l = l+j;
   k = i-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[63];
    char c[52];
    a = 0;
    while (( a - 1 ) < strlen(b)) {
        a++;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
