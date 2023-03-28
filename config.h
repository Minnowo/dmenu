/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static const int user_bh = 2;             /* add an defined amount of pixels to the bar height */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */

/* use the active window to determine where to put the menu */
static const int location_using_active_window = 0;

/* use the mouse locaiton to determine where to put the window */
static const int location_using_mouse = 0;

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*                fg         bg       */
//	[SchemeNorm] = { "#bbbbbb", "#222222" }, 
	[SchemeNorm] = { "#e0def4", "#191724" },
//	[SchemeSel] = { "#eeeeee", "#005577" }, 
	[SchemeSel] = { "#26233a", "#c4a7e7" },
	[SchemeOut] = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 30;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 3;
