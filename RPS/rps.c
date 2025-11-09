#include <string.h>
#include "rps.h"

// TDD Blue phase: minor tidy for readability, behavior unchanged
static int is_equal(const char* a, const char* b) { return strcmp(a, b) == 0; }

static int is_valid(const char* s) {
    return s && (is_equal(s, "Rock") || is_equal(s, "Paper") || is_equal(s, "Scissors"));
}

const char* rps_winner(const char* p1, const char* p2) {
    if (!is_valid(p1) || !is_valid(p2)) return "Invalid";
    if (is_equal(p1, p2)) return "Draw";

    int p1_wins =
        (is_equal(p1, "Rock") && is_equal(p2, "Scissors")) ||
        (is_equal(p1, "Scissors") && is_equal(p2, "Paper")) ||
        (is_equal(p1, "Paper") && is_equal(p2, "Rock"));

    return p1_wins ? "Player1" : "Player2";
}

