#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 5334;
   l = 64;
   k = i/j;
   l = i/j;
   l = l%j;
   l = l-j;
   j = l-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[69];
    char c[50];
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
    
   printf("%d%d\n",k,l);
   return 0;
}
