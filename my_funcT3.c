#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define TXT 1024
#define WORD 30

// =================== FOR GEMATRIYA - Q1 =============================
int calcGeo(char word[1024])
{
    int sum = 0;
    for (int i = 0; i < strlen(word); i++)
    {
        int digit = ("%d", word[i]);
        switch (digit)
        {
        case 97: // a
            sum += 1;
            break;
        case 98: // b
            sum += 2;
            break;
        case 99: // c
            sum += 3;
            break;
        case 100: // d
            sum += 4;
            break;
        case 101: // e
            sum += 5;
            break;
        case 102: // f
            sum += 6;
            break;
        case 103: // g
            sum += 7;
            break;
        case 104: // h
            sum += 8;
            break;
        case 105: // i
            sum += 9;
            break;
        case 106: // j
            sum += 10;
            break;
        case 107: // k
            sum += 11;
            break;
        case 108: // l
            sum += 12;
            break;
        case 109: // m
            sum += 13;
            break;
        case 110: // n
            sum += 14;
            break;
        case 111: // o
            sum += 15;
            break;
        case 112: // p
            sum += 16;
            break;
        case 113: // q
            sum += 17;
            break;
        case 114: // r
            sum += 18;
            break;
        case 115: // s
            sum += 19;
            break;
        case 116: // t
            sum += 20;
            break;
        case 117: // u
            sum += 21;
            break;
        case 118: // v
            sum += 22;
            break;
        case 119: // w
            sum += 23;
            break;
        case 120: // x
            sum += 24;
            break;
        case 121: // y
            sum += 25;
            break;
        case 122: // z
            sum += 26;
            break;
        case 65: // A
            sum += 1;
            break;
        case 66: // B
            sum += 2;
            break;
        case 67: // C
            sum += 3;
            break;
        case 68: // D
            sum += 4;
            break;
        case 69: // E
            sum += 5;
            break;
        case 70: // F
            sum += 6;
            break;
        case 71: // G
            sum += 7;
            break;
        case 72: // H
            sum += 8;
            break;
        case 73: // I
            sum += 9;
            break;
        case 74: // J
            sum += 10;
            break;
        case 75: // K
            sum += 11;
            break;
        case 76: // L
            sum += 12;
            break;
        case 77: // M
            sum += 13;
            break;
        case 78: // N
            sum += 14;
            break;
        case 79: // O
            sum += 15;
            break;
        case 80: // P
            sum += 16;
            break;
        case 81: // Q
            sum += 17;
            break;
        case 82: // R
            sum += 18;
            break;
        case 83: // S
            sum += 19;
            break;
        case 84: // T
            sum += 20;
            break;
        case 85: // U
            sum += 21;
            break;
        case 86: // V
            sum += 22;
            break;
        case 87: // W
            sum += 23;
            break;
        case 88: // X
            sum += 24;
            break;
        case 89: // Y
            sum += 25;
            break;
        case 90: // Z
            sum += 26;
            break;

        default:
            sum += 0;
            break;
            // case 32: // this is space
            //     sum += 0;
            //     break;
            // case 0: // this is for zero
            //     sum += 0;
            //     break;
            // case 9: // this is for tab
            //     sum += 0;
            //     break;
        }
    }
    return sum;
}

