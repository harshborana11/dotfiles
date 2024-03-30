static const char norm_fg[] = "#c6bece";
static const char norm_bg[] = "#0F1827";
static const char norm_border[] = "#8a8590";

static const char sel_fg[] = "#c6bece";
static const char sel_bg[] = "#2C4B8C";
static const char sel_border[] = "#c6bece";

static const char urg_fg[] = "#c6bece";
static const char urg_bg[] = "#234083";
static const char urg_border[] = "#234083";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
