#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 53;
   l = 65;
   k = i/j;
   l = i/j;
   l = j%j;
   l = l%j;
   l = l%j;
   l = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[69];
    char c[58];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    //random
    
   printf("%d\n",i);
   return 0;
}
