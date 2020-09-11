#include "bob.h"
#include <string.h>
#include <ctype.h>

char *hey_bob(char *greeting) {
    char *answer = "";
    int length = strlen(greeting);
    int alphaCount = 0, uppercaseCount = 0, lastChar = 0;

    for (int i = 0; i < length; i++) {
        if (isalpha(greeting[i])) {
            alphaCount++;
            if (isupper(greeting[i])) {
                uppercaseCount++;
            }
        }

        if (!isspace(greeting[i])) {
            lastChar = i;
        }
    }

    if (alphaCount == uppercaseCount && alphaCount != 0 && greeting[lastChar] != '?') {
        answer = "Whoa, chill out!";
    } else if (alphaCount == uppercaseCount && alphaCount != 0 && greeting[lastChar] == '?') {
        answer = "Calm down, I know what I'm doing!";
    } else if (greeting[lastChar] == '?') {
        answer = "Sure.";
    } else if (lastChar == '\0') {
        answer = "Fine. Be that way!";
    } else {
        answer = "Whatever.";
    }

    return answer;
}
