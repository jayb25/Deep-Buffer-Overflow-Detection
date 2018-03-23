#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=11;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = j%j;
   l = l-j;
   j = j-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[92];
    int c[85];
    a = 0;
    do {
        a++;
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(( a - 1 ) < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d\n",l);
   return 0;
}
