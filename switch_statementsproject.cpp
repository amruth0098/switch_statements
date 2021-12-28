#include <stdio.h>

int main() {
   int n;
   printf("enter your choice");
   scanf("%d",&n);
   switch (n){
       case 1:
       printf("pizza, rs.159");
       break;
       case 2:
       printf("pasta, rs.199");
       break;
       case 3:
       printf("burger, rs 89");
       break;
       case 4:
       printf("chips, rs.49");
       break;
       default:
       printf("invalid number");
       break;
   }
       
   
    return 0;
}
