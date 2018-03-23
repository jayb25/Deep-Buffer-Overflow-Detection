#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=114;
   int k;
   int l;
   k = 53;
   i = 64;
   k = i/j;
   l = i%j;
   l = j+j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[38];
    char c[27];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,i);
   return 0;
}
