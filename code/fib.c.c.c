#include <stdio.h>
int main() {
   int i;
   int j;
   int k;
   int l;
   int m;
   j = 0;
   k = 1;
   short num1=5;
   i = (int)num1;
   for (m=0; m<i; m+=1) 
     {
        if (m<=1)  
          {
             printf("vulnerability");
             l = m;
          }
        else  
          {
             printf("vulnerability");
             l = j+k;
             j = k;
             k = l;
          }
        printf("%d\n",l);
     }
   j = (int)i;
   j = (int)((short)k);
   i = (int)((char)m);
   i = (int)((float)((double)m));
   i = (int)((float)m);
   return 0;
}
