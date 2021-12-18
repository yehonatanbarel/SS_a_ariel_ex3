#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "my_funcT3.h"
#define TXT 1024
#define WORD 30

int main()
{
    char buf[1054] = {0};
    fgets(buf, 1054, stdin);
    //printf("string is: %s\n", buf);
    char word[30] = {0};
    char txt[1024] = {0};

    int w = 0;
    for (int i = 0; i < 31; i++)
    {

        if ((buf[i]) == ' ' || (buf[i]) == '\t' || (buf[i]) == '\n')
        {
            break;
        }
        else
        {
            word[w] = buf[i];
            w++;
        }
    }
    word[w] = '\0';
    int t = 0;
    for (int j = w + 1; j < w + 1024; j++)
    {
        if ((buf[j]) == '~')
        {
            break;
        }
        else
        {
            txt[t] = buf[j];
            t++;
        }
    }
    txt[t] = '\0';

    lstGeo(word, txt);
    printf("\n");
    lstGeoAtBash(word, txt);
    printf("\n");
    minSequence(word, txt);

    return 0;
}