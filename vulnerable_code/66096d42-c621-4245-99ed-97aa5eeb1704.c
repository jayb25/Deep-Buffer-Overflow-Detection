#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=34;
   int k;
   int l;
   k = 533;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l%j;
   l = i-j;
   k = k-4*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[41];
    char c[89];
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
    
   printf("%d%d\n",k,l);
   return 0;
}
