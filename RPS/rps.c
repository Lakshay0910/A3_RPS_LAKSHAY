#include <string.h>
#include "rps.h"

static int is_equal(const char* a, const char* b) { return strcmp(a, b) == 0; } // refactor helper
const char* rps_winner(const char* p1, const char* p2) {
	if (is_equal(p1, p2)) return "Draw";
	if (is_equal(p1, "Rock") && is_equal(p2, "Scissors")) return "Player1";
}
