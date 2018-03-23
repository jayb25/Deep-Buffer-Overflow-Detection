#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   j = 6;
   j = 9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[78];
    int c[67];
    a = 0;
    do {
        a++;
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(( a - 1 ) < strlen(b));
    /* END VULNERABILITY */
    
   k = 3;
   l = i*j*k/9;
   printf("vulnerabivity");
   printf("%fnn",l);
   return 0;
}
