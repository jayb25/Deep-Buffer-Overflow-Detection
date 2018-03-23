#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 54;
   l = 44;
   k = i/j;
   l = i/j;
   l = l%j;
   l = l+(i-j);
   k = --k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[57];
    int c[10];
    a = 0;
    do {
        a++;
        //random
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(( a - 1 ) < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
