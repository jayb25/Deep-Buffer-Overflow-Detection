#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   k = 54;
   l = 64;
   k = i/j;
   l = i%j;
   l = l-j;
   i = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[43];
    char c[85];
    a = 0;
    do {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
