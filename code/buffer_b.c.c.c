#include <stdio.h>
#include <string.h>
int main() {
   int i[]= { 2,4,6 };
   int j=5;
   int num1=8;
   char c='q';
   int abcdefghijklmnopqrstuvwxyz=1234567890;
   long t=35;
   int g=453;
   float p=38.4456;
   double ze=87467.72927;
   for (j = num1-1; j>-1; j = -1+j) 
     {
        if (j<3)  
          {
             printf("%d",i[j]);
             printf("vulnerability");
          }
     }
   j = (int)c;
   j = (int)((short)j);
   c = (char)g;
   p = (float)((double)p);
   p = (float)ze;
   printf("\n");
   return 0;
}
