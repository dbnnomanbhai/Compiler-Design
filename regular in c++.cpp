/// MODIFIED BY NAJMUL UDDIN (18-38293-2)

#include <iostream>

using namespace std;

#define MATCH  cout << "\n The Text Matches with The Regular Expression";
#define NOTMATCH  cout << "\nThe Text Doesn't match With  the Regular Expression";

char reg[20], text[20];

int main()
{
    int i, rlen, tlen, f = 0;
    char ans;

    do {
            cout << "\nEnter the Regular Expression\n";
            cin >>  reg;
            for (rlen = 0; reg[rlen] != '\0';rlen++);
           cout << "\nEnter the text \n";
             cin >> text;
            for (tlen = 0;text[tlen] != '\0' ; tlen++);
            if (reg[0] == '*')
            {
                cout << "\n This is an Invalid regular expression";
            }

            if ((reg[0] >= 65 && reg[0] <= 90) || (reg[0] >= 97 && reg[0] <=122))
            {
                if (reg[0] == text [0])
                {
                    switch (reg[1])
                    {
                    case '.' :
                        switch (reg[2])
                        {
                        case '*':
                            if (tlen != 1)
                            {
                                if (reg[3] == text[tlen-1])
                                {
                                    MATCH;
                                }
                                else
                                {
                                    NOTMATCH;
                                }
                            }
                            else
                            {
                                NOTMATCH;
                            }
                            break;
                        case '+':
                            if (text[1] != reg[3])
                            {
                                if (reg[3] == text[tlen - 1])
                                {
                                    MATCH;
                                }
                                else
                                {
                                    NOTMATCH;
                                }
                            }
                            break;
                        case '?':
                            if (text[1] == reg[3] || text[2] == reg[3])
                            {
                                if (text[1] == reg[3] || text[2] == reg[3])
                                {
                                    MATCH;
                                }
                                else
                                {
                                    NOTMATCH;
                                }
                            }
                            else
                            {
                                NOTMATCH;
                            }
                             break;
                            }
                            break;
                        case '*':
                            if (reg[rlen-1] == text[tlen-1])
                            {
                                for (i = 0;i <= tlen-2;i++)
                                {
                                    if(text[i] == reg[0])
                                    {
                                        f = 1;
                                    }
                                    else
                                    {
                                        f = 0;
                                    }
                                }
                                if ( f == 1)
                                {
                                    MATCH;
                                }
                                else
                                {
                                    NOTMATCH;
                                }
                            }
                            else
                            {
                                NOTMATCH;
                            }
                            break;
                    case '+' :
                        if (tlen <= 2)
                        {
                            NOTMATCH;
                        }
                        else if (reg[rlen-1] == text[tlen-1])
                        {
                            for (i = 0;i < tlen-2;i++)
                            {
                                if (text[i] == reg[0])
                                {
                                    f = 1;
                                }
                                else
                                {
                                    f = 0;
                                }
                            }

                            if (f == 1)
                            {
                                MATCH;
                            }
                            else
                            {
                                NOTMATCH;
                            }
                        }
                            break;
                    case '?':
                        if (reg[rlen -1] == text[tlen-1])
                        {
                            MATCH;
                        }
                        else
                        {
                            NOTMATCH;
                        }
                    break;
                }

               MATCH;
            }
            else

                 NOTMATCH;
        }

        else if (reg[0] == '^')
        {
            if (reg[1] == text[0])
            {
                MATCH;
            }
            else
            {
                NOTMATCH;
            }
        }

        else if (reg[rlen-1] == '$')
        {
            if (reg[rlen-2] == text[rlen-1])
            {
                MATCH;
            }
            else
            {
                NOTMATCH;
            }
        }

        else
           cout << "The Regular Expressio Not Implemented yet ";
       cout << "\n Do you want to continue? Press (Y/N)";
         cin >>ans;
    } while (ans == 'Y' || ans == 'y');
}
