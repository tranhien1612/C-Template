#pragma once

#define _must_check_ __attribute__((warn_unused_result))
#define _printf_format_(a, b) __attribute__((format(printf, a, b)))
#define _unused_ __attribute__((unused))
#define _always_inline_ __inline__ __attribute__((always_inline))
#define _cleanup_(x) __attribute__((cleanup(x)))
#define _pure_ __attribute__((pure))
#define _packed_ __attribute__((packed))

#define IOVEC_SET_STRING(i, s)    \
    do {                          \
        struct iovec *_i = &(i);  \
        char *_s = (char *)(s);   \
        _i->iov_base = _s;        \
        _i->iov_len = strlen(_s); \
    } while (0)
