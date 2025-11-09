#include <string.h>
#include "rps.h"

const char* rps_winner(const char* p1, const char* p2) {
    if (!p1 || !p2) return "Invalid";
    if (strcmp(p1, p2) == 0) return "Draw";  // NEW for draw
    if (strcmp(p1, "Rock") == 0 && strcmp(p2, "Scissors") == 0) return "Player1";
    return "Invalid";
}
