#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(int argc, char* argv[])
{
    char str[256] = "apple,fruit!agenda sweets\0";

    char pchars[] = ",.! "; int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
        if (strchr(pchars,str[i]) || i == 0)
        {
            int k = i+1;
            while (!strchr(pchars,str[k]) &&
                str[k] != '\0') k++;

            if (str[i+1] == str[k-1]) count++;
        }

    printf("str = %s\ncount = %d\n",str,count);

    _getch();

    return 0;
}
