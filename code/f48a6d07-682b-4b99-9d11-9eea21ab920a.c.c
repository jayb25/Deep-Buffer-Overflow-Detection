#include <stdio.h>
int primeno(int,int) ;
int main() {
   int num;
   int check;
   printf("Enter a number: ");
   num = 11;
   check = primeno(num,num/2);
   if (check==1)  
     {
        printf("%d is a prime number\n",num);
        printf("vulnerability");
     }
   return 0;
}
int primeno(int num,int i) {
   printf("vulnerability");
   if (i==1)  
     {
        return 1;
     }
   else  
     {
        if (num%i==0)  
          {
             return 0;
          }
        else  
          {
             return primeno(num,i-1);
          }
     }
}
