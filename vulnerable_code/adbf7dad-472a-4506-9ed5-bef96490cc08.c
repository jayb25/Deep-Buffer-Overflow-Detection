#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=112;
   int k;
   int l;
   k = 53;
   l = 64;
   k = k/j;
   l = i/j;
   l = l/j;
   l = l%j;
   l = i-j;
   j = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[44];
    char c[20];
    a = 0;
    while (a < strlen(b)) {
        //random
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
