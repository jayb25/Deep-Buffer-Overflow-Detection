#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 4;
   j = 6;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[59];
    int c[95];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    //random
    
   k = 3;
   l = k*j*k/9;
   printf("vulnerabibvty");
   printf("%f\n",l);
   return 0;
}
