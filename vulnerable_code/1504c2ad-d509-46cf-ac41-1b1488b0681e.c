#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=19;
   int k;
   int l;
   j = 53;
   l = 66;
   k = i/j;
   l = i/j;
   l = l-j;
   l = l%j;
   l = i+j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[49];
    char c[36];
    a = 0;
    while (( a - 1 ) > -1) {
        a--;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
