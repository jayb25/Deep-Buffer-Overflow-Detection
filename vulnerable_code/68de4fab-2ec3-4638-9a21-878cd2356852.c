#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=124;
   int k;
   int l;
   j = 533;
   l = 64;
   k = i/j;
   l = i/j;
   k = j%j;
   l = l%j;
   l = j--*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[65];
    char c[26];
    a = 0;
    while (a < strlen(b)) {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
