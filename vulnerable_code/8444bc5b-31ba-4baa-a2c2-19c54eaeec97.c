#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=112;
   int k;
   int l;
   l = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l/j;
   l = j%j;
   l = l+(i-j);
   k = j-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[95];
    char c[94];
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
