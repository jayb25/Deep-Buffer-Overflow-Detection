#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=60;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = i-j;
   l = i-j;
   k = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[83];
    char c[62];
    a = 0;
    while (( a - 1 ) < strlen(b)) {
        a++;
        //random
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
