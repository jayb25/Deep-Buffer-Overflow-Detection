#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=1244;
   int k;
   int l;
   k = 533;
   l = 64;
   k = i/j;
   l = i-j;
   l = l%j;
   l = l%j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[29];
    char c[18];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
