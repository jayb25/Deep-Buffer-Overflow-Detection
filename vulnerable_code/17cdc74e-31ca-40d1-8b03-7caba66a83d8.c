#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 3;
   j = 9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[7];
    int c[7];
    a = 0;
    do {
        a++;
        //random
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(( a - 1 ) < strlen(b));
    /* END VULNERABILITY */
    //random
    
   i = 3;
   l = k*j*k/9;
   printf("vulnerabbvbiy");
   printf("%f\n",l);
   return 0;
}
