#include <string.h>
#include <stdio.h>
int main() {
   int i=44;
   int j=11;
   int k;
   int l;
   k = 53;
   k = 64;
   k = i/j;
   l = i+j;
   l = i+j;
   l = l%j;
   l = i%j;
   j = k-k*k;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[10];
    char c[59];
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
    
   printf("%d\n",l);
   return 0;
}
