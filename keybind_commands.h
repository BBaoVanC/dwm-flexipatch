static const char *supermenucmd[] = { "supermenu", NULL };
static const char *powermenucmd[] = { "powermenu", NULL };
static const char *lightlocker_lockcmd[] = { "light-locker-command", "-l", NULL };

static const char *alacrittycmd[] = { "alacritty", NULL };
static const char *kittycmd[] = { "kitty", NULL };
static const char *clipeditcmd[] = { "clipedit", NULL };
static const char *browsercmd[] = { "firefox-nightly", NULL };
static const char *discordcmd[] = { "discord-canary", NULL };
static const char *mailclientcmd[] = { "st", "-e", "neomutt", NULL };
static const char *filemanagercmd[] = { "st", "-e", "ranger", NULL };
static const char *rssreadercmd[] = { "st", "-e", "newsboat", NULL };
static const char *passmenucmd[] = { "passmenu", NULL };

static const char *dunstclosecmd[] = { "dunstctl", "close", NULL };
static const char *dunstcloseallcmd[] = { "dunstctl", "close-all", NULL };
static const char *dunsthistorycmd[] = { "dunstctl", "history-pop", NULL };
static const char *dunstcontextcmd[] = { "dunstctl", "context", NULL };

static const char *imupdragcmd[] = { "imupdrag", "url", NULL };
static const char *imupclipcmd[] = { "imupclip", "url", NULL };

static const char *uskbdcmd[] = { "/bin/sh", "-c", "setxkbmap -layout us && sigdwmblocks 2", NULL };
static const char *intlkbdcmd[] = { "/bin/sh", "-c", "setxkbmap -layout us -variant altgr-intl && sigdwmblocks 2", NULL };

static const char *ss_sel[] = { "ssclip", "sel", NULL };
static const char *ss_window[] = { "ssclip", "window", NULL };
static const char *ss_full[] = { "ssclip", "full", NULL };
static const char *clipgimpcmd[] = { "clipgimp", NULL };

static const char *voltogglecmd[] = { "audioctl", "toggle", NULL };
static const char *volupcmd[] = { "audioctl", "up", NULL };
static const char *voldowncmd[] = { "audioctl", "down", NULL };