int digitGeo(char c)
{

    int digit = ("%d", c);
    switch (digit)
    {
    case 97: // a
        return 1;
    case 98: // b
        return 2;

    case 99: // c
        return 3;

    case 100: // d
        return 4;

    case 101: // e
        return 5;

    case 102: // f
        return 6;

    case 103: // g
        return 7;

    case 104: // h
        return 8;

    case 105: // i
        return 9;

    case 106: // j
        return 10;

    case 107: // k
        return 11;

    case 108: // l
        return 12;

    case 109: // m
        return 13;

    case 110: // n
        return 14;

    case 111: // o
        return 15;

    case 112: // p
        return 16;

    case 113: // q
        return 17;

    case 114: // r
        return 18;

    case 115: // s
        return 19;

    case 116: // t
        return 20;

    case 117: // u
        return 21;

    case 118: // v
        return 22;

    case 119: // w
        return 23;

    case 120: // x
        return 24;

    case 121: // y
        return 25;

    case 122: // z
        return 26;

    case 65: // A
        return 1;

    case 66: // B
        return 2;

    case 67: // C
        return 3;

    case 68: // D
        return 4;

    case 69: // E
        return 5;

    case 70: // F
        return 6;

    case 71: // G
        return 7;

    case 72: // H
        return 8;

    case 73: // I
        return 9;

    case 74: // J
        return 10;

    case 75: // K
        return 11;

    case 76: // L
        return 12;

    case 77: // M
        return 13;

    case 78: // N
        return 14;

    case 79: // O
        return 15;

    case 80: // P
        return 16;

    case 81: // Q
        return 17;

    case 82: // R
        return 18;

    case 83: // S
        return 19;

    case 84: // T
        return 20;

    case 85: // U
        return 21;

    case 86: // V
        return 22;

    case 87: // W
        return 23;

    case 88: // X
        return 24;

    case 89: // Y
        return 25;

    case 90: // Z
        return 26;

    default:
        return 0;

        // case 32: // this is space
        //     return 0;

        // case 0: // this is for zero
        //     return 0;

        // case 9: // this is for tab
        //     return 0;
    }
}

// =================== FOR GEMATRIYA - Q1 =========================

void lstGeo(char word[30], char txt[1024])
{
    //this will be the final str that we will print
    char finalStr[1024] = {0};
    // this is the temp string that we are going to check on it
    char tempStr[1024] = {0};
    // this is the seperator
    char separator[] = "~";
    // the geo of the given word
    int sum = calcGeo(word);
    // outer loop to check a sequence from the 'i' index
    for (int i = 0; i < strlen(txt); i++)
    {
        char cStart = txt[i];
        // this condition is to make sure that the word wont start with space or something that it's gematriya is zero
        if (digitGeo(cStart) == 0)
        {
            continue;
        }

        // check if the current 'i' element is at the same geomentry of the word, if it does concat it to finalStr

        if (digitGeo(txt[i]) == sum)
        {
            //printf("%d\n", digitGeo(txt[i]));
            strncat(finalStr, &cStart, 1); // notice this is str'n'cat
            strcat(finalStr, separator);   // this is strcat (no 'n')
            continue;                      // here we need to break and  start a new loop becuase we dont want to keep checking the 'j'
        }
        else
        {
            strncat(tempStr, &cStart, 1); // here we begin to work on the sequence so we concat the cStart to it. (it is the first char in the sequence that we bein to check)
            //printf("%s",tempStr);
        }
        //inner loop to check the sequence from 'i' (from the outer loop) and forward
        for (int j = i + 1; calcGeo(tempStr) < sum; j++)
        {
            char cForward = txt[j];
            //printf("%c\n",cForward);
            strncat(tempStr, &cForward, 1); // concat the 'j' char into the tempStr to check the sequence. now we have in tempStr the 'i' char and the 'j' char, and the 'j' char we keep moving forward and concat the new 'j' char to tempStr until we pass the sum that we get from the geometry word
            // checks if their sum is equal to the gematria of the word
            if (calcGeo(tempStr) == sum)
            {
                //printf("%s",tempStr);
                strcat(finalStr, tempStr);   // concat the word to the finalStr
                strcat(finalStr, separator); // and also add the separator '~'
            }
        }
        // at the end of the inner loop we clean the tempStr and start all over again but now the outer loop move one step ahead (i++)
        memset(tempStr, 0, strlen(tempStr)); // this memset is puting in all of the tempStr zero's
    }
    //printf("%ld", strlen(finalStr));
    finalStr[strlen(finalStr) - 1] = '\0';
    printf("Gematria Sequences: %s", finalStr);
}

// ================= REVERSE FOR ATBASH  - Q2 =====================

