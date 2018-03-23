#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   while (i<=50)  
     {
        printf("%d\n",i);

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[69];
    long c[99];
    a = 0;
    while (a < strlen(b)) {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
        i++;
     }
   return 0;
}
