#include <string.h>
#include <stdio.h>
int main() {
   float i=4;
   int j=12;
   int k;
   int l;
   i = 53;
   k = 64;
   k = i/j;
   l = i/j;
   l = j%j;
   l = l+j;
   k = i-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[20];
    char c[21];
    a = 0;
    while (( a - 1 ) > -1) {
        a--;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
