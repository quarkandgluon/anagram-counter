#include <ctype.h>
#include <stdio.h>
#include <string.h>

void count_letters(char str[], int arr[]);

int main(int argc, char *argv[])
{

    if (argc != 3)
    {
        printf("Usage: %s <string1> <string2>\n", argv[0]);
        return 1;
    }

    int counter1[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int counter2[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    char *s1 = argv[1];
    char *s2 = argv[2];

    count_letters(s1, counter1);
    count_letters(s2, counter2);

    int flag = 0;

    for (int i = 0; i < sizeof(counter1) / sizeof(counter1[0]); i++)
    {
        if (counter1[i] != counter2[i])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        printf("Anagram!\n");
    }
    else if (flag == 1)
    {
        printf("Not an anagram.\n");
    }
    else
    {
        printf("Something went wrong.\n");
    }
}

void count_letters(char str[], int arr[])
{
    for (int i = 0; i < strlen(str); i++)
    {

        if (!isalpha(str[i]))
        {
            continue;
        }
        str[i] = tolower(str[i]);
        switch (str[i])
        {
        case 'a':
            arr[0]++;
            break;
        case 'b':
            arr[1]++;
            break;
        case 'c':
            arr[2]++;
            break;
        case 'd':
            arr[3]++;
            break;
        case 'e':
            arr[4]++;
            break;
        case 'f':
            arr[5]++;
            break;
        case 'g':
            arr[6]++;
            break;
        case 'h':
            arr[7]++;
            break;
        case 'i':
            arr[8]++;
            break;
        case 'j':
            arr[9]++;
            break;
        case 'k':
            arr[10]++;
            break;
        case 'l':
            arr[11]++;
            break;
        case 'm':
            arr[12]++;
            break;
        case 'n':
            arr[13]++;
            break;
        case 'o':
            arr[14]++;
            break;
        case 'p':
            arr[15]++;
            break;
        case 'q':
            arr[16]++;
            break;
        case 'r':
            arr[17]++;
            break;
        case 's':
            arr[18]++;
            break;
        case 't':
            arr[19]++;
            break;
        case 'u':
            arr[20]++;
            break;
        case 'v':
            arr[21]++;
            break;
        case 'w':
            arr[22]++;
            break;
        case 'x':
            arr[23]++;
            break;
        case 'y':
            arr[24]++;
            break;
        case 'z':
            arr[25]++;
            break;
        }
    }
}