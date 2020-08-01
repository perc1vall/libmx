#include "../inc/libmx.h"


char *mx_nbr_to_hex(unsigned long nbr) {
    char *buf = mx_strnew(8);
    if (buf == NULL)
        return NULL;
    unsigned int buf1 = (nbr & 0xF0000000u) >> (28u);
    if (buf1 <= 9)
        buf[0] = (char) ('0' + buf1);
    else
        buf[0] = (char) ('A' - 10 + buf1);

    buf1 = (nbr & 0x0F000000u) >> (24u);
    if (buf1 <= 9)
        buf[1] = (char) ('0' + buf1);
    else
        buf[1] = (char) ('A' - 10 + buf1);

    buf1 = (nbr & 0x00F00000u) >> (20u);
    if (buf1 <= 9)
        buf[2] = (char) ('0' + buf1);
    else
        buf[2] = (char) ('A' - 10 + buf1);

    buf1 = (nbr & 0x000F0000u) >> (16u);
    if (buf1 <= 9)
        buf[3] = (char) ('0' + buf1);
    else
        buf[3] = (char) ('A' - 10 + buf1);
    buf1 = (nbr & 0xF000u) >> (12u);
    if (buf1 <= 9)
        buf[4] = (char) ('0' + buf1);
    else
        buf[4] = (char) ('A' - 10 + buf1);

    buf1 = (nbr & 0x0F00u) >> (8u);
    if (buf1 <= 9)
        buf[5] = (char) ('0' + buf1);
    else
        buf[5] = (char) ('A' - 10 + buf1);

    buf1 = (nbr & 0x00F0u) >> (4u);
    if (buf1 <= 9)
        buf[6] = (char) ('0' + buf1);
    else
        buf[6] = (char) ('A' - 10 + buf1);

    buf1 = (nbr & 0x000Fu) >> (0u);
    if (buf1 <= 9)
        buf[7] = (char) ('0' + buf1);
    else
        buf[7] = (char) ('A' - 10 + buf1);
    return buf;
}
