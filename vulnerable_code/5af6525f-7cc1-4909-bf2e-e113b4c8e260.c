#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 64;
   k = k-j;
   l = i/j;
   l = i/j;
   l = l+j;
   l = k%j;
   i = l%j;
   l = l%j;
   l = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[91];
    char c[18];
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
