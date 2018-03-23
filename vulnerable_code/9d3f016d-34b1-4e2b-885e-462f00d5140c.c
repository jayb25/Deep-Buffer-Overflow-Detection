#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 60;
   k = i/j;
   l = i/j;
   l = i%j;
   l = 6-j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[42];
    char c[87];
    a = 0;
    while (b[a] != 0) {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d\n",l);
   return 0;
}
