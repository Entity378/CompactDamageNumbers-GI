// Compile-time options for both vertex shaders.

// Max integer digits that still get a decimal: 0 = never, 1 = 1.6k, 2 = 37.8k too.
#define SHOW_DECIMALS 2

// Append ! to crits; with no spare glyph, it replaces the decimal (1.6k -> 1k!).
#define CRITICAL_INDICATOR 0

// Uppercase suffix on crits (k -> K).
// Crits under 1000 have no suffix and are recognizable only by size.
#define CRITICAL_UPPERCASE 1

// Shortest number to compact (4 = from 1000 up).
#define MIN_DIGITS 4

// Max spread of the quad tops before a string counts as a word.
// Digits spread 0-1; reaction names like Melt spread about 13.
#define TOP_TOLERANCE 2.0

// Quad height threshold for crits (44 normal, 71 crit at 1080p).
#define CRIT_HEIGHT 57.5