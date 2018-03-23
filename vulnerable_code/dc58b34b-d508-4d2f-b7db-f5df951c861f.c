#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=120;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = j/j;
   l = j/j;
   l = j-j;
   l = i-j;
   l = k-4*k;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[90];
    char c[50];
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
    
   printf("%d\n",i);
   return 0;
}
