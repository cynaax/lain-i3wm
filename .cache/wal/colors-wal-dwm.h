static const char norm_fg[] = "#d9d9d9";
static const char norm_bg[] = "#101010";
static const char norm_border[] = "#979797";

static const char sel_fg[] = "#d9d9d9";
static const char sel_bg[] = "#8B807F";
static const char sel_border[] = "#d9d9d9";

static const char urg_fg[] = "#d9d9d9";
static const char urg_bg[] = "#AE4630";
static const char urg_border[] = "#AE4630";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
