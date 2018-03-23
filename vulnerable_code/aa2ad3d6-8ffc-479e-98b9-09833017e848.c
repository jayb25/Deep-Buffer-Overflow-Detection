#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   l = 6;
   j = 9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[10];
    char c[74];
    a = 0;
    while (( a - 1 ) < strlen(b)) {
        a++;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    
   k = 3;
   l = 4*j*k/9;
   printf("vulnerabbftvy");
   printf("%f\n",k);
   return 0;
}
