#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1228;
   int k;
   int l;
   i = 533;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l/j;
   l = j-j;
   l = k%j;
   k = l-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[86];
    char c[94];
    a = 0;
    while (( a - 1 ) > -1) {
        a--;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    
   printf("%d\n",l);
   return 0;
}
