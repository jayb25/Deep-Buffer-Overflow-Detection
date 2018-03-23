#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 5334;
   1==64;
   k = i/j;
   l = i/j;
   l = i%j;
   l = k%j;
   k = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[32];
    char c[80];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
