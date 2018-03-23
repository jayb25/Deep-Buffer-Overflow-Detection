#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 53;
   j = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l/j;
   l = l%j;
   l = l+j;
   k = i-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[81];
    char c[93];
    a = 0;
    do {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,i);
   return 0;
}
