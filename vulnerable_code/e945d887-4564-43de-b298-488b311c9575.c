#include <string.h>
#include <stdio.h>
int main() {
   float i=4;
   int j=102;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   k = i/j;
   l = l/j;
   l = l/j;
   l = l%j;
   l = l+j;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[46];
    char c[87];
    a = 0;
    do {
        a++;
        //random
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(( a - 1 ) < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
