#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=18;
   int k;
   int l;
   k = 53;
   l = 63;
   k = i/j;
   l = i/j;
   l = i/j;
   l = i/j;
   l = i%j;
   l = l+(i-j);
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[75];
    char c[37];
    a = 0;
    do {
        a++;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(( a - 1 ) < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
