#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=43;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i%j;
   l = i%j;
   l = l%j;
   i = k-i*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[87];
    char c[44];
    a = 0;
    while (( a - 1 ) < strlen(b)) {
        a++;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,i);
   return 0;
}
