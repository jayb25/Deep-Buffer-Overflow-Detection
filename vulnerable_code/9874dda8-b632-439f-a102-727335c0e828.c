#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   k = 5;
   k = 644;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l/j;
   l = i/j;
   l = l+j;
   l = j-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[83];
    char c[59];
    a = 0;
    do {
        a++;
        //random
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(b[( a - 1 )] != 0);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,i);
   return 0;
}
