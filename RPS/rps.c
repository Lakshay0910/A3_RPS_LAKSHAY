#include <string.h>
#include "rps.h"


// TDD step: code cleaned in BLUE phase (no logic change)
const char* rps_winner(const char* p1, const char* p2) {
    if (!p1 || !p2) return "Invalid";
    if (strcmp(p1, "Rock") == 0 && strcmp(p2, "Scissors") == 0) return "Player1";
    return "Invalid"; // still minimal, just enough to pass the first test
}