int calcGeoAtBash(char word[1024])
{
    int sum = 0;
    for (int i = 0; i < strlen(word); i++)
    {
        int digit = ("%d", word[i]);
        switch (digit)
        {
        case 97: // a
            sum += 26;
            break;
        case 98: // b
            sum += 25;
            break;
        case 99: // c
            sum += 24;
            break;
        case 100: // d
            sum += 23;
            break;
        case 101: // e
            sum += 22;
            break;
        case 102: // f
            sum += 21;
            break;
        case 103: // g
            sum += 20;
            break;
        case 104: // h
            sum += 19;
            break;
        case 105: // i
            sum += 18;
            break;
        case 106: // j
            sum += 17;
            break;
        case 107: // k
            sum += 16;
            break;
        case 108: // l
            sum += 15;
            break;
        case 109: // m
            sum += 14;
            break;
        case 110: // n
            sum += 13;
            break;
        case 111: // o
            sum += 12;
            break;
        case 112: // p
            sum += 11;
            break;
        case 113: // q
            sum += 10;
            break;
        case 114: // r
            sum += 9;
            break;
        case 115: // s
            sum += 8;
            break;
        case 116: // t
            sum += 7;
            break;
        case 117: // u
            sum += 6;
            break;
        case 118: // v
            sum += 5;
            break;
        case 119: // w
            sum += 4;
            break;
        case 120: // x
            sum += 3;
            break;
        case 121: // y
            sum += 2;
            break;
        case 122: // z
            sum += 1;
            break;
        case 65: // A
            sum += 26;
            break;
        case 66: // B
            sum += 25;
            break;
        case 67: // C
            sum += 24;
            break;
        case 68: // D
            sum += 23;
            break;
        case 69: // E
            sum += 22;
            break;
        case 70: // F
            sum += 21;
            break;
        case 71: // G
            sum += 20;
            break;
        case 72: // H
            sum += 19;
            break;
        case 73: // I
            sum += 18;
            break;
        case 74: // J
            sum += 17;
            break;
        case 75: // K
            sum += 16;
            break;
        case 76: // L
            sum += 15;
            break;
        case 77: // M
            sum += 14;
            break;
        case 78: // N
            sum += 13;
            break;
        case 79: // O
            sum += 12;
            break;
        case 80: // P
            sum += 11;
            break;
        case 81: // Q
            sum += 10;
            break;
        case 82: // R
            sum += 9;
            break;
        case 83: // S
            sum += 8;
            break;
        case 84: // T
            sum += 7;
            break;
        case 85: // U
            sum += 6;
            break;
        case 86: // V
            sum += 5;
            break;
        case 87: // W
            sum += 4;
            break;
        case 88: // X
            sum += 3;
            break;
        case 89: // Y
            sum += 2;
            break;
        case 90: // Z
            sum += 1;
            break;

        default:
            sum += 0;
            break;
            // case 32: // this is space
            //     sum += 0;
            //     break;
            // case 0: // this is for zero
            //     sum += 0;
            //     break;
            // case 9: // this is for tab
            //     sum += 0;
            //     break;
        }
    }
    return sum;
}

int digitGeoAtBash(char c)
{

    int digit = ("%d", c);
    switch (digit)
    {
    case 97:       // a
        return 26; // z
    case 98:       // b
        return 25; // y

    case 99:       // c
        return 24; // x

    case 100:      // d
        return 23; // w

    case 101:      // e
        return 22; // v

    case 102:      // f
        return 21; // u

    case 103:      // g
        return 20; // t

    case 104:      // h
        return 19; // s

    case 105:      // i
        return 18; // r

    case 106:      // j
        return 17; // q

    case 107:      // k
        return 16; // p

    case 108:      // l
        return 15; // o

    case 109:      // m
        return 14; // n

    case 110:      // n
        return 13; // m

    case 111:      // o
        return 12; // l

    case 112:      // p
        return 11; // k

    case 113:      // q
        return 10; // j

    case 114:     // r
        return 9; // i

    case 115:     // s
        return 8; // h

    case 116:     // t
        return 7; // g

    case 117:     // u
        return 6; // f

    case 118:     // v
        return 5; // e

    case 119:     // w
        return 4; // d

    case 120:     // x
        return 3; // c

    case 121:     // y
        return 2; // b

    case 122:     // z
        return 1; // a

    case 65:       // A
        return 26; // Z

    case 66:       // B
        return 25; // Y

    case 67:       // C
        return 24; // X

    case 68:       // D
        return 23; // W

    case 69:       // E
        return 22; // V

    case 70:       // F
        return 21; // U

    case 71:       // G
        return 20; // T

    case 72:       // H
        return 19; // S

    case 73:       // I
        return 18; // R

    case 74:       // J
        return 17; // Q

    case 75:       // K
        return 16; // P

    case 76:       // L
        return 15; // O

    case 77:       // M
        return 14; // N

    case 78:       // N
        return 13; // M

    case 79:       // O
        return 12; // L

    case 80:       // P
        return 11; // K

    case 81:       // Q
        return 10; // J

    case 82:      // R
        return 9; // I

    case 83:      // S
        return 8; // H

    case 84:      // T
        return 7; // G

    case 85:      // U
        return 6; // F

    case 86:      // V
        return 5; // E

    case 87:      // W
        return 4; // D

    case 88:      // X
        return 3; // C

    case 89:      // Y
        return 2; // B

    case 90:      // Z
        return 1; // A

    default:
        return 0;

        // case 32: // this is space
        //     return 0;

        // case 0: // this is for zero
        //     return 0;

        // case 9: // this is for tab
        //     return 0;
    }
}

