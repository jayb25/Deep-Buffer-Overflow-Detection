#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=322;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l/j;
   k = l-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[44];
    int c[58];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,i);
   return 0;
}
