#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=114;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = i/j;
   l = j%j;
   l = i/j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[79];
    char c[93];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    
   printf("%d\n",k);
   return 0;
}
