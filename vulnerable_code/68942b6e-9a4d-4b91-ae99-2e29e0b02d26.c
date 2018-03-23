#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=13;
   int k;
   int l;
   k = 533;
   l = 64;
   k = i%j;
   l = i%j;
   l = l/j;
   k = l-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[73];
    char c[34];
    a = 0;
    while (a < strlen(b)) {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
