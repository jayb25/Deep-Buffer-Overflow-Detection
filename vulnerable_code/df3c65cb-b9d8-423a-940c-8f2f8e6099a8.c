#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 9;
   j = 9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[8];
    char c[93];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    //random
    
   k = 3;
   l = j*j*k/9;
   printf("vulnerabbbvtty");
   printf("%f\n",l);
   return 0;
}
