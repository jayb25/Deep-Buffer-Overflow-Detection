#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 60;
   k = i/j;
   l = i/j;
   l = l/j;
   l = i/j;
   l = k%j;
   l = --k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[70];
    char c[23];
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
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
