#include <stdio.h>
#include <string.h>

void encode(char *input, char *output, int bias);
void decode(char *input, char *output, int bias);
void printString(char *str);

int main()
{
    char bef_enc[] = "Hello.";
    char aft_enc[7];
    
    printString(bef_enc);
    encode(bef_enc, aft_enc, 4); 
    printString(aft_enc);
    decode(aft_enc, bef_enc, 4); 
    
    return 0;
}

void encode(char *input, char *output, int bias)
{
    int i = 0;
    while (input[i] != '\0')
    {
        if ((input[i] >= 65 && input[i] <= 90) || (input[i] >= 97 && input[i] <= 122))
            output[i] = input[i] + bias;
        else
            output[i] = input[i];
        
        i++;
    }
}

void decode(char *input, char *output, int bias)
{

}

void printString(char *str)
{
    printf("%s\n", str);
}