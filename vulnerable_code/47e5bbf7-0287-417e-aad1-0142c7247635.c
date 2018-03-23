#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=121;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l%j;
   l = l/j;
   l = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[62];
    char c[8];
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
