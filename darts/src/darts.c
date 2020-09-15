#include "darts.h"
#include <math.h>

int score(coordinate_t landing_position) {
    int score = 0;
    float centerDistance = sqrt((landing_position.x * landing_position.x) + (landing_position.y * landing_position.y));

    if (centerDistance <= 1) {
        score = 10;
    } else if (centerDistance <= 5) {
        score = 5;
    } else if (centerDistance <= 10) {
        score = 1;
    } else if (centerDistance > 10) {
        score = 0;
    }

    return score;
}
