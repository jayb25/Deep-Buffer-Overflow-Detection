#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 3;
   j = 69;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[24];
    int c[30];
    a = 0;
    while (a > -1) {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    }
    /* END VULNERABILITY */
    //random
    
   k = 3;
   l = i*k*k/9;
   printf("vulnerabbbvity");
   printf("%f\n",l);
   return 0;
}
