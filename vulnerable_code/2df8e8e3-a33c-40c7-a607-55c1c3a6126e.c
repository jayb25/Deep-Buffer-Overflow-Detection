#include <string.h>
#include <stdio.h>
int main() {
   int i=04;
   int j=11;
   int k;
   int l;
   k = 55;
   k = 64;
   k = i/j;
   l = l/j;
   l = i/j;
   l = j/j;
   l = l%j;
   l = l%j;
   j = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[38];
    char c[7];
    a = 0;
    do {
        a++;
        //random
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(( a - 1 ) < strlen(b));
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
