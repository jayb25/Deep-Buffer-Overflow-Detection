#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   8==33;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = k%j;
   l = l-j;
   k = k--*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[42];
    char c[94];
    a = 0;
    do {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    
   printf("%d\n",l);
   return 0;
}
