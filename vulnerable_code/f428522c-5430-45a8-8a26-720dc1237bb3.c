#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=11;
   int k;
   int l;
   j = 53;
   l = 644;
   k = i/j;
   l = i/j;
   l = l/j;
   l = j-j;
   l = l+j;
   l = j-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[58];
    int c[33];
    a = 0;
    while (a < strlen(b)) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,i);
   return 0;
}
