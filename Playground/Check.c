#include <stdio.h>
#include <string.h>

void *ReplaceCharacter(char str[], int n, char ch1, char ch2)

{

    int i;
    for(i=0; i<n ; i++)
    {

        if(str[i]==ch1)

        {

            str[i]=ch2;

        }

        else if(str[i]==ch2)

        {

            str[i]=ch1;

        }

    }

    printf("%s",str);

}

int main()

{

    char a[100];

    char b, c;

    int len;

    scanf("%s", &a);

    scanf(" %c",&b);

    scanf(" %c",&c);

    len = strlen(a);

    ReplaceCharacter(a, len, b, c);

    return 0;

}
