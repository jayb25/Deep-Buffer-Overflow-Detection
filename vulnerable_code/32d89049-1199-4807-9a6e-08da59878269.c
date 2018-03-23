#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=14;
   int k;
   int l;
   k = 51;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l-j;
   l = 6-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[82];
    char c[20];
    a = 0;
    do {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
