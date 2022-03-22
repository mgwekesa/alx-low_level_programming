#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point, generating a valid password for 101-crackme program
 * Return: returns 0;
 */

/**
 * main - Generates random valid passwords for the
 *        program 101-crackme.
 *
 * Return: Always 0.
 */

int main(void)
{
        char password[100];
        int i = 0, sum = 0, d_h1, d_h2;

        srand(time(0));

        while (sum < 2772)
        {
                password[i] = 33 + rand() % 94;
                sum += password[i++];
        }

        password[i] = '\0';

        if (sum != 2772)
        {
                d_h1 = (sum - 2772) / 2;
                d_h2 = (sum - 2772) / 2;
                if ((sum - 2772) % 2 != 0)
                        d_h1++;

                for (i = 0; password[i]; i++)
                {
                        if (password[i] >= (33 + d_h1))
                        {
                                password[i] -= d_h1;
                                break;
                        }
                }
                for (i = 0; password[i]; i++)
                {
                        if (password[i] >= (33 + d_h2))
                        {
                                password[i] -= d_h2;
                                break;
                        }
                }
        }

        printf("%s", password);

        return (0);
}
 
