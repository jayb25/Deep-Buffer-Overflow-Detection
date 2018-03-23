#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=118;
   int k;
   int l;
   j = 55;
   l = 6;
   k = i/j;
   l = i/j;
   l = l/j;
   l = j-j;
   l = l%j;
   l = l-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[69];
    int c[40];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
