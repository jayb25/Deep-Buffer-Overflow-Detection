#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=14;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i-j;
   l = i/j;
   l = i/j;
   l = i%j;
   l = i+j;
   k = l-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[86];
    char c[13];
    a = 0;
    while (a < strlen(b)) {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
