#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 55;
   k = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = i%j;
   l = l-j;
   k = l-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[73];
    int c[87];
    a = 0;
    while (( a - 1 ) < strlen(b)) {
        a++;
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
