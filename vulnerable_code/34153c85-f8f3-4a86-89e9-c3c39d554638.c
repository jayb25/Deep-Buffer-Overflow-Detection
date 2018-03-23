#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=02;
   int k;
   int l;
   k = 5;
   l = 64;
   k = i/j;
   l = l/j;
   l = l/j;
   l = l/j;
   l = l/j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[65];
    char c[20];
    a = 0;
    while (a < strlen(b)) {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
