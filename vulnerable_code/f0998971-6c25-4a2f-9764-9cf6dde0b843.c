#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=112;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i-j;
   l = l/j;
   l = i%j;
   l = l%j;
   k = l-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[83];
    int c[12];
    a = 0;
    do {
        a++;
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(( a - 1 ) < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d\n",i);
   return 0;
}
