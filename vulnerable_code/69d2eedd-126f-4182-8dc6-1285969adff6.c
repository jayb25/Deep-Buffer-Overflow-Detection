#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=112;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = j-j;
   l = j-j;
   k = i-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[87];
    char c[26];
    a = 0;
    do {
        a++;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(b[( a - 1 )] != 0);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,i);
   return 0;
}
