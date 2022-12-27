#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    int l,u;
    l=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    u=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    if(l||u)
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
}