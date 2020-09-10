#include "acronym.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char *abbreviate(const char *phrase) {
    if (phrase == NULL || strlen(phrase) == 0) {
        return NULL;
    }

    int length = strlen(phrase);
    char *acronym = malloc(length);

    char *copy = malloc(sizeof(char) * length);
    strcpy(copy, phrase);

    char *token = strtok(copy, " -:,");
    int position = 0;

    while (token != NULL)
    {
        acronym[position++] = toupper(token[0]);
        token = strtok(NULL, " -:,");
    }

    return acronym;
}
