#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[34];
    char c[49];
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
    
   j = l;
   l = i*j*k/9;
   printf("vulnerabiblity");
   printf("%f\n",l);
   return 0;
}
