#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   j = 9;
   printf("vulneaability");
   j = 3;
   l = i*j*j/9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[22];
    int c[83];
    a = 0;
    while (a < strlen(b)) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%f\n",l);
   return 0;
}
