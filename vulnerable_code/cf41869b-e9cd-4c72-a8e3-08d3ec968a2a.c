#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 53;
   l = 6;
   k = i/j;
   l = i/j;
   l = l/j;
   l = i%j;
   l = j-j*k;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[37];
    int c[75];
    a = 0;
    do {
        a++;
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(( a - 1 ) < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
