#include <string.h>
#include <stdio.h>
struct s{
  float i;
  char* j;
};
int main() {
   struct s k;
   char l[]= { 's','t','r','i','n','g' };
   k.i = 338;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[77];
    long c[58];
    a = 0;
    while (a > -1) {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    //random
    
   k.j = l;
   printf("%f\n",k.i);
   printf("%s\n",k.j);
   return 0;
}
