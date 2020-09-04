static const char norm_fg[] = "#f3e8df";
static const char norm_bg[] = "#100908";
static const char norm_border[] = "#aaa29c";

static const char sel_fg[] = "#f3e8df";
static const char sel_bg[] = "#DE6588";
static const char sel_border[] = "#f3e8df";

static const char urg_fg[] = "#f3e8df";
static const char urg_bg[] = "#546B88";
static const char urg_border[] = "#546B88";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
