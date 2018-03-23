#include <string.h>
#include <stdio.h>
int main() {
   float i=0;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 64;
   l = i-j;
   l = l/j;
   l = l-j;
   l = l%j;
   j = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[74];
    char c[79];
    a = 0;
    while (b[a] != 0) {
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
