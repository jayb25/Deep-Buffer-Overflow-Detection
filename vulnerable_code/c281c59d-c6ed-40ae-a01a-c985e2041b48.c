#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1444;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l-j;
   l = i-j;
   l = l%j;
   l = j-k*k;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[75];
    char c[14];
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
