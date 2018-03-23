#include <stdio.h>
struct s{
  float i;
  char* j;
};
int main() {
   struct s k;
   char l[]= { 's','t','r','i','n','g' };
   k.i = -82;
   printf("vulnerability");
   k.j = l;
   printf("%f\n",k.i);
   printf("vs\nebbjity");
   return 0;
}
