#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=1;
   int k;
   int l;
   i = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i%j;
   l = l-j;
   k = k-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[70];
    char c[45];
    a = 0;
    while (a < strlen(b)) {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
