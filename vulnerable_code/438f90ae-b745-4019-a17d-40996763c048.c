#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=110;
   int k;
   int l;
   k = 53;
   l = 63;
   k = i/j;
   l = i-j;
   l = i-j;
   j = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[79];
    char c[42];
    a = 0;
    do {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d\n",k);
   return 0;
}
