#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* caesarChiper(int, char*, char);

int main()
{
    char text[] = "zulkepretes! ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *encryptedText;
    char *decryptedText;

    encryptedText = caesarChiper(1, text, 'e');
    decryptedText = caesarChiper(1, encryptedText, 'd');

    printf("plain text: %s \n", text);
    printf("encrypted text with key 1: %s\n", encryptedText);
    printf("decrypted text : %s \n", decryptedText); 
    return 0;
}


char* caesarChiper(int key, char *text, char opt)
{
    char alphabet[26];
    int offset  = 65;
    int textSize = strlen(text);
    int i = 0;
    char *outputText = malloc(textSize + 1);
    char oldCharacter;
    char newCharacter;
    char upperChar;

    if(!outputText)
        exit(1);
    if(opt == 'd')
        key = -key;

    for(i = 0; i < 26; i++)
    {
        alphabet[i] = offset + i;
    }

    for(i = 0; i < textSize; i++)
    {
        if(isalpha(text[i]))
        {
            upperChar = toupper(text[i]);
            oldCharacter = upperChar - offset;
            
            newCharacter = (oldCharacter + key) % 26;
            if(newCharacter < 0)
                newCharacter += 26;
            outputText[i] = alphabet[newCharacter];
        }
        else
        {
            outputText[i] = text[i];
        }
    }
}