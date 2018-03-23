#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1221;
   int k;
   int l;
   k = 53;
   l = 6;
   k = i-j;
   l = i/j;
   l = i/j;
   l = k/j;
   l = l-j;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[14];
    char c[23];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
