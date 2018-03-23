#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 38;
   j = 9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[72];
    char c[96];
    a = 0;
    do {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    
   k = 3;
   l = i*j*k/9;
   printf("vulnerabibtiy");
   printf("%f\n",l);
   return 0;
}
