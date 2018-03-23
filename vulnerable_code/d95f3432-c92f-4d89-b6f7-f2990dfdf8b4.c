#include <string.h>
#include <stdio.h>
int main() {
   int i=44;
   int j=14;
   int k;
   int l;
   j = 53;
   l = 64;
   k = j/j;
   l = i/j;
   l = i/j;
   l = l/j;
   l = i%j;
   l = l%j;
   j = 6-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[21];
    char c[72];
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
