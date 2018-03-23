#include <string.h>
#include <stdio.h>
int main() {
   float i=4;
   int j=1228;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = --j;
   l = j-j;
   l = l-j;
   k = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[18];
    char c[86];
    a = 0;
    do {
        a--;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(( a - 1 ) > -1);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
