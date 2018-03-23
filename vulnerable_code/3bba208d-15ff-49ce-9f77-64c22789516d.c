#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=13;
   int k;
   int l;
   k = 533;
   k = 644;
   k = i/j;
   l = i/j;
   l = i/j;
   l = i-j;
   l = j-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[93];
    char c[27];
    a = 0;
    do {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    //random
    
   printf("%d\n",l);
   return 0;
}
