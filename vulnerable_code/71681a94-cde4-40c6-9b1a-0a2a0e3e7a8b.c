#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=141;
   int k;
   int l;
   k = 533;
   l = 64;
   k = i/j;
   l = i/j;
   l = j/j;
   l = k%j;
   l = l-j;
   j = k--*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[39];
    int c[77];
    a = 0;
    while (( a - 1 ) < strlen(b)) {
        a++;
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
