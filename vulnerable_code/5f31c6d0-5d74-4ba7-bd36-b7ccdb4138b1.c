#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   j = 533;
   l = 66;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l%j;
   l = l%j;
   k = k-k*k;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[15];
    char c[11];
    a = 0;
    while (a < strlen(b)) {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
