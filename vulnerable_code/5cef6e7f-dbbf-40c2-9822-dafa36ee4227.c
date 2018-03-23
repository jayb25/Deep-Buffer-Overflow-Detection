#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=044;
   int k;
   int l;
   k = 53;
   k = 64;
   k = i/j;
   l = i/j;
   l = l%j;
   l = l-k-j;
   i = i/j*k;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[69];
    char c[72];
    a = 0;
    while (( a - 1 ) > -1) {
        a--;
        //random
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
