#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1422;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l%j;
   l = l+j;
   j = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[50];
    char c[80];
    a = 0;
    do {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
