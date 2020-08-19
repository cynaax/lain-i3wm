static const char norm_fg[] = "#f0ecc9";
static const char norm_bg[] = "#020109";
static const char norm_border[] = "#a8a58c";

static const char sel_fg[] = "#f0ecc9";
static const char sel_bg[] = "#9C5EAF";
static const char sel_border[] = "#f0ecc9";

static const char urg_fg[] = "#f0ecc9";
static const char urg_bg[] = "#645EA8";
static const char urg_border[] = "#645EA8";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
