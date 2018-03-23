#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=321;
   int k;
   int l;
   k = 53;
   l = 66;
   k = i/j;
   l = i/j;
   l = i/j;
   l = j-j;
   l = i%j;
   l = i-j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[70];
    long c[29];
    a = 0;
    while (a < strlen(b)) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d\n",l);
   return 0;
}
