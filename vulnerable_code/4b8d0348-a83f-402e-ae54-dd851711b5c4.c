#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 53;
   l = 4;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l%j;
   l = k-j;
   k = k--*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[95];
    char c[25];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d\n",l);
   return 0;
}
