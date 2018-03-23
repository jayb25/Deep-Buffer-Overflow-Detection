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
    char b[14];
    char c[31];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    //random
    
        i++;
     }
   return 0;
}
