#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=04;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = k%j;
   l = k-j;
   k = k-k*k;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[5];
    int c[55];
    a = 0;
    do {
        a++;
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(( a - 1 ) < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,i);
   return 0;
}
