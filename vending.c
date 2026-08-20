/*4.FULLY AUTOMATIC VENDING MACHINE – dispenses your cuppa on just press of button. A vending machine can serve range of products as follows:
Coffee
1.Espresso Coffee
2.Cappuccino Coffee
3.Latte Coffee
Tea
1.Plain Tea
2.Assam Tea
3.Ginger Tea
4.Cardamom Tea
5.Masala Tea
6.Lemon Tea
7.Green Tea
8.Organic Darjeeling Tea
Soups 
1.Hot and Sour Soup
2.Veg Corn Soup
3.Tomato Soup
4.Spicy Tomato Soup
Beverages
1.Hot Chocolate Drink
2.Badam Drink
3.Badam-Pista Drink
Write a program to take input for main menu & sub menu and display the name of sub menu selected in the following format (enter the first letter to select main menu):
Welcome to CCD 
Enjoy your
Example 1:
Input:
c
1
Output
Welcome to CCD!
Enjoy your Espresso Coffee!
Example 2:
Input:
t
9
Output
INVALID INPUT
*/

#include<stdio.h>

void main()
{
    printf("Welcome to CCD\n");
    printf("Enjoy your\n");
    printf("COFFEE\n"
            "1.Espresso Coffee\n"
            "2.Cappuccino Coffee\n"
            "3.Latte Coffee\n"
            "\n"
            "TEA\n"
            "1.Plain Tea\n"
            "2.Assam Tea\n"
            "3.Ginger Tea\n"
            "4.Cardamom Tea\n"
            "5.Masala Tea\n"
            "6.Lemon Tea\n"
            "7.Green Tea\n"
            "8.Organic Darjeeling Tea\n"
            "\n"
            "SOUPS\n"
            "1.Hot and Sour Soup\n"
            "2.Veg Corn Soup\n"
            "3.Tomato Soup\n"
            "4.Spicy Tomato Soup\n"
            "\n"
            "BEVERAGES\n"
            "1.Hot Chocolate Drink\n"
            "2.Badam Drink\n"
            "3.Badam-Pista Drink\n");

    char menu[] ={'c','t','s','b'};

    char c[][25] = {"Espresso Coffee",
                    "Cappuccino Coffee",
                    "Latte Coffee"};
    int len_c = sizeof(c)/sizeof(c[0]);

    char t[][25] = {"Plain Tea",
                    "Assam Tea",
                    "Ginger Tea",
                    "Cardamom Tea",
                    "Masala Tea",
                    "Lemon Tea",
                    "Green Tea",
                    "Organic Darjeeling Tea"};
    int len_te = sizeof(t)/sizeof(t[0]);

    char s[][25] = {"Hot and Sour Soup",
                    "Veg Corn Soup",
                    "Tomato Soup",
                    "Spicy Tomato Soup"};
    int len_s = sizeof(s)/sizeof(s[0]);

    char b[][25] = {"Hot Chocolate Drink",
                    "Badam Drink",
                    "Badam-Pista Drink"};
    int len_b = sizeof(b)/sizeof(b[0]);

    char choosen; 
    printf("\nEnter your Choice: ");
    scanf("%c",&choosen);

    int fav;
    printf("What you want: ");
    scanf("%d",&fav);

    switch(choosen)
    {
        case 'c':
            if(fav<=len_c){
                printf("Enjoy your %s",c[fav-1]);
                return;
            }
            else{
                printf("INVALID INPUT");
            }
            break;
        case 't':
            if(fav<=len_te){
                printf("Enjoy your %s",t[fav-1]);
                return;
            }
            else{
                printf("INVALID INPUT");
            }
            break;
        case 's':
            if(fav<=len_s){
                printf("Enjoy your %s",s[fav-1]);
                return;
            }
            else{
                printf("INVALID INPUT");
            }
            break;
        case 'b':
            if(fav<=len_b){
                printf("Enjoy your %s",b[fav-1]);
                return;
            }
            else{
                printf("INVALID INPUT");
            }
            break;
        default:
            printf("INVALID INPUT");
    }
}