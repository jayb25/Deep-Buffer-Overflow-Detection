#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=322;
   int k;
   int l;
   k = 533;
   l = 644;
   l = i/j;
   l = i/j;
   l = i-j;
   l = l-j;
   l = l%j;
   l = l-j;
   k = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[61];
    long c[52];
    a = 0;
    while (a < strlen(b)) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
