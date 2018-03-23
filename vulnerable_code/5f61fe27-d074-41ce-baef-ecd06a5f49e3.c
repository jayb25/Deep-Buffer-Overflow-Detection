#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=44;
   int k;
   int l;
   j = 53;
   l = 64;
   k = j/j;
   l = i/j;
   l = i/j;
   l = i-j;
   j = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[37];
    int c[36];
    a = 0;
    do {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
