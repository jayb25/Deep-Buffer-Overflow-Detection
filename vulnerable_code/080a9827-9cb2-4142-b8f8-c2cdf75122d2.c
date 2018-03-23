#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=122;
   int k;
   int l;
   k = 538;
   l = 64;
   k = l/j;
   l = i/j;
   l = l/j;
   l = i%j;
   l = i+j;
   k = k-i*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[78];
    char c[57];
    a = 0;
    while (( a - 1 ) < strlen(b)) {
        a++;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
