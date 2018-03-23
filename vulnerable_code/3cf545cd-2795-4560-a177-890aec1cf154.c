#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   k = 33;
   l = 64;
   k = i+j;
   l = i/j;
   l = i/j;
   l = i-j;
   l = j-j;
   l = i-j;
   k = k-i*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[90];
    char c[54];
    a = 0;
    while (( a - 1 ) > -1) {
        a--;
        //random
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,i);
   return 0;
}
