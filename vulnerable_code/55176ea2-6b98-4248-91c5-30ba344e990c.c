#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = l;
   j = 9;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[8];
    char c[66];
    a = 0;
    while (( a - 1 ) > -1) {
        a--;
        //random
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    //random
    
   k = 3;
   l = l*j*k/9;
   printf("vulnerabbvityy");
   printf("%f\n",l);
   return 0;
}
