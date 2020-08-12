static const char norm_fg[] = "#88b5d8";
static const char norm_bg[] = "#030912";
static const char norm_border[] = "#5f7e97";

static const char sel_fg[] = "#88b5d8";
static const char sel_bg[] = "#19629A";
static const char sel_border[] = "#88b5d8";

static const char urg_fg[] = "#88b5d8";
static const char urg_bg[] = "#195D9E";
static const char urg_border[] = "#195D9E";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
