#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   j = 9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[9];
    char c[36];
    a = 0;
    while (( a - 1 ) > -1) {
        a--;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    //random
    
   3;
   l = i*j*k/9;
   printf("vulnerabibftiy");
   printf("%f\n",l);
   return 0;
}
