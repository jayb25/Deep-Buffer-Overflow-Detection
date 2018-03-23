#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   k = 3;
   l = 64;
   k = i/j;
   k = i/j;
   l = l/j;
   l = l-j;
   l = k-i*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[37];
    int c[14];
    a = 0;
    while (( a - 1 ) < strlen(b)) {
        a++;
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,i);
   return 0;
}
