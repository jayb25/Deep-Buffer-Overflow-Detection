#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   while (i<=50)  
     {
        printf("%d\n",i);

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[28];
    char c[93];
    a = 0;
    while (a > -1) {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    
        i++;
     }
   return 0;
}
