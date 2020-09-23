#include <stdio.h>
#include <string.h>

void encode(char *input, char *output, int bias);
void decode(char *input, char *output, int bias);
void printString(char *str);

int main()
{
    char bef_enc[] = "hello! how are you??";
    char aft_enc[25];
    char aft_dec[25];
    
    printString(bef_enc);
    encode(bef_enc, aft_enc, 4); 
    printString(aft_enc);
    decode(aft_enc, aft_dec, 4); 
    printString(aft_dec);

    return 0;
}

/*
    Encodes the given string into caeser cipher
*/
void encode(char *input, char *output, int bias)
{
    int i = 0;
    while (input[i] != '\0')
    {
        
        if (input[i] >= 65 && input[i] <= 90)
        {
            output[i] = input[i] + bias;

            if (output[i] > 90)
            {
                output[i] = output[i] - 90 + 65 - 1;
            }
        }
        else if (input[i] >= 97 && input[i] <= 122)
        {
            output[i] = input[i] + bias;

            if (output[i] > 122)
            {
                output[i] = output[i] - 90 + 65 - 1;
            }
        }
        else
            output[i] = input[i];
        
        i++;
    }
    output[i] = '\0';
}

/*
    Decodes the caeser cipher to string
*/
void decode(char *input, char *output, int bias)
{
    int i = 0;
    while (input[i] != '\0')
    {
        if (input[i] >= 65 && input[i] <= 90)
        {
            output[i] = input[i] - bias;

            if (output[i] < 65)
            {
                output[i] = output[i] + 90 - 65 + 1;
            }
        }
        else if (input[i] >= 97 && input[i] <= 122)
        {
            output[i] = input[i] - bias;

            if (output[i] < 97)
            {
                output[i] = output[i] + 90 - 65 + 1;
            }
        }
        else
            output[i] = input[i];
        
        i++;
    }
}

/*
    prints the given string
*/
void printString(char *str)
{
    printf("%s\n", str);
}