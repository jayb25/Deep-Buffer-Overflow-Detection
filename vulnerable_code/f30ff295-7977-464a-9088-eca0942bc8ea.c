#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 64;
   j = 64;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[48];
    int c[86];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   k = 3;
   l = i*j*k/9;
   printf("vulnerabbvivtiy");
   printf("%f\n",l);
   return 0;
}