// ===================== FOR CREATE AN ATBASH - Q2 =====================
int switchToAtBash(char c)
{

    int digit = ("%d", c);
    switch (digit)
    {
    case 97:        // a
        return 122; // z
    case 98:        // b
        return 121; // y

    case 99:        // c
        return 120; // x

    case 100:       // d
        return 119; // w

    case 101:       // e
        return 118; // v

    case 102:       // f
        return 117; // u

    case 103:       // g
        return 116; // t

    case 104:       // h
        return 115; // s

    case 105:       // i
        return 114; // r

    case 106:       // j
        return 113; // q

    case 107:       // k
        return 112; // p

    case 108:       // l
        return 111; // o

    case 109:       // m
        return 110; // n

    case 110:       // n
        return 109; // m

    case 111:       // o
        return 108; // l

    case 112:       // p
        return 107; // k

    case 113:       // q
        return 106; // j

    case 114:       // r
        return 105; // i

    case 115:       // s
        return 104; // h

    case 116:       // t
        return 103; // g

    case 117:       // u
        return 102; // f

    case 118:       // v
        return 101; // e

    case 119:       // w
        return 100; // d

    case 120:      // x
        return 99; // c

    case 121:      // y
        return 98; // b

    case 122:      // z
        return 97; // a

    case 65:       // A
        return 90; // Z

    case 66:       // B
        return 89; // Y

    case 67:       // C
        return 88; // X

    case 68:       // D
        return 87; // W

    case 69:       // E
        return 86; // V

    case 70:       // F
        return 85; // U

    case 71:       // G
        return 84; // T

    case 72:       // H
        return 83; // S

    case 73:       // I
        return 82; // R

    case 74:       // J
        return 81; // Q

    case 75:       // K
        return 80; // P

    case 76:       // L
        return 79; // O

    case 77:       // M
        return 78; // N

    case 78:       // N
        return 77; // M

    case 79:       // O
        return 76; // L

    case 80:       // P
        return 75; // K

    case 81:       // Q
        return 74; // J

    case 82:       // R
        return 73; // I

    case 83:       // S
        return 72; // H

    case 84:       // T
        return 71; // G

    case 85:       // U
        return 70; // F

    case 86:       // V
        return 69; // E

    case 87:       // W
        return 68; // D

    case 88:       // X
        return 67; // C

    case 89:       // Y
        return 66; // B

    case 90:       // Z
        return 65; // A

    default:
        return 0;

        // case 32: // this is space
        //     return 0;

        // case 0: // this is for zero
        //     return 0;

        // case 9: // this is for tab
        //     return 0;
    }
}

