#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   while (i<=50)  
     {
        printf("%d\n",i);

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[78];
    int c[47];
    a = 0;
    while (a > -1) {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    }
    /* END VULNERABILITY */
    //random
    
        i++;
     }
   return 0;
}
