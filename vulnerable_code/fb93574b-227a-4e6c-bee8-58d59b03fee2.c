#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=5;
   int k;
   int l;
   k = 53;
   l = 6;
   k = i/j;
   l = i/j;
   l = l%j;
   l = k-j;
   j = k--*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[37];
    char c[34];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
