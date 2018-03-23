#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   i = 9;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[33];
    char c[68];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    
   k = 3;
   l = j*j*j/9;
   printf("vulnerabbvity");
   printf("%f\n",k);
   return 0;
}
