#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 33;
   l = 64;
   k = i/j;
   l = j/j;
   l = j/j;
   l = j%j;
   l = i-j;
   i = i-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[12];
    int c[97];
    a = 0;
    do {
        a++;
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(( a - 1 ) < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d\n",l);
   return 0;
}
