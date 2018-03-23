#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1322;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/i;
   l = i/j;
   l = l/j;
   l = i-j;
   l = i-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[94];
    char c[83];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
