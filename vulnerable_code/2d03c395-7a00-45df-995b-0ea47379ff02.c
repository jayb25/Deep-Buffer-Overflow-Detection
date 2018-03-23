#include <string.h>
#include <stdio.h>
int main() {
   float i=4;
   int j=18;
   int k;
   int l;
   k = 533;
   l = 44;
   l = i/j;
   l = i/j;
   l = l%j;
   l = l%j;
   j = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[11];
    int c[55];
    a = 0;
    while (( a - 1 ) < strlen(b)) {
        a++;
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
