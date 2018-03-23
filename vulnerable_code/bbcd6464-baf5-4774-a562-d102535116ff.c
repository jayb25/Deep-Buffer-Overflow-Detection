#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=11;
   int k;
   int l;
   k = 53;
   l = 54;
   k = i/j;
   l = i/j;
   l = i/j;
   l = k%j;
   k = l--*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[86];
    char c[19];
    a = 0;
    while (a < strlen(b)) {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d\n",l);
   return 0;
}
