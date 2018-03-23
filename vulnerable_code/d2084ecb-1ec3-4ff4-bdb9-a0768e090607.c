#include <string.h>
#include <stdio.h>
struct s{
  float i;
  char* j;
};
int main() {
   struct s k;
   char l[]= { 's','t','r','s','n','g' };
   k.i = 3.8;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[92];
    int c[67];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   k.j = l;
   printf("%f\n",k.i);
   printf("%s\n",k.j);
   return 0;
}
