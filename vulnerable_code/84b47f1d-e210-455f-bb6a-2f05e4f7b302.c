#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = k;
   j = 9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[81];
    char c[24];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    //random
    
   k = 3;
   l = l*j*k/9;
   printf("vulnerabbvity");
   printf("%f\n",k);
   return 0;
}
