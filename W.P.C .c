#include<stdio.h>
#include<stdlib.h>

void word (void);
void paragraph (void);          // prototype
void character (void);


int choose,i,select;   // global variable
int main()             // main function
{
again:
    printf("\n\n\n\n\n\n\n\t\t\t\t\t------------------------------------------");
    printf("\n\t\t\t\t\t|                                        |\n");
    printf("\n\t\t\t\t\t|                                        |\n");
    printf("\n\t\t\t\t\t|                                        |\n");
    printf("\n\t\t\t\t\t|     WELCOME TO THE 'W.P.C' COUNTER     |\n");
    printf("\n\t\t\t\t\t|                                        |\n");
    printf("\n\t\t\t\t\t|                                        |\n");
    printf("\n\t\t\t\t\t|                                        |\n");
    printf("\t\t\t\t\t------------------------------------------\n\n");
    printf("\t\t\t\t\t\tPRESS ENTER FOR CONTINUE...");
    getchar();

    system("cls");      // screen clear

    printf("\n\n\n\n\n\n\n\t\t\t\t\t\t|||| SELECT YOUR COUNTER ||||\n\n\n\n\n");

    printf("\n---------------------------------\n\n");
    printf("  >>>\t(1)  WORD\n");
    printf("  >>>\t(2)  PARAGRAPH\n");
    printf("  >>>\t(3)  CHARACTER\n");
    printf("\n---------------------------------\n\n");
    printf("Enter : ");
    scanf("%d",&choose);

    if(choose==1)     //condition for main menu selection
    {
        system("cls");

        word();
    }
    else if(choose==2)
    {
        system("cls");

        paragraph();
    }
    else if(choose==3)
    {
        system("cls");

        character();
    }
    else
    {
        printf("Invalid! please try again");
        goto again;
    }

    return 0;   // exicusion function

}
void word(void)     // function call
{
    char s[2000];
    int count = 0, i;

    printf("\n\nEnter the string terminated by $:\n\n");
    scanf("%[^$]", s);
    for (i = 0; s[i] != '\0'; i++)                  // loop for word
    {
        if (s[i] == ' ' && s[i+1] != ' ' || s[i+1] == '\n')
            count++;
    }
    printf("\n\n\n\t\t\t\t\t------------------------------\n");
    printf(" \t\t\t\t\t        Words count: %d        \n", count + 1);      //print result
    printf(" \t\t\t\t\t------------------------------\n\n\n");
    getchar();
    printf("Enter 1 for again count words or Enter 2 for main menu or Enter any other keys for exit\n");
    scanf("%d",&select);

    if(select==1)
    {
        system("cls");
        word();
    }
    else if(select==2)
    {
        system("cls");
        main();
    }
    else
    {
        system("cls");
        printf("\n\n\n\t\t\tTHANK YOU FOR USING 'W.P.C' COUNTER\n\n\n");
    }
}

void paragraph(void)
{
    char str[2000];
    int i, p;
    p=0;

    printf("\n\nEnter a string in multiple paragraph terminated with $ :\n\n");
    scanf("%[^$]", str);

    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]=='\n')
        {
            p++;
        }
    }
    printf("\n\n\n\t\t\t\t\t------------------------------\n");
    printf("\t\t\t\t\t     Paragraph/Line counts = %d     \n",p);
    printf(" \t\t\t\t\t------------------------------\n\n\n");
    getchar();
    printf("Enter 1 for again count paragraph or Enter 2 for main menu or Enter any other keys for exit\n");
    scanf("%d",&select);

    if(select==1)
    {
        system("cls");
        paragraph();
    }
    else if(select==2)
    {
        system("cls");
        main();
    }
    else
    {
        system("cls");
        printf("\n\n\n\t\t\tTHANK YOU FOR USING W.P.C COUNTER\n\n\n");
    }

}

void character(void)
{
    char str[2000];
    int i, c=0,ch;
    ch=0;

    printf("\n\nEnter a string terminated with $ :\n\n");
    scanf("%[^$]", str);

    for(i = 0; str[i] !='\0'; i++)
    {
        if(str[i]!=' ')
        {
            c = c + 1;
        }
    }
    printf("\n\n\n\t\t\t\t\t-------------------------------\n");
    printf("\t\t\t\t\t      Character counts = %d     \n", c-1);
    printf(" \t\t\t\t\t-------------------------------\n\n\n");
    getchar();
    printf("Enter 1 for again count characters or Enter 2 for main menu or Enter any other keys for exit\n");
    scanf("%d",&select);

    if(select==1)
    {
        system("cls");
        character();
    }
    else if(select==2)
    {
        system("cls");
        main();
    }
    else
    {
        system("cls");
        printf("\n\n\n\t\t\tTHANK YOU FOR USING W.P.C COUNTER\n\n\n");  // ending squence
    }
}
