/* Adler-32 checksum -- adapted from zlib 1.2.5 adler32.c.
 *
 * The original image statically links zlib twice.  The measured function at
 * 0x00730208 is the first link's Adler-32 and the one at 0x00736384 is the
 * second link's; both are byte-identical to this body compiled with the
 * measured armcc 4.1 build 1454 profile.
 *
 * This is third-party code, adapted only to the project's no-system-header
 * rule: the four types and the constants it needs are declared here, and the
 * arithmetic, macros and statement order are upstream zlib 1.2.5's.  Its
 * byte-identity is a property of the vendor drop and the measured compiler,
 * not of reconstruction; the unit is labelled `third-party-byte-exact`.  The
 * unmodified upstream drop is in
 * `src/native/third_party/zlib-1.2.5/` (see its UPSTREAM.md and LICENSE).
 *
 * STATUS: reconstructed, byte-identical at both addresses (932 bytes each,
 * 233 instructions and the 12-byte literal pool: BASE, the reciprocal
 * multiplier and NMAX).
 */

typedef unsigned char Bytef;
typedef unsigned int uInt;
typedef unsigned long uLong;

#define BASE 65521      /* largest prime smaller than 65536 */
#define NMAX 5552

#define DO1(buf,i)  {adler += (buf)[i]; sum2 += adler;}
#define DO2(buf,i)  DO1(buf,i); DO1(buf,i+1);
#define DO4(buf,i)  DO2(buf,i); DO2(buf,i+2);
#define DO8(buf,i)  DO4(buf,i); DO4(buf,i+4);
#define DO16(buf)   DO8(buf,0); DO8(buf,8);

#define MOD(a) a %= BASE
#define MOD28(a) a %= BASE

uLong fn_00730208(uLong adler, const Bytef *buf, uInt len)
{
    unsigned long sum2;
    unsigned n;

    /* split Adler-32 into component sums */
    sum2 = (adler >> 16) & 0xffff;
    adler &= 0xffff;

    /* in case user likes doing a byte at a time, keep it fast */
    if (len == 1) {
        adler += buf[0];
        if (adler >= BASE)
            adler -= BASE;
        sum2 += adler;
        if (sum2 >= BASE)
            sum2 -= BASE;
        return adler | (sum2 << 16);
    }

    /* initial Adler-32 value (deferred check for len == 1 speed) */
    if (buf == 0)
        return 1L;

    /* in case short lengths are provided, keep it somewhat fast */
    if (len < 16) {
        while (len--) {
            adler += *buf++;
            sum2 += adler;
        }
        if (adler >= BASE)
            adler -= BASE;
        MOD28(sum2);            /* only added so many BASE's */
        return adler | (sum2 << 16);
    }

    /* do length NMAX blocks -- requires just one modulo operation */
    while (len >= NMAX) {
        len -= NMAX;
        n = NMAX / 16;          /* NMAX is divisible by 16 */
        do {
            DO16(buf);          /* 16 sums unrolled */
            buf += 16;
        } while (--n);
        MOD(adler);
        MOD(sum2);
    }

    /* do remaining bytes (less than NMAX, still just one modulo) */
    if (len) {                  /* avoid modulos if none remaining */
        while (len >= 16) {
            len -= 16;
            DO16(buf);
            buf += 16;
        }
        while (len--) {
            adler += *buf++;
            sum2 += adler;
        }
        MOD(adler);
        MOD(sum2);
    }

    /* return recombined sums */
    return adler | (sum2 << 16);
}

/* The same upstream body instantiated a second time at 0x00736384. */
uLong fn_00736384(uLong adler, const Bytef *buf, uInt len)
{
    unsigned long sum2;
    unsigned n;

    sum2 = (adler >> 16) & 0xffff;
    adler &= 0xffff;

    if (len == 1) {
        adler += buf[0];
        if (adler >= BASE)
            adler -= BASE;
        sum2 += adler;
        if (sum2 >= BASE)
            sum2 -= BASE;
        return adler | (sum2 << 16);
    }

    if (buf == 0)
        return 1L;

    if (len < 16) {
        while (len--) {
            adler += *buf++;
            sum2 += adler;
        }
        if (adler >= BASE)
            adler -= BASE;
        MOD28(sum2);
        return adler | (sum2 << 16);
    }

    while (len >= NMAX) {
        len -= NMAX;
        n = NMAX / 16;
        do {
            DO16(buf);
            buf += 16;
        } while (--n);
        MOD(adler);
        MOD(sum2);
    }

    if (len) {
        while (len >= 16) {
            len -= 16;
            DO16(buf);
            buf += 16;
        }
        while (len--) {
            adler += *buf++;
            sum2 += adler;
        }
        MOD(adler);
        MOD(sum2);
    }

    return adler | (sum2 << 16);
}
