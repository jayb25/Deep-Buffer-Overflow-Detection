#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=22;
   int k;
   int l;
   j = 53;
   l = 14;
   k = i/j;
   l = i/j;
   l = i/j;
   l = i/j;
   l = j-j;
   l = k%j;
   l = l-j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[70];
    char c[72];
    a = 0;
    while (a > -1) {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,i);
   return 0;
}
