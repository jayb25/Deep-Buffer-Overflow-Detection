#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=41;
   int k;
   int l;
   k = 63;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = j+j;
   l = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[49];
    int c[65];
    a = 0;
    while (( a - 1 ) < strlen(b)) {
        a++;
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    
   printf("%d\n",l);
   return 0;
}
