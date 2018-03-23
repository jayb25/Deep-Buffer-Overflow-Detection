#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=02;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l%j;
   l = l-j;
   j = k-k*j;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[95];
    char c[80];
    a = 0;
    while (( a - 1 ) > -1) {
        a--;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    
   printf("%d\n",i);
   return 0;
}
