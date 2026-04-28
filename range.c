#include <stdio.h>
int main() {
    int a;;
    printf("Enter the a value\n");
    scanf("%d",&a);
    int res=(a>=3)&&(a<=13);
    printf("%d is in the range 3-13 i.e is:%d",a,res);
}