static const char norm_fg[] = "#e0ece6";
static const char norm_bg[] = "#11100e";
static const char norm_border[] = "#9ca5a1";

static const char sel_fg[] = "#e0ece6";
static const char sel_bg[] = "#607985";
static const char sel_border[] = "#e0ece6";

static const char urg_fg[] = "#e0ece6";
static const char urg_bg[] = "#8AA473";
static const char urg_border[] = "#8AA473";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
