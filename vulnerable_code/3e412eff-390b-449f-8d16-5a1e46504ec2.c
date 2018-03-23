#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=11;
   int k;
   int l;
   i = 53;
   l = 64;
   k = i/j;
   l = i-j;
   l = i-j;
   l = i/j;
   l = l/j;
   l = l%j;
   l = l%j;
   j = j-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[53];
    char c[77];
    a = 0;
    do {
        a++;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(( a - 1 ) < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,i);
   return 0;
}
