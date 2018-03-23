#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   i = 53;
   k = 44;
   k = i/j;
   l = i/j;
   l = j/j;
   l = l%j;
   l = i-j;
   k = k-i*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[11];
    char c[44];
    a = 0;
    while (a < strlen(b)) {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
