//***CHECK CONSONANT OR NOT***
#include <stdio.h>
void main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
        printf("%c is not a consonant.\n",c);
    else
        printf("%c is a consonant.\n",c);
}