#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   while (i<=5)  
     {
        printf("%d\n",i);

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[80];
    char c[77];
    a = 0;
    do {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    //random
    
        i++;
     }
   return 0;
}
