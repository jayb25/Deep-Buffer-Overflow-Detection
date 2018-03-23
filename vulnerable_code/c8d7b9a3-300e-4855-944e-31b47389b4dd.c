#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=34;
   int k;
   int l;
   j = 53;
   l = 54;
   k = i/j;
   l = i/j;
   l = i/j;
   l = 6%j;
   l = l-j;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[82];
    char c[68];
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
    
   printf("%d%d\n",k,i);
   return 0;
}
