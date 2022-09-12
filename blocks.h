//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"[  Kbr:", "setxkbmap -query | awk '/layout/{ print $2 }'",            0,  11},
    {" Net:", "cat /sys/class/net/eth0/operstate",                       2,   0},
    {" Bat:", "cat /sys/class/power_supply/BAT0/capacity",               10,   0},
    {" Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},
    {"蓼 Vol:", "pamixer --get-volume-human",                               0,  10},
    {"", "date '+%b %d (%a) %I:%M%p' ",                                  10,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ][ ";
static unsigned int delimLen = 5;

