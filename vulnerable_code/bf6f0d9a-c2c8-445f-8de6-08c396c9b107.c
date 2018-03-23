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
   l = l/j;
   l = l-j;
   l = j-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[90];
    char c[6];
    a = 0;
    while (b[a] != 0) {
        //random
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
