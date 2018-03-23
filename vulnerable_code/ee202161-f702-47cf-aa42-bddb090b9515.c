#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=141;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l-j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[9];
    char c[92];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
