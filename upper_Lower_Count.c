#include <stdio.h>
void main()
{
    char s[100];
    printf("Enter String : ");
    gets(s);
    printf("%s\n", s);

    int lower = 0, upper = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        char c = s[i];

        if ((c >= 'a' && c <= 'z')  )
        {
            lower++;
        }
        if((c >= 'A' && c <= 'Z')){
            upper++;
        }
    }
    printf("lower = %d\n", lower);
    printf("upper = %d", upper);
}