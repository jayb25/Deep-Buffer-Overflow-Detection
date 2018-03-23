#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1248;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = l/j;
   l = l/j;
   l = j/j;
   l = j-j;
   l = k%j;
   k = l-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[59];
    char c[73];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,i);
   return 0;
}
