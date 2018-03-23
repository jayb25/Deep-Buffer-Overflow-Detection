#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=11;
   int k;
   int l;
   j = 58;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = i-j;
   l = j%j;
   j = l%j;
   k = j-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[33];
    char c[49];
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
