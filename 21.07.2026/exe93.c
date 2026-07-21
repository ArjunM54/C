#include<stdio.h>
#include<string.h>
void main()
{
    char hex[100];
    int i,decimal=0,value;
    printf("Enter N: ");
    scanf("%s",&hex);
    

    int len=strlen(hex);

    for(i=0;i<len;i++){
        if(hex[i]>=0 && hex[i]<=9){
            value = hex[i]-'0';
        }
        else if(hex[i]>='A' && hex[i]<='F'){
            value = hex[i]-'A'+10;
        }
        else if(hex[i]>='a' && hex[i]<='f'){
            value = hex[i]-'a'+10;
        }
        else{
            printf("invalid hexadecimal number");
        }
        decimal = decimal*16+value;
    }
    printf("%d",decimal);
}