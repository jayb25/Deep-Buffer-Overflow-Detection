#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=01;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i%j;
   l = i/j;
   l = i%j;
   l = i%j;
   j = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[21];
    int c[79];
    a = 0;
    while (( a - 1 ) < strlen(b)) {
        a++;
        //random
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    
   printf("%d\n",l);
   return 0;
}
