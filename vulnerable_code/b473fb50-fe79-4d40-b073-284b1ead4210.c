#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=18;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/i;
   l = i/j;
   l = i/j;
   l = l-j;
   l = l-j;
   k = i-k*k;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[28];
    char c[46];
    a = 0;
    while (a < strlen(b)) {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
