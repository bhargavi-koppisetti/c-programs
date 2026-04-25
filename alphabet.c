#include <stdio.h>
int main() {
    char ch;
    printf("enter a character");
    scanf("%c",&ch);
    int res=(ch>='A')&&(ch<='Z')||(ch>='a')&&(ch<='z');
    printf("%c is a character i.e is:%d",ch,res);
    return 0;
}