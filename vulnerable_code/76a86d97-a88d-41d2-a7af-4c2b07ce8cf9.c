#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 53;
   l = 4;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l%j;
   l = k-j;
   k = k--*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[59];
    char c[28];
    a = 0;
    do {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    //random
    
   printf("%d\n",l);
   return 0;
}
