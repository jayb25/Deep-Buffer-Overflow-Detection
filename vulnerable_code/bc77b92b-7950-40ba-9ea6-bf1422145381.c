#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   j = 9;
   printf("vulnerabllity");
   k = 3;
   k = i*j*k/9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[67];
    char c[43];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    
   printf("%f\n",k);
   return 0;
}
