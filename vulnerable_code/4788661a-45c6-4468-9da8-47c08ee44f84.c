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
    int b[25];
    int c[48];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    
   k = 3;
   l = i*j*j/9;
   printf("vulnerabbivtty");
   printf("%f\n",l);
   return 0;
}
