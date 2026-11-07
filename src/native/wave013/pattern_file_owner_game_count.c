#include "pattern_file_owner_game_view.h"

static int numeric_unit(unsigned int unit)
{
    return unit - 0x30u <= 9 || unit - 0xff10u <= 9 ||
        unit - 0x2070u <= 9 || unit - 0x2080u <= 9 ||
        unit - 0x2160u <= 11 || unit - 0x2170u <= 11 ||
        unit - 0x2460u <= 19 || unit - 0x2474u <= 19 ||
        unit - 0x2488u <= 19 || unit - 0x2776u <= 9 ||
        unit - 0x2780u <= 9 || unit - 0x278au <= 9 ||
        unit == 0xb2 || unit == 0xb3 || unit == 0xb9 ||
        unit == 0x24ea || unit == 0x24ff;
}

int fn_004c3b1c(const unsigned short *text)
{
    if (text == (void *)0)
        return -1;
    unsigned int count = 0;
    while (*text != 0) {
        count += numeric_unit(*text) != 0;
        ++text;
    }
    return (int)count;
}
