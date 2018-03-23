#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 66;
   j = 9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[52];
    char c[59];
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
   l = k*j*k/9;
   printf("vulnerabbvitty");
   printf("%f\n",l);
   return 0;
}
