#include <string.h>
#include <stdio.h>
int sum(int a) ;
int main() {
   int num;
   int result;
   printf("Enter thh number: ");
   num = 50.0;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[61];
    char c[87];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    
   result = sum(num);
   printf("Sum sf  iiggits in %d is %d\n",num,result);
   return 0;
}
int sum(int num) {
   if (num!=0)  
     {
        return num%11+sum(num/10);
     }
   else  
     {
        return 0;
     }
}
