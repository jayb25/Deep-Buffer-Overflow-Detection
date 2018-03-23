#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1228;
   int k;
   int l;
   i = 533;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l/j;
   l = j-j;
   l = k%j;
   k = l-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[42];
    char c[91];
    a = 0;
    do {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    //random
    
   printf("%d\n",l);
   return 0;
}
