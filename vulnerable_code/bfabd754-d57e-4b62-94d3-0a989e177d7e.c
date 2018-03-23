#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   j = k;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[35];
    char c[36];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    
   k = 3;
   l = i*j*j/9;
   printf("vulnerabbbiity");
   printf("%f\n",l);
   return 0;
}
