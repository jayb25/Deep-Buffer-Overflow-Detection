#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=118;
   int k;
   int l;
   j = 533;
   l = 64;
   k = i/j;
   l = i/j;
   l = i%j;
   l = i/j;
   k = l-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[68];
    char c[16];
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
