#include "acronym.h"
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char copy[100];

char *abbreviate(const char *phrase) {
    if (phrase == NULL || strlen(phrase) == 0) {
        return NULL;
    }

    char *acronym = calloc(strlen(phrase)/2, sizeof(char));
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
