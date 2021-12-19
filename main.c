#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "my_funcT3.h"
#define TXT 1024
#define WORD 30

int main()
{
    // char buf[1054] = {0};
    // fgets(buf, 1054, stdin);
    // //    printf("string is: %s\n", buf);
    // char word[30] = {0};
    // char txt[1024] = {0};
    // //printf("word is = %s", word);
    // // printf("\ntxt is = %s", txt);

    // int w = 0;
    // for (int i = 0; i < 30; i++)
    // {

    //     if ((buf[i]) == ' ' || (buf[i]) == '\t' || (buf[i]) == '\n')
    //     {
    //         break;
    //     }
    //     else
    //     {
    //         word[w] = buf[i];
    //         w++;
    //     }
    // }
    // word[w] = '\0';
    // int t = 0;
    // for (int j = w + 1; j < w + 1024; j++)
    // {
    //     if ( buf[j] == '\n')
    //     {
    //         printf("this is a new line number 1 = %c", buf[j]);
    //     }
    //     if ((buf[j]) == '~')
    //     {
    //         txt[t] = '~';
    //         t++;
    //         break;
    //     }
    //     else
    //     {
    //         txt[t] = buf[j];
    //         t++;
    //     }
    // }
    // // txt[t] = '\0';
    // txt[strlen(txt)] = '\0';
    // printf("\nthis is buf = %s", buf);
    // printf("\nword after is = %s, len is: %ld", word, strlen(word));
    // printf("\ntxt after is = %s, len is: %ld\n", txt, strlen(txt));

    // printf("\nthis is out txt input ****= %s", txtInput);

    char word[30] = {0};
    char wordInput[30] = {0};
    scanf("%s", wordInput);
    int i;
    for (i = 0; i < 30; i++)
    {
        if (wordInput[i] != ' ' && wordInput[i] != '\t' && wordInput[i] != '\n')
        {
            word[i] = wordInput[i];
        }
        else // if we get - ' ' or '\t' or '\n' so we finished get the word input
        {
            break;
        }
    }
    // // printf("asdasd");
    // char txt[1024] = {0};
    char txtInput[1024] = {0};
    // scanf("%[^~]s", txtInput);
    // int j;
    // for (j = 0; j < strlen(txtInput); j++)
    // {

    //     if (txtInput[j] != '~') // run on the txt until you get '~'
    //     {
    //         txt[j] = txtInput[j];
    //     }
    //     else
    //     {
    //         break;
    //     }
    // }

    fgets(txtInput, 1024, stdin);
    // char c;
    // // int i = 0;
    // while (c != '~')
    // {   
    //     scanf("%c", &c);
    //     if (c == '\n')
    //     {
    //         printf("^^^^^^");    
    //     }
          
    //     strncat(txtInput, &c, 1);    
    // }
    
    // char tilda = '~';
    // strncat(txtInput, &tilda, 1);

    // printf("this is our word input ****= %s", wordInput);
    // printf("\nthis is out txt input ****= %s", txtInput);

    // printf("\nthis is our word = %s", word);
    // printf("\nthis is out txt = %s", txt);
    // // char word_file[] = "bee";
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
    lstGeo(wordInput, txtInput);
    printf("\n");
    lstGeoAtBash(wordInput, txtInput);
    printf("\n");
    minSequence(wordInput, txtInput);

    return 0;
}