#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=04;
   int k;
   int l;
   k = 53;
   l = 64;
   l = i/j;
   l = j/j;
   l = l-j;
   l = j-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[15];
    char c[52];
    a = 0;
    do {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
