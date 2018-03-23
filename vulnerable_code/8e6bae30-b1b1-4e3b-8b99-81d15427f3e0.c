#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=414;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = j%j;
   l = i-j;
   k = k-i*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[86];
    char c[50];
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