// ================= REVERSE FOR ATBASH  - Q2 ==============
void reverse(char word[], int len)
{
    for (int i = 0; i < len / 2; i++)
    {
        char temp = word[i];
        word[i] = word[len - 1 - i];
        word[len - 1 - i] = temp;
    }
}
// ================= REVERSE FOR ATBASH  - Q2 ==============
void lstGeoAtBash(char word[30], char txt[1024])
{
    // the reverse word
    char rev[strlen(word)];

    // atbash word
    char atbashWord[strlen(word)];
    for (int i = 0; i < strlen(word); i++)
    {

        char c = ("%c", switchToAtBash(word[i]));
        atbashWord[i] = c;
    }

    strcpy(rev, atbashWord);
    //printf("input Word = %s\n", word);
    //printf("input atBashWord = %s\n", rev);
    reverse(rev, strlen(rev));
    //printf("rev atBashWord= %s\n", rev);
    //printf("%s\n", atbashWord);

    //this will be the final str that we will print
    char finalStr[1024];
    // this is the temp string that we are going to check on it
    char tempStr[10244];
    // this is the seperator
    char separator[] = "~";
    // the geo of the given word
    int sum = calcGeoAtBash(word);
    // outer loop to check a sequence from the 'i' index
    for (int i = 0; i < strlen(txt); i++)
    {
        char cStart = txt[i];
        // in here this condition is to make sure the the sequence is the minimum and it doesnt have something that is zero at the start
        if (digitGeoAtBash(cStart) == 0)
        {
            continue;
        }
        // check if the current 'i' element is at the same geomentry of the word, if it does concat it to finalStr
        if (digitGeoAtBash(txt[i]) == sum)
        {
            //printf("%d\n", digitGeoAtBash(txt[i]));
            strncat(finalStr, &cStart, 1); // notice this is str'n'cat
            strcat(finalStr, separator);   // this is strcat (no 'n')
            continue;                      // here we need to break and start a new loop becuase we dont want to keep checking the 'j'
        }
        else
        {
            strncat(tempStr, &cStart, 1); // here we begin to work on the sequence so we concat the cStart to it. (it is the first char in the sequence that we bein to check)
            //printf("%s",tempStr);
        }
        //inner loop to check the sequence from 'i' (from the outer loop) and forward
        for (int j = i + 1; calcGeoAtBash(tempStr) < sum; j++)
        {
            char cForward = txt[j];
            //printf("%c\n",cForward);
            strncat(tempStr, &cForward, 1); // concat the 'j' char into the tempStr to check the sequence. now we have in tempStr the 'i' char and the 'j' char, and the 'j' char we keep moving forward and concat the new 'j' char to tempStr until we pass the sum that we get from the geometry word
            // checks if their sum is equal to the gematria of the word
            if (calcGeo(tempStr) == sum && digitGeoAtBash(cForward) != 0) // i add the and condition because this will make sure the the sequence will be the minimum and with out something that is zero at the end
            {

                //*********** REMOVE WHITE SPACES AND SPECIAL CHAR ***********************
                int pos = 0;
                char stringWithNoSpace[strlen(word)];
                for (int i = 0; i < strlen(word); i++)
                {
                    // if the char is a letter (not sapce or something else) continue
                    if (word[i] == ' ' || isalpha(word[i]) == 0)
                    {
                        continue;
                    }
                    stringWithNoSpace[pos] = word[i];
                    pos++;
                }
                //char endString = '\0';
                //strncat(stringWithNoSpace, &endString, 1);
                //stringWithNoSpace[pos] = '\0'; // this is to make sure the string will end
                //*********** REMOVE WHITE SPACES AND SPECIAL CHAR ***********************

                //printf("stringWithNoSpace = %s\n", stringWithNoSpace);
                tempStr[pos] = '\0';
                if (strcmp(tempStr, atbashWord) == 0 || strcmp(tempStr, rev) == 0)
                {

                    //printf("%s",tempStr);
                    strcat(finalStr, tempStr);   // concat the word to the finalStr
                    strcat(finalStr, separator); // and also add the separator '~'
                }
            }
        }
        // at the end of the inner loop we clean the tempStr and start all over again but now the outer loop move one step ahead (i++)
        memset(tempStr, 0, strlen(tempStr)); // this memset is puting in all of the tempStr zero's
    }
    //printf("%ld\n", strlen(finalStr));
    finalStr[strlen(finalStr) - 1] = '\0';
    printf("Atbash Sequences: %s", finalStr);
}

