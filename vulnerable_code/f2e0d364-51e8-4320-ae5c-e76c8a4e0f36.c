#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=11;
   int k;
   int l;
   k = 538;
   l = 64;
   k = l/j;
   l = i/j;
   l = l = j;
   l = i%j;
   l = j-j;
   k = k-l*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[97];
    char c[72];
    a = 0;
    while (( a - 1 ) < strlen(b)) {
        a++;
        //random
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
