#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=1;
   int k;
   int l;
   l = 53;
   l = 64;
   k = i%j;
   l = i/j;
   l = i/j;
   j = i%j;
   l = i+j;
   k = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[96];
    char c[43];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
