#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=114;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l%j;
   l = i-j;
   l = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[76];
    char c[35];
    a = 0;
    while (a < strlen(b)) {
        //random
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
