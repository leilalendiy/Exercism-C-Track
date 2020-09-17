#include "space_age.h"

float convert_planet_age(planet_t planet, int64_t input) {
    switch (planet) {
        case MERCURY:
            return input / (0.2408467 * 31557600);
        case VENUS:
            return input / (0.61519726 * 31557600);
        case EARTH:
            return input / 31557600;
        case MARS:
            return input / (1.8808158 * 31557600);
        case JUPITER:
            return input / (11.862615 * 31557600);
        case SATURN:
            return input / (29.447498 * 31557600);
        case URANUS:
            return input / (84.016846 * 31557600);
        case NEPTUNE:
            return input / (164.79132 * 31557600);
        default:
            return 0;
    }
}
