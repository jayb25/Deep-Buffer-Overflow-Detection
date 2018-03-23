#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=11;
   int k;
   int l;
   k = 53;
   l = 644;
   k = i-j;
   l = i/j;
   l = i/j;
   l = l/j;
   l = l/j;
   l = k%j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[98];
    char c[75];
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
