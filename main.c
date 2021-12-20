#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "my_funcT3.h"
#define TXT 1024
#define WORD 30

int main()
{

    char wordFinal[30] = {0};
    char wordInput[30] = {0};
    // scanf("%s", wordInput);
    // for(int i = 0; i<strlen(wordInput); i++){
    //     if (wordInput[i] != ' ' && wordInput[i] != '\n' && wordInput[i] != '\t')
    //     {
    //         wordFinal[i] = wordInput[i];
    //     }
    // }
    // printf("INPUT = %s\n",wordInput);
    // printf("FINAL = %s",wordFinal);

    char scanAll[1054];
    fgets(scanAll, 1054, stdin);
    // printf("SCAN ALL = %s\n", scanAll);
    int i;
    for (i = 0; i < 30; i++)
    {
        if (scanAll[i] != ' ' && scanAll[i] != '\n' && scanAll[i] != '\t')
        {
            wordFinal[i] = scanAll[i];
        }
        else
        {
            i++;
            break;
        }
    }
    // printf("\ni = %d, LEN = %ld\n", i, strlen(scanAll));
    // printf("WORD FINAL = %s", wordFinal);
    char txt[1024] = {0};
    int t = 0;
    for (int j = i; j < strlen(scanAll); j++)
    {
        if (scanAll[j] == '\\' && scanAll[j + 1] == 'n')
        {

            // t++;
            // printf("T = %d",t);
            // printf("C = %c", scanAll[j-1]);
            char newLine = '\n';
            strncat(txt, &newLine, 1);
            // txt[t] == '\n';
            // continue;
            j = j + 1;
        }
        else
        {
            txt[t] = scanAll[j];
        }
        t++;
    }
    txt[strlen(txt) - 1] = '\0';
    // printf("\nthis is txt = %s", txt);

    // char word_file[] = "bee";
    // char txt_file[] = "I’m bringing home my baby bumble bee\nWon’t my Mommy be so proud of me\nI’m bringing home my baby bumble bee – \nOUCH!! It stung me!!~";

    // char word_input[] = "abcd";
    // char txt_input[] = "a-bc,dbca-zwxyzabzyxw0dcba~";

    char word_input_1[] = "fish";
    char txt_input_1[] = "One, two, three, four, five,\nOnce I caught a fish alive,\nSix, seven, eight, nine, ten,\nThen I let go again.~";

    // char word_input_2[] = "sea";
    // char txt_input_2[] = "A sailor went to sea, sea, sea\nTo see what he could see, see, see\nBut all that he could see, see, see\nWas the bottom of the deep blue sea, sea, sea!~";

    // char word_input_3[] = "sheep";
    // char txt_input_3[] = "Baa, baa black sheep\nHave you any wool\nYes sir, yes sir\nThree bags full.\n~";

    char word_input_4[] = "Head";
    char txt_input_4[] = "Head, shoulders, knees and toes,\nKnees and toes.\nHead, shoulders, knees and toes,\nKnees and toes.\nAnd eyes, and ears, and mouth, and nose.\nHead, shoulders, knees and toes,\nKnees and toes.~";

    // char word[] = "abcd";
    // char txt[] = "abcd~";

    //printf("\n");
    // printf("this is the txt from input = %s\n",txt);
    // printf("\n");
    lstGeo(wordFinal, txt);
    printf("\n");
    lstGeoAtBash(wordFinal, txt);
    printf("\n");
    minSequence(wordFinal, txt);

    return 0;
}