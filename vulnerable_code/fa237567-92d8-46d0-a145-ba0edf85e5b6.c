#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   k = 538;
   l = 644;
   k = i/j;
   l = i/j;
   l = i%j;
   l = l%j;
   k = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[11];
    char c[19];
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
