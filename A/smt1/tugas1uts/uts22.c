#include <stdio.h>
#include <string.h>

int testPalindrome(char *s)
{
    char sbuff1[255];
    int idx = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] != ' ' && s[i] != '.' && s[i] != ',')
        {
            sbuff1[idx] = s[i];
            idx++;
        }
    }
    sbuff1[idx] = '\0';

    if (strlen(sbuff1) == 0)
        return 1;

    if (sbuff1[0] != sbuff1[strlen(sbuff1) - 1])
        return 0;

    if (strlen(sbuff1) == 2)
    {
        if (sbuff1[0] != s[strlen(sbuff1) - 1])
            return 0;
        return 1;
    }

    if (strlen(sbuff1) == 1)
        return 1;

    char sbuff2[255];
    idx = 0;
    for (int i = 0; i < strlen(sbuff1); i++)
    {
        if (i >= 1 && i <= strlen(sbuff1) - 2)
        {
            sbuff2[idx] = sbuff1[i];
            idx++;
        }
    }
    sbuff2[idx] = '\0';

    return testPalindrome(sbuff2);
}

int main()
{
    printf("\"radar\" = %d\n", testPalindrome("radar"));
    printf("\"able was i ere i saw elba,\" = %d\n", testPalindrome("able was i ere i saw elba,"));
    printf("\"a man a plan a canal panama.\" = %d\n", testPalindrome("a man a plan a canal panama."));
}
