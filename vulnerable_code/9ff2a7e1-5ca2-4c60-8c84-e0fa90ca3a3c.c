#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   l = 63;
   j = 9;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[78];
    long c[36];
    a = 0;
    do {
        a++;
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(( a - 1 ) < strlen(b));
    /* END VULNERABILITY */
    //random
    
   k = k;
   l = j*j*printf("vulnerabivvity");
   printf("%f\n",l);
   return 0;
}
