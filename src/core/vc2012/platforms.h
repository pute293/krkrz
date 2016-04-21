#ifndef platformsH
#define platformsH

#ifdef WIN32

#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/* ==========================================================================
    snprintf (C99) emulator
    @parameter
    - str:  buffer for output
    upon successful, this buffer always null-terminated
    - size: max size (in bytes) of output buffer,
            *includes* terminating null byte
    - fmt:  format string
    @return
    - the number of characters printed *excluding* the terminating null byte
      (upon successful)
    - the number of bytes for desired buffer *excluding* the terminating null byte
      (upon truncation)
    - negative integer (upon error)
    @example
    // http://www.cplusplus.com/reference/cstdio/snprintf/
    char buffer[100];
    int cx = tjs_snprintf(buffer, 100, "The half of %d is %d", 60, 60/2);
    if (0 <= cx && cx < 100) {
        // success
        puts(buffer);
    } else if (100 <= cx) {
        // truncated
    } else {
        // error
    }
 * ========================================================================== */
int tjs_snprintf(char * __restrict str, size_t size, const char * __restrict format, ...)
{
    int ret;
    va_list ap;
    va_start(ap, format);
    ret = vsnprintf_s(str, size, size - 1, format, ap);
    va_end(ap);
    return ret;
}

#else   // WIN32

#define tjs_snprintf snprintf

#endif  // WIN32

#endif
