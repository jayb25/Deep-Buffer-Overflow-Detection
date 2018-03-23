#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=1424;
   int k;
   int l;
   k = 533;
   l = 64;
   k = i/j;
   l = l/j;
   l = i/j;
   l = j%j;
   l = k-j;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[72];
    char c[75];
    a = 0;
    while (( a - 1 ) < strlen(b)) {
        a++;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
