/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Yeuch!\n");
        exit(1);
    }

    /*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define BUFFER_LEN 8192

    int main(int argc, char *argv[])
    {
        char word[BUFFER_LEN];

        if (argc != 2)
        {
            printf("Yeuch!\n");
            exit(1);
        }

        int d = 0;
        for (int s = 0; argv[1][s] != '\0'; ++s)
        {
            if (isalnum(argv[1][s]))
            {
                word[d++] = toupper(argv[1][s]);
            }
        }
        word[d] = '\0';

        printf("%s\n", word);

        int pal = 1;
        for (int t = 0; word[t] != '\0'; ++t)
        {
            if (word[t] != word[strlen(word) - 1 - t])
            {
                pal = 0;
            }
        }
        if (pal)
        {
            printf("Yeah!\n");
        }

        return 0;
    }

    return 0;
}