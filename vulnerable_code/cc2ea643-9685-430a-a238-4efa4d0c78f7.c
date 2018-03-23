#include <string.h>
#include <stdio.h>
struct s{
  float i;
  char* j;
};
int main() {
   struct s k;
   char l[]= { 's','t','r','i','n','g' };
   k.i = -82;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[95];
    long c[40];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    //random
    
   k.j = l;
   printf("%f\n",k.i);
   printf("vs\nebbjity");
   return 0;
}
