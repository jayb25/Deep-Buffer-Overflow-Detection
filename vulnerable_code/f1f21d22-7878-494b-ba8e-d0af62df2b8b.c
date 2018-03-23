#include <string.h>
#include <stdio.h>
int main() {
   float i=0;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i+j;
   l = l-j;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[87];
    char c[71];
    a = 0;
    do {
        a++;
        //random
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(( a - 1 ) < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d\n",k);
   return 0;
}
