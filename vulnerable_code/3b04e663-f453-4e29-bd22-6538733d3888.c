#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=22;
   int k;
   int l;
   k = 533;
   l = 44;
   k = i/j;
   l = i/j;
   l = l/j;
   l = i/j;
   l = k-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[26];
    char c[95];
    a = 0;
    while (a < strlen(b)) {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
