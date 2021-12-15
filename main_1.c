#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define TXT 1024 // need to check
#define WORD 30

// this enum is for declare the geometry of every letter
enum Geo
{
    a = 1,
    b,
    c,
    d,
    e,
    f,
    g,
    h,
    i,
    j,
    k,
    l,
    m,
    n,
    o,
    p,
    q,
    r,
    s,
    t,
    u,
    v,
    w,
    x,
    y,
    z,
    A = 1,
    B,
    C,
    D,
    E,
    F,
    G,
    H,
    I,
    J,
    K,
    L,
    M,
    N,
    O,
    P,
    Q,
    R,
    S,
    T,
    U,
    V,
    W,
    X,
    Y,
    Z,
};

char arrLowerGeo[26] = {a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z}; // 97-122
char arrUperGeo[26] = {
    A,
    B,
    C,
    D,
    E,
    F,
    G,
    H,
    I,
    J,
    K,
    L,
    M,
    N,
    O,
    P,
    Q,
    R,
    S,
    T,
    U,
    V,
    W,
    X,
    Y,
    Z,
}; //65-90


// =================== FOR GEMATRIYA =============================
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
        case 65:  // A
            sum += 1;
            break;
        case 66: // B
            sum += 2;
            break;
        case 67:  // C
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

// =================== FOR GEMATRIYA =========================


