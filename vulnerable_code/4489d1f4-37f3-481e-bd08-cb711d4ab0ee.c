#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 5;
   k = 64;
   k = i/j;
   l = i/j;
   l = k%j;
   l = i-j;
   i = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[24];
    char c[26];
    a = 0;
    do {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,i);
   return 0;
}
