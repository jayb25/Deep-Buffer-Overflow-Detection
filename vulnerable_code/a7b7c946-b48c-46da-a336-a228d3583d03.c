#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   while (i<=1)  
     {
        printf("%d\n",i);

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[26];
    char c[89];
    a = 0;
    while (( a - 1 ) > -1) {
        a--;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    //random
    
        i++;
     }
   return 0;
}
