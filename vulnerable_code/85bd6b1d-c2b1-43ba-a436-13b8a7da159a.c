#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=11;
   int k;
   int l;
   k = 53;
   l = 64;
   k = j/j;
   l = i/j;
   l = l/j;
   l = i%j;
   l = j+j;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[12];
    char c[65];
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
