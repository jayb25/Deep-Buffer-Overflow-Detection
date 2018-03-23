#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 531;
   l = 64;
   l = i/j;
   l = i/j;
   l = i/j;
   l = l-j;
   l = i-j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[14];
    char c[92];
    a = 0;
    while (( a - 1 ) < strlen(b)) {
        a++;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
