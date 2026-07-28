/*
7.	The Caesar cipher is a type of substitution cipher in which each 
alphabet in the plaintext or messages is shifted by a number of places down the alphabet.
For example,with a shift of 1, P would be replaced by Q, Q would become R, and so on.
To pass an encrypted message from one person to another, 
it is first necessary that both parties have the ‘Key’ for the cipher, 
so that the sender may encrypt and the receiver may decrypt it.
Key is the number of OFFSET to shift the cipher alphabet. 
Key can have basic shifts from 1 to 25 positions as there are 26 total alphabets.
As we are designing custom Caesar Cipher, in addition to alphabets, 
we are considering numeric digits from 0 to 9. Digits can also be shifted by key places.
For Example, if a given plain text contains any digit with values 5 and keyy =2, 
then 5 will be replaced by 7, “-”(minus sign) will remain as it is. 
Key value less than 0 should result into “INVALID INPUT”
Example 1:
Enter your PlainText: All the best
Enter the Key: 1
The encrypted Text is: Bmm uif Cftu
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char text[100];
    int key, i;

    printf("Enter your PlainText: ");
    fgets(text, sizeof(text), stdin);

    printf("Enter the Key: ");
    scanf("%d", &key);

    if(key < 0)
    {
        printf("INVALID INPUT");
        return 0;
    }

    for(i = 0; text[i] != '\0'; i++)
    {
        if(text[i] >= 'A' && text[i] <= 'Z')
        {
            text[i] = ((text[i] - 'A' + key) % 26) + 'A';//65 to 91
        }
        else if(text[i] >= 'a' && text[i] <= 'z')
        {
            text[i] = ((text[i] - 'a' + key) % 26) + 'a';//97 to 122
        }
        else if(text[i] >= '0' && text[i] <= '9')
        {
            text[i] = ((text[i] - '0' + key) % 10) + '0';//48 t0 57
        }
    }

    printf("The encrypted Text is: %s", text);

    return 0;
}