// =========================== Q3 FINAL V ===========================

// ======== SORT STRING - THIS SORT THE STRING ITSELF ======
void sortString(char arr[])
{
    int i, j;
    char temp;
    int stringLength = strlen(arr);
    for (i = 0; i < stringLength - 1; i++)
    {
        for (j = i + 1; j < stringLength; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void removeSpaces(char str[])
{
    int cChar = 0;
    for (int i = 0; str[i]; i++)
        if (str[i] != ' ')
            str[cChar++] = str[i];
    str[cChar] = '\0';
}
void minSequence(char word[], char txt[])
{
    //this will be the final str that we will print
    char finalStr[1024];
    // this is the temp string that we are going to check on it
    char tempStr[10244];
    // this is the seperator
    char separator[] = "~";
    sortString(word); // sort the word
    //printf("this is out input word = %s\n", word);
    // create a new string that we will check on it with out white sapce
    char wordCopy[strlen(word)];
    strcpy(wordCopy, word);
    removeSpaces(wordCopy);
    //
    int lenOfAngram = 0;
    // we will run from Cstart until we have a string in tempStr with the same len of our word
    for (int i = 0; i < strlen(txt); i++)
    {
        // keep add char to tempStr until it has the same len of our word
        //while (lenOfAngram < strlen(word))
        //{
            char cStart = txt[i];
            strncat(tempStr, &cStart, 1); // notice this is str'n'cat
            lenOfAngram++;
            // printf("this is out cStart =%c\n", cStart);
            for (int j = i + 1; j < strlen(txt); j++)
            {
                char cForward = txt[j];
                strncat(tempStr, &cForward, 1); // notice this is str'n'cat
                if (("%d", cForward) != 32)
                {
                    lenOfAngram++;
                }
                if (lenOfAngram == strlen(word))
                {
                    break;
                }
                
            }
        //}
        lenOfAngram = 0;
        // create a new string that we will check on it without white sapce
        char tempStrCopy[strlen(tempStr)];
        strcpy(tempStrCopy, tempStr);
        removeSpaces(tempStrCopy);
        sortString(tempStrCopy);
        // printf("this is tempStrCopy VS tempStr = %s - %s\n", tempStrCopy,tempStr);
        if (strcmp(wordCopy, tempStrCopy) == 0)
        {
            strcat(finalStr, tempStr);
            strcat(finalStr, separator);   // this is strcat (no 'n')
        }
        // printf("this is our tempStr = %s\n", tempStr);

        // at the end of the inner loop we clean the tempStr and start all over again but now the outer loop move one step ahead (i++)
        memset(tempStr, 0, strlen(tempStr)); // this memset is puting in all of the tempStr zero's
    }
    finalStr[strlen(finalStr) - 1] = '\0';
    printf("Anagram Sequences: %s", finalStr);
}

// ==========================================
// // ==================== Q3 ===========================
// void sortArr(int array[], int size)
// {

//     // loop to access each array element
//     for (int step = 0; step < size - 1; ++step)
//     {

//         // loop to compare array elements
//         for (int i = 0; i < size - step - 1; ++i)
//         {

//             // compare two adjacent elements
//             // change > to < to sort in descending order
//             if (array[i] > array[i + 1])
//             {

//                 // swapping occurs if elements
//                 // are not in the intended order
//                 int temp = array[i];
//                 array[i] = array[i + 1];
//                 array[i + 1] = temp;
//             }
//         }
//     }
// }

// // this func will get an array char (string in c) and return an array of it's ascii
// void asciiArr(char arr[])
// {
//     int asciiArr[strlen(arr)]; // in this arr we will see our word by it's ascii
//     for (int i = 0; i < strlen(arr); i++)
//     {
//         int asciiChar = ("%d", arr[i]);
//         asciiArr[i] = asciiChar;
//     }
//     //return asciiArr;
// }

// // void sequence(char word[], char txt[])
// // {
// // }
// // void printArray(int array[], int size)
// // {
// //     for (int i = 0; i < size; ++i)
// //     {
// //         printf("%d  ", array[i]);
// //     }
// //     printf("\n");
// // }