//char *
void lstGeo(char word[30], char txt[1024])
{
    //this will be the final str that we will print
    char finalStr[1024];
    // this is the temp string that we are going to check on it
    char tempStr[10244];
    // this is the seperator
    char separator[] = "~";
    // the geo of the given word
    int sum = calcGeo(word);
    // outer loop to check a sequence from the 'i' index
    for (int i = 0; i < strlen(txt); i++)
    {
        char cStart = txt[i];
        // this condition is to make sure that the word wont start with space or something that it's gematriya is zero
       if ( digitGeo(cStart) == 0)
        {
           continue;
       }
        
        // check if the current 'i' element is at the same geomentry of the word, if it does concat it to finalStr

        if (digitGeo(txt[i]) == sum)
        {
            printf("%d\n", digitGeo(txt[i]));
            strncat(finalStr, &cStart, 1); // notice this is str'n'cat
            strcat(finalStr, separator);   // this is strcat (no 'n')
            continue;                         // here we need to break and  start a new loop becuase we dont want to keep checking the 'j'
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
    printf("%ld", strlen(finalStr));
    finalStr[strlen(finalStr)-1] = '\0';
    printf("%s",finalStr);
}

//=================== TRY WITH WHILE LOOP ============THIS DIDNT WORK===========
//char *
void lstGeo_2(char word[30], char txt[1024])
{
    //this will be the final str that we will print
    char finalStr[1024];
    // this is the temp string that we are going to check on it
    char tempStr[1024];
    // this is the seperator
    char separator[] = "~";
    // the geo of the given word
    int sum = calcGeo(word);
    // outer loop to check a sequence from the 'i' index
    for (int i = 0; i < strlen(txt); i++)
    {
        char cStart = txt[i];
        // check if the current 'i' element is at the same geomentry of the word, if it does concat it to finalStr

        if (digitGeo(txt[i]) == sum)
        {
            printf("%d\n", digitGeo(txt[i]));
            strncat(finalStr, &cStart, 1); // notice this is str'n'cat
            strcat(finalStr, separator);   // this is strcat (no 'n')
            break;                         // here we need to break and  start a new loop becuase we dont want to keep checking the 'j'
        }
        else
        {
            strncat(tempStr, &cStart, 1); // here we begin to work on the sequence so we concat the cStart to it. (it is the first char in the sequence that we bein to check)
            //printf("%s",tempStr);
        }
        //inner loop to check the sequence from 'i' (from the outer loop) and forward
        int j = i+1;
        while (calcGeo(tempStr) < sum)
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
            j++;
        }
        // at the end of the inner loop we clean the tempStr and start all over again but now the outer loop move one step ahead (i++)
        memset(tempStr, 0, strlen(tempStr)); // this memset is puting in all of the tempStr zero's
    }
    printf("%ld", strlen(finalStr));
    printf("%s",finalStr);
}
//=================== TRY WITH WHILE LOOP ============THIS DIDNT WORK===========




// ================= REVERSE FOR ATBASH ==============

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
        case 65:  // A
            sum += 26;
            break;
        case 66: // B
            sum += 25;
            break;
        case 67:  // C
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
    case 97: // a
        return 26; // z
    case 98: // b
        return 25; // y

    case 99: // c
        return 24; // x

    case 100: // d
        return 23; // w

    case 101: // e
        return 22; // v

    case 102: // f
        return 21; // u

    case 103: // g
        return 20; // t

    case 104: // h
        return 19; // s

    case 105: // i
        return 18; // r

    case 106: // j
        return 17; // q

    case 107: // k
        return 16; // p

    case 108: // l
        return 15; // o

    case 109: // m
        return 14; // n

    case 110: // n
        return 13; // m

    case 111: // o
        return 12; // l

    case 112: // p
        return 11; // k

    case 113: // q
        return 10; // j

    case 114: // r
        return 9; // i

    case 115: // s
        return 8; // h

    case 116: // t
        return 7; // g

    case 117: // u
        return 6; // f

    case 118: // v
        return 5; // e

    case 119: // w
        return 4; // d

    case 120: // x
        return 3; // c

    case 121: // y
        return 2; // b

    case 122: // z
        return 1; // a

    case 65: // A
        return 26; // Z

    case 66: // B 
        return 25; // Y

    case 67: // C
        return 24; // X

    case 68: // D
        return 23; // W

    case 69: // E
        return 22; // V

    case 70: // F
        return 21; // U

    case 71: // G
        return 20; // T

    case 72: // H
        return 19; // S

    case 73: // I
        return 18; // R

    case 74: // J
        return 17; // Q

    case 75: // K
        return 16; // P

    case 76: // L
        return 15; // O

    case 77: // M
        return 14; // N

    case 78: // N
        return 13; // M

    case 79: // O
        return 12; // L

    case 80: // P
        return 11; // K

    case 81: // Q
        return 10; // J

    case 82: // R
        return 9; // I

    case 83: // S
        return 8; // H

    case 84: // T
        return 7; // G

    case 85: // U
        return 6; // F

    case 86: // V
        return 5; // E

    case 87: // W 
        return 4; // D

    case 88: // X
        return 3; // C

    case 89: // Y
        return 2; // B

    case 90: // Z 
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
// ================= REVERSE FOR ATBASH ==============
//char *
void lstGeoAtBash(char word[30], char txt[1024])
{
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
        // check if the current 'i' element is at the same geomentry of the word, if it does concat it to finalStr

        if (digitGeoAtBash(txt[i]) == sum)
        {
            printf("%d\n", digitGeoAtBash(txt[i]));
            strncat(finalStr, &cStart, 1); // notice this is str'n'cat
            strcat(finalStr, separator);   // this is strcat (no 'n')
            continue;                         // here we need to break and  start a new loop becuase we dont want to keep checking the 'j'
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
    printf("%ld\n", strlen(finalStr));
    finalStr[strlen(finalStr)-1] = '\0';
    printf("%s",finalStr);
}


int main()
{

    char word[] = "bee";
    char txt[] = "I'm bringing home my baby bumble bee Won\\’t my Mommy be so proud of me I\\’m bringing home my baby bumble bee \\– OUCH!! It stung me!!~";

    char word_2[] = "abb";
    char txt_2[] = "ab*bHabbzzzab bs";

    char word_3[] = "bee";
    char txt_3[] = "I'm brinvvygiyvvng home my vvbaby bumblevv ybee";
    char c = '*';
    lstGeo(word, txt);

    //strncat(txt_2,&c,1);
    //printf("%s",txt_2);

    return 0;
}
