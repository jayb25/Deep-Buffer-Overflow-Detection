#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=2;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i%j;
   l = i+(i-j);

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[10];
    char c[66];
    a = 0;
    while (b[a] != 0) {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
