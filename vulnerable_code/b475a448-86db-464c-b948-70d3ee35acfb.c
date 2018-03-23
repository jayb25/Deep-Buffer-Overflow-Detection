#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=14;
   int k;
   int l;
   k = 533;
   l = 64;
   k = i-j;
   l = i/j;
   l = i/j;
   l = l%j;
   l = l%j;
   j = k-i*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[74];
    char c[54];
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
