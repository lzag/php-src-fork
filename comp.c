typedef long unsigned int size_t;
typedef int wchar_t;

typedef struct {
  int quot;
  int rem;
} div_t;
typedef struct {
  long int quot;
  long int rem;
} ldiv_t;
__extension__ typedef struct {
  long long int quot;
  long long int rem;
} lldiv_t;
extern size_t __ctype_get_mb_cur_max(void)
    __attribute__((__nothrow__, __leaf__));
extern double atof(const char *__nptr) __attribute__((__nothrow__, __leaf__))
__attribute__((__pure__)) __attribute__((__nonnull__(1)));
extern int atoi(const char *__nptr) __attribute__((__nothrow__, __leaf__))
__attribute__((__pure__)) __attribute__((__nonnull__(1)));
extern long int atol(const char *__nptr) __attribute__((__nothrow__, __leaf__))
__attribute__((__pure__)) __attribute__((__nonnull__(1)));
__extension__ extern long long int atoll(const char *__nptr)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__))
    __attribute__((__nonnull__(1)));
extern double strtod(const char *__restrict __nptr, char **__restrict __endptr)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
extern float strtof(const char *__restrict __nptr, char **__restrict __endptr)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
extern long double strtold(const char *__restrict __nptr,
                           char **__restrict __endptr)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
extern _Float32 strtof32(const char *__restrict __nptr,
                         char **__restrict __endptr)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
extern _Float64 strtof64(const char *__restrict __nptr,
                         char **__restrict __endptr)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
extern _Float128 strtof128(const char *__restrict __nptr,
                           char **__restrict __endptr)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
extern _Float32x strtof32x(const char *__restrict __nptr,
                           char **__restrict __endptr)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
extern _Float64x strtof64x(const char *__restrict __nptr,
                           char **__restrict __endptr)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
extern long int strtol(const char *__restrict __nptr,
                       char **__restrict __endptr, int __base)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
extern unsigned long int strtoul(const char *__restrict __nptr,
                                 char **__restrict __endptr, int __base)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
__extension__ extern long long int
strtoq(const char *__restrict __nptr, char **__restrict __endptr, int __base)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
__extension__ extern unsigned long long int
strtouq(const char *__restrict __nptr, char **__restrict __endptr, int __base)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
__extension__ extern long long int
strtoll(const char *__restrict __nptr, char **__restrict __endptr, int __base)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
__extension__ extern unsigned long long int
strtoull(const char *__restrict __nptr, char **__restrict __endptr, int __base)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
extern long int strtol(const char *__restrict __nptr,
                       char **__restrict __endptr,
                       int __base) __asm__(""
                                           "__isoc23_strtol")
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
extern unsigned long int strtoul(const char *__restrict __nptr,
                                 char **__restrict __endptr,
                                 int __base) __asm__(""
                                                     "__isoc23_strtoul")
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
__extension__ extern long long int
strtoq(const char *__restrict __nptr, char **__restrict __endptr,
       int __base) __asm__(""
                           "__isoc23_strtoll")
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
__extension__ extern unsigned long long int
strtouq(const char *__restrict __nptr, char **__restrict __endptr,
        int __base) __asm__(""
                            "__isoc23_strtoull")
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
__extension__ extern long long int
strtoll(const char *__restrict __nptr, char **__restrict __endptr,
        int __base) __asm__(""
                            "__isoc23_strtoll")
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
__extension__ extern unsigned long long int
strtoull(const char *__restrict __nptr, char **__restrict __endptr,
         int __base) __asm__(""
                             "__isoc23_strtoull")
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
extern int strfromd(char *__dest, size_t __size, const char *__format,
                    double __f) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(3)));
extern int strfromf(char *__dest, size_t __size, const char *__format,
                    float __f) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(3)));
extern int strfroml(char *__dest, size_t __size, const char *__format,
                    long double __f) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(3)));
extern int strfromf32(char *__dest, size_t __size, const char *__format,
                      _Float32 __f) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(3)));
extern int strfromf64(char *__dest, size_t __size, const char *__format,
                      _Float64 __f) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(3)));
extern int strfromf128(char *__dest, size_t __size, const char *__format,
                       _Float128 __f) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(3)));
extern int strfromf32x(char *__dest, size_t __size, const char *__format,
                       _Float32x __f) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(3)));
extern int strfromf64x(char *__dest, size_t __size, const char *__format,
                       _Float64x __f) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(3)));
struct __locale_struct {
  struct __locale_data *__locales[13];
  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;
  const char *__names[13];
};
typedef struct __locale_struct *__locale_t;
typedef __locale_t locale_t;
extern long int strtol_l(const char *__restrict __nptr,
                         char **__restrict __endptr, int __base, locale_t __loc)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 4)));
extern unsigned long int strtoul_l(const char *__restrict __nptr,
                                   char **__restrict __endptr, int __base,
                                   locale_t __loc)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 4)));
__extension__ extern long long int strtoll_l(const char *__restrict __nptr,
                                             char **__restrict __endptr,
                                             int __base, locale_t __loc)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 4)));
__extension__ extern unsigned long long int
strtoull_l(const char *__restrict __nptr, char **__restrict __endptr,
           int __base, locale_t __loc) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(1, 4)));
extern long int strtol_l(const char *__restrict __nptr,
                         char **__restrict __endptr, int __base,
                         locale_t __loc) __asm__(""
                                                 "__isoc23_strtol_l")
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 4)));
extern unsigned long int strtoul_l(const char *__restrict __nptr,
                                   char **__restrict __endptr, int __base,
                                   locale_t __loc) __asm__(""
                                                           "__isoc23_strtoul_l")
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 4)));
__extension__ extern long long int
strtoll_l(const char *__restrict __nptr, char **__restrict __endptr, int __base,
          locale_t __loc) __asm__(""
                                  "__isoc23_strtoll_l")
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 4)));
__extension__ extern unsigned long long int
strtoull_l(const char *__restrict __nptr, char **__restrict __endptr,
           int __base, locale_t __loc) __asm__(""
                                               "__isoc23_strtoull_l")
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 4)));
extern double strtod_l(const char *__restrict __nptr,
                       char **__restrict __endptr, locale_t __loc)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 3)));
extern float strtof_l(const char *__restrict __nptr, char **__restrict __endptr,
                      locale_t __loc) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(1, 3)));
extern long double strtold_l(const char *__restrict __nptr,
                             char **__restrict __endptr, locale_t __loc)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 3)));
extern _Float32 strtof32_l(const char *__restrict __nptr,
                           char **__restrict __endptr, locale_t __loc)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 3)));
extern _Float64 strtof64_l(const char *__restrict __nptr,
                           char **__restrict __endptr, locale_t __loc)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 3)));
extern _Float128 strtof128_l(const char *__restrict __nptr,
                             char **__restrict __endptr, locale_t __loc)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 3)));
extern _Float32x strtof32x_l(const char *__restrict __nptr,
                             char **__restrict __endptr, locale_t __loc)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 3)));
extern _Float64x strtof64x_l(const char *__restrict __nptr,
                             char **__restrict __endptr, locale_t __loc)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 3)));
extern char *l64a(long int __n) __attribute__((__nothrow__, __leaf__));
extern long int a64l(const char *__s) __attribute__((__nothrow__, __leaf__))
__attribute__((__pure__)) __attribute__((__nonnull__(1)));

typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;
typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;
typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct {
  int __val[2];
} __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;
typedef long int __suseconds64_t;
typedef int __daddr_t;
typedef int __key_t;
typedef int __clockid_t;
typedef void *__timer_t;
typedef long int __blksize_t;
typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;
typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;
typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;
typedef long int __fsword_t;
typedef long int __ssize_t;
typedef long int __syscall_slong_t;
typedef unsigned long int __syscall_ulong_t;
typedef __off64_t __loff_t;
typedef char *__caddr_t;
typedef long int __intptr_t;
typedef unsigned int __socklen_t;
typedef int __sig_atomic_t;
typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;
typedef __loff_t loff_t;
typedef __ino_t ino_t;
typedef __ino64_t ino64_t;
typedef __dev_t dev_t;
typedef __gid_t gid_t;
typedef __mode_t mode_t;
typedef __nlink_t nlink_t;
typedef __uid_t uid_t;
typedef __off_t off_t;
typedef __off64_t off64_t;
typedef __pid_t pid_t;
typedef __id_t id_t;
typedef __ssize_t ssize_t;
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;
typedef __key_t key_t;
typedef __clock_t clock_t;
typedef __clockid_t clockid_t;
typedef __time_t time_t;
typedef __timer_t timer_t;
typedef __useconds_t useconds_t;
typedef __suseconds_t suseconds_t;
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
typedef __uint8_t u_int8_t;
typedef __uint16_t u_int16_t;
typedef __uint32_t u_int32_t;
typedef __uint64_t u_int64_t;
typedef int register_t __attribute__((__mode__(__word__)));
static __inline __uint16_t __bswap_16(__uint16_t __bsx) {
  return __builtin_bswap16(__bsx);
}
static __inline __uint32_t __bswap_32(__uint32_t __bsx) {
  return __builtin_bswap32(__bsx);
}
__extension__ static __inline __uint64_t __bswap_64(__uint64_t __bsx) {
  return __builtin_bswap64(__bsx);
}
static __inline __uint16_t __uint16_identity(__uint16_t __x) { return __x; }
static __inline __uint32_t __uint32_identity(__uint32_t __x) { return __x; }
static __inline __uint64_t __uint64_identity(__uint64_t __x) { return __x; }
typedef struct {
  unsigned long int __val[(1024 / (8 * sizeof(unsigned long int)))];
} __sigset_t;
typedef __sigset_t sigset_t;
struct timeval {
  __time_t tv_sec;
  __suseconds_t tv_usec;
};
struct timespec {
  __time_t tv_sec;
  __syscall_slong_t tv_nsec;
};
typedef long int __fd_mask;
typedef struct {
  __fd_mask fds_bits[1024 / (8 * (int)sizeof(__fd_mask))];
} fd_set;
typedef __fd_mask fd_mask;

extern int select(int __nfds, fd_set *__restrict __readfds,
                  fd_set *__restrict __writefds, fd_set *__restrict __exceptfds,
                  struct timeval *__restrict __timeout);
extern int pselect(int __nfds, fd_set *__restrict __readfds,
                   fd_set *__restrict __writefds,
                   fd_set *__restrict __exceptfds,
                   const struct timespec *__restrict __timeout,
                   const __sigset_t *__restrict __sigmask);

typedef __blksize_t blksize_t;
typedef __blkcnt_t blkcnt_t;
typedef __fsblkcnt_t fsblkcnt_t;
typedef __fsfilcnt_t fsfilcnt_t;
typedef __blkcnt64_t blkcnt64_t;
typedef __fsblkcnt64_t fsblkcnt64_t;
typedef __fsfilcnt64_t fsfilcnt64_t;
typedef union {
  __extension__ unsigned long long int __value64;
  struct {
    unsigned int __low;
    unsigned int __high;
  } __value32;
} __atomic_wide_counter;
typedef struct __pthread_internal_list {
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
typedef struct __pthread_internal_slist {
  struct __pthread_internal_slist *__next;
} __pthread_slist_t;
struct __pthread_mutex_s {
  int __lock;
  unsigned int __count;
  int __owner;
  unsigned int __nusers;
  int __kind;
  short __spins;
  short __elision;
  __pthread_list_t __list;
};
struct __pthread_rwlock_arch_t {
  unsigned int __readers;
  unsigned int __writers;
  unsigned int __wrphase_futex;
  unsigned int __writers_futex;
  unsigned int __pad3;
  unsigned int __pad4;
  int __cur_writer;
  int __shared;
  signed char __rwelision;
  unsigned char __pad1[7];
  unsigned long int __pad2;
  unsigned int __flags;
};
struct __pthread_cond_s {
  __atomic_wide_counter __wseq;
  __atomic_wide_counter __g1_start;
  unsigned int __g_size[2];
  unsigned int __g1_orig_size;
  unsigned int __wrefs;
  unsigned int __g_signals[2];
  unsigned int __unused_initialized_1;
  unsigned int __unused_initialized_2;
};
typedef unsigned int __tss_t;
typedef unsigned long int __thrd_t;
typedef struct {
  int __data;
} __once_flag;
typedef unsigned long int pthread_t;
typedef union {
  char __size[4];
  int __align;
} pthread_mutexattr_t;
typedef union {
  char __size[4];
  int __align;
} pthread_condattr_t;
typedef unsigned int pthread_key_t;
typedef int pthread_once_t;
union pthread_attr_t {
  char __size[56];
  long int __align;
};
typedef union pthread_attr_t pthread_attr_t;
typedef union {
  struct __pthread_mutex_s __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;
typedef union {
  struct __pthread_cond_s __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;
typedef union {
  struct __pthread_rwlock_arch_t __data;
  char __size[56];
  long int __align;
} pthread_rwlock_t;
typedef union {
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;
typedef volatile int pthread_spinlock_t;
typedef union {
  char __size[32];
  long int __align;
} pthread_barrier_t;
typedef union {
  char __size[4];
  int __align;
} pthread_barrierattr_t;

extern long int random(void) __attribute__((__nothrow__, __leaf__));
extern void srandom(unsigned int __seed) __attribute__((__nothrow__, __leaf__));
extern char *initstate(unsigned int __seed, char *__statebuf, size_t __statelen)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2)));
extern char *setstate(char *__statebuf) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(1)));
struct random_data {
  int32_t *fptr;
  int32_t *rptr;
  int32_t *state;
  int rand_type;
  int rand_deg;
  int rand_sep;
  int32_t *end_ptr;
};
extern int random_r(struct random_data *__restrict __buf,
                    int32_t *__restrict __result)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));
extern int srandom_r(unsigned int __seed, struct random_data *__buf)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2)));
extern int initstate_r(unsigned int __seed, char *__restrict __statebuf,
                       size_t __statelen, struct random_data *__restrict __buf)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2, 4)));
extern int setstate_r(char *__restrict __statebuf,
                      struct random_data *__restrict __buf)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));
extern int rand(void) __attribute__((__nothrow__, __leaf__));
extern void srand(unsigned int __seed) __attribute__((__nothrow__, __leaf__));
extern int rand_r(unsigned int *__seed) __attribute__((__nothrow__, __leaf__));
extern double drand48(void) __attribute__((__nothrow__, __leaf__));
extern double erand48(unsigned short int __xsubi[3])
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
extern long int lrand48(void) __attribute__((__nothrow__, __leaf__));
extern long int nrand48(unsigned short int __xsubi[3])
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
extern long int mrand48(void) __attribute__((__nothrow__, __leaf__));
extern long int jrand48(unsigned short int __xsubi[3])
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
extern void srand48(long int __seedval) __attribute__((__nothrow__, __leaf__));
extern unsigned short int *seed48(unsigned short int __seed16v[3])
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
extern void lcong48(unsigned short int __param[7])
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
struct drand48_data {
  unsigned short int __x[3];
  unsigned short int __old_x[3];
  unsigned short int __c;
  unsigned short int __init;
  __extension__ unsigned long long int __a;
};
extern int drand48_r(struct drand48_data *__restrict __buffer,
                     double *__restrict __result)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));
extern int erand48_r(unsigned short int __xsubi[3],
                     struct drand48_data *__restrict __buffer,
                     double *__restrict __result)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));
extern int lrand48_r(struct drand48_data *__restrict __buffer,
                     long int *__restrict __result)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));
extern int nrand48_r(unsigned short int __xsubi[3],
                     struct drand48_data *__restrict __buffer,
                     long int *__restrict __result)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));
extern int mrand48_r(struct drand48_data *__restrict __buffer,
                     long int *__restrict __result)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));
extern int jrand48_r(unsigned short int __xsubi[3],
                     struct drand48_data *__restrict __buffer,
                     long int *__restrict __result)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));
extern int srand48_r(long int __seedval, struct drand48_data *__buffer)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2)));
extern int seed48_r(unsigned short int __seed16v[3],
                    struct drand48_data *__buffer)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));
extern int lcong48_r(unsigned short int __param[7],
                     struct drand48_data *__buffer)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));
extern __uint32_t arc4random(void) __attribute__((__nothrow__, __leaf__));
extern void arc4random_buf(void *__buf, size_t __size)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
extern __uint32_t arc4random_uniform(__uint32_t __upper_bound)
    __attribute__((__nothrow__, __leaf__));
extern void *malloc(size_t __size) __attribute__((__nothrow__, __leaf__))
__attribute__((__malloc__)) __attribute__((__alloc_size__(1)));
extern void *calloc(size_t __nmemb, size_t __size)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__malloc__))
    __attribute__((__alloc_size__(1, 2)));
extern void *realloc(void *__ptr, size_t __size)
    __attribute__((__nothrow__, __leaf__))
    __attribute__((__warn_unused_result__)) __attribute__((__alloc_size__(2)));
extern void free(void *__ptr) __attribute__((__nothrow__, __leaf__));
extern void *reallocarray(void *__ptr, size_t __nmemb, size_t __size)
    __attribute__((__nothrow__, __leaf__))
    __attribute__((__warn_unused_result__))
    __attribute__((__alloc_size__(2, 3)))
    __attribute__((__malloc__(__builtin_free, 1)));
extern void *reallocarray(void *__ptr, size_t __nmemb, size_t __size)
    __attribute__((__nothrow__, __leaf__))
    __attribute__((__malloc__(reallocarray, 1)));

extern void *alloca(size_t __size) __attribute__((__nothrow__, __leaf__));

extern void *valloc(size_t __size) __attribute__((__nothrow__, __leaf__))
__attribute__((__malloc__)) __attribute__((__alloc_size__(1)));
extern int posix_memalign(void **__memptr, size_t __alignment, size_t __size)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
extern void *aligned_alloc(size_t __alignment, size_t __size)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__malloc__))
    __attribute__((__alloc_align__(1))) __attribute__((__alloc_size__(2)));
extern void abort(void) __attribute__((__nothrow__, __leaf__))
__attribute__((__noreturn__)) __attribute__((__cold__));
extern int atexit(void (*__func)(void)) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(1)));
extern int at_quick_exit(void (*__func)(void))
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
extern int on_exit(void (*__func)(int __status, void *__arg), void *__arg)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
extern void exit(int __status) __attribute__((__nothrow__, __leaf__))
__attribute__((__noreturn__));
extern void quick_exit(int __status) __attribute__((__nothrow__, __leaf__))
__attribute__((__noreturn__));
extern void _Exit(int __status) __attribute__((__nothrow__, __leaf__))
__attribute__((__noreturn__));
extern char *getenv(const char *__name) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(1)));
extern char *secure_getenv(const char *__name)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
extern int putenv(char *__string) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(1)));
extern int setenv(const char *__name, const char *__value, int __replace)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2)));
extern int unsetenv(const char *__name) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(1)));
extern int clearenv(void) __attribute__((__nothrow__, __leaf__));
extern char *mktemp(char *__template) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(1)));
extern int mkstemp(char *__template) __attribute__((__nonnull__(1)));
extern int mkstemp64(char *__template) __attribute__((__nonnull__(1)));
extern int mkstemps(char *__template, int __suffixlen)
    __attribute__((__nonnull__(1)));
extern int mkstemps64(char *__template, int __suffixlen)
    __attribute__((__nonnull__(1)));
extern char *mkdtemp(char *__template) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(1)));
extern int mkostemp(char *__template, int __flags)
    __attribute__((__nonnull__(1)));
extern int mkostemp64(char *__template, int __flags)
    __attribute__((__nonnull__(1)));
extern int mkostemps(char *__template, int __suffixlen, int __flags)
    __attribute__((__nonnull__(1)));
extern int mkostemps64(char *__template, int __suffixlen, int __flags)
    __attribute__((__nonnull__(1)));
extern int system(const char *__command);
extern char *canonicalize_file_name(const char *__name)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)))
    __attribute__((__malloc__)) __attribute__((__malloc__(__builtin_free, 1)));
extern char *realpath(const char *__restrict __name,
                      char *__restrict __resolved)
    __attribute__((__nothrow__, __leaf__));
typedef int (*__compar_fn_t)(const void *, const void *);
typedef __compar_fn_t comparison_fn_t;
typedef int (*__compar_d_fn_t)(const void *, const void *, void *);
extern void *bsearch(const void *__key, const void *__base, size_t __nmemb,
                     size_t __size, __compar_fn_t __compar)
    __attribute__((__nonnull__(1, 2, 5)));
extern void qsort(void *__base, size_t __nmemb, size_t __size,
                  __compar_fn_t __compar) __attribute__((__nonnull__(1, 4)));
extern void qsort_r(void *__base, size_t __nmemb, size_t __size,
                    __compar_d_fn_t __compar, void *__arg)
    __attribute__((__nonnull__(1, 4)));
extern int abs(int __x) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern long int labs(long int __x) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
__extension__ extern long long int llabs(long long int __x)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern div_t div(int __numer, int __denom)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern ldiv_t ldiv(long int __numer, long int __denom)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
__extension__ extern lldiv_t lldiv(long long int __numer, long long int __denom)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern char *ecvt(double __value, int __ndigit, int *__restrict __decpt,
                  int *__restrict __sign) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(3, 4)));
extern char *fcvt(double __value, int __ndigit, int *__restrict __decpt,
                  int *__restrict __sign) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(3, 4)));
extern char *gcvt(double __value, int __ndigit, char *__buf)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(3)));
extern char *qecvt(long double __value, int __ndigit, int *__restrict __decpt,
                   int *__restrict __sign)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(3, 4)));
extern char *qfcvt(long double __value, int __ndigit, int *__restrict __decpt,
                   int *__restrict __sign)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(3, 4)));
extern char *qgcvt(long double __value, int __ndigit, char *__buf)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(3)));
extern int ecvt_r(double __value, int __ndigit, int *__restrict __decpt,
                  int *__restrict __sign, char *__restrict __buf, size_t __len)
    __attribute__((__nothrow__, __leaf__))
    __attribute__((__nonnull__(3, 4, 5)));
extern int fcvt_r(double __value, int __ndigit, int *__restrict __decpt,
                  int *__restrict __sign, char *__restrict __buf, size_t __len)
    __attribute__((__nothrow__, __leaf__))
    __attribute__((__nonnull__(3, 4, 5)));
extern int qecvt_r(long double __value, int __ndigit, int *__restrict __decpt,
                   int *__restrict __sign, char *__restrict __buf, size_t __len)
    __attribute__((__nothrow__, __leaf__))
    __attribute__((__nonnull__(3, 4, 5)));
extern int qfcvt_r(long double __value, int __ndigit, int *__restrict __decpt,
                   int *__restrict __sign, char *__restrict __buf, size_t __len)
    __attribute__((__nothrow__, __leaf__))
    __attribute__((__nonnull__(3, 4, 5)));
extern int mblen(const char *__s, size_t __n)
    __attribute__((__nothrow__, __leaf__));
extern int mbtowc(wchar_t *__restrict __pwc, const char *__restrict __s,
                  size_t __n) __attribute__((__nothrow__, __leaf__));
extern int wctomb(char *__s, wchar_t __wchar)
    __attribute__((__nothrow__, __leaf__));
extern size_t mbstowcs(wchar_t *__restrict __pwcs, const char *__restrict __s,
                       size_t __n) __attribute__((__nothrow__, __leaf__))
__attribute__((__access__(__read_only__, 2)));
extern size_t wcstombs(char *__restrict __s, const wchar_t *__restrict __pwcs,
                       size_t __n) __attribute__((__nothrow__, __leaf__))
__attribute__((__access__(__write_only__, 1, 3)))
__attribute__((__access__(__read_only__, 2)));
extern int rpmatch(const char *__response)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
extern int getsubopt(char **__restrict __optionp,
                     char *const *__restrict __tokens,
                     char **__restrict __valuep)
    __attribute__((__nothrow__, __leaf__))
    __attribute__((__nonnull__(1, 2, 3)));
extern int posix_openpt(int __oflag);
extern int grantpt(int __fd) __attribute__((__nothrow__, __leaf__));
extern int unlockpt(int __fd) __attribute__((__nothrow__, __leaf__));
extern char *ptsname(int __fd) __attribute__((__nothrow__, __leaf__));
extern int ptsname_r(int __fd, char *__buf, size_t __buflen)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2)))
    __attribute__((__access__(__write_only__, 2, 3)));
extern int getpt(void);
extern int getloadavg(double __loadavg[], int __nelem)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

extern void *memcpy(void *__restrict __dest, const void *__restrict __src,
                    size_t __n) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(1, 2)));
extern void *memmove(void *__dest, const void *__src, size_t __n)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));
extern void *memccpy(void *__restrict __dest, const void *__restrict __src,
                     int __c, size_t __n) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(1, 2)))
__attribute__((__access__(__write_only__, 1, 4)));
extern void *memset(void *__s, int __c, size_t __n)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
extern int memcmp(const void *__s1, const void *__s2, size_t __n)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__))
    __attribute__((__nonnull__(1, 2)));
extern int __memcmpeq(const void *__s1, const void *__s2, size_t __n)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__))
    __attribute__((__nonnull__(1, 2)));
extern void *memchr(const void *__s, int __c, size_t __n)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__))
    __attribute__((__nonnull__(1)));
extern void *rawmemchr(const void *__s, int __c)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__))
    __attribute__((__nonnull__(1)));
extern void *memrchr(const void *__s, int __c, size_t __n)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__))
    __attribute__((__nonnull__(1)))
    __attribute__((__access__(__read_only__, 1, 3)));
extern char *strcpy(char *__restrict __dest, const char *__restrict __src)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));
extern char *strncpy(char *__restrict __dest, const char *__restrict __src,
                     size_t __n) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(1, 2)));
extern char *strcat(char *__restrict __dest, const char *__restrict __src)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));
extern char *strncat(char *__restrict __dest, const char *__restrict __src,
                     size_t __n) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(1, 2)));
extern int strcmp(const char *__s1, const char *__s2)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__))
    __attribute__((__nonnull__(1, 2)));
extern int strncmp(const char *__s1, const char *__s2, size_t __n)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__))
    __attribute__((__nonnull__(1, 2)));
extern int strcoll(const char *__s1, const char *__s2)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__))
    __attribute__((__nonnull__(1, 2)));
extern size_t strxfrm(char *__restrict __dest, const char *__restrict __src,
                      size_t __n) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(2)))
__attribute__((__access__(__write_only__, 1, 3)));
extern int strcoll_l(const char *__s1, const char *__s2, locale_t __l)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__))
    __attribute__((__nonnull__(1, 2, 3)));
extern size_t strxfrm_l(char *__dest, const char *__src, size_t __n,
                        locale_t __l) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(2, 4)))
__attribute__((__access__(__write_only__, 1, 3)));
extern char *strdup(const char *__s) __attribute__((__nothrow__, __leaf__))
__attribute__((__malloc__)) __attribute__((__nonnull__(1)));
extern char *strndup(const char *__string, size_t __n)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__malloc__))
    __attribute__((__nonnull__(1)));
extern char *strchr(const char *__s, int __c)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__))
    __attribute__((__nonnull__(1)));
extern char *strrchr(const char *__s, int __c)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__))
    __attribute__((__nonnull__(1)));
extern char *strchrnul(const char *__s, int __c)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__))
    __attribute__((__nonnull__(1)));
extern size_t strcspn(const char *__s, const char *__reject)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__))
    __attribute__((__nonnull__(1, 2)));
extern size_t strspn(const char *__s, const char *__accept)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__))
    __attribute__((__nonnull__(1, 2)));
extern char *strpbrk(const char *__s, const char *__accept)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__))
    __attribute__((__nonnull__(1, 2)));
extern char *strstr(const char *__haystack, const char *__needle)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__))
    __attribute__((__nonnull__(1, 2)));
extern char *strtok(char *__restrict __s, const char *__restrict __delim)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2)));
extern char *__strtok_r(char *__restrict __s, const char *__restrict __delim,
                        char **__restrict __save_ptr)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2, 3)));
extern char *strtok_r(char *__restrict __s, const char *__restrict __delim,
                      char **__restrict __save_ptr)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2, 3)));
extern char *strcasestr(const char *__haystack, const char *__needle)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__))
    __attribute__((__nonnull__(1, 2)));
extern void *memmem(const void *__haystack, size_t __haystacklen,
                    const void *__needle, size_t __needlelen)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__))
    __attribute__((__nonnull__(1, 3)))
    __attribute__((__access__(__read_only__, 1, 2)))
    __attribute__((__access__(__read_only__, 3, 4)));
extern void *__mempcpy(void *__restrict __dest, const void *__restrict __src,
                       size_t __n) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(1, 2)));
extern void *mempcpy(void *__restrict __dest, const void *__restrict __src,
                     size_t __n) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(1, 2)));
extern size_t strlen(const char *__s) __attribute__((__nothrow__, __leaf__))
__attribute__((__pure__)) __attribute__((__nonnull__(1)));
extern size_t strnlen(const char *__string, size_t __maxlen)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__))
    __attribute__((__nonnull__(1)));
extern char *strerror(int __errnum) __attribute__((__nothrow__, __leaf__));
extern char *strerror_r(int __errnum, char *__buf, size_t __buflen)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2)))
    __attribute__((__access__(__write_only__, 2, 3)));
extern const char *strerrordesc_np(int __err)
    __attribute__((__nothrow__, __leaf__));
extern const char *strerrorname_np(int __err)
    __attribute__((__nothrow__, __leaf__));
extern char *strerror_l(int __errnum, locale_t __l)
    __attribute__((__nothrow__, __leaf__));

extern int bcmp(const void *__s1, const void *__s2, size_t __n)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__))
    __attribute__((__nonnull__(1, 2)));
extern void bcopy(const void *__src, void *__dest, size_t __n)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));
extern void bzero(void *__s, size_t __n) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(1)));
extern char *index(const char *__s, int __c)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__))
    __attribute__((__nonnull__(1)));
extern char *rindex(const char *__s, int __c)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__))
    __attribute__((__nonnull__(1)));
extern int ffs(int __i) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern int ffsl(long int __l) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
__extension__ extern int ffsll(long long int __ll)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern int strcasecmp(const char *__s1, const char *__s2)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__))
    __attribute__((__nonnull__(1, 2)));
extern int strncasecmp(const char *__s1, const char *__s2, size_t __n)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__))
    __attribute__((__nonnull__(1, 2)));
extern int strcasecmp_l(const char *__s1, const char *__s2, locale_t __loc)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__))
    __attribute__((__nonnull__(1, 2, 3)));
extern int strncasecmp_l(const char *__s1, const char *__s2, size_t __n,
                         locale_t __loc) __attribute__((__nothrow__, __leaf__))
__attribute__((__pure__)) __attribute__((__nonnull__(1, 2, 4)));

extern void explicit_bzero(void *__s, size_t __n)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)))
    __attribute__((__access__(__write_only__, 1, 2)));
extern char *strsep(char **__restrict __stringp, const char *__restrict __delim)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));
extern char *strsignal(int __sig) __attribute__((__nothrow__, __leaf__));
extern const char *sigabbrev_np(int __sig)
    __attribute__((__nothrow__, __leaf__));
extern const char *sigdescr_np(int __sig)
    __attribute__((__nothrow__, __leaf__));
extern char *__stpcpy(char *__restrict __dest, const char *__restrict __src)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));
extern char *stpcpy(char *__restrict __dest, const char *__restrict __src)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));
extern char *__stpncpy(char *__restrict __dest, const char *__restrict __src,
                       size_t __n) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(1, 2)));
extern char *stpncpy(char *__restrict __dest, const char *__restrict __src,
                     size_t __n) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(1, 2)));
extern size_t strlcpy(char *__restrict __dest, const char *__restrict __src,
                      size_t __n) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(1, 2)))
__attribute__((__access__(__write_only__, 1, 3)));
extern size_t strlcat(char *__restrict __dest, const char *__restrict __src,
                      size_t __n) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(1, 2)))
__attribute__((__access__(__read_write__, 1, 3)));
extern int strverscmp(const char *__s1, const char *__s2)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__))
    __attribute__((__nonnull__(1, 2)));
extern char *strfry(char *__string) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(1)));
extern void *memfrob(void *__s, size_t __n)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)))
    __attribute__((__access__(__read_write__, 1, 2)));
extern char *basename(const char *__filename)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;
typedef __int_least8_t int_least8_t;
typedef __int_least16_t int_least16_t;
typedef __int_least32_t int_least32_t;
typedef __int_least64_t int_least64_t;
typedef __uint_least8_t uint_least8_t;
typedef __uint_least16_t uint_least16_t;
typedef __uint_least32_t uint_least32_t;
typedef __uint_least64_t uint_least64_t;
typedef signed char int_fast8_t;
typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
typedef unsigned char uint_fast8_t;
typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
typedef long int intptr_t;
typedef unsigned long int uintptr_t;
typedef __intmax_t intmax_t;
typedef __uintmax_t uintmax_t;
typedef intptr_t tsrm_intptr_t;
typedef uintptr_t tsrm_uintptr_t;

typedef __builtin_va_list __gnuc_va_list;
typedef struct {
  int __count;
  union {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
typedef struct _G_fpos_t {
  __off_t __pos;
  __mbstate_t __state;
} __fpos_t;
typedef struct _G_fpos64_t {
  __off64_t __pos;
  __mbstate_t __state;
} __fpos64_t;
struct _IO_FILE;
typedef struct _IO_FILE __FILE;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
struct _IO_FILE;
struct _IO_marker;
struct _IO_codecvt;
struct _IO_wide_data;
typedef void _IO_lock_t;
struct _IO_FILE {
  int _flags;
  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;
  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;
  struct _IO_marker *_markers;
  struct _IO_FILE *_chain;
  int _fileno;
  int _flags2 : 24;
  char _short_backupbuf[1];
  __off_t _old_offset;
  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];
  _IO_lock_t *_lock;
  __off64_t _offset;
  struct _IO_codecvt *_codecvt;
  struct _IO_wide_data *_wide_data;
  struct _IO_FILE *_freeres_list;
  void *_freeres_buf;
  struct _IO_FILE **_prevchain;
  int _mode;
  char _unused2[15 * sizeof(int) - 5 * sizeof(void *)];
};
typedef __ssize_t cookie_read_function_t(void *__cookie, char *__buf,
                                         size_t __nbytes);
typedef __ssize_t cookie_write_function_t(void *__cookie, const char *__buf,
                                          size_t __nbytes);
typedef int cookie_seek_function_t(void *__cookie, __off64_t *__pos, int __w);
typedef int cookie_close_function_t(void *__cookie);
typedef struct _IO_cookie_io_functions_t {
  cookie_read_function_t *read;
  cookie_write_function_t *write;
  cookie_seek_function_t *seek;
  cookie_close_function_t *close;
} cookie_io_functions_t;
typedef __gnuc_va_list va_list;
typedef __fpos_t fpos_t;
typedef __fpos64_t fpos64_t;
extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;
extern int remove(const char *__filename)
    __attribute__((__nothrow__, __leaf__));
extern int rename(const char *__old, const char *__new)
    __attribute__((__nothrow__, __leaf__));
extern int renameat(int __oldfd, const char *__old, int __newfd,
                    const char *__new) __attribute__((__nothrow__, __leaf__));
extern int renameat2(int __oldfd, const char *__old, int __newfd,
                     const char *__new, unsigned int __flags)
    __attribute__((__nothrow__, __leaf__));
extern int fclose(FILE *__stream) __attribute__((__nonnull__(1)));
extern FILE *tmpfile(void) __attribute__((__malloc__))
__attribute__((__malloc__(fclose, 1)));
extern FILE *tmpfile64(void) __attribute__((__malloc__))
__attribute__((__malloc__(fclose, 1)));
extern char *tmpnam(char[20]) __attribute__((__nothrow__, __leaf__));
extern char *tmpnam_r(char __s[20]) __attribute__((__nothrow__, __leaf__));
extern char *tempnam(const char *__dir, const char *__pfx)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__malloc__))
    __attribute__((__malloc__(__builtin_free, 1)));
extern int fflush(FILE *__stream);
extern int fflush_unlocked(FILE *__stream);
extern int fcloseall(void);
extern FILE *fopen(const char *__restrict __filename,
                   const char *__restrict __modes) __attribute__((__malloc__))
__attribute__((__malloc__(fclose, 1)));
extern FILE *freopen(const char *__restrict __filename,
                     const char *__restrict __modes, FILE *__restrict __stream)
    __attribute__((__nonnull__(3)));
extern FILE *fopen64(const char *__restrict __filename,
                     const char *__restrict __modes) __attribute__((__malloc__))
__attribute__((__malloc__(fclose, 1)));
extern FILE *freopen64(const char *__restrict __filename,
                       const char *__restrict __modes,
                       FILE *__restrict __stream)
    __attribute__((__nonnull__(3)));
extern FILE *fdopen(int __fd, const char *__modes)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__malloc__))
    __attribute__((__malloc__(fclose, 1)));
extern FILE *fopencookie(void *__restrict __magic_cookie,
                         const char *__restrict __modes,
                         cookie_io_functions_t __io_funcs)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__malloc__))
    __attribute__((__malloc__(fclose, 1)));
extern FILE *fmemopen(void *__s, size_t __len, const char *__modes)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__malloc__))
    __attribute__((__malloc__(fclose, 1)));
extern FILE *open_memstream(char **__bufloc, size_t *__sizeloc)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__malloc__))
    __attribute__((__malloc__(fclose, 1)));
extern void setbuf(FILE *__restrict __stream, char *__restrict __buf)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
extern int setvbuf(FILE *__restrict __stream, char *__restrict __buf,
                   int __modes, size_t __n)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
extern void setbuffer(FILE *__restrict __stream, char *__restrict __buf,
                      size_t __size) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(1)));
extern void setlinebuf(FILE *__stream) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(1)));
extern int fprintf(FILE *__restrict __stream, const char *__restrict __format,
                   ...) __attribute__((__nonnull__(1)));
extern int printf(const char *__restrict __format, ...);
extern int sprintf(char *__restrict __s, const char *__restrict __format, ...)
    __attribute__((__nothrow__));
extern int vfprintf(FILE *__restrict __s, const char *__restrict __format,
                    __gnuc_va_list __arg) __attribute__((__nonnull__(1)));
extern int vprintf(const char *__restrict __format, __gnuc_va_list __arg);
extern int vsprintf(char *__restrict __s, const char *__restrict __format,
                    __gnuc_va_list __arg) __attribute__((__nothrow__));
extern int snprintf(char *__restrict __s, size_t __maxlen,
                    const char *__restrict __format, ...)
    __attribute__((__nothrow__)) __attribute__((__format__(__printf__, 3, 4)));
extern int vsnprintf(char *__restrict __s, size_t __maxlen,
                     const char *__restrict __format, __gnuc_va_list __arg)
    __attribute__((__nothrow__)) __attribute__((__format__(__printf__, 3, 0)));
extern int vasprintf(char **__restrict __ptr, const char *__restrict __f,
                     __gnuc_va_list __arg) __attribute__((__nothrow__))
__attribute__((__format__(__printf__, 2, 0)));
extern int __asprintf(char **__restrict __ptr, const char *__restrict __fmt,
                      ...) __attribute__((__nothrow__))
__attribute__((__format__(__printf__, 2, 3)));
extern int asprintf(char **__restrict __ptr, const char *__restrict __fmt, ...)
    __attribute__((__nothrow__)) __attribute__((__format__(__printf__, 2, 3)));
extern int vdprintf(int __fd, const char *__restrict __fmt,
                    __gnuc_va_list __arg)
    __attribute__((__format__(__printf__, 2, 0)));
extern int dprintf(int __fd, const char *__restrict __fmt, ...)
    __attribute__((__format__(__printf__, 2, 3)));
extern int fscanf(FILE *__restrict __stream, const char *__restrict __format,
                  ...) __attribute__((__nonnull__(1)));
extern int scanf(const char *__restrict __format, ...);
extern int sscanf(const char *__restrict __s, const char *__restrict __format,
                  ...) __attribute__((__nothrow__, __leaf__));
extern int fscanf(FILE *__restrict __stream, const char *__restrict __format,
                  ...) __asm__(""
                               "__isoc23_fscanf")
    __attribute__((__nonnull__(1)));
extern int scanf(const char *__restrict __format,
                 ...) __asm__(""
                              "__isoc23_scanf");
extern int sscanf(const char *__restrict __s, const char *__restrict __format,
                  ...) __asm__(""
                               "__isoc23_sscanf")
    __attribute__((__nothrow__, __leaf__));
extern int vfscanf(FILE *__restrict __s, const char *__restrict __format,
                   __gnuc_va_list __arg)
    __attribute__((__format__(__scanf__, 2, 0)))
    __attribute__((__nonnull__(1)));
extern int vscanf(const char *__restrict __format, __gnuc_va_list __arg)
    __attribute__((__format__(__scanf__, 1, 0)));
extern int vsscanf(const char *__restrict __s, const char *__restrict __format,
                   __gnuc_va_list __arg) __attribute__((__nothrow__, __leaf__))
__attribute__((__format__(__scanf__, 2, 0)));
extern int vfscanf(FILE *__restrict __s, const char *__restrict __format,
                   __gnuc_va_list __arg) __asm__(""
                                                 "__isoc23_vfscanf")
    __attribute__((__format__(__scanf__, 2, 0)))
    __attribute__((__nonnull__(1)));
extern int vscanf(const char *__restrict __format,
                  __gnuc_va_list __arg) __asm__(""
                                                "__isoc23_vscanf")
    __attribute__((__format__(__scanf__, 1, 0)));
extern int vsscanf(const char *__restrict __s, const char *__restrict __format,
                   __gnuc_va_list __arg) __asm__(""
                                                 "__isoc23_vsscanf")
    __attribute__((__nothrow__, __leaf__))
    __attribute__((__format__(__scanf__, 2, 0)));
extern int fgetc(FILE *__stream) __attribute__((__nonnull__(1)));
extern int getc(FILE *__stream) __attribute__((__nonnull__(1)));
extern int getchar(void);
extern int getc_unlocked(FILE *__stream) __attribute__((__nonnull__(1)));
extern int getchar_unlocked(void);
extern int fgetc_unlocked(FILE *__stream) __attribute__((__nonnull__(1)));
extern int fputc(int __c, FILE *__stream) __attribute__((__nonnull__(2)));
extern int putc(int __c, FILE *__stream) __attribute__((__nonnull__(2)));
extern int putchar(int __c);
extern int fputc_unlocked(int __c, FILE *__stream)
    __attribute__((__nonnull__(2)));
extern int putc_unlocked(int __c, FILE *__stream)
    __attribute__((__nonnull__(2)));
extern int putchar_unlocked(int __c);
extern int getw(FILE *__stream) __attribute__((__nonnull__(1)));
extern int putw(int __w, FILE *__stream) __attribute__((__nonnull__(2)));
extern char *fgets(char *__restrict __s, int __n, FILE *__restrict __stream)
    __attribute__((__access__(__write_only__, 1, 2)))
    __attribute__((__nonnull__(3)));
extern char *fgets_unlocked(char *__restrict __s, int __n,
                            FILE *__restrict __stream)
    __attribute__((__access__(__write_only__, 1, 2)))
    __attribute__((__nonnull__(3)));
extern __ssize_t __getdelim(char **__restrict __lineptr, size_t *__restrict __n,
                            int __delimiter, FILE *__restrict __stream)
    __attribute__((__nonnull__(4)));
extern __ssize_t getdelim(char **__restrict __lineptr, size_t *__restrict __n,
                          int __delimiter, FILE *__restrict __stream)
    __attribute__((__nonnull__(4)));
extern __ssize_t getline(char **__restrict __lineptr, size_t *__restrict __n,
                         FILE *__restrict __stream)
    __attribute__((__nonnull__(3)));
extern int fputs(const char *__restrict __s, FILE *__restrict __stream)
    __attribute__((__nonnull__(2)));
extern int puts(const char *__s);
extern int ungetc(int __c, FILE *__stream) __attribute__((__nonnull__(2)));
extern size_t fread(void *__restrict __ptr, size_t __size, size_t __n,
                    FILE *__restrict __stream) __attribute__((__nonnull__(4)));
extern size_t fwrite(const void *__restrict __ptr, size_t __size, size_t __n,
                     FILE *__restrict __s) __attribute__((__nonnull__(4)));
extern int fputs_unlocked(const char *__restrict __s, FILE *__restrict __stream)
    __attribute__((__nonnull__(2)));
extern size_t fread_unlocked(void *__restrict __ptr, size_t __size, size_t __n,
                             FILE *__restrict __stream)
    __attribute__((__nonnull__(4)));
extern size_t fwrite_unlocked(const void *__restrict __ptr, size_t __size,
                              size_t __n, FILE *__restrict __stream)
    __attribute__((__nonnull__(4)));
extern int fseek(FILE *__stream, long int __off, int __whence)
    __attribute__((__nonnull__(1)));
extern long int ftell(FILE *__stream) __attribute__((__nonnull__(1)));
extern void rewind(FILE *__stream) __attribute__((__nonnull__(1)));
extern int fseeko(FILE *__stream, __off_t __off, int __whence)
    __attribute__((__nonnull__(1)));
extern __off_t ftello(FILE *__stream) __attribute__((__nonnull__(1)));
extern int fgetpos(FILE *__restrict __stream, fpos_t *__restrict __pos)
    __attribute__((__nonnull__(1)));
extern int fsetpos(FILE *__stream, const fpos_t *__pos)
    __attribute__((__nonnull__(1)));
extern int fseeko64(FILE *__stream, __off64_t __off, int __whence)
    __attribute__((__nonnull__(1)));
extern __off64_t ftello64(FILE *__stream) __attribute__((__nonnull__(1)));
extern int fgetpos64(FILE *__restrict __stream, fpos64_t *__restrict __pos)
    __attribute__((__nonnull__(1)));
extern int fsetpos64(FILE *__stream, const fpos64_t *__pos)
    __attribute__((__nonnull__(1)));
extern void clearerr(FILE *__stream) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(1)));
extern int feof(FILE *__stream) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(1)));
extern int ferror(FILE *__stream) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(1)));
extern void clearerr_unlocked(FILE *__stream)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
extern int feof_unlocked(FILE *__stream) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(1)));
extern int ferror_unlocked(FILE *__stream)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
extern void perror(const char *__s) __attribute__((__cold__));
extern int fileno(FILE *__stream) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(1)));
extern int fileno_unlocked(FILE *__stream)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
extern int pclose(FILE *__stream) __attribute__((__nonnull__(1)));
extern FILE *popen(const char *__command, const char *__modes)
    __attribute__((__malloc__)) __attribute__((__malloc__(pclose, 1)));
extern char *ctermid(char *__s) __attribute__((__nothrow__, __leaf__))
__attribute__((__access__(__write_only__, 1)));
extern char *cuserid(char *__s) __attribute__((__access__(__write_only__, 1)));
struct obstack;
extern int obstack_printf(struct obstack *__restrict __obstack,
                          const char *__restrict __format, ...)
    __attribute__((__nothrow__)) __attribute__((__format__(__printf__, 2, 3)));
extern int obstack_vprintf(struct obstack *__restrict __obstack,
                           const char *__restrict __format,
                           __gnuc_va_list __args) __attribute__((__nothrow__))
__attribute__((__format__(__printf__, 2, 0)));
extern void flockfile(FILE *__stream) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(1)));
extern int ftrylockfile(FILE *__stream) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(1)));
extern void funlockfile(FILE *__stream) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(1)));
extern int __uflow(FILE *);
extern int __overflow(FILE *, int);

extern void __assert_fail(const char *__assertion, const char *__file,
                          unsigned int __line, const char *__function)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__noreturn__))
    __attribute__((__cold__));
extern void __assert_perror_fail(int __errnum, const char *__file,
                                 unsigned int __line, const char *__function)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__noreturn__))
    __attribute__((__cold__));
extern void __assert(const char *__assertion, const char *__file, int __line)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__noreturn__))
    __attribute__((__cold__));

typedef float float_t;
typedef double double_t;
enum {
  FP_INT_UPWARD = 0,
  FP_INT_DOWNWARD = 1,
  FP_INT_TOWARDZERO = 2,
  FP_INT_TONEARESTFROMZERO = 3,
  FP_INT_TONEAREST = 4,
};
extern int __fpclassify(double __value) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern int __signbit(double __value) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern int __isinf(double __value) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern int __finite(double __value) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern int __isnan(double __value) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern int __iseqsig(double __x, double __y)
    __attribute__((__nothrow__, __leaf__));
extern int __issignaling(double __value) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern double acos(double __x) __attribute__((__nothrow__, __leaf__));
extern double __acos(double __x) __attribute__((__nothrow__, __leaf__));
extern double asin(double __x) __attribute__((__nothrow__, __leaf__));
extern double __asin(double __x) __attribute__((__nothrow__, __leaf__));
extern double atan(double __x) __attribute__((__nothrow__, __leaf__));
extern double __atan(double __x) __attribute__((__nothrow__, __leaf__));
extern double atan2(double __y, double __x)
    __attribute__((__nothrow__, __leaf__));
extern double __atan2(double __y, double __x)
    __attribute__((__nothrow__, __leaf__));
extern double cos(double __x) __attribute__((__nothrow__, __leaf__));
extern double __cos(double __x) __attribute__((__nothrow__, __leaf__));
extern double sin(double __x) __attribute__((__nothrow__, __leaf__));
extern double __sin(double __x) __attribute__((__nothrow__, __leaf__));
extern double tan(double __x) __attribute__((__nothrow__, __leaf__));
extern double __tan(double __x) __attribute__((__nothrow__, __leaf__));
extern double acospi(double __x) __attribute__((__nothrow__, __leaf__));
extern double __acospi(double __x) __attribute__((__nothrow__, __leaf__));
extern double asinpi(double __x) __attribute__((__nothrow__, __leaf__));
extern double __asinpi(double __x) __attribute__((__nothrow__, __leaf__));
extern double atanpi(double __x) __attribute__((__nothrow__, __leaf__));
extern double __atanpi(double __x) __attribute__((__nothrow__, __leaf__));
extern double atan2pi(double __y, double __x)
    __attribute__((__nothrow__, __leaf__));
extern double __atan2pi(double __y, double __x)
    __attribute__((__nothrow__, __leaf__));
extern double cospi(double __x) __attribute__((__nothrow__, __leaf__));
extern double __cospi(double __x) __attribute__((__nothrow__, __leaf__));
extern double sinpi(double __x) __attribute__((__nothrow__, __leaf__));
extern double __sinpi(double __x) __attribute__((__nothrow__, __leaf__));
extern double tanpi(double __x) __attribute__((__nothrow__, __leaf__));
extern double __tanpi(double __x) __attribute__((__nothrow__, __leaf__));
extern double cosh(double __x) __attribute__((__nothrow__, __leaf__));
extern double __cosh(double __x) __attribute__((__nothrow__, __leaf__));
extern double sinh(double __x) __attribute__((__nothrow__, __leaf__));
extern double __sinh(double __x) __attribute__((__nothrow__, __leaf__));
extern double tanh(double __x) __attribute__((__nothrow__, __leaf__));
extern double __tanh(double __x) __attribute__((__nothrow__, __leaf__));
extern void sincos(double __x, double *__sinx, double *__cosx)
    __attribute__((__nothrow__, __leaf__));
extern void __sincos(double __x, double *__sinx, double *__cosx)
    __attribute__((__nothrow__, __leaf__));
extern double acosh(double __x) __attribute__((__nothrow__, __leaf__));
extern double __acosh(double __x) __attribute__((__nothrow__, __leaf__));
extern double asinh(double __x) __attribute__((__nothrow__, __leaf__));
extern double __asinh(double __x) __attribute__((__nothrow__, __leaf__));
extern double atanh(double __x) __attribute__((__nothrow__, __leaf__));
extern double __atanh(double __x) __attribute__((__nothrow__, __leaf__));
extern double exp(double __x) __attribute__((__nothrow__, __leaf__));
extern double __exp(double __x) __attribute__((__nothrow__, __leaf__));
extern double frexp(double __x, int *__exponent)
    __attribute__((__nothrow__, __leaf__));
extern double __frexp(double __x, int *__exponent)
    __attribute__((__nothrow__, __leaf__));
extern double ldexp(double __x, int __exponent)
    __attribute__((__nothrow__, __leaf__));
extern double __ldexp(double __x, int __exponent)
    __attribute__((__nothrow__, __leaf__));
extern double log(double __x) __attribute__((__nothrow__, __leaf__));
extern double __log(double __x) __attribute__((__nothrow__, __leaf__));
extern double log10(double __x) __attribute__((__nothrow__, __leaf__));
extern double __log10(double __x) __attribute__((__nothrow__, __leaf__));
extern double modf(double __x, double *__iptr)
    __attribute__((__nothrow__, __leaf__));
extern double __modf(double __x, double *__iptr)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2)));
extern double exp10(double __x) __attribute__((__nothrow__, __leaf__));
extern double __exp10(double __x) __attribute__((__nothrow__, __leaf__));
extern double exp2m1(double __x) __attribute__((__nothrow__, __leaf__));
extern double __exp2m1(double __x) __attribute__((__nothrow__, __leaf__));
extern double exp10m1(double __x) __attribute__((__nothrow__, __leaf__));
extern double __exp10m1(double __x) __attribute__((__nothrow__, __leaf__));
extern double log2p1(double __x) __attribute__((__nothrow__, __leaf__));
extern double __log2p1(double __x) __attribute__((__nothrow__, __leaf__));
extern double log10p1(double __x) __attribute__((__nothrow__, __leaf__));
extern double __log10p1(double __x) __attribute__((__nothrow__, __leaf__));
extern double logp1(double __x) __attribute__((__nothrow__, __leaf__));
extern double __logp1(double __x) __attribute__((__nothrow__, __leaf__));
extern double expm1(double __x) __attribute__((__nothrow__, __leaf__));
extern double __expm1(double __x) __attribute__((__nothrow__, __leaf__));
extern double log1p(double __x) __attribute__((__nothrow__, __leaf__));
extern double __log1p(double __x) __attribute__((__nothrow__, __leaf__));
extern double logb(double __x) __attribute__((__nothrow__, __leaf__));
extern double __logb(double __x) __attribute__((__nothrow__, __leaf__));
extern double exp2(double __x) __attribute__((__nothrow__, __leaf__));
extern double __exp2(double __x) __attribute__((__nothrow__, __leaf__));
extern double log2(double __x) __attribute__((__nothrow__, __leaf__));
extern double __log2(double __x) __attribute__((__nothrow__, __leaf__));
extern double pow(double __x, double __y)
    __attribute__((__nothrow__, __leaf__));
extern double __pow(double __x, double __y)
    __attribute__((__nothrow__, __leaf__));
extern double sqrt(double __x) __attribute__((__nothrow__, __leaf__));
extern double __sqrt(double __x) __attribute__((__nothrow__, __leaf__));
extern double hypot(double __x, double __y)
    __attribute__((__nothrow__, __leaf__));
extern double __hypot(double __x, double __y)
    __attribute__((__nothrow__, __leaf__));
extern double cbrt(double __x) __attribute__((__nothrow__, __leaf__));
extern double __cbrt(double __x) __attribute__((__nothrow__, __leaf__));
extern double ceil(double __x) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern double fabs(double __x) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern double floor(double __x) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern double fmod(double __x, double __y)
    __attribute__((__nothrow__, __leaf__));
extern double __fmod(double __x, double __y)
    __attribute__((__nothrow__, __leaf__));
extern int isinf(double __value) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern int finite(double __value) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern double drem(double __x, double __y)
    __attribute__((__nothrow__, __leaf__));
extern double __drem(double __x, double __y)
    __attribute__((__nothrow__, __leaf__));
extern double significand(double __x) __attribute__((__nothrow__, __leaf__));
extern double __significand(double __x) __attribute__((__nothrow__, __leaf__));
extern double copysign(double __x, double __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern double nan(const char *__tagb) __attribute__((__nothrow__, __leaf__));
extern double __nan(const char *__tagb) __attribute__((__nothrow__, __leaf__));
extern int isnan(double __value) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern double j0(double) __attribute__((__nothrow__, __leaf__));
extern double __j0(double) __attribute__((__nothrow__, __leaf__));
extern double j1(double) __attribute__((__nothrow__, __leaf__));
extern double __j1(double) __attribute__((__nothrow__, __leaf__));
extern double jn(int, double) __attribute__((__nothrow__, __leaf__));
extern double __jn(int, double) __attribute__((__nothrow__, __leaf__));
extern double y0(double) __attribute__((__nothrow__, __leaf__));
extern double __y0(double) __attribute__((__nothrow__, __leaf__));
extern double y1(double) __attribute__((__nothrow__, __leaf__));
extern double __y1(double) __attribute__((__nothrow__, __leaf__));
extern double yn(int, double) __attribute__((__nothrow__, __leaf__));
extern double __yn(int, double) __attribute__((__nothrow__, __leaf__));
extern double erf(double) __attribute__((__nothrow__, __leaf__));
extern double __erf(double) __attribute__((__nothrow__, __leaf__));
extern double erfc(double) __attribute__((__nothrow__, __leaf__));
extern double __erfc(double) __attribute__((__nothrow__, __leaf__));
extern double lgamma(double) __attribute__((__nothrow__, __leaf__));
extern double __lgamma(double) __attribute__((__nothrow__, __leaf__));
extern double tgamma(double) __attribute__((__nothrow__, __leaf__));
extern double __tgamma(double) __attribute__((__nothrow__, __leaf__));
extern double gamma(double) __attribute__((__nothrow__, __leaf__));
extern double __gamma(double) __attribute__((__nothrow__, __leaf__));
extern double lgamma_r(double, int *__signgamp)
    __attribute__((__nothrow__, __leaf__));
extern double __lgamma_r(double, int *__signgamp)
    __attribute__((__nothrow__, __leaf__));
extern double rint(double __x) __attribute__((__nothrow__, __leaf__));
extern double __rint(double __x) __attribute__((__nothrow__, __leaf__));
extern double nextafter(double __x, double __y)
    __attribute__((__nothrow__, __leaf__));
extern double __nextafter(double __x, double __y)
    __attribute__((__nothrow__, __leaf__));
extern double nexttoward(double __x, long double __y)
    __attribute__((__nothrow__, __leaf__));
extern double __nexttoward(double __x, long double __y)
    __attribute__((__nothrow__, __leaf__));
extern double nextdown(double __x) __attribute__((__nothrow__, __leaf__));
extern double __nextdown(double __x) __attribute__((__nothrow__, __leaf__));
extern double nextup(double __x) __attribute__((__nothrow__, __leaf__));
extern double __nextup(double __x) __attribute__((__nothrow__, __leaf__));
extern double remainder(double __x, double __y)
    __attribute__((__nothrow__, __leaf__));
extern double __remainder(double __x, double __y)
    __attribute__((__nothrow__, __leaf__));
extern double scalbn(double __x, int __n)
    __attribute__((__nothrow__, __leaf__));
extern double __scalbn(double __x, int __n)
    __attribute__((__nothrow__, __leaf__));
extern int ilogb(double __x) __attribute__((__nothrow__, __leaf__));
extern int __ilogb(double __x) __attribute__((__nothrow__, __leaf__));
extern long int llogb(double __x) __attribute__((__nothrow__, __leaf__));
extern long int __llogb(double __x) __attribute__((__nothrow__, __leaf__));
extern double scalbln(double __x, long int __n)
    __attribute__((__nothrow__, __leaf__));
extern double __scalbln(double __x, long int __n)
    __attribute__((__nothrow__, __leaf__));
extern double nearbyint(double __x) __attribute__((__nothrow__, __leaf__));
extern double __nearbyint(double __x) __attribute__((__nothrow__, __leaf__));
extern double round(double __x) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern double trunc(double __x) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern double remquo(double __x, double __y, int *__quo)
    __attribute__((__nothrow__, __leaf__));
extern double __remquo(double __x, double __y, int *__quo)
    __attribute__((__nothrow__, __leaf__));
extern long int lrint(double __x) __attribute__((__nothrow__, __leaf__));
extern long int __lrint(double __x) __attribute__((__nothrow__, __leaf__));
__extension__ extern long long int llrint(double __x)
    __attribute__((__nothrow__, __leaf__));
extern long long int __llrint(double __x)
    __attribute__((__nothrow__, __leaf__));
extern long int lround(double __x) __attribute__((__nothrow__, __leaf__));
extern long int __lround(double __x) __attribute__((__nothrow__, __leaf__));
__extension__ extern long long int llround(double __x)
    __attribute__((__nothrow__, __leaf__));
extern long long int __llround(double __x)
    __attribute__((__nothrow__, __leaf__));
extern double fdim(double __x, double __y)
    __attribute__((__nothrow__, __leaf__));
extern double __fdim(double __x, double __y)
    __attribute__((__nothrow__, __leaf__));
extern double fmax(double __x, double __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern double fmin(double __x, double __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern double fma(double __x, double __y, double __z)
    __attribute__((__nothrow__, __leaf__));
extern double __fma(double __x, double __y, double __z)
    __attribute__((__nothrow__, __leaf__));
extern double roundeven(double __x) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern __intmax_t fromfp(double __x, int __round, unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __intmax_t __fromfp(double __x, int __round, unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __uintmax_t ufromfp(double __x, int __round, unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __uintmax_t __ufromfp(double __x, int __round, unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __intmax_t fromfpx(double __x, int __round, unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __intmax_t __fromfpx(double __x, int __round, unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __uintmax_t ufromfpx(double __x, int __round, unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __uintmax_t __ufromfpx(double __x, int __round, unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern int canonicalize(double *__cx, const double *__x)
    __attribute__((__nothrow__, __leaf__));
extern double fmaxmag(double __x, double __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern double fminmag(double __x, double __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern double fmaximum(double __x, double __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern double fminimum(double __x, double __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern double fmaximum_num(double __x, double __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern double fminimum_num(double __x, double __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern double fmaximum_mag(double __x, double __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern double fminimum_mag(double __x, double __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern double fmaximum_mag_num(double __x, double __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern double fminimum_mag_num(double __x, double __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern int totalorder(const double *__x, const double *__y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__));
extern int totalordermag(const double *__x, const double *__y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__));
extern double getpayload(const double *__x)
    __attribute__((__nothrow__, __leaf__));
extern double __getpayload(const double *__x)
    __attribute__((__nothrow__, __leaf__));
extern int setpayload(double *__x, double __payload)
    __attribute__((__nothrow__, __leaf__));
extern int setpayloadsig(double *__x, double __payload)
    __attribute__((__nothrow__, __leaf__));
extern double scalb(double __x, double __n)
    __attribute__((__nothrow__, __leaf__));
extern double __scalb(double __x, double __n)
    __attribute__((__nothrow__, __leaf__));
extern int __fpclassifyf(float __value) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern int __signbitf(float __value) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern int __isinff(float __value) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern int __finitef(float __value) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern int __isnanf(float __value) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern int __iseqsigf(float __x, float __y)
    __attribute__((__nothrow__, __leaf__));
extern int __issignalingf(float __value) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern float acosf(float __x) __attribute__((__nothrow__, __leaf__));
extern float __acosf(float __x) __attribute__((__nothrow__, __leaf__));
extern float asinf(float __x) __attribute__((__nothrow__, __leaf__));
extern float __asinf(float __x) __attribute__((__nothrow__, __leaf__));
extern float atanf(float __x) __attribute__((__nothrow__, __leaf__));
extern float __atanf(float __x) __attribute__((__nothrow__, __leaf__));
extern float atan2f(float __y, float __x)
    __attribute__((__nothrow__, __leaf__));
extern float __atan2f(float __y, float __x)
    __attribute__((__nothrow__, __leaf__));
extern float cosf(float __x) __attribute__((__nothrow__, __leaf__));
extern float __cosf(float __x) __attribute__((__nothrow__, __leaf__));
extern float sinf(float __x) __attribute__((__nothrow__, __leaf__));
extern float __sinf(float __x) __attribute__((__nothrow__, __leaf__));
extern float tanf(float __x) __attribute__((__nothrow__, __leaf__));
extern float __tanf(float __x) __attribute__((__nothrow__, __leaf__));
extern float acospif(float __x) __attribute__((__nothrow__, __leaf__));
extern float __acospif(float __x) __attribute__((__nothrow__, __leaf__));
extern float asinpif(float __x) __attribute__((__nothrow__, __leaf__));
extern float __asinpif(float __x) __attribute__((__nothrow__, __leaf__));
extern float atanpif(float __x) __attribute__((__nothrow__, __leaf__));
extern float __atanpif(float __x) __attribute__((__nothrow__, __leaf__));
extern float atan2pif(float __y, float __x)
    __attribute__((__nothrow__, __leaf__));
extern float __atan2pif(float __y, float __x)
    __attribute__((__nothrow__, __leaf__));
extern float cospif(float __x) __attribute__((__nothrow__, __leaf__));
extern float __cospif(float __x) __attribute__((__nothrow__, __leaf__));
extern float sinpif(float __x) __attribute__((__nothrow__, __leaf__));
extern float __sinpif(float __x) __attribute__((__nothrow__, __leaf__));
extern float tanpif(float __x) __attribute__((__nothrow__, __leaf__));
extern float __tanpif(float __x) __attribute__((__nothrow__, __leaf__));
extern float coshf(float __x) __attribute__((__nothrow__, __leaf__));
extern float __coshf(float __x) __attribute__((__nothrow__, __leaf__));
extern float sinhf(float __x) __attribute__((__nothrow__, __leaf__));
extern float __sinhf(float __x) __attribute__((__nothrow__, __leaf__));
extern float tanhf(float __x) __attribute__((__nothrow__, __leaf__));
extern float __tanhf(float __x) __attribute__((__nothrow__, __leaf__));
extern void sincosf(float __x, float *__sinx, float *__cosx)
    __attribute__((__nothrow__, __leaf__));
extern void __sincosf(float __x, float *__sinx, float *__cosx)
    __attribute__((__nothrow__, __leaf__));
extern float acoshf(float __x) __attribute__((__nothrow__, __leaf__));
extern float __acoshf(float __x) __attribute__((__nothrow__, __leaf__));
extern float asinhf(float __x) __attribute__((__nothrow__, __leaf__));
extern float __asinhf(float __x) __attribute__((__nothrow__, __leaf__));
extern float atanhf(float __x) __attribute__((__nothrow__, __leaf__));
extern float __atanhf(float __x) __attribute__((__nothrow__, __leaf__));
extern float expf(float __x) __attribute__((__nothrow__, __leaf__));
extern float __expf(float __x) __attribute__((__nothrow__, __leaf__));
extern float frexpf(float __x, int *__exponent)
    __attribute__((__nothrow__, __leaf__));
extern float __frexpf(float __x, int *__exponent)
    __attribute__((__nothrow__, __leaf__));
extern float ldexpf(float __x, int __exponent)
    __attribute__((__nothrow__, __leaf__));
extern float __ldexpf(float __x, int __exponent)
    __attribute__((__nothrow__, __leaf__));
extern float logf(float __x) __attribute__((__nothrow__, __leaf__));
extern float __logf(float __x) __attribute__((__nothrow__, __leaf__));
extern float log10f(float __x) __attribute__((__nothrow__, __leaf__));
extern float __log10f(float __x) __attribute__((__nothrow__, __leaf__));
extern float modff(float __x, float *__iptr)
    __attribute__((__nothrow__, __leaf__));
extern float __modff(float __x, float *__iptr)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2)));
extern float exp10f(float __x) __attribute__((__nothrow__, __leaf__));
extern float __exp10f(float __x) __attribute__((__nothrow__, __leaf__));
extern float exp2m1f(float __x) __attribute__((__nothrow__, __leaf__));
extern float __exp2m1f(float __x) __attribute__((__nothrow__, __leaf__));
extern float exp10m1f(float __x) __attribute__((__nothrow__, __leaf__));
extern float __exp10m1f(float __x) __attribute__((__nothrow__, __leaf__));
extern float log2p1f(float __x) __attribute__((__nothrow__, __leaf__));
extern float __log2p1f(float __x) __attribute__((__nothrow__, __leaf__));
extern float log10p1f(float __x) __attribute__((__nothrow__, __leaf__));
extern float __log10p1f(float __x) __attribute__((__nothrow__, __leaf__));
extern float logp1f(float __x) __attribute__((__nothrow__, __leaf__));
extern float __logp1f(float __x) __attribute__((__nothrow__, __leaf__));
extern float expm1f(float __x) __attribute__((__nothrow__, __leaf__));
extern float __expm1f(float __x) __attribute__((__nothrow__, __leaf__));
extern float log1pf(float __x) __attribute__((__nothrow__, __leaf__));
extern float __log1pf(float __x) __attribute__((__nothrow__, __leaf__));
extern float logbf(float __x) __attribute__((__nothrow__, __leaf__));
extern float __logbf(float __x) __attribute__((__nothrow__, __leaf__));
extern float exp2f(float __x) __attribute__((__nothrow__, __leaf__));
extern float __exp2f(float __x) __attribute__((__nothrow__, __leaf__));
extern float log2f(float __x) __attribute__((__nothrow__, __leaf__));
extern float __log2f(float __x) __attribute__((__nothrow__, __leaf__));
extern float powf(float __x, float __y) __attribute__((__nothrow__, __leaf__));
extern float __powf(float __x, float __y)
    __attribute__((__nothrow__, __leaf__));
extern float sqrtf(float __x) __attribute__((__nothrow__, __leaf__));
extern float __sqrtf(float __x) __attribute__((__nothrow__, __leaf__));
extern float hypotf(float __x, float __y)
    __attribute__((__nothrow__, __leaf__));
extern float __hypotf(float __x, float __y)
    __attribute__((__nothrow__, __leaf__));
extern float cbrtf(float __x) __attribute__((__nothrow__, __leaf__));
extern float __cbrtf(float __x) __attribute__((__nothrow__, __leaf__));
extern float ceilf(float __x) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern float fabsf(float __x) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern float floorf(float __x) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern float fmodf(float __x, float __y) __attribute__((__nothrow__, __leaf__));
extern float __fmodf(float __x, float __y)
    __attribute__((__nothrow__, __leaf__));
extern int isinff(float __value) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern int finitef(float __value) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern float dremf(float __x, float __y) __attribute__((__nothrow__, __leaf__));
extern float __dremf(float __x, float __y)
    __attribute__((__nothrow__, __leaf__));
extern float significandf(float __x) __attribute__((__nothrow__, __leaf__));
extern float __significandf(float __x) __attribute__((__nothrow__, __leaf__));
extern float copysignf(float __x, float __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern float nanf(const char *__tagb) __attribute__((__nothrow__, __leaf__));
extern float __nanf(const char *__tagb) __attribute__((__nothrow__, __leaf__));
extern int isnanf(float __value) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern float j0f(float) __attribute__((__nothrow__, __leaf__));
extern float __j0f(float) __attribute__((__nothrow__, __leaf__));
extern float j1f(float) __attribute__((__nothrow__, __leaf__));
extern float __j1f(float) __attribute__((__nothrow__, __leaf__));
extern float jnf(int, float) __attribute__((__nothrow__, __leaf__));
extern float __jnf(int, float) __attribute__((__nothrow__, __leaf__));
extern float y0f(float) __attribute__((__nothrow__, __leaf__));
extern float __y0f(float) __attribute__((__nothrow__, __leaf__));
extern float y1f(float) __attribute__((__nothrow__, __leaf__));
extern float __y1f(float) __attribute__((__nothrow__, __leaf__));
extern float ynf(int, float) __attribute__((__nothrow__, __leaf__));
extern float __ynf(int, float) __attribute__((__nothrow__, __leaf__));
extern float erff(float) __attribute__((__nothrow__, __leaf__));
extern float __erff(float) __attribute__((__nothrow__, __leaf__));
extern float erfcf(float) __attribute__((__nothrow__, __leaf__));
extern float __erfcf(float) __attribute__((__nothrow__, __leaf__));
extern float lgammaf(float) __attribute__((__nothrow__, __leaf__));
extern float __lgammaf(float) __attribute__((__nothrow__, __leaf__));
extern float tgammaf(float) __attribute__((__nothrow__, __leaf__));
extern float __tgammaf(float) __attribute__((__nothrow__, __leaf__));
extern float gammaf(float) __attribute__((__nothrow__, __leaf__));
extern float __gammaf(float) __attribute__((__nothrow__, __leaf__));
extern float lgammaf_r(float, int *__signgamp)
    __attribute__((__nothrow__, __leaf__));
extern float __lgammaf_r(float, int *__signgamp)
    __attribute__((__nothrow__, __leaf__));
extern float rintf(float __x) __attribute__((__nothrow__, __leaf__));
extern float __rintf(float __x) __attribute__((__nothrow__, __leaf__));
extern float nextafterf(float __x, float __y)
    __attribute__((__nothrow__, __leaf__));
extern float __nextafterf(float __x, float __y)
    __attribute__((__nothrow__, __leaf__));
extern float nexttowardf(float __x, long double __y)
    __attribute__((__nothrow__, __leaf__));
extern float __nexttowardf(float __x, long double __y)
    __attribute__((__nothrow__, __leaf__));
extern float nextdownf(float __x) __attribute__((__nothrow__, __leaf__));
extern float __nextdownf(float __x) __attribute__((__nothrow__, __leaf__));
extern float nextupf(float __x) __attribute__((__nothrow__, __leaf__));
extern float __nextupf(float __x) __attribute__((__nothrow__, __leaf__));
extern float remainderf(float __x, float __y)
    __attribute__((__nothrow__, __leaf__));
extern float __remainderf(float __x, float __y)
    __attribute__((__nothrow__, __leaf__));
extern float scalbnf(float __x, int __n) __attribute__((__nothrow__, __leaf__));
extern float __scalbnf(float __x, int __n)
    __attribute__((__nothrow__, __leaf__));
extern int ilogbf(float __x) __attribute__((__nothrow__, __leaf__));
extern int __ilogbf(float __x) __attribute__((__nothrow__, __leaf__));
extern long int llogbf(float __x) __attribute__((__nothrow__, __leaf__));
extern long int __llogbf(float __x) __attribute__((__nothrow__, __leaf__));
extern float scalblnf(float __x, long int __n)
    __attribute__((__nothrow__, __leaf__));
extern float __scalblnf(float __x, long int __n)
    __attribute__((__nothrow__, __leaf__));
extern float nearbyintf(float __x) __attribute__((__nothrow__, __leaf__));
extern float __nearbyintf(float __x) __attribute__((__nothrow__, __leaf__));
extern float roundf(float __x) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern float truncf(float __x) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern float remquof(float __x, float __y, int *__quo)
    __attribute__((__nothrow__, __leaf__));
extern float __remquof(float __x, float __y, int *__quo)
    __attribute__((__nothrow__, __leaf__));
extern long int lrintf(float __x) __attribute__((__nothrow__, __leaf__));
extern long int __lrintf(float __x) __attribute__((__nothrow__, __leaf__));
__extension__ extern long long int llrintf(float __x)
    __attribute__((__nothrow__, __leaf__));
extern long long int __llrintf(float __x)
    __attribute__((__nothrow__, __leaf__));
extern long int lroundf(float __x) __attribute__((__nothrow__, __leaf__));
extern long int __lroundf(float __x) __attribute__((__nothrow__, __leaf__));
__extension__ extern long long int llroundf(float __x)
    __attribute__((__nothrow__, __leaf__));
extern long long int __llroundf(float __x)
    __attribute__((__nothrow__, __leaf__));
extern float fdimf(float __x, float __y) __attribute__((__nothrow__, __leaf__));
extern float __fdimf(float __x, float __y)
    __attribute__((__nothrow__, __leaf__));
extern float fmaxf(float __x, float __y) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern float fminf(float __x, float __y) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern float fmaf(float __x, float __y, float __z)
    __attribute__((__nothrow__, __leaf__));
extern float __fmaf(float __x, float __y, float __z)
    __attribute__((__nothrow__, __leaf__));
extern float roundevenf(float __x) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern __intmax_t fromfpf(float __x, int __round, unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __intmax_t __fromfpf(float __x, int __round, unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __uintmax_t ufromfpf(float __x, int __round, unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __uintmax_t __ufromfpf(float __x, int __round, unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __intmax_t fromfpxf(float __x, int __round, unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __intmax_t __fromfpxf(float __x, int __round, unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __uintmax_t ufromfpxf(float __x, int __round, unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __uintmax_t __ufromfpxf(float __x, int __round, unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern int canonicalizef(float *__cx, const float *__x)
    __attribute__((__nothrow__, __leaf__));
extern float fmaxmagf(float __x, float __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern float fminmagf(float __x, float __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern float fmaximumf(float __x, float __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern float fminimumf(float __x, float __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern float fmaximum_numf(float __x, float __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern float fminimum_numf(float __x, float __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern float fmaximum_magf(float __x, float __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern float fminimum_magf(float __x, float __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern float fmaximum_mag_numf(float __x, float __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern float fminimum_mag_numf(float __x, float __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern int totalorderf(const float *__x, const float *__y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__));
extern int totalordermagf(const float *__x, const float *__y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__));
extern float getpayloadf(const float *__x)
    __attribute__((__nothrow__, __leaf__));
extern float __getpayloadf(const float *__x)
    __attribute__((__nothrow__, __leaf__));
extern int setpayloadf(float *__x, float __payload)
    __attribute__((__nothrow__, __leaf__));
extern int setpayloadsigf(float *__x, float __payload)
    __attribute__((__nothrow__, __leaf__));
extern float scalbf(float __x, float __n)
    __attribute__((__nothrow__, __leaf__));
extern float __scalbf(float __x, float __n)
    __attribute__((__nothrow__, __leaf__));
extern int __fpclassifyl(long double __value)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern int __signbitl(long double __value)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern int __isinfl(long double __value) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern int __finitel(long double __value) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern int __isnanl(long double __value) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern int __iseqsigl(long double __x, long double __y)
    __attribute__((__nothrow__, __leaf__));
extern int __issignalingl(long double __value)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern long double acosl(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double __acosl(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double asinl(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double __asinl(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double atanl(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double __atanl(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double atan2l(long double __y, long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double __atan2l(long double __y, long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double cosl(long double __x) __attribute__((__nothrow__, __leaf__));
extern long double __cosl(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double sinl(long double __x) __attribute__((__nothrow__, __leaf__));
extern long double __sinl(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double tanl(long double __x) __attribute__((__nothrow__, __leaf__));
extern long double __tanl(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double acospil(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double __acospil(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double asinpil(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double __asinpil(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double atanpil(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double __atanpil(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double atan2pil(long double __y, long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double __atan2pil(long double __y, long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double cospil(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double __cospil(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double sinpil(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double __sinpil(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double tanpil(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double __tanpil(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double coshl(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double __coshl(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double sinhl(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double __sinhl(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double tanhl(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double __tanhl(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern void sincosl(long double __x, long double *__sinx, long double *__cosx)
    __attribute__((__nothrow__, __leaf__));
extern void __sincosl(long double __x, long double *__sinx, long double *__cosx)
    __attribute__((__nothrow__, __leaf__));
extern long double acoshl(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double __acoshl(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double asinhl(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double __asinhl(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double atanhl(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double __atanhl(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double expl(long double __x) __attribute__((__nothrow__, __leaf__));
extern long double __expl(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double frexpl(long double __x, int *__exponent)
    __attribute__((__nothrow__, __leaf__));
extern long double __frexpl(long double __x, int *__exponent)
    __attribute__((__nothrow__, __leaf__));
extern long double ldexpl(long double __x, int __exponent)
    __attribute__((__nothrow__, __leaf__));
extern long double __ldexpl(long double __x, int __exponent)
    __attribute__((__nothrow__, __leaf__));
extern long double logl(long double __x) __attribute__((__nothrow__, __leaf__));
extern long double __logl(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double log10l(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double __log10l(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double modfl(long double __x, long double *__iptr)
    __attribute__((__nothrow__, __leaf__));
extern long double __modfl(long double __x, long double *__iptr)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2)));
extern long double exp10l(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double __exp10l(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double exp2m1l(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double __exp2m1l(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double exp10m1l(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double __exp10m1l(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double log2p1l(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double __log2p1l(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double log10p1l(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double __log10p1l(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double logp1l(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double __logp1l(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double expm1l(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double __expm1l(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double log1pl(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double __log1pl(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double logbl(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double __logbl(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double exp2l(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double __exp2l(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double log2l(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double __log2l(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double powl(long double __x, long double __y)
    __attribute__((__nothrow__, __leaf__));
extern long double __powl(long double __x, long double __y)
    __attribute__((__nothrow__, __leaf__));
extern long double sqrtl(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double __sqrtl(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double hypotl(long double __x, long double __y)
    __attribute__((__nothrow__, __leaf__));
extern long double __hypotl(long double __x, long double __y)
    __attribute__((__nothrow__, __leaf__));
extern long double cbrtl(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double __cbrtl(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double ceill(long double __x) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern long double fabsl(long double __x) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern long double floorl(long double __x)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern long double fmodl(long double __x, long double __y)
    __attribute__((__nothrow__, __leaf__));
extern long double __fmodl(long double __x, long double __y)
    __attribute__((__nothrow__, __leaf__));
extern int isinfl(long double __value) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern int finitel(long double __value) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern long double dreml(long double __x, long double __y)
    __attribute__((__nothrow__, __leaf__));
extern long double __dreml(long double __x, long double __y)
    __attribute__((__nothrow__, __leaf__));
extern long double significandl(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double __significandl(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double copysignl(long double __x, long double __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern long double nanl(const char *__tagb)
    __attribute__((__nothrow__, __leaf__));
extern long double __nanl(const char *__tagb)
    __attribute__((__nothrow__, __leaf__));
extern int isnanl(long double __value) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern long double j0l(long double) __attribute__((__nothrow__, __leaf__));
extern long double __j0l(long double) __attribute__((__nothrow__, __leaf__));
extern long double j1l(long double) __attribute__((__nothrow__, __leaf__));
extern long double __j1l(long double) __attribute__((__nothrow__, __leaf__));
extern long double jnl(int, long double) __attribute__((__nothrow__, __leaf__));
extern long double __jnl(int, long double)
    __attribute__((__nothrow__, __leaf__));
extern long double y0l(long double) __attribute__((__nothrow__, __leaf__));
extern long double __y0l(long double) __attribute__((__nothrow__, __leaf__));
extern long double y1l(long double) __attribute__((__nothrow__, __leaf__));
extern long double __y1l(long double) __attribute__((__nothrow__, __leaf__));
extern long double ynl(int, long double) __attribute__((__nothrow__, __leaf__));
extern long double __ynl(int, long double)
    __attribute__((__nothrow__, __leaf__));
extern long double erfl(long double) __attribute__((__nothrow__, __leaf__));
extern long double __erfl(long double) __attribute__((__nothrow__, __leaf__));
extern long double erfcl(long double) __attribute__((__nothrow__, __leaf__));
extern long double __erfcl(long double) __attribute__((__nothrow__, __leaf__));
extern long double lgammal(long double) __attribute__((__nothrow__, __leaf__));
extern long double __lgammal(long double)
    __attribute__((__nothrow__, __leaf__));
extern long double tgammal(long double) __attribute__((__nothrow__, __leaf__));
extern long double __tgammal(long double)
    __attribute__((__nothrow__, __leaf__));
extern long double gammal(long double) __attribute__((__nothrow__, __leaf__));
extern long double __gammal(long double) __attribute__((__nothrow__, __leaf__));
extern long double lgammal_r(long double, int *__signgamp)
    __attribute__((__nothrow__, __leaf__));
extern long double __lgammal_r(long double, int *__signgamp)
    __attribute__((__nothrow__, __leaf__));
extern long double rintl(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double __rintl(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double nextafterl(long double __x, long double __y)
    __attribute__((__nothrow__, __leaf__));
extern long double __nextafterl(long double __x, long double __y)
    __attribute__((__nothrow__, __leaf__));
extern long double nexttowardl(long double __x, long double __y)
    __attribute__((__nothrow__, __leaf__));
extern long double __nexttowardl(long double __x, long double __y)
    __attribute__((__nothrow__, __leaf__));
extern long double nextdownl(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double __nextdownl(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double nextupl(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double __nextupl(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double remainderl(long double __x, long double __y)
    __attribute__((__nothrow__, __leaf__));
extern long double __remainderl(long double __x, long double __y)
    __attribute__((__nothrow__, __leaf__));
extern long double scalbnl(long double __x, int __n)
    __attribute__((__nothrow__, __leaf__));
extern long double __scalbnl(long double __x, int __n)
    __attribute__((__nothrow__, __leaf__));
extern int ilogbl(long double __x) __attribute__((__nothrow__, __leaf__));
extern int __ilogbl(long double __x) __attribute__((__nothrow__, __leaf__));
extern long int llogbl(long double __x) __attribute__((__nothrow__, __leaf__));
extern long int __llogbl(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double scalblnl(long double __x, long int __n)
    __attribute__((__nothrow__, __leaf__));
extern long double __scalblnl(long double __x, long int __n)
    __attribute__((__nothrow__, __leaf__));
extern long double nearbyintl(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double __nearbyintl(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double roundl(long double __x)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern long double truncl(long double __x)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern long double remquol(long double __x, long double __y, int *__quo)
    __attribute__((__nothrow__, __leaf__));
extern long double __remquol(long double __x, long double __y, int *__quo)
    __attribute__((__nothrow__, __leaf__));
extern long int lrintl(long double __x) __attribute__((__nothrow__, __leaf__));
extern long int __lrintl(long double __x)
    __attribute__((__nothrow__, __leaf__));
__extension__ extern long long int llrintl(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long long int __llrintl(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long int lroundl(long double __x) __attribute__((__nothrow__, __leaf__));
extern long int __lroundl(long double __x)
    __attribute__((__nothrow__, __leaf__));
__extension__ extern long long int llroundl(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long long int __llroundl(long double __x)
    __attribute__((__nothrow__, __leaf__));
extern long double fdiml(long double __x, long double __y)
    __attribute__((__nothrow__, __leaf__));
extern long double __fdiml(long double __x, long double __y)
    __attribute__((__nothrow__, __leaf__));
extern long double fmaxl(long double __x, long double __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern long double fminl(long double __x, long double __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern long double fmal(long double __x, long double __y, long double __z)
    __attribute__((__nothrow__, __leaf__));
extern long double __fmal(long double __x, long double __y, long double __z)
    __attribute__((__nothrow__, __leaf__));
extern long double roundevenl(long double __x)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern __intmax_t fromfpl(long double __x, int __round, unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __intmax_t __fromfpl(long double __x, int __round, unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __uintmax_t ufromfpl(long double __x, int __round, unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __uintmax_t __ufromfpl(long double __x, int __round,
                              unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __intmax_t fromfpxl(long double __x, int __round, unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __intmax_t __fromfpxl(long double __x, int __round, unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __uintmax_t ufromfpxl(long double __x, int __round, unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __uintmax_t __ufromfpxl(long double __x, int __round,
                               unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern int canonicalizel(long double *__cx, const long double *__x)
    __attribute__((__nothrow__, __leaf__));
extern long double fmaxmagl(long double __x, long double __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern long double fminmagl(long double __x, long double __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern long double fmaximuml(long double __x, long double __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern long double fminimuml(long double __x, long double __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern long double fmaximum_numl(long double __x, long double __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern long double fminimum_numl(long double __x, long double __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern long double fmaximum_magl(long double __x, long double __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern long double fminimum_magl(long double __x, long double __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern long double fmaximum_mag_numl(long double __x, long double __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern long double fminimum_mag_numl(long double __x, long double __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern int totalorderl(const long double *__x, const long double *__y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__));
extern int totalordermagl(const long double *__x, const long double *__y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__));
extern long double getpayloadl(const long double *__x)
    __attribute__((__nothrow__, __leaf__));
extern long double __getpayloadl(const long double *__x)
    __attribute__((__nothrow__, __leaf__));
extern int setpayloadl(long double *__x, long double __payload)
    __attribute__((__nothrow__, __leaf__));
extern int setpayloadsigl(long double *__x, long double __payload)
    __attribute__((__nothrow__, __leaf__));
extern long double scalbl(long double __x, long double __n)
    __attribute__((__nothrow__, __leaf__));
extern long double __scalbl(long double __x, long double __n)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 acosf32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 __acosf32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 asinf32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 __asinf32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 atanf32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 __atanf32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 atan2f32(_Float32 __y, _Float32 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 __atan2f32(_Float32 __y, _Float32 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 cosf32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 __cosf32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 sinf32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 __sinf32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 tanf32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 __tanf32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 acospif32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 __acospif32(_Float32 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 asinpif32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 __asinpif32(_Float32 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 atanpif32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 __atanpif32(_Float32 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 atan2pif32(_Float32 __y, _Float32 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 __atan2pif32(_Float32 __y, _Float32 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 cospif32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 __cospif32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 sinpif32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 __sinpif32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 tanpif32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 __tanpif32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 coshf32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 __coshf32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 sinhf32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 __sinhf32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 tanhf32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 __tanhf32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern void sincosf32(_Float32 __x, _Float32 *__sinx, _Float32 *__cosx)
    __attribute__((__nothrow__, __leaf__));
extern void __sincosf32(_Float32 __x, _Float32 *__sinx, _Float32 *__cosx)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 acoshf32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 __acoshf32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 asinhf32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 __asinhf32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 atanhf32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 __atanhf32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 expf32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 __expf32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 frexpf32(_Float32 __x, int *__exponent)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 __frexpf32(_Float32 __x, int *__exponent)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 ldexpf32(_Float32 __x, int __exponent)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 __ldexpf32(_Float32 __x, int __exponent)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 logf32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 __logf32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 log10f32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 __log10f32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 modff32(_Float32 __x, _Float32 *__iptr)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 __modff32(_Float32 __x, _Float32 *__iptr)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2)));
extern _Float32 exp10f32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 __exp10f32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 exp2m1f32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 __exp2m1f32(_Float32 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 exp10m1f32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 __exp10m1f32(_Float32 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 log2p1f32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 __log2p1f32(_Float32 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 log10p1f32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 __log10p1f32(_Float32 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 logp1f32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 __logp1f32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 expm1f32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 __expm1f32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 log1pf32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 __log1pf32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 logbf32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 __logbf32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 exp2f32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 __exp2f32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 log2f32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 __log2f32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 powf32(_Float32 __x, _Float32 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 __powf32(_Float32 __x, _Float32 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 sqrtf32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 __sqrtf32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 hypotf32(_Float32 __x, _Float32 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 __hypotf32(_Float32 __x, _Float32 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 cbrtf32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 __cbrtf32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 ceilf32(_Float32 __x) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern _Float32 fabsf32(_Float32 __x) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern _Float32 floorf32(_Float32 __x) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern _Float32 fmodf32(_Float32 __x, _Float32 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 __fmodf32(_Float32 __x, _Float32 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 copysignf32(_Float32 __x, _Float32 __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float32 nanf32(const char *__tagb)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 __nanf32(const char *__tagb)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 j0f32(_Float32) __attribute__((__nothrow__, __leaf__));
extern _Float32 __j0f32(_Float32) __attribute__((__nothrow__, __leaf__));
extern _Float32 j1f32(_Float32) __attribute__((__nothrow__, __leaf__));
extern _Float32 __j1f32(_Float32) __attribute__((__nothrow__, __leaf__));
extern _Float32 jnf32(int, _Float32) __attribute__((__nothrow__, __leaf__));
extern _Float32 __jnf32(int, _Float32) __attribute__((__nothrow__, __leaf__));
extern _Float32 y0f32(_Float32) __attribute__((__nothrow__, __leaf__));
extern _Float32 __y0f32(_Float32) __attribute__((__nothrow__, __leaf__));
extern _Float32 y1f32(_Float32) __attribute__((__nothrow__, __leaf__));
extern _Float32 __y1f32(_Float32) __attribute__((__nothrow__, __leaf__));
extern _Float32 ynf32(int, _Float32) __attribute__((__nothrow__, __leaf__));
extern _Float32 __ynf32(int, _Float32) __attribute__((__nothrow__, __leaf__));
extern _Float32 erff32(_Float32) __attribute__((__nothrow__, __leaf__));
extern _Float32 __erff32(_Float32) __attribute__((__nothrow__, __leaf__));
extern _Float32 erfcf32(_Float32) __attribute__((__nothrow__, __leaf__));
extern _Float32 __erfcf32(_Float32) __attribute__((__nothrow__, __leaf__));
extern _Float32 lgammaf32(_Float32) __attribute__((__nothrow__, __leaf__));
extern _Float32 __lgammaf32(_Float32) __attribute__((__nothrow__, __leaf__));
extern _Float32 tgammaf32(_Float32) __attribute__((__nothrow__, __leaf__));
extern _Float32 __tgammaf32(_Float32) __attribute__((__nothrow__, __leaf__));
extern _Float32 lgammaf32_r(_Float32, int *__signgamp)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 __lgammaf32_r(_Float32, int *__signgamp)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 rintf32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 __rintf32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 nextafterf32(_Float32 __x, _Float32 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 __nextafterf32(_Float32 __x, _Float32 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 nextdownf32(_Float32 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 __nextdownf32(_Float32 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 nextupf32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 __nextupf32(_Float32 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 remainderf32(_Float32 __x, _Float32 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 __remainderf32(_Float32 __x, _Float32 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 scalbnf32(_Float32 __x, int __n)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 __scalbnf32(_Float32 __x, int __n)
    __attribute__((__nothrow__, __leaf__));
extern int ilogbf32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern int __ilogbf32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern long int llogbf32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern long int __llogbf32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 scalblnf32(_Float32 __x, long int __n)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 __scalblnf32(_Float32 __x, long int __n)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 nearbyintf32(_Float32 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 __nearbyintf32(_Float32 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 roundf32(_Float32 __x) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern _Float32 truncf32(_Float32 __x) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern _Float32 remquof32(_Float32 __x, _Float32 __y, int *__quo)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 __remquof32(_Float32 __x, _Float32 __y, int *__quo)
    __attribute__((__nothrow__, __leaf__));
extern long int lrintf32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern long int __lrintf32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
__extension__ extern long long int llrintf32(_Float32 __x)
    __attribute__((__nothrow__, __leaf__));
extern long long int __llrintf32(_Float32 __x)
    __attribute__((__nothrow__, __leaf__));
extern long int lroundf32(_Float32 __x) __attribute__((__nothrow__, __leaf__));
extern long int __lroundf32(_Float32 __x)
    __attribute__((__nothrow__, __leaf__));
__extension__ extern long long int llroundf32(_Float32 __x)
    __attribute__((__nothrow__, __leaf__));
extern long long int __llroundf32(_Float32 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 fdimf32(_Float32 __x, _Float32 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 __fdimf32(_Float32 __x, _Float32 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 fmaxf32(_Float32 __x, _Float32 __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float32 fminf32(_Float32 __x, _Float32 __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float32 fmaf32(_Float32 __x, _Float32 __y, _Float32 __z)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 __fmaf32(_Float32 __x, _Float32 __y, _Float32 __z)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 roundevenf32(_Float32 __x)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern __intmax_t fromfpf32(_Float32 __x, int __round, unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __intmax_t __fromfpf32(_Float32 __x, int __round, unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __uintmax_t ufromfpf32(_Float32 __x, int __round, unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __uintmax_t __ufromfpf32(_Float32 __x, int __round, unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __intmax_t fromfpxf32(_Float32 __x, int __round, unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __intmax_t __fromfpxf32(_Float32 __x, int __round, unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __uintmax_t ufromfpxf32(_Float32 __x, int __round, unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __uintmax_t __ufromfpxf32(_Float32 __x, int __round,
                                 unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern int canonicalizef32(_Float32 *__cx, const _Float32 *__x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 fmaxmagf32(_Float32 __x, _Float32 __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float32 fminmagf32(_Float32 __x, _Float32 __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float32 fmaximumf32(_Float32 __x, _Float32 __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float32 fminimumf32(_Float32 __x, _Float32 __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float32 fmaximum_numf32(_Float32 __x, _Float32 __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float32 fminimum_numf32(_Float32 __x, _Float32 __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float32 fmaximum_magf32(_Float32 __x, _Float32 __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float32 fminimum_magf32(_Float32 __x, _Float32 __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float32 fmaximum_mag_numf32(_Float32 __x, _Float32 __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float32 fminimum_mag_numf32(_Float32 __x, _Float32 __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern int totalorderf32(const _Float32 *__x, const _Float32 *__y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__));
extern int totalordermagf32(const _Float32 *__x, const _Float32 *__y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__));
extern _Float32 getpayloadf32(const _Float32 *__x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 __getpayloadf32(const _Float32 *__x)
    __attribute__((__nothrow__, __leaf__));
extern int setpayloadf32(_Float32 *__x, _Float32 __payload)
    __attribute__((__nothrow__, __leaf__));
extern int setpayloadsigf32(_Float32 *__x, _Float32 __payload)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 acosf64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 __acosf64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 asinf64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 __asinf64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 atanf64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 __atanf64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 atan2f64(_Float64 __y, _Float64 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 __atan2f64(_Float64 __y, _Float64 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 cosf64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 __cosf64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 sinf64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 __sinf64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 tanf64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 __tanf64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 acospif64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 __acospif64(_Float64 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 asinpif64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 __asinpif64(_Float64 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 atanpif64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 __atanpif64(_Float64 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 atan2pif64(_Float64 __y, _Float64 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 __atan2pif64(_Float64 __y, _Float64 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 cospif64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 __cospif64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 sinpif64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 __sinpif64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 tanpif64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 __tanpif64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 coshf64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 __coshf64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 sinhf64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 __sinhf64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 tanhf64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 __tanhf64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern void sincosf64(_Float64 __x, _Float64 *__sinx, _Float64 *__cosx)
    __attribute__((__nothrow__, __leaf__));
extern void __sincosf64(_Float64 __x, _Float64 *__sinx, _Float64 *__cosx)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 acoshf64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 __acoshf64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 asinhf64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 __asinhf64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 atanhf64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 __atanhf64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 expf64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 __expf64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 frexpf64(_Float64 __x, int *__exponent)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 __frexpf64(_Float64 __x, int *__exponent)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 ldexpf64(_Float64 __x, int __exponent)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 __ldexpf64(_Float64 __x, int __exponent)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 logf64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 __logf64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 log10f64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 __log10f64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 modff64(_Float64 __x, _Float64 *__iptr)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 __modff64(_Float64 __x, _Float64 *__iptr)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2)));
extern _Float64 exp10f64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 __exp10f64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 exp2m1f64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 __exp2m1f64(_Float64 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 exp10m1f64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 __exp10m1f64(_Float64 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 log2p1f64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 __log2p1f64(_Float64 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 log10p1f64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 __log10p1f64(_Float64 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 logp1f64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 __logp1f64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 expm1f64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 __expm1f64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 log1pf64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 __log1pf64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 logbf64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 __logbf64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 exp2f64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 __exp2f64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 log2f64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 __log2f64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 powf64(_Float64 __x, _Float64 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 __powf64(_Float64 __x, _Float64 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 sqrtf64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 __sqrtf64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 hypotf64(_Float64 __x, _Float64 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 __hypotf64(_Float64 __x, _Float64 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 cbrtf64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 __cbrtf64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 ceilf64(_Float64 __x) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern _Float64 fabsf64(_Float64 __x) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern _Float64 floorf64(_Float64 __x) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern _Float64 fmodf64(_Float64 __x, _Float64 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 __fmodf64(_Float64 __x, _Float64 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 copysignf64(_Float64 __x, _Float64 __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float64 nanf64(const char *__tagb)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 __nanf64(const char *__tagb)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 j0f64(_Float64) __attribute__((__nothrow__, __leaf__));
extern _Float64 __j0f64(_Float64) __attribute__((__nothrow__, __leaf__));
extern _Float64 j1f64(_Float64) __attribute__((__nothrow__, __leaf__));
extern _Float64 __j1f64(_Float64) __attribute__((__nothrow__, __leaf__));
extern _Float64 jnf64(int, _Float64) __attribute__((__nothrow__, __leaf__));
extern _Float64 __jnf64(int, _Float64) __attribute__((__nothrow__, __leaf__));
extern _Float64 y0f64(_Float64) __attribute__((__nothrow__, __leaf__));
extern _Float64 __y0f64(_Float64) __attribute__((__nothrow__, __leaf__));
extern _Float64 y1f64(_Float64) __attribute__((__nothrow__, __leaf__));
extern _Float64 __y1f64(_Float64) __attribute__((__nothrow__, __leaf__));
extern _Float64 ynf64(int, _Float64) __attribute__((__nothrow__, __leaf__));
extern _Float64 __ynf64(int, _Float64) __attribute__((__nothrow__, __leaf__));
extern _Float64 erff64(_Float64) __attribute__((__nothrow__, __leaf__));
extern _Float64 __erff64(_Float64) __attribute__((__nothrow__, __leaf__));
extern _Float64 erfcf64(_Float64) __attribute__((__nothrow__, __leaf__));
extern _Float64 __erfcf64(_Float64) __attribute__((__nothrow__, __leaf__));
extern _Float64 lgammaf64(_Float64) __attribute__((__nothrow__, __leaf__));
extern _Float64 __lgammaf64(_Float64) __attribute__((__nothrow__, __leaf__));
extern _Float64 tgammaf64(_Float64) __attribute__((__nothrow__, __leaf__));
extern _Float64 __tgammaf64(_Float64) __attribute__((__nothrow__, __leaf__));
extern _Float64 lgammaf64_r(_Float64, int *__signgamp)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 __lgammaf64_r(_Float64, int *__signgamp)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 rintf64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 __rintf64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 nextafterf64(_Float64 __x, _Float64 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 __nextafterf64(_Float64 __x, _Float64 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 nextdownf64(_Float64 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 __nextdownf64(_Float64 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 nextupf64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 __nextupf64(_Float64 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 remainderf64(_Float64 __x, _Float64 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 __remainderf64(_Float64 __x, _Float64 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 scalbnf64(_Float64 __x, int __n)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 __scalbnf64(_Float64 __x, int __n)
    __attribute__((__nothrow__, __leaf__));
extern int ilogbf64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern int __ilogbf64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern long int llogbf64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern long int __llogbf64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float64 scalblnf64(_Float64 __x, long int __n)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 __scalblnf64(_Float64 __x, long int __n)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 nearbyintf64(_Float64 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 __nearbyintf64(_Float64 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 roundf64(_Float64 __x) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern _Float64 truncf64(_Float64 __x) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern _Float64 remquof64(_Float64 __x, _Float64 __y, int *__quo)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 __remquof64(_Float64 __x, _Float64 __y, int *__quo)
    __attribute__((__nothrow__, __leaf__));
extern long int lrintf64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern long int __lrintf64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
__extension__ extern long long int llrintf64(_Float64 __x)
    __attribute__((__nothrow__, __leaf__));
extern long long int __llrintf64(_Float64 __x)
    __attribute__((__nothrow__, __leaf__));
extern long int lroundf64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern long int __lroundf64(_Float64 __x)
    __attribute__((__nothrow__, __leaf__));
__extension__ extern long long int llroundf64(_Float64 __x)
    __attribute__((__nothrow__, __leaf__));
extern long long int __llroundf64(_Float64 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 fdimf64(_Float64 __x, _Float64 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 __fdimf64(_Float64 __x, _Float64 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 fmaxf64(_Float64 __x, _Float64 __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float64 fminf64(_Float64 __x, _Float64 __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float64 fmaf64(_Float64 __x, _Float64 __y, _Float64 __z)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 __fmaf64(_Float64 __x, _Float64 __y, _Float64 __z)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 roundevenf64(_Float64 __x)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern __intmax_t fromfpf64(_Float64 __x, int __round, unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __intmax_t __fromfpf64(_Float64 __x, int __round, unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __uintmax_t ufromfpf64(_Float64 __x, int __round, unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __uintmax_t __ufromfpf64(_Float64 __x, int __round, unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __intmax_t fromfpxf64(_Float64 __x, int __round, unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __intmax_t __fromfpxf64(_Float64 __x, int __round, unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __uintmax_t ufromfpxf64(_Float64 __x, int __round, unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __uintmax_t __ufromfpxf64(_Float64 __x, int __round,
                                 unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern int canonicalizef64(_Float64 *__cx, const _Float64 *__x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 fmaxmagf64(_Float64 __x, _Float64 __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float64 fminmagf64(_Float64 __x, _Float64 __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float64 fmaximumf64(_Float64 __x, _Float64 __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float64 fminimumf64(_Float64 __x, _Float64 __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float64 fmaximum_numf64(_Float64 __x, _Float64 __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float64 fminimum_numf64(_Float64 __x, _Float64 __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float64 fmaximum_magf64(_Float64 __x, _Float64 __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float64 fminimum_magf64(_Float64 __x, _Float64 __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float64 fmaximum_mag_numf64(_Float64 __x, _Float64 __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float64 fminimum_mag_numf64(_Float64 __x, _Float64 __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern int totalorderf64(const _Float64 *__x, const _Float64 *__y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__));
extern int totalordermagf64(const _Float64 *__x, const _Float64 *__y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__));
extern _Float64 getpayloadf64(const _Float64 *__x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 __getpayloadf64(const _Float64 *__x)
    __attribute__((__nothrow__, __leaf__));
extern int setpayloadf64(_Float64 *__x, _Float64 __payload)
    __attribute__((__nothrow__, __leaf__));
extern int setpayloadsigf64(_Float64 *__x, _Float64 __payload)
    __attribute__((__nothrow__, __leaf__));
extern int __fpclassifyf128(_Float128 __value)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern int __signbitf128(_Float128 __value)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern int __isinff128(_Float128 __value) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern int __finitef128(_Float128 __value)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern int __isnanf128(_Float128 __value) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern int __iseqsigf128(_Float128 __x, _Float128 __y)
    __attribute__((__nothrow__, __leaf__));
extern int __issignalingf128(_Float128 __value)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float128 acosf128(_Float128 __x) __attribute__((__nothrow__, __leaf__));
extern _Float128 __acosf128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 asinf128(_Float128 __x) __attribute__((__nothrow__, __leaf__));
extern _Float128 __asinf128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 atanf128(_Float128 __x) __attribute__((__nothrow__, __leaf__));
extern _Float128 __atanf128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 atan2f128(_Float128 __y, _Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 __atan2f128(_Float128 __y, _Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 cosf128(_Float128 __x) __attribute__((__nothrow__, __leaf__));
extern _Float128 __cosf128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 sinf128(_Float128 __x) __attribute__((__nothrow__, __leaf__));
extern _Float128 __sinf128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 tanf128(_Float128 __x) __attribute__((__nothrow__, __leaf__));
extern _Float128 __tanf128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 acospif128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 __acospif128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 asinpif128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 __asinpif128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 atanpif128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 __atanpif128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 atan2pif128(_Float128 __y, _Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 __atan2pif128(_Float128 __y, _Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 cospif128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 __cospif128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 sinpif128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 __sinpif128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 tanpif128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 __tanpif128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 coshf128(_Float128 __x) __attribute__((__nothrow__, __leaf__));
extern _Float128 __coshf128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 sinhf128(_Float128 __x) __attribute__((__nothrow__, __leaf__));
extern _Float128 __sinhf128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 tanhf128(_Float128 __x) __attribute__((__nothrow__, __leaf__));
extern _Float128 __tanhf128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern void sincosf128(_Float128 __x, _Float128 *__sinx, _Float128 *__cosx)
    __attribute__((__nothrow__, __leaf__));
extern void __sincosf128(_Float128 __x, _Float128 *__sinx, _Float128 *__cosx)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 acoshf128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 __acoshf128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 asinhf128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 __asinhf128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 atanhf128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 __atanhf128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 expf128(_Float128 __x) __attribute__((__nothrow__, __leaf__));
extern _Float128 __expf128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 frexpf128(_Float128 __x, int *__exponent)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 __frexpf128(_Float128 __x, int *__exponent)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 ldexpf128(_Float128 __x, int __exponent)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 __ldexpf128(_Float128 __x, int __exponent)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 logf128(_Float128 __x) __attribute__((__nothrow__, __leaf__));
extern _Float128 __logf128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 log10f128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 __log10f128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 modff128(_Float128 __x, _Float128 *__iptr)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 __modff128(_Float128 __x, _Float128 *__iptr)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2)));
extern _Float128 exp10f128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 __exp10f128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 exp2m1f128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 __exp2m1f128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 exp10m1f128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 __exp10m1f128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 log2p1f128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 __log2p1f128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 log10p1f128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 __log10p1f128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 logp1f128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 __logp1f128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 expm1f128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 __expm1f128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 log1pf128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 __log1pf128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 logbf128(_Float128 __x) __attribute__((__nothrow__, __leaf__));
extern _Float128 __logbf128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 exp2f128(_Float128 __x) __attribute__((__nothrow__, __leaf__));
extern _Float128 __exp2f128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 log2f128(_Float128 __x) __attribute__((__nothrow__, __leaf__));
extern _Float128 __log2f128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 powf128(_Float128 __x, _Float128 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 __powf128(_Float128 __x, _Float128 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 sqrtf128(_Float128 __x) __attribute__((__nothrow__, __leaf__));
extern _Float128 __sqrtf128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 hypotf128(_Float128 __x, _Float128 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 __hypotf128(_Float128 __x, _Float128 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 cbrtf128(_Float128 __x) __attribute__((__nothrow__, __leaf__));
extern _Float128 __cbrtf128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 ceilf128(_Float128 __x) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern _Float128 fabsf128(_Float128 __x) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern _Float128 floorf128(_Float128 __x) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern _Float128 fmodf128(_Float128 __x, _Float128 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 __fmodf128(_Float128 __x, _Float128 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 copysignf128(_Float128 __x, _Float128 __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float128 nanf128(const char *__tagb)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 __nanf128(const char *__tagb)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 j0f128(_Float128) __attribute__((__nothrow__, __leaf__));
extern _Float128 __j0f128(_Float128) __attribute__((__nothrow__, __leaf__));
extern _Float128 j1f128(_Float128) __attribute__((__nothrow__, __leaf__));
extern _Float128 __j1f128(_Float128) __attribute__((__nothrow__, __leaf__));
extern _Float128 jnf128(int, _Float128) __attribute__((__nothrow__, __leaf__));
extern _Float128 __jnf128(int, _Float128)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 y0f128(_Float128) __attribute__((__nothrow__, __leaf__));
extern _Float128 __y0f128(_Float128) __attribute__((__nothrow__, __leaf__));
extern _Float128 y1f128(_Float128) __attribute__((__nothrow__, __leaf__));
extern _Float128 __y1f128(_Float128) __attribute__((__nothrow__, __leaf__));
extern _Float128 ynf128(int, _Float128) __attribute__((__nothrow__, __leaf__));
extern _Float128 __ynf128(int, _Float128)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 erff128(_Float128) __attribute__((__nothrow__, __leaf__));
extern _Float128 __erff128(_Float128) __attribute__((__nothrow__, __leaf__));
extern _Float128 erfcf128(_Float128) __attribute__((__nothrow__, __leaf__));
extern _Float128 __erfcf128(_Float128) __attribute__((__nothrow__, __leaf__));
extern _Float128 lgammaf128(_Float128) __attribute__((__nothrow__, __leaf__));
extern _Float128 __lgammaf128(_Float128) __attribute__((__nothrow__, __leaf__));
extern _Float128 tgammaf128(_Float128) __attribute__((__nothrow__, __leaf__));
extern _Float128 __tgammaf128(_Float128) __attribute__((__nothrow__, __leaf__));
extern _Float128 lgammaf128_r(_Float128, int *__signgamp)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 __lgammaf128_r(_Float128, int *__signgamp)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 rintf128(_Float128 __x) __attribute__((__nothrow__, __leaf__));
extern _Float128 __rintf128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 nextafterf128(_Float128 __x, _Float128 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 __nextafterf128(_Float128 __x, _Float128 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 nextdownf128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 __nextdownf128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 nextupf128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 __nextupf128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 remainderf128(_Float128 __x, _Float128 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 __remainderf128(_Float128 __x, _Float128 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 scalbnf128(_Float128 __x, int __n)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 __scalbnf128(_Float128 __x, int __n)
    __attribute__((__nothrow__, __leaf__));
extern int ilogbf128(_Float128 __x) __attribute__((__nothrow__, __leaf__));
extern int __ilogbf128(_Float128 __x) __attribute__((__nothrow__, __leaf__));
extern long int llogbf128(_Float128 __x) __attribute__((__nothrow__, __leaf__));
extern long int __llogbf128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 scalblnf128(_Float128 __x, long int __n)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 __scalblnf128(_Float128 __x, long int __n)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 nearbyintf128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 __nearbyintf128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 roundf128(_Float128 __x) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern _Float128 truncf128(_Float128 __x) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern _Float128 remquof128(_Float128 __x, _Float128 __y, int *__quo)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 __remquof128(_Float128 __x, _Float128 __y, int *__quo)
    __attribute__((__nothrow__, __leaf__));
extern long int lrintf128(_Float128 __x) __attribute__((__nothrow__, __leaf__));
extern long int __lrintf128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
__extension__ extern long long int llrintf128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern long long int __llrintf128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern long int lroundf128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern long int __lroundf128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
__extension__ extern long long int llroundf128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern long long int __llroundf128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 fdimf128(_Float128 __x, _Float128 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 __fdimf128(_Float128 __x, _Float128 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 fmaxf128(_Float128 __x, _Float128 __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float128 fminf128(_Float128 __x, _Float128 __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float128 fmaf128(_Float128 __x, _Float128 __y, _Float128 __z)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 __fmaf128(_Float128 __x, _Float128 __y, _Float128 __z)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 roundevenf128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern __intmax_t fromfpf128(_Float128 __x, int __round, unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __intmax_t __fromfpf128(_Float128 __x, int __round, unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __uintmax_t ufromfpf128(_Float128 __x, int __round, unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __uintmax_t __ufromfpf128(_Float128 __x, int __round,
                                 unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __intmax_t fromfpxf128(_Float128 __x, int __round, unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __intmax_t __fromfpxf128(_Float128 __x, int __round,
                                unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __uintmax_t ufromfpxf128(_Float128 __x, int __round,
                                unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __uintmax_t __ufromfpxf128(_Float128 __x, int __round,
                                  unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern int canonicalizef128(_Float128 *__cx, const _Float128 *__x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 fmaxmagf128(_Float128 __x, _Float128 __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float128 fminmagf128(_Float128 __x, _Float128 __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float128 fmaximumf128(_Float128 __x, _Float128 __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float128 fminimumf128(_Float128 __x, _Float128 __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float128 fmaximum_numf128(_Float128 __x, _Float128 __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float128 fminimum_numf128(_Float128 __x, _Float128 __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float128 fmaximum_magf128(_Float128 __x, _Float128 __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float128 fminimum_magf128(_Float128 __x, _Float128 __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float128 fmaximum_mag_numf128(_Float128 __x, _Float128 __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float128 fminimum_mag_numf128(_Float128 __x, _Float128 __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern int totalorderf128(const _Float128 *__x, const _Float128 *__y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__));
extern int totalordermagf128(const _Float128 *__x, const _Float128 *__y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__));
extern _Float128 getpayloadf128(const _Float128 *__x)
    __attribute__((__nothrow__, __leaf__));
extern _Float128 __getpayloadf128(const _Float128 *__x)
    __attribute__((__nothrow__, __leaf__));
extern int setpayloadf128(_Float128 *__x, _Float128 __payload)
    __attribute__((__nothrow__, __leaf__));
extern int setpayloadsigf128(_Float128 *__x, _Float128 __payload)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x acosf32x(_Float32x __x) __attribute__((__nothrow__, __leaf__));
extern _Float32x __acosf32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x asinf32x(_Float32x __x) __attribute__((__nothrow__, __leaf__));
extern _Float32x __asinf32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x atanf32x(_Float32x __x) __attribute__((__nothrow__, __leaf__));
extern _Float32x __atanf32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x atan2f32x(_Float32x __y, _Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x __atan2f32x(_Float32x __y, _Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x cosf32x(_Float32x __x) __attribute__((__nothrow__, __leaf__));
extern _Float32x __cosf32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x sinf32x(_Float32x __x) __attribute__((__nothrow__, __leaf__));
extern _Float32x __sinf32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x tanf32x(_Float32x __x) __attribute__((__nothrow__, __leaf__));
extern _Float32x __tanf32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x acospif32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x __acospif32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x asinpif32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x __asinpif32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x atanpif32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x __atanpif32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x atan2pif32x(_Float32x __y, _Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x __atan2pif32x(_Float32x __y, _Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x cospif32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x __cospif32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x sinpif32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x __sinpif32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x tanpif32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x __tanpif32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x coshf32x(_Float32x __x) __attribute__((__nothrow__, __leaf__));
extern _Float32x __coshf32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x sinhf32x(_Float32x __x) __attribute__((__nothrow__, __leaf__));
extern _Float32x __sinhf32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x tanhf32x(_Float32x __x) __attribute__((__nothrow__, __leaf__));
extern _Float32x __tanhf32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern void sincosf32x(_Float32x __x, _Float32x *__sinx, _Float32x *__cosx)
    __attribute__((__nothrow__, __leaf__));
extern void __sincosf32x(_Float32x __x, _Float32x *__sinx, _Float32x *__cosx)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x acoshf32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x __acoshf32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x asinhf32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x __asinhf32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x atanhf32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x __atanhf32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x expf32x(_Float32x __x) __attribute__((__nothrow__, __leaf__));
extern _Float32x __expf32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x frexpf32x(_Float32x __x, int *__exponent)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x __frexpf32x(_Float32x __x, int *__exponent)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x ldexpf32x(_Float32x __x, int __exponent)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x __ldexpf32x(_Float32x __x, int __exponent)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x logf32x(_Float32x __x) __attribute__((__nothrow__, __leaf__));
extern _Float32x __logf32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x log10f32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x __log10f32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x modff32x(_Float32x __x, _Float32x *__iptr)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x __modff32x(_Float32x __x, _Float32x *__iptr)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2)));
extern _Float32x exp10f32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x __exp10f32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x exp2m1f32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x __exp2m1f32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x exp10m1f32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x __exp10m1f32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x log2p1f32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x __log2p1f32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x log10p1f32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x __log10p1f32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x logp1f32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x __logp1f32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x expm1f32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x __expm1f32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x log1pf32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x __log1pf32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x logbf32x(_Float32x __x) __attribute__((__nothrow__, __leaf__));
extern _Float32x __logbf32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x exp2f32x(_Float32x __x) __attribute__((__nothrow__, __leaf__));
extern _Float32x __exp2f32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x log2f32x(_Float32x __x) __attribute__((__nothrow__, __leaf__));
extern _Float32x __log2f32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x powf32x(_Float32x __x, _Float32x __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x __powf32x(_Float32x __x, _Float32x __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x sqrtf32x(_Float32x __x) __attribute__((__nothrow__, __leaf__));
extern _Float32x __sqrtf32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x hypotf32x(_Float32x __x, _Float32x __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x __hypotf32x(_Float32x __x, _Float32x __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x cbrtf32x(_Float32x __x) __attribute__((__nothrow__, __leaf__));
extern _Float32x __cbrtf32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x ceilf32x(_Float32x __x) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern _Float32x fabsf32x(_Float32x __x) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern _Float32x floorf32x(_Float32x __x) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern _Float32x fmodf32x(_Float32x __x, _Float32x __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x __fmodf32x(_Float32x __x, _Float32x __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x copysignf32x(_Float32x __x, _Float32x __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float32x nanf32x(const char *__tagb)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x __nanf32x(const char *__tagb)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x j0f32x(_Float32x) __attribute__((__nothrow__, __leaf__));
extern _Float32x __j0f32x(_Float32x) __attribute__((__nothrow__, __leaf__));
extern _Float32x j1f32x(_Float32x) __attribute__((__nothrow__, __leaf__));
extern _Float32x __j1f32x(_Float32x) __attribute__((__nothrow__, __leaf__));
extern _Float32x jnf32x(int, _Float32x) __attribute__((__nothrow__, __leaf__));
extern _Float32x __jnf32x(int, _Float32x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x y0f32x(_Float32x) __attribute__((__nothrow__, __leaf__));
extern _Float32x __y0f32x(_Float32x) __attribute__((__nothrow__, __leaf__));
extern _Float32x y1f32x(_Float32x) __attribute__((__nothrow__, __leaf__));
extern _Float32x __y1f32x(_Float32x) __attribute__((__nothrow__, __leaf__));
extern _Float32x ynf32x(int, _Float32x) __attribute__((__nothrow__, __leaf__));
extern _Float32x __ynf32x(int, _Float32x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x erff32x(_Float32x) __attribute__((__nothrow__, __leaf__));
extern _Float32x __erff32x(_Float32x) __attribute__((__nothrow__, __leaf__));
extern _Float32x erfcf32x(_Float32x) __attribute__((__nothrow__, __leaf__));
extern _Float32x __erfcf32x(_Float32x) __attribute__((__nothrow__, __leaf__));
extern _Float32x lgammaf32x(_Float32x) __attribute__((__nothrow__, __leaf__));
extern _Float32x __lgammaf32x(_Float32x) __attribute__((__nothrow__, __leaf__));
extern _Float32x tgammaf32x(_Float32x) __attribute__((__nothrow__, __leaf__));
extern _Float32x __tgammaf32x(_Float32x) __attribute__((__nothrow__, __leaf__));
extern _Float32x lgammaf32x_r(_Float32x, int *__signgamp)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x __lgammaf32x_r(_Float32x, int *__signgamp)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x rintf32x(_Float32x __x) __attribute__((__nothrow__, __leaf__));
extern _Float32x __rintf32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x nextafterf32x(_Float32x __x, _Float32x __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x __nextafterf32x(_Float32x __x, _Float32x __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x nextdownf32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x __nextdownf32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x nextupf32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x __nextupf32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x remainderf32x(_Float32x __x, _Float32x __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x __remainderf32x(_Float32x __x, _Float32x __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x scalbnf32x(_Float32x __x, int __n)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x __scalbnf32x(_Float32x __x, int __n)
    __attribute__((__nothrow__, __leaf__));
extern int ilogbf32x(_Float32x __x) __attribute__((__nothrow__, __leaf__));
extern int __ilogbf32x(_Float32x __x) __attribute__((__nothrow__, __leaf__));
extern long int llogbf32x(_Float32x __x) __attribute__((__nothrow__, __leaf__));
extern long int __llogbf32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x scalblnf32x(_Float32x __x, long int __n)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x __scalblnf32x(_Float32x __x, long int __n)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x nearbyintf32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x __nearbyintf32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x roundf32x(_Float32x __x) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern _Float32x truncf32x(_Float32x __x) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern _Float32x remquof32x(_Float32x __x, _Float32x __y, int *__quo)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x __remquof32x(_Float32x __x, _Float32x __y, int *__quo)
    __attribute__((__nothrow__, __leaf__));
extern long int lrintf32x(_Float32x __x) __attribute__((__nothrow__, __leaf__));
extern long int __lrintf32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
__extension__ extern long long int llrintf32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern long long int __llrintf32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern long int lroundf32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern long int __lroundf32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
__extension__ extern long long int llroundf32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern long long int __llroundf32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x fdimf32x(_Float32x __x, _Float32x __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x __fdimf32x(_Float32x __x, _Float32x __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x fmaxf32x(_Float32x __x, _Float32x __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float32x fminf32x(_Float32x __x, _Float32x __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float32x fmaf32x(_Float32x __x, _Float32x __y, _Float32x __z)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x __fmaf32x(_Float32x __x, _Float32x __y, _Float32x __z)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x roundevenf32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern __intmax_t fromfpf32x(_Float32x __x, int __round, unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __intmax_t __fromfpf32x(_Float32x __x, int __round, unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __uintmax_t ufromfpf32x(_Float32x __x, int __round, unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __uintmax_t __ufromfpf32x(_Float32x __x, int __round,
                                 unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __intmax_t fromfpxf32x(_Float32x __x, int __round, unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __intmax_t __fromfpxf32x(_Float32x __x, int __round,
                                unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __uintmax_t ufromfpxf32x(_Float32x __x, int __round,
                                unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __uintmax_t __ufromfpxf32x(_Float32x __x, int __round,
                                  unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern int canonicalizef32x(_Float32x *__cx, const _Float32x *__x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x fmaxmagf32x(_Float32x __x, _Float32x __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float32x fminmagf32x(_Float32x __x, _Float32x __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float32x fmaximumf32x(_Float32x __x, _Float32x __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float32x fminimumf32x(_Float32x __x, _Float32x __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float32x fmaximum_numf32x(_Float32x __x, _Float32x __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float32x fminimum_numf32x(_Float32x __x, _Float32x __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float32x fmaximum_magf32x(_Float32x __x, _Float32x __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float32x fminimum_magf32x(_Float32x __x, _Float32x __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float32x fmaximum_mag_numf32x(_Float32x __x, _Float32x __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float32x fminimum_mag_numf32x(_Float32x __x, _Float32x __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern int totalorderf32x(const _Float32x *__x, const _Float32x *__y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__));
extern int totalordermagf32x(const _Float32x *__x, const _Float32x *__y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__));
extern _Float32x getpayloadf32x(const _Float32x *__x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x __getpayloadf32x(const _Float32x *__x)
    __attribute__((__nothrow__, __leaf__));
extern int setpayloadf32x(_Float32x *__x, _Float32x __payload)
    __attribute__((__nothrow__, __leaf__));
extern int setpayloadsigf32x(_Float32x *__x, _Float32x __payload)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x acosf64x(_Float64x __x) __attribute__((__nothrow__, __leaf__));
extern _Float64x __acosf64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x asinf64x(_Float64x __x) __attribute__((__nothrow__, __leaf__));
extern _Float64x __asinf64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x atanf64x(_Float64x __x) __attribute__((__nothrow__, __leaf__));
extern _Float64x __atanf64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x atan2f64x(_Float64x __y, _Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x __atan2f64x(_Float64x __y, _Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x cosf64x(_Float64x __x) __attribute__((__nothrow__, __leaf__));
extern _Float64x __cosf64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x sinf64x(_Float64x __x) __attribute__((__nothrow__, __leaf__));
extern _Float64x __sinf64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x tanf64x(_Float64x __x) __attribute__((__nothrow__, __leaf__));
extern _Float64x __tanf64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x acospif64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x __acospif64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x asinpif64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x __asinpif64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x atanpif64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x __atanpif64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x atan2pif64x(_Float64x __y, _Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x __atan2pif64x(_Float64x __y, _Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x cospif64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x __cospif64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x sinpif64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x __sinpif64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x tanpif64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x __tanpif64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x coshf64x(_Float64x __x) __attribute__((__nothrow__, __leaf__));
extern _Float64x __coshf64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x sinhf64x(_Float64x __x) __attribute__((__nothrow__, __leaf__));
extern _Float64x __sinhf64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x tanhf64x(_Float64x __x) __attribute__((__nothrow__, __leaf__));
extern _Float64x __tanhf64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern void sincosf64x(_Float64x __x, _Float64x *__sinx, _Float64x *__cosx)
    __attribute__((__nothrow__, __leaf__));
extern void __sincosf64x(_Float64x __x, _Float64x *__sinx, _Float64x *__cosx)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x acoshf64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x __acoshf64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x asinhf64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x __asinhf64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x atanhf64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x __atanhf64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x expf64x(_Float64x __x) __attribute__((__nothrow__, __leaf__));
extern _Float64x __expf64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x frexpf64x(_Float64x __x, int *__exponent)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x __frexpf64x(_Float64x __x, int *__exponent)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x ldexpf64x(_Float64x __x, int __exponent)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x __ldexpf64x(_Float64x __x, int __exponent)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x logf64x(_Float64x __x) __attribute__((__nothrow__, __leaf__));
extern _Float64x __logf64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x log10f64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x __log10f64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x modff64x(_Float64x __x, _Float64x *__iptr)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x __modff64x(_Float64x __x, _Float64x *__iptr)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2)));
extern _Float64x exp10f64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x __exp10f64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x exp2m1f64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x __exp2m1f64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x exp10m1f64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x __exp10m1f64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x log2p1f64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x __log2p1f64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x log10p1f64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x __log10p1f64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x logp1f64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x __logp1f64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x expm1f64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x __expm1f64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x log1pf64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x __log1pf64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x logbf64x(_Float64x __x) __attribute__((__nothrow__, __leaf__));
extern _Float64x __logbf64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x exp2f64x(_Float64x __x) __attribute__((__nothrow__, __leaf__));
extern _Float64x __exp2f64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x log2f64x(_Float64x __x) __attribute__((__nothrow__, __leaf__));
extern _Float64x __log2f64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x powf64x(_Float64x __x, _Float64x __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x __powf64x(_Float64x __x, _Float64x __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x sqrtf64x(_Float64x __x) __attribute__((__nothrow__, __leaf__));
extern _Float64x __sqrtf64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x hypotf64x(_Float64x __x, _Float64x __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x __hypotf64x(_Float64x __x, _Float64x __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x cbrtf64x(_Float64x __x) __attribute__((__nothrow__, __leaf__));
extern _Float64x __cbrtf64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x ceilf64x(_Float64x __x) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern _Float64x fabsf64x(_Float64x __x) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern _Float64x floorf64x(_Float64x __x) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern _Float64x fmodf64x(_Float64x __x, _Float64x __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x __fmodf64x(_Float64x __x, _Float64x __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x copysignf64x(_Float64x __x, _Float64x __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float64x nanf64x(const char *__tagb)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x __nanf64x(const char *__tagb)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x j0f64x(_Float64x) __attribute__((__nothrow__, __leaf__));
extern _Float64x __j0f64x(_Float64x) __attribute__((__nothrow__, __leaf__));
extern _Float64x j1f64x(_Float64x) __attribute__((__nothrow__, __leaf__));
extern _Float64x __j1f64x(_Float64x) __attribute__((__nothrow__, __leaf__));
extern _Float64x jnf64x(int, _Float64x) __attribute__((__nothrow__, __leaf__));
extern _Float64x __jnf64x(int, _Float64x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x y0f64x(_Float64x) __attribute__((__nothrow__, __leaf__));
extern _Float64x __y0f64x(_Float64x) __attribute__((__nothrow__, __leaf__));
extern _Float64x y1f64x(_Float64x) __attribute__((__nothrow__, __leaf__));
extern _Float64x __y1f64x(_Float64x) __attribute__((__nothrow__, __leaf__));
extern _Float64x ynf64x(int, _Float64x) __attribute__((__nothrow__, __leaf__));
extern _Float64x __ynf64x(int, _Float64x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x erff64x(_Float64x) __attribute__((__nothrow__, __leaf__));
extern _Float64x __erff64x(_Float64x) __attribute__((__nothrow__, __leaf__));
extern _Float64x erfcf64x(_Float64x) __attribute__((__nothrow__, __leaf__));
extern _Float64x __erfcf64x(_Float64x) __attribute__((__nothrow__, __leaf__));
extern _Float64x lgammaf64x(_Float64x) __attribute__((__nothrow__, __leaf__));
extern _Float64x __lgammaf64x(_Float64x) __attribute__((__nothrow__, __leaf__));
extern _Float64x tgammaf64x(_Float64x) __attribute__((__nothrow__, __leaf__));
extern _Float64x __tgammaf64x(_Float64x) __attribute__((__nothrow__, __leaf__));
extern _Float64x lgammaf64x_r(_Float64x, int *__signgamp)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x __lgammaf64x_r(_Float64x, int *__signgamp)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x rintf64x(_Float64x __x) __attribute__((__nothrow__, __leaf__));
extern _Float64x __rintf64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x nextafterf64x(_Float64x __x, _Float64x __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x __nextafterf64x(_Float64x __x, _Float64x __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x nextdownf64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x __nextdownf64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x nextupf64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x __nextupf64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x remainderf64x(_Float64x __x, _Float64x __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x __remainderf64x(_Float64x __x, _Float64x __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x scalbnf64x(_Float64x __x, int __n)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x __scalbnf64x(_Float64x __x, int __n)
    __attribute__((__nothrow__, __leaf__));
extern int ilogbf64x(_Float64x __x) __attribute__((__nothrow__, __leaf__));
extern int __ilogbf64x(_Float64x __x) __attribute__((__nothrow__, __leaf__));
extern long int llogbf64x(_Float64x __x) __attribute__((__nothrow__, __leaf__));
extern long int __llogbf64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x scalblnf64x(_Float64x __x, long int __n)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x __scalblnf64x(_Float64x __x, long int __n)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x nearbyintf64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x __nearbyintf64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x roundf64x(_Float64x __x) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern _Float64x truncf64x(_Float64x __x) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern _Float64x remquof64x(_Float64x __x, _Float64x __y, int *__quo)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x __remquof64x(_Float64x __x, _Float64x __y, int *__quo)
    __attribute__((__nothrow__, __leaf__));
extern long int lrintf64x(_Float64x __x) __attribute__((__nothrow__, __leaf__));
extern long int __lrintf64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
__extension__ extern long long int llrintf64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern long long int __llrintf64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern long int lroundf64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern long int __lroundf64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
__extension__ extern long long int llroundf64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern long long int __llroundf64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x fdimf64x(_Float64x __x, _Float64x __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x __fdimf64x(_Float64x __x, _Float64x __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x fmaxf64x(_Float64x __x, _Float64x __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float64x fminf64x(_Float64x __x, _Float64x __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float64x fmaf64x(_Float64x __x, _Float64x __y, _Float64x __z)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x __fmaf64x(_Float64x __x, _Float64x __y, _Float64x __z)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x roundevenf64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern __intmax_t fromfpf64x(_Float64x __x, int __round, unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __intmax_t __fromfpf64x(_Float64x __x, int __round, unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __uintmax_t ufromfpf64x(_Float64x __x, int __round, unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __uintmax_t __ufromfpf64x(_Float64x __x, int __round,
                                 unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __intmax_t fromfpxf64x(_Float64x __x, int __round, unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __intmax_t __fromfpxf64x(_Float64x __x, int __round,
                                unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __uintmax_t ufromfpxf64x(_Float64x __x, int __round,
                                unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern __uintmax_t __ufromfpxf64x(_Float64x __x, int __round,
                                  unsigned int __width)
    __attribute__((__nothrow__, __leaf__));
extern int canonicalizef64x(_Float64x *__cx, const _Float64x *__x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x fmaxmagf64x(_Float64x __x, _Float64x __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float64x fminmagf64x(_Float64x __x, _Float64x __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float64x fmaximumf64x(_Float64x __x, _Float64x __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float64x fminimumf64x(_Float64x __x, _Float64x __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float64x fmaximum_numf64x(_Float64x __x, _Float64x __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float64x fminimum_numf64x(_Float64x __x, _Float64x __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float64x fmaximum_magf64x(_Float64x __x, _Float64x __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float64x fminimum_magf64x(_Float64x __x, _Float64x __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float64x fmaximum_mag_numf64x(_Float64x __x, _Float64x __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern _Float64x fminimum_mag_numf64x(_Float64x __x, _Float64x __y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern int totalorderf64x(const _Float64x *__x, const _Float64x *__y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__));
extern int totalordermagf64x(const _Float64x *__x, const _Float64x *__y)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__));
extern _Float64x getpayloadf64x(const _Float64x *__x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x __getpayloadf64x(const _Float64x *__x)
    __attribute__((__nothrow__, __leaf__));
extern int setpayloadf64x(_Float64x *__x, _Float64x __payload)
    __attribute__((__nothrow__, __leaf__));
extern int setpayloadsigf64x(_Float64x *__x, _Float64x __payload)
    __attribute__((__nothrow__, __leaf__));
extern float fadd(double __x, double __y)
    __attribute__((__nothrow__, __leaf__));
extern float fdiv(double __x, double __y)
    __attribute__((__nothrow__, __leaf__));
extern float ffma(double __x, double __y, double __z)
    __attribute__((__nothrow__, __leaf__));
extern float fmul(double __x, double __y)
    __attribute__((__nothrow__, __leaf__));
extern float fsqrt(double __x) __attribute__((__nothrow__, __leaf__));
extern float fsub(double __x, double __y)
    __attribute__((__nothrow__, __leaf__));
extern float faddl(long double __x, long double __y)
    __attribute__((__nothrow__, __leaf__));
extern float fdivl(long double __x, long double __y)
    __attribute__((__nothrow__, __leaf__));
extern float ffmal(long double __x, long double __y, long double __z)
    __attribute__((__nothrow__, __leaf__));
extern float fmull(long double __x, long double __y)
    __attribute__((__nothrow__, __leaf__));
extern float fsqrtl(long double __x) __attribute__((__nothrow__, __leaf__));
extern float fsubl(long double __x, long double __y)
    __attribute__((__nothrow__, __leaf__));
extern double daddl(long double __x, long double __y)
    __attribute__((__nothrow__, __leaf__));
extern double ddivl(long double __x, long double __y)
    __attribute__((__nothrow__, __leaf__));
extern double dfmal(long double __x, long double __y, long double __z)
    __attribute__((__nothrow__, __leaf__));
extern double dmull(long double __x, long double __y)
    __attribute__((__nothrow__, __leaf__));
extern double dsqrtl(long double __x) __attribute__((__nothrow__, __leaf__));
extern double dsubl(long double __x, long double __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 f32addf32x(_Float32x __x, _Float32x __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 f32divf32x(_Float32x __x, _Float32x __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 f32fmaf32x(_Float32x __x, _Float32x __y, _Float32x __z)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 f32mulf32x(_Float32x __x, _Float32x __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 f32sqrtf32x(_Float32x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 f32subf32x(_Float32x __x, _Float32x __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 f32addf64(_Float64 __x, _Float64 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 f32divf64(_Float64 __x, _Float64 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 f32fmaf64(_Float64 __x, _Float64 __y, _Float64 __z)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 f32mulf64(_Float64 __x, _Float64 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 f32sqrtf64(_Float64 __x) __attribute__((__nothrow__, __leaf__));
extern _Float32 f32subf64(_Float64 __x, _Float64 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 f32addf64x(_Float64x __x, _Float64x __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 f32divf64x(_Float64x __x, _Float64x __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 f32fmaf64x(_Float64x __x, _Float64x __y, _Float64x __z)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 f32mulf64x(_Float64x __x, _Float64x __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 f32sqrtf64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 f32subf64x(_Float64x __x, _Float64x __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 f32addf128(_Float128 __x, _Float128 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 f32divf128(_Float128 __x, _Float128 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 f32fmaf128(_Float128 __x, _Float128 __y, _Float128 __z)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 f32mulf128(_Float128 __x, _Float128 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 f32sqrtf128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32 f32subf128(_Float128 __x, _Float128 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x f32xaddf64(_Float64 __x, _Float64 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x f32xdivf64(_Float64 __x, _Float64 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x f32xfmaf64(_Float64 __x, _Float64 __y, _Float64 __z)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x f32xmulf64(_Float64 __x, _Float64 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x f32xsqrtf64(_Float64 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x f32xsubf64(_Float64 __x, _Float64 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x f32xaddf64x(_Float64x __x, _Float64x __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x f32xdivf64x(_Float64x __x, _Float64x __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x f32xfmaf64x(_Float64x __x, _Float64x __y, _Float64x __z)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x f32xmulf64x(_Float64x __x, _Float64x __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x f32xsqrtf64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x f32xsubf64x(_Float64x __x, _Float64x __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x f32xaddf128(_Float128 __x, _Float128 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x f32xdivf128(_Float128 __x, _Float128 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x f32xfmaf128(_Float128 __x, _Float128 __y, _Float128 __z)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x f32xmulf128(_Float128 __x, _Float128 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x f32xsqrtf128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float32x f32xsubf128(_Float128 __x, _Float128 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 f64addf64x(_Float64x __x, _Float64x __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 f64divf64x(_Float64x __x, _Float64x __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 f64fmaf64x(_Float64x __x, _Float64x __y, _Float64x __z)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 f64mulf64x(_Float64x __x, _Float64x __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 f64sqrtf64x(_Float64x __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 f64subf64x(_Float64x __x, _Float64x __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 f64addf128(_Float128 __x, _Float128 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 f64divf128(_Float128 __x, _Float128 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 f64fmaf128(_Float128 __x, _Float128 __y, _Float128 __z)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 f64mulf128(_Float128 __x, _Float128 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 f64sqrtf128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64 f64subf128(_Float128 __x, _Float128 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x f64xaddf128(_Float128 __x, _Float128 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x f64xdivf128(_Float128 __x, _Float128 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x f64xfmaf128(_Float128 __x, _Float128 __y, _Float128 __z)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x f64xmulf128(_Float128 __x, _Float128 __y)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x f64xsqrtf128(_Float128 __x)
    __attribute__((__nothrow__, __leaf__));
extern _Float64x f64xsubf128(_Float128 __x, _Float128 __y)
    __attribute__((__nothrow__, __leaf__));
extern int signgam;
enum {
  FP_NAN = 0,
  FP_INFINITE = 1,
  FP_ZERO = 2,
  FP_SUBNORMAL = 3,
  FP_NORMAL = 4
};
extern int __iscanonicall(long double __x)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));

typedef long int ptrdiff_t;
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld
      __attribute__((__aligned__(__alignof__(long double))));
} max_align_t;

extern void _dl_mcount_wrapper_check(void *__selfpc)
    __attribute__((__nothrow__, __leaf__));

typedef long int Lmid_t;

extern void *dlopen(const char *__file, int __mode)
    __attribute__((__nothrow__));
extern int dlclose(void *__handle) __attribute__((__nothrow__))
__attribute__((__nonnull__(1)));
extern void *dlsym(void *__restrict __handle, const char *__restrict __name)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2)));
extern void *dlmopen(Lmid_t __nsid, const char *__file, int __mode)
    __attribute__((__nothrow__));
extern void *dlvsym(void *__restrict __handle, const char *__restrict __name,
                    const char *__restrict __version)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2, 3)));
extern char *dlerror(void) __attribute__((__nothrow__, __leaf__));
typedef struct {
  const char *dli_fname;
  void *dli_fbase;
  const char *dli_sname;
  void *dli_saddr;
} Dl_info;
extern int dladdr(const void *__address, Dl_info *__info)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2)));
extern int dladdr1(const void *__address, Dl_info *__info, void **__extra_info,
                   int __flags) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(2)));
enum { RTLD_DL_SYMENT = 1, RTLD_DL_LINKMAP = 2 };
extern int dlinfo(void *__restrict __handle, int __request,
                  void *__restrict __arg) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(1, 3)));
enum {
  RTLD_DI_LMID = 1,
  RTLD_DI_LINKMAP = 2,
  RTLD_DI_CONFIGADDR = 3,
  RTLD_DI_SERINFO = 4,
  RTLD_DI_SERINFOSIZE = 5,
  RTLD_DI_ORIGIN = 6,
  RTLD_DI_PROFILENAME = 7,
  RTLD_DI_PROFILEOUT = 8,
  RTLD_DI_TLS_MODID = 9,
  RTLD_DI_TLS_DATA = 10,
  RTLD_DI_PHDR = 11,
  RTLD_DI_MAX = 11
};
typedef struct {
  char *dls_name;
  unsigned int dls_flags;
} Dl_serpath;
typedef struct {
  size_t dls_size;
  unsigned int dls_cnt;
  __extension__ union {
    Dl_serpath dls_serpath[0];
    Dl_serpath __dls_serpath_pad[1];
  };
} Dl_serinfo;
struct dl_find_object {
  __extension__ unsigned long long int dlfo_flags;
  void *dlfo_map_start;
  void *dlfo_map_end;
  struct link_map *dlfo_link_map;
  void *dlfo_eh_frame;
  __extension__ unsigned long long int __dflo_reserved[7];
};
int _dl_find_object(void *__address, struct dl_find_object *__result)
    __attribute__((__nothrow__, __leaf__));

extern long int __sysconf(int __name) __attribute__((__nothrow__, __leaf__));

typedef int __gwchar_t;

typedef struct {
  long int quot;
  long int rem;
} imaxdiv_t;
extern intmax_t imaxabs(intmax_t __n) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern imaxdiv_t imaxdiv(intmax_t __numer, intmax_t __denom)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern intmax_t strtoimax(const char *__restrict __nptr,
                          char **__restrict __endptr, int __base)
    __attribute__((__nothrow__, __leaf__));
extern uintmax_t strtoumax(const char *__restrict __nptr,
                           char **__restrict __endptr, int __base)
    __attribute__((__nothrow__, __leaf__));
extern intmax_t wcstoimax(const __gwchar_t *__restrict __nptr,
                          __gwchar_t **__restrict __endptr, int __base)
    __attribute__((__nothrow__, __leaf__));
extern uintmax_t wcstoumax(const __gwchar_t *__restrict __nptr,
                           __gwchar_t **__restrict __endptr, int __base)
    __attribute__((__nothrow__, __leaf__));
extern intmax_t strtoimax(const char *__restrict __nptr,
                          char **__restrict __endptr,
                          int __base) __asm__(""
                                              "__isoc23_strtoimax")
    __attribute__((__nothrow__, __leaf__));
extern uintmax_t strtoumax(const char *__restrict __nptr,
                           char **__restrict __endptr,
                           int __base) __asm__(""
                                               "__isoc23_strtoumax")
    __attribute__((__nothrow__, __leaf__));
extern intmax_t wcstoimax(const __gwchar_t *__restrict __nptr,
                          __gwchar_t **__restrict __endptr,
                          int __base) __asm__(""
                                              "__isoc23_wcstoimax")
    __attribute__((__nothrow__, __leaf__));
extern uintmax_t wcstoumax(const __gwchar_t *__restrict __nptr,
                           __gwchar_t **__restrict __endptr,
                           int __base) __asm__(""
                                               "__isoc23_wcstoumax")
    __attribute__((__nothrow__, __leaf__));

typedef int64_t zend_long;
typedef uint64_t zend_ulong;
typedef int64_t zend_off_t;
static const char long_min_digits[] = "9223372036854775808";
typedef max_align_t zend_max_align_t;
typedef int __m64 __attribute__((__vector_size__(8), __may_alias__));
typedef int __m32 __attribute__((__vector_size__(4), __may_alias__));
typedef short __m16 __attribute__((__vector_size__(2), __may_alias__));
typedef int __m64_u
    __attribute__((__vector_size__(8), __may_alias__, __aligned__(1)));
typedef int __m32_u
    __attribute__((__vector_size__(4), __may_alias__, __aligned__(1)));
typedef short __m16_u
    __attribute__((__vector_size__(2), __may_alias__, __aligned__(1)));
typedef int __v2si __attribute__((__vector_size__(8)));
typedef short __v4hi __attribute__((__vector_size__(8)));
typedef char __v8qi __attribute__((__vector_size__(8)));
typedef long long __v1di __attribute__((__vector_size__(8)));
typedef float __v2sf __attribute__((__vector_size__(8)));
extern __inline void
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_empty(void) {
  __builtin_ia32_emms();
}
extern __inline void
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_empty(void) {
  _mm_empty();
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvtsi32_si64(int __i) {
  return (__m64)__builtin_ia32_vec_init_v2si(__i, 0);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_from_int(int __i) {
  return _mm_cvtsi32_si64(__i);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_from_int64(long long __i) {
  return (__m64)__i;
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvtsi64_m64(long long __i) {
  return (__m64)__i;
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvtsi64x_si64(long long __i) {
  return (__m64)__i;
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_set_pi64x(long long __i) {
  return (__m64)__i;
}
extern __inline int
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvtsi64_si32(__m64 __i) {
  return __builtin_ia32_vec_ext_v2si((__v2si)__i, 0);
}
extern __inline int
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_to_int(__m64 __i) {
  return _mm_cvtsi64_si32(__i);
}
extern __inline long long
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_to_int64(__m64 __i) {
  return (long long)__i;
}
extern __inline long long
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvtm64_si64(__m64 __i) {
  return (long long)__i;
}
extern __inline long long
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvtsi64_si64x(__m64 __i) {
  return (long long)__i;
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_packs_pi16(__m64 __m1, __m64 __m2) {
  return (__m64)__builtin_ia32_packsswb((__v4hi)__m1, (__v4hi)__m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_packsswb(__m64 __m1, __m64 __m2) {
  return _mm_packs_pi16(__m1, __m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_packs_pi32(__m64 __m1, __m64 __m2) {
  return (__m64)__builtin_ia32_packssdw((__v2si)__m1, (__v2si)__m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_packssdw(__m64 __m1, __m64 __m2) {
  return _mm_packs_pi32(__m1, __m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_packs_pu16(__m64 __m1, __m64 __m2) {
  return (__m64)__builtin_ia32_packuswb((__v4hi)__m1, (__v4hi)__m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_packuswb(__m64 __m1, __m64 __m2) {
  return _mm_packs_pu16(__m1, __m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_unpackhi_pi8(__m64 __m1, __m64 __m2) {
  return (__m64)__builtin_ia32_punpckhbw((__v8qi)__m1, (__v8qi)__m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_punpckhbw(__m64 __m1, __m64 __m2) {
  return _mm_unpackhi_pi8(__m1, __m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_unpackhi_pi16(__m64 __m1, __m64 __m2) {
  return (__m64)__builtin_ia32_punpckhwd((__v4hi)__m1, (__v4hi)__m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_punpckhwd(__m64 __m1, __m64 __m2) {
  return _mm_unpackhi_pi16(__m1, __m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_unpackhi_pi32(__m64 __m1, __m64 __m2) {
  return (__m64)__builtin_ia32_punpckhdq((__v2si)__m1, (__v2si)__m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_punpckhdq(__m64 __m1, __m64 __m2) {
  return _mm_unpackhi_pi32(__m1, __m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_unpacklo_pi8(__m64 __m1, __m64 __m2) {
  return (__m64)__builtin_ia32_punpcklbw((__v8qi)__m1, (__v8qi)__m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_punpcklbw(__m64 __m1, __m64 __m2) {
  return _mm_unpacklo_pi8(__m1, __m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_unpacklo_pi16(__m64 __m1, __m64 __m2) {
  return (__m64)__builtin_ia32_punpcklwd((__v4hi)__m1, (__v4hi)__m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_punpcklwd(__m64 __m1, __m64 __m2) {
  return _mm_unpacklo_pi16(__m1, __m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_unpacklo_pi32(__m64 __m1, __m64 __m2) {
  return (__m64)__builtin_ia32_punpckldq((__v2si)__m1, (__v2si)__m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_punpckldq(__m64 __m1, __m64 __m2) {
  return _mm_unpacklo_pi32(__m1, __m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_add_pi8(__m64 __m1, __m64 __m2) {
  return (__m64)__builtin_ia32_paddb((__v8qi)__m1, (__v8qi)__m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_paddb(__m64 __m1, __m64 __m2) {
  return _mm_add_pi8(__m1, __m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_add_pi16(__m64 __m1, __m64 __m2) {
  return (__m64)__builtin_ia32_paddw((__v4hi)__m1, (__v4hi)__m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_paddw(__m64 __m1, __m64 __m2) {
  return _mm_add_pi16(__m1, __m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_add_pi32(__m64 __m1, __m64 __m2) {
  return (__m64)__builtin_ia32_paddd((__v2si)__m1, (__v2si)__m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_paddd(__m64 __m1, __m64 __m2) {
  return _mm_add_pi32(__m1, __m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_add_si64(__m64 __m1, __m64 __m2) {
  return (__m64)__builtin_ia32_paddq((__v1di)__m1, (__v1di)__m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_adds_pi8(__m64 __m1, __m64 __m2) {
  return (__m64)__builtin_ia32_paddsb((__v8qi)__m1, (__v8qi)__m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_paddsb(__m64 __m1, __m64 __m2) {
  return _mm_adds_pi8(__m1, __m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_adds_pi16(__m64 __m1, __m64 __m2) {
  return (__m64)__builtin_ia32_paddsw((__v4hi)__m1, (__v4hi)__m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_paddsw(__m64 __m1, __m64 __m2) {
  return _mm_adds_pi16(__m1, __m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_adds_pu8(__m64 __m1, __m64 __m2) {
  return (__m64)__builtin_ia32_paddusb((__v8qi)__m1, (__v8qi)__m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_paddusb(__m64 __m1, __m64 __m2) {
  return _mm_adds_pu8(__m1, __m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_adds_pu16(__m64 __m1, __m64 __m2) {
  return (__m64)__builtin_ia32_paddusw((__v4hi)__m1, (__v4hi)__m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_paddusw(__m64 __m1, __m64 __m2) {
  return _mm_adds_pu16(__m1, __m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_sub_pi8(__m64 __m1, __m64 __m2) {
  return (__m64)__builtin_ia32_psubb((__v8qi)__m1, (__v8qi)__m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_psubb(__m64 __m1, __m64 __m2) {
  return _mm_sub_pi8(__m1, __m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_sub_pi16(__m64 __m1, __m64 __m2) {
  return (__m64)__builtin_ia32_psubw((__v4hi)__m1, (__v4hi)__m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_psubw(__m64 __m1, __m64 __m2) {
  return _mm_sub_pi16(__m1, __m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_sub_pi32(__m64 __m1, __m64 __m2) {
  return (__m64)__builtin_ia32_psubd((__v2si)__m1, (__v2si)__m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_psubd(__m64 __m1, __m64 __m2) {
  return _mm_sub_pi32(__m1, __m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_sub_si64(__m64 __m1, __m64 __m2) {
  return (__m64)__builtin_ia32_psubq((__v1di)__m1, (__v1di)__m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_subs_pi8(__m64 __m1, __m64 __m2) {
  return (__m64)__builtin_ia32_psubsb((__v8qi)__m1, (__v8qi)__m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_psubsb(__m64 __m1, __m64 __m2) {
  return _mm_subs_pi8(__m1, __m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_subs_pi16(__m64 __m1, __m64 __m2) {
  return (__m64)__builtin_ia32_psubsw((__v4hi)__m1, (__v4hi)__m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_psubsw(__m64 __m1, __m64 __m2) {
  return _mm_subs_pi16(__m1, __m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_subs_pu8(__m64 __m1, __m64 __m2) {
  return (__m64)__builtin_ia32_psubusb((__v8qi)__m1, (__v8qi)__m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_psubusb(__m64 __m1, __m64 __m2) {
  return _mm_subs_pu8(__m1, __m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_subs_pu16(__m64 __m1, __m64 __m2) {
  return (__m64)__builtin_ia32_psubusw((__v4hi)__m1, (__v4hi)__m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_psubusw(__m64 __m1, __m64 __m2) {
  return _mm_subs_pu16(__m1, __m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_madd_pi16(__m64 __m1, __m64 __m2) {
  return (__m64)__builtin_ia32_pmaddwd((__v4hi)__m1, (__v4hi)__m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_pmaddwd(__m64 __m1, __m64 __m2) {
  return _mm_madd_pi16(__m1, __m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_mulhi_pi16(__m64 __m1, __m64 __m2) {
  return (__m64)__builtin_ia32_pmulhw((__v4hi)__m1, (__v4hi)__m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_pmulhw(__m64 __m1, __m64 __m2) {
  return _mm_mulhi_pi16(__m1, __m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_mullo_pi16(__m64 __m1, __m64 __m2) {
  return (__m64)__builtin_ia32_pmullw((__v4hi)__m1, (__v4hi)__m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_pmullw(__m64 __m1, __m64 __m2) {
  return _mm_mullo_pi16(__m1, __m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_sll_pi16(__m64 __m, __m64 __count) {
  return (__m64)__builtin_ia32_psllw((__v4hi)__m, (__v4hi)__count);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_psllw(__m64 __m, __m64 __count) {
  return _mm_sll_pi16(__m, __count);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_slli_pi16(__m64 __m, int __count) {
  return (__m64)__builtin_ia32_psllwi((__v4hi)__m, __count);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_psllwi(__m64 __m, int __count) {
  return _mm_slli_pi16(__m, __count);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_sll_pi32(__m64 __m, __m64 __count) {
  return (__m64)__builtin_ia32_pslld((__v2si)__m, (__v2si)__count);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_pslld(__m64 __m, __m64 __count) {
  return _mm_sll_pi32(__m, __count);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_slli_pi32(__m64 __m, int __count) {
  return (__m64)__builtin_ia32_pslldi((__v2si)__m, __count);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_pslldi(__m64 __m, int __count) {
  return _mm_slli_pi32(__m, __count);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_sll_si64(__m64 __m, __m64 __count) {
  return (__m64)__builtin_ia32_psllq((__v1di)__m, (__v1di)__count);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_psllq(__m64 __m, __m64 __count) {
  return _mm_sll_si64(__m, __count);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_slli_si64(__m64 __m, int __count) {
  return (__m64)__builtin_ia32_psllqi((__v1di)__m, __count);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_psllqi(__m64 __m, int __count) {
  return _mm_slli_si64(__m, __count);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_sra_pi16(__m64 __m, __m64 __count) {
  return (__m64)__builtin_ia32_psraw((__v4hi)__m, (__v4hi)__count);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_psraw(__m64 __m, __m64 __count) {
  return _mm_sra_pi16(__m, __count);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_srai_pi16(__m64 __m, int __count) {
  return (__m64)__builtin_ia32_psrawi((__v4hi)__m, __count);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_psrawi(__m64 __m, int __count) {
  return _mm_srai_pi16(__m, __count);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_sra_pi32(__m64 __m, __m64 __count) {
  return (__m64)__builtin_ia32_psrad((__v2si)__m, (__v2si)__count);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_psrad(__m64 __m, __m64 __count) {
  return _mm_sra_pi32(__m, __count);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_srai_pi32(__m64 __m, int __count) {
  return (__m64)__builtin_ia32_psradi((__v2si)__m, __count);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_psradi(__m64 __m, int __count) {
  return _mm_srai_pi32(__m, __count);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_srl_pi16(__m64 __m, __m64 __count) {
  return (__m64)__builtin_ia32_psrlw((__v4hi)__m, (__v4hi)__count);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_psrlw(__m64 __m, __m64 __count) {
  return _mm_srl_pi16(__m, __count);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_srli_pi16(__m64 __m, int __count) {
  return (__m64)__builtin_ia32_psrlwi((__v4hi)__m, __count);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_psrlwi(__m64 __m, int __count) {
  return _mm_srli_pi16(__m, __count);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_srl_pi32(__m64 __m, __m64 __count) {
  return (__m64)__builtin_ia32_psrld((__v2si)__m, (__v2si)__count);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_psrld(__m64 __m, __m64 __count) {
  return _mm_srl_pi32(__m, __count);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_srli_pi32(__m64 __m, int __count) {
  return (__m64)__builtin_ia32_psrldi((__v2si)__m, __count);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_psrldi(__m64 __m, int __count) {
  return _mm_srli_pi32(__m, __count);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_srl_si64(__m64 __m, __m64 __count) {
  return (__m64)__builtin_ia32_psrlq((__v1di)__m, (__v1di)__count);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_psrlq(__m64 __m, __m64 __count) {
  return _mm_srl_si64(__m, __count);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_srli_si64(__m64 __m, int __count) {
  return (__m64)__builtin_ia32_psrlqi((__v1di)__m, __count);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_psrlqi(__m64 __m, int __count) {
  return _mm_srli_si64(__m, __count);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_and_si64(__m64 __m1, __m64 __m2) {
  return __builtin_ia32_pand(__m1, __m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_pand(__m64 __m1, __m64 __m2) {
  return _mm_and_si64(__m1, __m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_andnot_si64(__m64 __m1, __m64 __m2) {
  return __builtin_ia32_pandn(__m1, __m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_pandn(__m64 __m1, __m64 __m2) {
  return _mm_andnot_si64(__m1, __m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_or_si64(__m64 __m1, __m64 __m2) {
  return __builtin_ia32_por(__m1, __m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_por(__m64 __m1, __m64 __m2) {
  return _mm_or_si64(__m1, __m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_xor_si64(__m64 __m1, __m64 __m2) {
  return __builtin_ia32_pxor(__m1, __m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_pxor(__m64 __m1, __m64 __m2) {
  return _mm_xor_si64(__m1, __m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmpeq_pi8(__m64 __m1, __m64 __m2) {
  return (__m64)__builtin_ia32_pcmpeqb((__v8qi)__m1, (__v8qi)__m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_pcmpeqb(__m64 __m1, __m64 __m2) {
  return _mm_cmpeq_pi8(__m1, __m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmpgt_pi8(__m64 __m1, __m64 __m2) {
  return (__m64)__builtin_ia32_pcmpgtb((__v8qi)__m1, (__v8qi)__m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_pcmpgtb(__m64 __m1, __m64 __m2) {
  return _mm_cmpgt_pi8(__m1, __m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmpeq_pi16(__m64 __m1, __m64 __m2) {
  return (__m64)__builtin_ia32_pcmpeqw((__v4hi)__m1, (__v4hi)__m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_pcmpeqw(__m64 __m1, __m64 __m2) {
  return _mm_cmpeq_pi16(__m1, __m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmpgt_pi16(__m64 __m1, __m64 __m2) {
  return (__m64)__builtin_ia32_pcmpgtw((__v4hi)__m1, (__v4hi)__m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_pcmpgtw(__m64 __m1, __m64 __m2) {
  return _mm_cmpgt_pi16(__m1, __m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmpeq_pi32(__m64 __m1, __m64 __m2) {
  return (__m64)__builtin_ia32_pcmpeqd((__v2si)__m1, (__v2si)__m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_pcmpeqd(__m64 __m1, __m64 __m2) {
  return _mm_cmpeq_pi32(__m1, __m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmpgt_pi32(__m64 __m1, __m64 __m2) {
  return (__m64)__builtin_ia32_pcmpgtd((__v2si)__m1, (__v2si)__m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_pcmpgtd(__m64 __m1, __m64 __m2) {
  return _mm_cmpgt_pi32(__m1, __m2);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_setzero_si64(void) {
  return (__m64)0LL;
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_set_pi32(int __i1, int __i0) {
  return (__m64)__builtin_ia32_vec_init_v2si(__i0, __i1);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_set_pi16(short __w3, short __w2, short __w1, short __w0) {
  return (__m64)__builtin_ia32_vec_init_v4hi(__w0, __w1, __w2, __w3);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_set_pi8(char __b7, char __b6, char __b5, char __b4, char __b3,
                char __b2, char __b1, char __b0) {
  return (__m64)__builtin_ia32_vec_init_v8qi(__b0, __b1, __b2, __b3, __b4, __b5,
                                             __b6, __b7);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_setr_pi32(int __i0, int __i1) {
  return _mm_set_pi32(__i1, __i0);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_setr_pi16(short __w0, short __w1, short __w2, short __w3) {
  return _mm_set_pi16(__w3, __w2, __w1, __w0);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_setr_pi8(char __b0, char __b1, char __b2, char __b3, char __b4,
                 char __b5, char __b6, char __b7) {
  return _mm_set_pi8(__b7, __b6, __b5, __b4, __b3, __b2, __b1, __b0);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_set1_pi32(int __i) {
  return _mm_set_pi32(__i, __i);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_set1_pi16(short __w) {
  return _mm_set_pi16(__w, __w, __w, __w);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_set1_pi8(char __b) {
  return _mm_set_pi8(__b, __b, __b, __b, __b, __b, __b, __b);
}
extern int posix_memalign(void **, size_t, size_t);
static __inline void *_mm_malloc(size_t __size, size_t __alignment) {
  void *__ptr;
  if (__alignment == 1)
    return malloc(__size);
  if (__alignment == 2 || (sizeof(void *) == 8 && __alignment == 4))
    __alignment = sizeof(void *);
  if (posix_memalign(&__ptr, __alignment, __size) == 0)
    return __ptr;
  else
    return ((void *)0);
}
static __inline void _mm_free(void *__ptr) { free(__ptr); }
enum _mm_hint {
  _MM_HINT_IT0 = 19,
  _MM_HINT_IT1 = 18,
  _MM_HINT_ET0 = 7,
  _MM_HINT_ET1 = 6,
  _MM_HINT_T0 = 3,
  _MM_HINT_T1 = 2,
  _MM_HINT_T2 = 1,
  _MM_HINT_NTA = 0
};
typedef float __m128 __attribute__((__vector_size__(16), __may_alias__));
typedef float __m128_u
    __attribute__((__vector_size__(16), __may_alias__, __aligned__(1)));
typedef float __v4sf __attribute__((__vector_size__(16)));
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_undefined_ps(void) {
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Winit-self"
  __m128 __Y = __Y;
#pragma GCC diagnostic pop
  return __Y;
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_setzero_ps(void) {
  return __extension__(__m128){0.0f, 0.0f, 0.0f, 0.0f};
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_add_ss(__m128 __A, __m128 __B) {
  return (__m128)__builtin_ia32_addss((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_sub_ss(__m128 __A, __m128 __B) {
  return (__m128)__builtin_ia32_subss((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_mul_ss(__m128 __A, __m128 __B) {
  return (__m128)__builtin_ia32_mulss((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_div_ss(__m128 __A, __m128 __B) {
  return (__m128)__builtin_ia32_divss((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_sqrt_ss(__m128 __A) {
  return (__m128)__builtin_ia32_sqrtss((__v4sf)__A);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_rcp_ss(__m128 __A) {
  return (__m128)__builtin_ia32_rcpss((__v4sf)__A);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_rsqrt_ss(__m128 __A) {
  return (__m128)__builtin_ia32_rsqrtss((__v4sf)__A);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_min_ss(__m128 __A, __m128 __B) {
  return (__m128)__builtin_ia32_minss((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_max_ss(__m128 __A, __m128 __B) {
  return (__m128)__builtin_ia32_maxss((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_add_ps(__m128 __A, __m128 __B) {
  return (__m128)((__v4sf)__A + (__v4sf)__B);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_sub_ps(__m128 __A, __m128 __B) {
  return (__m128)((__v4sf)__A - (__v4sf)__B);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_mul_ps(__m128 __A, __m128 __B) {
  return (__m128)((__v4sf)__A * (__v4sf)__B);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_div_ps(__m128 __A, __m128 __B) {
  return (__m128)((__v4sf)__A / (__v4sf)__B);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_sqrt_ps(__m128 __A) {
  return (__m128)__builtin_ia32_sqrtps((__v4sf)__A);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_rcp_ps(__m128 __A) {
  return (__m128)__builtin_ia32_rcpps((__v4sf)__A);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_rsqrt_ps(__m128 __A) {
  return (__m128)__builtin_ia32_rsqrtps((__v4sf)__A);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_min_ps(__m128 __A, __m128 __B) {
  return (__m128)__builtin_ia32_minps((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_max_ps(__m128 __A, __m128 __B) {
  return (__m128)__builtin_ia32_maxps((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_and_ps(__m128 __A, __m128 __B) {
  return __builtin_ia32_andps(__A, __B);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_andnot_ps(__m128 __A, __m128 __B) {
  return __builtin_ia32_andnps(__A, __B);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_or_ps(__m128 __A, __m128 __B) {
  return __builtin_ia32_orps(__A, __B);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_xor_ps(__m128 __A, __m128 __B) {
  return __builtin_ia32_xorps(__A, __B);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmpeq_ss(__m128 __A, __m128 __B) {
  return (__m128)__builtin_ia32_cmpeqss((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmplt_ss(__m128 __A, __m128 __B) {
  return (__m128)__builtin_ia32_cmpltss((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmple_ss(__m128 __A, __m128 __B) {
  return (__m128)__builtin_ia32_cmpless((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmpgt_ss(__m128 __A, __m128 __B) {
  return (__m128)__builtin_ia32_movss(
      (__v4sf)__A, (__v4sf)__builtin_ia32_cmpltss((__v4sf)__B, (__v4sf)__A));
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmpge_ss(__m128 __A, __m128 __B) {
  return (__m128)__builtin_ia32_movss(
      (__v4sf)__A, (__v4sf)__builtin_ia32_cmpless((__v4sf)__B, (__v4sf)__A));
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmpneq_ss(__m128 __A, __m128 __B) {
  return (__m128)__builtin_ia32_cmpneqss((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmpnlt_ss(__m128 __A, __m128 __B) {
  return (__m128)__builtin_ia32_cmpnltss((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmpnle_ss(__m128 __A, __m128 __B) {
  return (__m128)__builtin_ia32_cmpnless((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmpngt_ss(__m128 __A, __m128 __B) {
  return (__m128)__builtin_ia32_movss(
      (__v4sf)__A, (__v4sf)__builtin_ia32_cmpnltss((__v4sf)__B, (__v4sf)__A));
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmpnge_ss(__m128 __A, __m128 __B) {
  return (__m128)__builtin_ia32_movss(
      (__v4sf)__A, (__v4sf)__builtin_ia32_cmpnless((__v4sf)__B, (__v4sf)__A));
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmpord_ss(__m128 __A, __m128 __B) {
  return (__m128)__builtin_ia32_cmpordss((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmpunord_ss(__m128 __A, __m128 __B) {
  return (__m128)__builtin_ia32_cmpunordss((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmpeq_ps(__m128 __A, __m128 __B) {
  return (__m128)__builtin_ia32_cmpeqps((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmplt_ps(__m128 __A, __m128 __B) {
  return (__m128)__builtin_ia32_cmpltps((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmple_ps(__m128 __A, __m128 __B) {
  return (__m128)__builtin_ia32_cmpleps((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmpgt_ps(__m128 __A, __m128 __B) {
  return (__m128)__builtin_ia32_cmpgtps((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmpge_ps(__m128 __A, __m128 __B) {
  return (__m128)__builtin_ia32_cmpgeps((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmpneq_ps(__m128 __A, __m128 __B) {
  return (__m128)__builtin_ia32_cmpneqps((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmpnlt_ps(__m128 __A, __m128 __B) {
  return (__m128)__builtin_ia32_cmpnltps((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmpnle_ps(__m128 __A, __m128 __B) {
  return (__m128)__builtin_ia32_cmpnleps((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmpngt_ps(__m128 __A, __m128 __B) {
  return (__m128)__builtin_ia32_cmpngtps((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmpnge_ps(__m128 __A, __m128 __B) {
  return (__m128)__builtin_ia32_cmpngeps((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmpord_ps(__m128 __A, __m128 __B) {
  return (__m128)__builtin_ia32_cmpordps((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmpunord_ps(__m128 __A, __m128 __B) {
  return (__m128)__builtin_ia32_cmpunordps((__v4sf)__A, (__v4sf)__B);
}
extern __inline int
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_comieq_ss(__m128 __A, __m128 __B) {
  return __builtin_ia32_comieq((__v4sf)__A, (__v4sf)__B);
}
extern __inline int
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_comilt_ss(__m128 __A, __m128 __B) {
  return __builtin_ia32_comilt((__v4sf)__A, (__v4sf)__B);
}
extern __inline int
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_comile_ss(__m128 __A, __m128 __B) {
  return __builtin_ia32_comile((__v4sf)__A, (__v4sf)__B);
}
extern __inline int
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_comigt_ss(__m128 __A, __m128 __B) {
  return __builtin_ia32_comigt((__v4sf)__A, (__v4sf)__B);
}
extern __inline int
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_comige_ss(__m128 __A, __m128 __B) {
  return __builtin_ia32_comige((__v4sf)__A, (__v4sf)__B);
}
extern __inline int
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_comineq_ss(__m128 __A, __m128 __B) {
  return __builtin_ia32_comineq((__v4sf)__A, (__v4sf)__B);
}
extern __inline int
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_ucomieq_ss(__m128 __A, __m128 __B) {
  return __builtin_ia32_ucomieq((__v4sf)__A, (__v4sf)__B);
}
extern __inline int
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_ucomilt_ss(__m128 __A, __m128 __B) {
  return __builtin_ia32_ucomilt((__v4sf)__A, (__v4sf)__B);
}
extern __inline int
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_ucomile_ss(__m128 __A, __m128 __B) {
  return __builtin_ia32_ucomile((__v4sf)__A, (__v4sf)__B);
}
extern __inline int
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_ucomigt_ss(__m128 __A, __m128 __B) {
  return __builtin_ia32_ucomigt((__v4sf)__A, (__v4sf)__B);
}
extern __inline int
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_ucomige_ss(__m128 __A, __m128 __B) {
  return __builtin_ia32_ucomige((__v4sf)__A, (__v4sf)__B);
}
extern __inline int
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_ucomineq_ss(__m128 __A, __m128 __B) {
  return __builtin_ia32_ucomineq((__v4sf)__A, (__v4sf)__B);
}
extern __inline int
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvtss_si32(__m128 __A) {
  return __builtin_ia32_cvtss2si((__v4sf)__A);
}
extern __inline int
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvt_ss2si(__m128 __A) {
  return _mm_cvtss_si32(__A);
}
extern __inline long long
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvtss_si64(__m128 __A) {
  return __builtin_ia32_cvtss2si64((__v4sf)__A);
}
extern __inline long long
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvtss_si64x(__m128 __A) {
  return __builtin_ia32_cvtss2si64((__v4sf)__A);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvtps_pi32(__m128 __A) {
  return (__m64)__builtin_ia32_cvtps2pi((__v4sf)__A);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvt_ps2pi(__m128 __A) {
  return _mm_cvtps_pi32(__A);
}
extern __inline int
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvttss_si32(__m128 __A) {
  return __builtin_ia32_cvttss2si((__v4sf)__A);
}
extern __inline int
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvtt_ss2si(__m128 __A) {
  return _mm_cvttss_si32(__A);
}
extern __inline long long
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvttss_si64(__m128 __A) {
  return __builtin_ia32_cvttss2si64((__v4sf)__A);
}
extern __inline long long
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvttss_si64x(__m128 __A) {
  return __builtin_ia32_cvttss2si64((__v4sf)__A);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvttps_pi32(__m128 __A) {
  return (__m64)__builtin_ia32_cvttps2pi((__v4sf)__A);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvtt_ps2pi(__m128 __A) {
  return _mm_cvttps_pi32(__A);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvtsi32_ss(__m128 __A, int __B) {
  return (__m128)__builtin_ia32_cvtsi2ss((__v4sf)__A, __B);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvt_si2ss(__m128 __A, int __B) {
  return _mm_cvtsi32_ss(__A, __B);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvtsi64_ss(__m128 __A, long long __B) {
  return (__m128)__builtin_ia32_cvtsi642ss((__v4sf)__A, __B);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvtsi64x_ss(__m128 __A, long long __B) {
  return (__m128)__builtin_ia32_cvtsi642ss((__v4sf)__A, __B);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvtpi32_ps(__m128 __A, __m64 __B) {
  return (__m128)__builtin_ia32_cvtpi2ps((__v4sf)__A, (__v2si)__B);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvt_pi2ps(__m128 __A, __m64 __B) {
  return _mm_cvtpi32_ps(__A, __B);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvtpi16_ps(__m64 __A) {
  __v4hi __sign;
  __v2si __hisi, __losi;
  __v4sf __zero, __ra, __rb;
  __sign = __builtin_ia32_pcmpgtw((__v4hi)0LL, (__v4hi)__A);
  __losi = (__v2si)__builtin_ia32_punpcklwd((__v4hi)__A, __sign);
  __hisi = (__v2si)__builtin_ia32_punpckhwd((__v4hi)__A, __sign);
  __zero = (__v4sf)_mm_setzero_ps();
  __ra = __builtin_ia32_cvtpi2ps(__zero, __losi);
  __rb = __builtin_ia32_cvtpi2ps(__ra, __hisi);
  return (__m128)__builtin_ia32_movlhps(__ra, __rb);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvtpu16_ps(__m64 __A) {
  __v2si __hisi, __losi;
  __v4sf __zero, __ra, __rb;
  __losi = (__v2si)__builtin_ia32_punpcklwd((__v4hi)__A, (__v4hi)0LL);
  __hisi = (__v2si)__builtin_ia32_punpckhwd((__v4hi)__A, (__v4hi)0LL);
  __zero = (__v4sf)_mm_setzero_ps();
  __ra = __builtin_ia32_cvtpi2ps(__zero, __losi);
  __rb = __builtin_ia32_cvtpi2ps(__ra, __hisi);
  return (__m128)__builtin_ia32_movlhps(__ra, __rb);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvtpi8_ps(__m64 __A) {
  __v8qi __sign;
  __sign = __builtin_ia32_pcmpgtb((__v8qi)0LL, (__v8qi)__A);
  __A = (__m64)__builtin_ia32_punpcklbw((__v8qi)__A, __sign);
  return _mm_cvtpi16_ps(__A);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvtpu8_ps(__m64 __A) {
  __A = (__m64)__builtin_ia32_punpcklbw((__v8qi)__A, (__v8qi)0LL);
  return _mm_cvtpu16_ps(__A);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvtpi32x2_ps(__m64 __A, __m64 __B) {
  __v4sf __zero = (__v4sf)_mm_setzero_ps();
  __v4sf __sfa = __builtin_ia32_cvtpi2ps(__zero, (__v2si)__A);
  __v4sf __sfb = __builtin_ia32_cvtpi2ps(__sfa, (__v2si)__B);
  return (__m128)__builtin_ia32_movlhps(__sfa, __sfb);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvtps_pi16(__m128 __A) {
  __v4sf __hisf = (__v4sf)__A;
  __v4sf __losf = __builtin_ia32_movhlps(__hisf, __hisf);
  __v2si __hisi = __builtin_ia32_cvtps2pi(__hisf);
  __v2si __losi = __builtin_ia32_cvtps2pi(__losf);
  return (__m64)__builtin_ia32_packssdw(__hisi, __losi);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvtps_pi8(__m128 __A) {
  __v4hi __tmp = (__v4hi)_mm_cvtps_pi16(__A);
  return (__m64)__builtin_ia32_packsswb(__tmp, (__v4hi)0LL);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_unpackhi_ps(__m128 __A, __m128 __B) {
  return (__m128)__builtin_ia32_unpckhps((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_unpacklo_ps(__m128 __A, __m128 __B) {
  return (__m128)__builtin_ia32_unpcklps((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_loadh_pi(__m128 __A, __m64 const *__P) {
  return (__m128)__builtin_ia32_loadhps((__v4sf)__A, (const __v2sf *)__P);
}
extern __inline void
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_storeh_pi(__m64 *__P, __m128 __A) {
  __builtin_ia32_storehps((__v2sf *)__P, (__v4sf)__A);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_movehl_ps(__m128 __A, __m128 __B) {
  return (__m128)__builtin_ia32_movhlps((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_movelh_ps(__m128 __A, __m128 __B) {
  return (__m128)__builtin_ia32_movlhps((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_loadl_pi(__m128 __A, __m64 const *__P) {
  return (__m128)__builtin_ia32_loadlps((__v4sf)__A, (const __v2sf *)__P);
}
extern __inline void
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_storel_pi(__m64 *__P, __m128 __A) {
  __builtin_ia32_storelps((__v2sf *)__P, (__v4sf)__A);
}
extern __inline int
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_movemask_ps(__m128 __A) {
  return __builtin_ia32_movmskps((__v4sf)__A);
}
extern __inline unsigned int
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_getcsr(void) {
  return __builtin_ia32_stmxcsr();
}
extern __inline unsigned int
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _MM_GET_EXCEPTION_STATE(void) {
  return _mm_getcsr() & 0x003f;
}
extern __inline unsigned int
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _MM_GET_EXCEPTION_MASK(void) {
  return _mm_getcsr() & 0x1f80;
}
extern __inline unsigned int
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _MM_GET_ROUNDING_MODE(void) {
  return _mm_getcsr() & 0x6000;
}
extern __inline unsigned int
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _MM_GET_FLUSH_ZERO_MODE(void) {
  return _mm_getcsr() & 0x8000;
}
extern __inline void
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_setcsr(unsigned int __I) {
  __builtin_ia32_ldmxcsr(__I);
}
extern __inline void
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _MM_SET_EXCEPTION_STATE(unsigned int __mask) {
  _mm_setcsr((_mm_getcsr() & ~0x003f) | __mask);
}
extern __inline void
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _MM_SET_EXCEPTION_MASK(unsigned int __mask) {
  _mm_setcsr((_mm_getcsr() & ~0x1f80) | __mask);
}
extern __inline void
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _MM_SET_ROUNDING_MODE(unsigned int __mode) {
  _mm_setcsr((_mm_getcsr() & ~0x6000) | __mode);
}
extern __inline void
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _MM_SET_FLUSH_ZERO_MODE(unsigned int __mode) {
  _mm_setcsr((_mm_getcsr() & ~0x8000) | __mode);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_set_ss(float __F) {
  return __extension__(__m128)(__v4sf){__F, 0.0f, 0.0f, 0.0f};
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_set1_ps(float __F) {
  return __extension__(__m128)(__v4sf){__F, __F, __F, __F};
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_set_ps1(float __F) {
  return _mm_set1_ps(__F);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_load_ss(float const *__P) {
  return _mm_set_ss(*__P);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_load1_ps(float const *__P) {
  return _mm_set1_ps(*__P);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_load_ps1(float const *__P) {
  return _mm_load1_ps(__P);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_load_ps(float const *__P) {
  return *(__m128 *)__P;
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_loadu_ps(float const *__P) {
  return *(__m128_u *)__P;
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_loadr_ps(float const *__P) {
  __v4sf __tmp = *(__v4sf *)__P;
  return (__m128)__builtin_ia32_shufps(
      __tmp, __tmp, (((0) << 6) | ((1) << 4) | ((2) << 2) | (3)));
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__,
                                      __artificial__))
_mm_set_ps(const float __Z, const float __Y, const float __X, const float __W) {
  return __extension__(__m128)(__v4sf){__W, __X, __Y, __Z};
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_setr_ps(float __Z, float __Y, float __X, float __W) {
  return __extension__(__m128)(__v4sf){__Z, __Y, __X, __W};
}
extern __inline void
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_store_ss(float *__P, __m128 __A) {
  *__P = ((__v4sf)__A)[0];
}
extern __inline float
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvtss_f32(__m128 __A) {
  return ((__v4sf)__A)[0];
}
extern __inline void
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_store_ps(float *__P, __m128 __A) {
  *(__m128 *)__P = __A;
}
extern __inline void
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_storeu_ps(float *__P, __m128 __A) {
  *(__m128_u *)__P = __A;
}
extern __inline void
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_store1_ps(float *__P, __m128 __A) {
  __v4sf __va = (__v4sf)__A;
  __v4sf __tmp = __builtin_ia32_shufps(
      __va, __va, (((0) << 6) | ((0) << 4) | ((0) << 2) | (0)));
  _mm_storeu_ps(__P, __tmp);
}
extern __inline void
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_store_ps1(float *__P, __m128 __A) {
  _mm_store1_ps(__P, __A);
}
extern __inline void
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_storer_ps(float *__P, __m128 __A) {
  __v4sf __va = (__v4sf)__A;
  __v4sf __tmp = __builtin_ia32_shufps(
      __va, __va, (((0) << 6) | ((1) << 4) | ((2) << 2) | (3)));
  _mm_store_ps(__P, __tmp);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_move_ss(__m128 __A, __m128 __B) {
  return (__m128)__builtin_shuffle(
      (__v4sf)__A, (__v4sf)__B,
      __extension__(__attribute__((__vector_size__(16))) int){4, 1, 2, 3});
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_max_pi16(__m64 __A, __m64 __B) {
  return (__m64)__builtin_ia32_pmaxsw((__v4hi)__A, (__v4hi)__B);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_pmaxsw(__m64 __A, __m64 __B) {
  return _mm_max_pi16(__A, __B);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_max_pu8(__m64 __A, __m64 __B) {
  return (__m64)__builtin_ia32_pmaxub((__v8qi)__A, (__v8qi)__B);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_pmaxub(__m64 __A, __m64 __B) {
  return _mm_max_pu8(__A, __B);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_min_pi16(__m64 __A, __m64 __B) {
  return (__m64)__builtin_ia32_pminsw((__v4hi)__A, (__v4hi)__B);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_pminsw(__m64 __A, __m64 __B) {
  return _mm_min_pi16(__A, __B);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_min_pu8(__m64 __A, __m64 __B) {
  return (__m64)__builtin_ia32_pminub((__v8qi)__A, (__v8qi)__B);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_pminub(__m64 __A, __m64 __B) {
  return _mm_min_pu8(__A, __B);
}
extern __inline int
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_movemask_pi8(__m64 __A) {
  return __builtin_ia32_pmovmskb((__v8qi)__A);
}
extern __inline int
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_pmovmskb(__m64 __A) {
  return _mm_movemask_pi8(__A);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_mulhi_pu16(__m64 __A, __m64 __B) {
  return (__m64)__builtin_ia32_pmulhuw((__v4hi)__A, (__v4hi)__B);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_pmulhuw(__m64 __A, __m64 __B) {
  return _mm_mulhi_pu16(__A, __B);
}
extern __inline void
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_maskmove_si64(__m64 __A, __m64 __N, char *__P) {
  typedef long long __v2di __attribute__((__vector_size__(16)));
  typedef char __v16qi __attribute__((__vector_size__(16)));
  __v2di __A128 = __extension__(__v2di){((__v1di)__A)[0], 0};
  __v2di __N128 = __extension__(__v2di){((__v1di)__N)[0], 0};
  long unsigned int offset = ((long unsigned int)__P) & 0xf;
  if (offset) {
    if (offset > 8)
      offset = 8;
    __P = (char *)(((long unsigned int)__P) - offset);
    switch (offset) {
    case 1:
      __A128 = __builtin_ia32_pslldqi128(__A128, 8);
      __N128 = __builtin_ia32_pslldqi128(__N128, 8);
      break;
    case 2:
      __A128 = __builtin_ia32_pslldqi128(__A128, 2 * 8);
      __N128 = __builtin_ia32_pslldqi128(__N128, 2 * 8);
      break;
    case 3:
      __A128 = __builtin_ia32_pslldqi128(__A128, 3 * 8);
      __N128 = __builtin_ia32_pslldqi128(__N128, 3 * 8);
      break;
    case 4:
      __A128 = __builtin_ia32_pslldqi128(__A128, 4 * 8);
      __N128 = __builtin_ia32_pslldqi128(__N128, 4 * 8);
      break;
    case 5:
      __A128 = __builtin_ia32_pslldqi128(__A128, 5 * 8);
      __N128 = __builtin_ia32_pslldqi128(__N128, 5 * 8);
      break;
    case 6:
      __A128 = __builtin_ia32_pslldqi128(__A128, 6 * 8);
      __N128 = __builtin_ia32_pslldqi128(__N128, 6 * 8);
      break;
    case 7:
      __A128 = __builtin_ia32_pslldqi128(__A128, 7 * 8);
      __N128 = __builtin_ia32_pslldqi128(__N128, 7 * 8);
      break;
    case 8:
      __A128 = __builtin_ia32_pslldqi128(__A128, 8 * 8);
      __N128 = __builtin_ia32_pslldqi128(__N128, 8 * 8);
      break;
    default:
      break;
    }
  }
  __builtin_ia32_maskmovdqu((__v16qi)__A128, (__v16qi)__N128, __P);
}
extern __inline void
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_maskmovq(__m64 __A, __m64 __N, char *__P) {
  _mm_maskmove_si64(__A, __N, __P);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_avg_pu8(__m64 __A, __m64 __B) {
  return (__m64)__builtin_ia32_pavgb((__v8qi)__A, (__v8qi)__B);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_pavgb(__m64 __A, __m64 __B) {
  return _mm_avg_pu8(__A, __B);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_avg_pu16(__m64 __A, __m64 __B) {
  return (__m64)__builtin_ia32_pavgw((__v4hi)__A, (__v4hi)__B);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_pavgw(__m64 __A, __m64 __B) {
  return _mm_avg_pu16(__A, __B);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_sad_pu8(__m64 __A, __m64 __B) {
  return (__m64)__builtin_ia32_psadbw((__v8qi)__A, (__v8qi)__B);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _m_psadbw(__m64 __A, __m64 __B) {
  return _mm_sad_pu8(__A, __B);
}
extern __inline void
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_stream_pi(__m64 *__P, __m64 __A) {
  __builtin_ia32_movntq((unsigned long long *)__P, (unsigned long long)__A);
}
extern __inline void
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_stream_ps(float *__P, __m128 __A) {
  __builtin_ia32_movntps(__P, (__v4sf)__A);
}
extern __inline void
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_sfence(void) {
  __builtin_ia32_sfence();
}
extern __inline void
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_pause(void) {
  __builtin_ia32_pause();
}
typedef double __v2df __attribute__((__vector_size__(16)));
typedef long long __v2di __attribute__((__vector_size__(16)));
typedef unsigned long long __v2du __attribute__((__vector_size__(16)));
typedef int __v4si __attribute__((__vector_size__(16)));
typedef unsigned int __v4su __attribute__((__vector_size__(16)));
typedef short __v8hi __attribute__((__vector_size__(16)));
typedef unsigned short __v8hu __attribute__((__vector_size__(16)));
typedef char __v16qi __attribute__((__vector_size__(16)));
typedef signed char __v16qs __attribute__((__vector_size__(16)));
typedef unsigned char __v16qu __attribute__((__vector_size__(16)));
typedef long long __m128i __attribute__((__vector_size__(16), __may_alias__));
typedef double __m128d __attribute__((__vector_size__(16), __may_alias__));
typedef long long __m128i_u
    __attribute__((__vector_size__(16), __may_alias__, __aligned__(1)));
typedef double __m128d_u
    __attribute__((__vector_size__(16), __may_alias__, __aligned__(1)));
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_set_sd(double __F) {
  return __extension__(__m128d){__F, 0.0};
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_set1_pd(double __F) {
  return __extension__(__m128d){__F, __F};
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_set_pd1(double __F) {
  return _mm_set1_pd(__F);
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_set_pd(double __W, double __X) {
  return __extension__(__m128d){__X, __W};
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_setr_pd(double __W, double __X) {
  return __extension__(__m128d){__W, __X};
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_undefined_pd(void) {
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Winit-self"
  __m128d __Y = __Y;
#pragma GCC diagnostic pop
  return __Y;
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_setzero_pd(void) {
  return __extension__(__m128d){0.0, 0.0};
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_move_sd(__m128d __A, __m128d __B) {
  return __extension__(__m128d)
      __builtin_shuffle((__v2df)__A, (__v2df)__B, (__v2di){2, 1});
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_load_pd(double const *__P) {
  return *(__m128d *)__P;
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_loadu_pd(double const *__P) {
  return *(__m128d_u *)__P;
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_load1_pd(double const *__P) {
  return _mm_set1_pd(*__P);
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_load_sd(double const *__P) {
  return _mm_set_sd(*__P);
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_load_pd1(double const *__P) {
  return _mm_load1_pd(__P);
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_loadr_pd(double const *__P) {
  __m128d __tmp = _mm_load_pd(__P);
  return __builtin_ia32_shufpd(__tmp, __tmp, (((0) << 1) | (1)));
}
extern __inline void
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_store_pd(double *__P, __m128d __A) {
  *(__m128d *)__P = __A;
}
extern __inline void
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_storeu_pd(double *__P, __m128d __A) {
  *(__m128d_u *)__P = __A;
}
extern __inline void
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_store_sd(double *__P, __m128d __A) {
  *__P = ((__v2df)__A)[0];
}
extern __inline double
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvtsd_f64(__m128d __A) {
  return ((__v2df)__A)[0];
}
extern __inline void
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_storel_pd(double *__P, __m128d __A) {
  _mm_store_sd(__P, __A);
}
extern __inline void
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_storeh_pd(double *__P, __m128d __A) {
  *__P = ((__v2df)__A)[1];
}
extern __inline void
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_store1_pd(double *__P, __m128d __A) {
  _mm_store_pd(__P, __builtin_ia32_shufpd(__A, __A, (((0) << 1) | (0))));
}
extern __inline void
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_store_pd1(double *__P, __m128d __A) {
  _mm_store1_pd(__P, __A);
}
extern __inline void
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_storer_pd(double *__P, __m128d __A) {
  _mm_store_pd(__P, __builtin_ia32_shufpd(__A, __A, (((0) << 1) | (1))));
}
extern __inline int
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvtsi128_si32(__m128i __A) {
  return __builtin_ia32_vec_ext_v4si((__v4si)__A, 0);
}
extern __inline long long
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvtsi128_si64(__m128i __A) {
  return ((__v2di)__A)[0];
}
extern __inline long long
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvtsi128_si64x(__m128i __A) {
  return ((__v2di)__A)[0];
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_add_pd(__m128d __A, __m128d __B) {
  return (__m128d)((__v2df)__A + (__v2df)__B);
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_add_sd(__m128d __A, __m128d __B) {
  return (__m128d)__builtin_ia32_addsd((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_sub_pd(__m128d __A, __m128d __B) {
  return (__m128d)((__v2df)__A - (__v2df)__B);
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_sub_sd(__m128d __A, __m128d __B) {
  return (__m128d)__builtin_ia32_subsd((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_mul_pd(__m128d __A, __m128d __B) {
  return (__m128d)((__v2df)__A * (__v2df)__B);
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_mul_sd(__m128d __A, __m128d __B) {
  return (__m128d)__builtin_ia32_mulsd((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_div_pd(__m128d __A, __m128d __B) {
  return (__m128d)((__v2df)__A / (__v2df)__B);
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_div_sd(__m128d __A, __m128d __B) {
  return (__m128d)__builtin_ia32_divsd((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_sqrt_pd(__m128d __A) {
  return (__m128d)__builtin_ia32_sqrtpd((__v2df)__A);
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_sqrt_sd(__m128d __A, __m128d __B) {
  __v2df __tmp = __builtin_ia32_movsd((__v2df)__A, (__v2df)__B);
  return (__m128d)__builtin_ia32_sqrtsd((__v2df)__tmp);
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_min_pd(__m128d __A, __m128d __B) {
  return (__m128d)__builtin_ia32_minpd((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_min_sd(__m128d __A, __m128d __B) {
  return (__m128d)__builtin_ia32_minsd((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_max_pd(__m128d __A, __m128d __B) {
  return (__m128d)__builtin_ia32_maxpd((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_max_sd(__m128d __A, __m128d __B) {
  return (__m128d)__builtin_ia32_maxsd((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_and_pd(__m128d __A, __m128d __B) {
  return (__m128d)__builtin_ia32_andpd((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_andnot_pd(__m128d __A, __m128d __B) {
  return (__m128d)__builtin_ia32_andnpd((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_or_pd(__m128d __A, __m128d __B) {
  return (__m128d)__builtin_ia32_orpd((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_xor_pd(__m128d __A, __m128d __B) {
  return (__m128d)__builtin_ia32_xorpd((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmpeq_pd(__m128d __A, __m128d __B) {
  return (__m128d)__builtin_ia32_cmpeqpd((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmplt_pd(__m128d __A, __m128d __B) {
  return (__m128d)__builtin_ia32_cmpltpd((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmple_pd(__m128d __A, __m128d __B) {
  return (__m128d)__builtin_ia32_cmplepd((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmpgt_pd(__m128d __A, __m128d __B) {
  return (__m128d)__builtin_ia32_cmpgtpd((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmpge_pd(__m128d __A, __m128d __B) {
  return (__m128d)__builtin_ia32_cmpgepd((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmpneq_pd(__m128d __A, __m128d __B) {
  return (__m128d)__builtin_ia32_cmpneqpd((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmpnlt_pd(__m128d __A, __m128d __B) {
  return (__m128d)__builtin_ia32_cmpnltpd((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmpnle_pd(__m128d __A, __m128d __B) {
  return (__m128d)__builtin_ia32_cmpnlepd((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmpngt_pd(__m128d __A, __m128d __B) {
  return (__m128d)__builtin_ia32_cmpngtpd((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmpnge_pd(__m128d __A, __m128d __B) {
  return (__m128d)__builtin_ia32_cmpngepd((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmpord_pd(__m128d __A, __m128d __B) {
  return (__m128d)__builtin_ia32_cmpordpd((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmpunord_pd(__m128d __A, __m128d __B) {
  return (__m128d)__builtin_ia32_cmpunordpd((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmpeq_sd(__m128d __A, __m128d __B) {
  return (__m128d)__builtin_ia32_cmpeqsd((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmplt_sd(__m128d __A, __m128d __B) {
  return (__m128d)__builtin_ia32_cmpltsd((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmple_sd(__m128d __A, __m128d __B) {
  return (__m128d)__builtin_ia32_cmplesd((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmpgt_sd(__m128d __A, __m128d __B) {
  return (__m128d)__builtin_ia32_movsd(
      (__v2df)__A, (__v2df)__builtin_ia32_cmpltsd((__v2df)__B, (__v2df)__A));
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmpge_sd(__m128d __A, __m128d __B) {
  return (__m128d)__builtin_ia32_movsd(
      (__v2df)__A, (__v2df)__builtin_ia32_cmplesd((__v2df)__B, (__v2df)__A));
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmpneq_sd(__m128d __A, __m128d __B) {
  return (__m128d)__builtin_ia32_cmpneqsd((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmpnlt_sd(__m128d __A, __m128d __B) {
  return (__m128d)__builtin_ia32_cmpnltsd((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmpnle_sd(__m128d __A, __m128d __B) {
  return (__m128d)__builtin_ia32_cmpnlesd((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmpngt_sd(__m128d __A, __m128d __B) {
  return (__m128d)__builtin_ia32_movsd(
      (__v2df)__A, (__v2df)__builtin_ia32_cmpnltsd((__v2df)__B, (__v2df)__A));
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmpnge_sd(__m128d __A, __m128d __B) {
  return (__m128d)__builtin_ia32_movsd(
      (__v2df)__A, (__v2df)__builtin_ia32_cmpnlesd((__v2df)__B, (__v2df)__A));
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmpord_sd(__m128d __A, __m128d __B) {
  return (__m128d)__builtin_ia32_cmpordsd((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmpunord_sd(__m128d __A, __m128d __B) {
  return (__m128d)__builtin_ia32_cmpunordsd((__v2df)__A, (__v2df)__B);
}
extern __inline int
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_comieq_sd(__m128d __A, __m128d __B) {
  return __builtin_ia32_comisdeq((__v2df)__A, (__v2df)__B);
}
extern __inline int
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_comilt_sd(__m128d __A, __m128d __B) {
  return __builtin_ia32_comisdlt((__v2df)__A, (__v2df)__B);
}
extern __inline int
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_comile_sd(__m128d __A, __m128d __B) {
  return __builtin_ia32_comisdle((__v2df)__A, (__v2df)__B);
}
extern __inline int
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_comigt_sd(__m128d __A, __m128d __B) {
  return __builtin_ia32_comisdgt((__v2df)__A, (__v2df)__B);
}
extern __inline int
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_comige_sd(__m128d __A, __m128d __B) {
  return __builtin_ia32_comisdge((__v2df)__A, (__v2df)__B);
}
extern __inline int
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_comineq_sd(__m128d __A, __m128d __B) {
  return __builtin_ia32_comisdneq((__v2df)__A, (__v2df)__B);
}
extern __inline int
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_ucomieq_sd(__m128d __A, __m128d __B) {
  return __builtin_ia32_ucomisdeq((__v2df)__A, (__v2df)__B);
}
extern __inline int
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_ucomilt_sd(__m128d __A, __m128d __B) {
  return __builtin_ia32_ucomisdlt((__v2df)__A, (__v2df)__B);
}
extern __inline int
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_ucomile_sd(__m128d __A, __m128d __B) {
  return __builtin_ia32_ucomisdle((__v2df)__A, (__v2df)__B);
}
extern __inline int
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_ucomigt_sd(__m128d __A, __m128d __B) {
  return __builtin_ia32_ucomisdgt((__v2df)__A, (__v2df)__B);
}
extern __inline int
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_ucomige_sd(__m128d __A, __m128d __B) {
  return __builtin_ia32_ucomisdge((__v2df)__A, (__v2df)__B);
}
extern __inline int
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_ucomineq_sd(__m128d __A, __m128d __B) {
  return __builtin_ia32_ucomisdneq((__v2df)__A, (__v2df)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_set_epi64x(long long __q1, long long __q0) {
  return __extension__(__m128i)(__v2di){__q0, __q1};
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_set_epi64(__m64 __q1, __m64 __q0) {
  return _mm_set_epi64x((long long)__q1, (long long)__q0);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_set_epi32(int __q3, int __q2, int __q1, int __q0) {
  return __extension__(__m128i)(__v4si){__q0, __q1, __q2, __q3};
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_set_epi16(short __q7, short __q6, short __q5, short __q4, short __q3,
                  short __q2, short __q1, short __q0) {
  return __extension__(__m128i)(__v8hi){__q0, __q1, __q2, __q3,
                                        __q4, __q5, __q6, __q7};
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_set_epi8(char __q15, char __q14, char __q13, char __q12, char __q11,
                 char __q10, char __q09, char __q08, char __q07, char __q06,
                 char __q05, char __q04, char __q03, char __q02, char __q01,
                 char __q00) {
  return __extension__(__m128i)(__v16qi){
      __q00, __q01, __q02, __q03, __q04, __q05, __q06, __q07,
      __q08, __q09, __q10, __q11, __q12, __q13, __q14, __q15};
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_set1_epi64x(long long __A) {
  return _mm_set_epi64x(__A, __A);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_set1_epi64(__m64 __A) {
  return _mm_set_epi64(__A, __A);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_set1_epi32(int __A) {
  return _mm_set_epi32(__A, __A, __A, __A);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_set1_epi16(short __A) {
  return _mm_set_epi16(__A, __A, __A, __A, __A, __A, __A, __A);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_set1_epi8(char __A) {
  return _mm_set_epi8(__A, __A, __A, __A, __A, __A, __A, __A, __A, __A, __A,
                      __A, __A, __A, __A, __A);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_setr_epi64(__m64 __q0, __m64 __q1) {
  return _mm_set_epi64(__q1, __q0);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_setr_epi32(int __q0, int __q1, int __q2, int __q3) {
  return _mm_set_epi32(__q3, __q2, __q1, __q0);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_setr_epi16(short __q0, short __q1, short __q2, short __q3, short __q4,
                   short __q5, short __q6, short __q7) {
  return _mm_set_epi16(__q7, __q6, __q5, __q4, __q3, __q2, __q1, __q0);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_setr_epi8(char __q00, char __q01, char __q02, char __q03, char __q04,
                  char __q05, char __q06, char __q07, char __q08, char __q09,
                  char __q10, char __q11, char __q12, char __q13, char __q14,
                  char __q15) {
  return _mm_set_epi8(__q15, __q14, __q13, __q12, __q11, __q10, __q09, __q08,
                      __q07, __q06, __q05, __q04, __q03, __q02, __q01, __q00);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_load_si128(__m128i const *__P) {
  return *__P;
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_loadu_si128(__m128i_u const *__P) {
  return *__P;
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_loadl_epi64(__m128i_u const *__P) {
  return _mm_set_epi64((__m64)0LL, *(__m64_u *)__P);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_loadu_si64(void const *__P) {
  return _mm_loadl_epi64((__m128i_u *)__P);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_loadu_si32(void const *__P) {
  return _mm_set_epi32(0, 0, 0, (*(__m32_u *)__P)[0]);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_loadu_si16(void const *__P) {
  return _mm_set_epi16(0, 0, 0, 0, 0, 0, 0, (*(__m16_u *)__P)[0]);
}
extern __inline void
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_store_si128(__m128i *__P, __m128i __B) {
  *__P = __B;
}
extern __inline void
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_storeu_si128(__m128i_u *__P, __m128i __B) {
  *__P = __B;
}
extern __inline void
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_storel_epi64(__m128i_u *__P, __m128i __B) {
  *(__m64_u *)__P = (__m64)((__v2di)__B)[0];
}
extern __inline void
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_storeu_si64(void *__P, __m128i __B) {
  _mm_storel_epi64((__m128i_u *)__P, __B);
}
extern __inline void
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_storeu_si32(void *__P, __m128i __B) {
  *(__m32_u *)__P = (__m32)((__v4si)__B)[0];
}
extern __inline void
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_storeu_si16(void *__P, __m128i __B) {
  *(__m16_u *)__P = (__m16)((__v8hi)__B)[0];
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_movepi64_pi64(__m128i __B) {
  return (__m64)((__v2di)__B)[0];
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_movpi64_epi64(__m64 __A) {
  return _mm_set_epi64((__m64)0LL, __A);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_move_epi64(__m128i __A) {
  return (__m128i)__builtin_ia32_movq128((__v2di)__A);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_undefined_si128(void) {
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Winit-self"
  __m128i __Y = __Y;
#pragma GCC diagnostic pop
  return __Y;
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_setzero_si128(void) {
  return __extension__(__m128i)(__v4si){0, 0, 0, 0};
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvtepi32_pd(__m128i __A) {
  return (__m128d)__builtin_ia32_cvtdq2pd((__v4si)__A);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvtepi32_ps(__m128i __A) {
  return (__m128)__builtin_ia32_cvtdq2ps((__v4si)__A);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvtpd_epi32(__m128d __A) {
  return (__m128i)__builtin_ia32_cvtpd2dq((__v2df)__A);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvtpd_pi32(__m128d __A) {
  return (__m64)__builtin_ia32_cvtpd2pi((__v2df)__A);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvtpd_ps(__m128d __A) {
  return (__m128)__builtin_ia32_cvtpd2ps((__v2df)__A);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvttpd_epi32(__m128d __A) {
  return (__m128i)__builtin_ia32_cvttpd2dq((__v2df)__A);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvttpd_pi32(__m128d __A) {
  return (__m64)__builtin_ia32_cvttpd2pi((__v2df)__A);
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvtpi32_pd(__m64 __A) {
  return (__m128d)__builtin_ia32_cvtpi2pd((__v2si)__A);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvtps_epi32(__m128 __A) {
  return (__m128i)__builtin_ia32_cvtps2dq((__v4sf)__A);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvttps_epi32(__m128 __A) {
  return (__m128i)__builtin_ia32_cvttps2dq((__v4sf)__A);
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvtps_pd(__m128 __A) {
  return (__m128d)__builtin_ia32_cvtps2pd((__v4sf)__A);
}
extern __inline int
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvtsd_si32(__m128d __A) {
  return __builtin_ia32_cvtsd2si((__v2df)__A);
}
extern __inline long long
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvtsd_si64(__m128d __A) {
  return __builtin_ia32_cvtsd2si64((__v2df)__A);
}
extern __inline long long
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvtsd_si64x(__m128d __A) {
  return __builtin_ia32_cvtsd2si64((__v2df)__A);
}
extern __inline int
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvttsd_si32(__m128d __A) {
  return __builtin_ia32_cvttsd2si((__v2df)__A);
}
extern __inline long long
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvttsd_si64(__m128d __A) {
  return __builtin_ia32_cvttsd2si64((__v2df)__A);
}
extern __inline long long
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvttsd_si64x(__m128d __A) {
  return __builtin_ia32_cvttsd2si64((__v2df)__A);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvtsd_ss(__m128 __A, __m128d __B) {
  return (__m128)__builtin_ia32_cvtsd2ss((__v4sf)__A, (__v2df)__B);
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvtsi32_sd(__m128d __A, int __B) {
  return (__m128d)__builtin_ia32_cvtsi2sd((__v2df)__A, __B);
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvtsi64_sd(__m128d __A, long long __B) {
  return (__m128d)__builtin_ia32_cvtsi642sd((__v2df)__A, __B);
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvtsi64x_sd(__m128d __A, long long __B) {
  return (__m128d)__builtin_ia32_cvtsi642sd((__v2df)__A, __B);
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvtss_sd(__m128d __A, __m128 __B) {
  return (__m128d)__builtin_ia32_cvtss2sd((__v2df)__A, (__v4sf)__B);
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_unpackhi_pd(__m128d __A, __m128d __B) {
  return (__m128d)__builtin_ia32_unpckhpd((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_unpacklo_pd(__m128d __A, __m128d __B) {
  return (__m128d)__builtin_ia32_unpcklpd((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_loadh_pd(__m128d __A, double const *__B) {
  return (__m128d)__builtin_ia32_loadhpd((__v2df)__A, __B);
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_loadl_pd(__m128d __A, double const *__B) {
  return (__m128d)__builtin_ia32_loadlpd((__v2df)__A, __B);
}
extern __inline int
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_movemask_pd(__m128d __A) {
  return __builtin_ia32_movmskpd((__v2df)__A);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_packs_epi16(__m128i __A, __m128i __B) {
  return (__m128i)__builtin_ia32_packsswb128((__v8hi)__A, (__v8hi)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_packs_epi32(__m128i __A, __m128i __B) {
  return (__m128i)__builtin_ia32_packssdw128((__v4si)__A, (__v4si)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_packus_epi16(__m128i __A, __m128i __B) {
  return (__m128i)__builtin_ia32_packuswb128((__v8hi)__A, (__v8hi)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_unpackhi_epi8(__m128i __A, __m128i __B) {
  return (__m128i)__builtin_ia32_punpckhbw128((__v16qi)__A, (__v16qi)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_unpackhi_epi16(__m128i __A, __m128i __B) {
  return (__m128i)__builtin_ia32_punpckhwd128((__v8hi)__A, (__v8hi)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_unpackhi_epi32(__m128i __A, __m128i __B) {
  return (__m128i)__builtin_ia32_punpckhdq128((__v4si)__A, (__v4si)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_unpackhi_epi64(__m128i __A, __m128i __B) {
  return (__m128i)__builtin_ia32_punpckhqdq128((__v2di)__A, (__v2di)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_unpacklo_epi8(__m128i __A, __m128i __B) {
  return (__m128i)__builtin_ia32_punpcklbw128((__v16qi)__A, (__v16qi)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_unpacklo_epi16(__m128i __A, __m128i __B) {
  return (__m128i)__builtin_ia32_punpcklwd128((__v8hi)__A, (__v8hi)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_unpacklo_epi32(__m128i __A, __m128i __B) {
  return (__m128i)__builtin_ia32_punpckldq128((__v4si)__A, (__v4si)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_unpacklo_epi64(__m128i __A, __m128i __B) {
  return (__m128i)__builtin_ia32_punpcklqdq128((__v2di)__A, (__v2di)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_add_epi8(__m128i __A, __m128i __B) {
  return (__m128i)((__v16qu)__A + (__v16qu)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_add_epi16(__m128i __A, __m128i __B) {
  return (__m128i)((__v8hu)__A + (__v8hu)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_add_epi32(__m128i __A, __m128i __B) {
  return (__m128i)((__v4su)__A + (__v4su)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_add_epi64(__m128i __A, __m128i __B) {
  return (__m128i)((__v2du)__A + (__v2du)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_adds_epi8(__m128i __A, __m128i __B) {
  return (__m128i)__builtin_ia32_paddsb128((__v16qi)__A, (__v16qi)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_adds_epi16(__m128i __A, __m128i __B) {
  return (__m128i)__builtin_ia32_paddsw128((__v8hi)__A, (__v8hi)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_adds_epu8(__m128i __A, __m128i __B) {
  return (__m128i)__builtin_ia32_paddusb128((__v16qi)__A, (__v16qi)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_adds_epu16(__m128i __A, __m128i __B) {
  return (__m128i)__builtin_ia32_paddusw128((__v8hi)__A, (__v8hi)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_sub_epi8(__m128i __A, __m128i __B) {
  return (__m128i)((__v16qu)__A - (__v16qu)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_sub_epi16(__m128i __A, __m128i __B) {
  return (__m128i)((__v8hu)__A - (__v8hu)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_sub_epi32(__m128i __A, __m128i __B) {
  return (__m128i)((__v4su)__A - (__v4su)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_sub_epi64(__m128i __A, __m128i __B) {
  return (__m128i)((__v2du)__A - (__v2du)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_subs_epi8(__m128i __A, __m128i __B) {
  return (__m128i)__builtin_ia32_psubsb128((__v16qi)__A, (__v16qi)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_subs_epi16(__m128i __A, __m128i __B) {
  return (__m128i)__builtin_ia32_psubsw128((__v8hi)__A, (__v8hi)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_subs_epu8(__m128i __A, __m128i __B) {
  return (__m128i)__builtin_ia32_psubusb128((__v16qi)__A, (__v16qi)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_subs_epu16(__m128i __A, __m128i __B) {
  return (__m128i)__builtin_ia32_psubusw128((__v8hi)__A, (__v8hi)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_madd_epi16(__m128i __A, __m128i __B) {
  return (__m128i)__builtin_ia32_pmaddwd128((__v8hi)__A, (__v8hi)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_mulhi_epi16(__m128i __A, __m128i __B) {
  return (__m128i)__builtin_ia32_pmulhw128((__v8hi)__A, (__v8hi)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_mullo_epi16(__m128i __A, __m128i __B) {
  return (__m128i)((__v8hu)__A * (__v8hu)__B);
}
extern __inline __m64
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_mul_su32(__m64 __A, __m64 __B) {
  return (__m64)__builtin_ia32_pmuludq((__v2si)__A, (__v2si)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_mul_epu32(__m128i __A, __m128i __B) {
  return (__m128i)__builtin_ia32_pmuludq128((__v4si)__A, (__v4si)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_slli_epi16(__m128i __A, int __B) {
  return (__m128i)__builtin_ia32_psllwi128((__v8hi)__A, __B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_slli_epi32(__m128i __A, int __B) {
  return (__m128i)__builtin_ia32_pslldi128((__v4si)__A, __B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_slli_epi64(__m128i __A, int __B) {
  return (__m128i)__builtin_ia32_psllqi128((__v2di)__A, __B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_srai_epi16(__m128i __A, int __B) {
  return (__m128i)__builtin_ia32_psrawi128((__v8hi)__A, __B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_srai_epi32(__m128i __A, int __B) {
  return (__m128i)__builtin_ia32_psradi128((__v4si)__A, __B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_srli_epi16(__m128i __A, int __B) {
  return (__m128i)__builtin_ia32_psrlwi128((__v8hi)__A, __B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_srli_epi32(__m128i __A, int __B) {
  return (__m128i)__builtin_ia32_psrldi128((__v4si)__A, __B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_srli_epi64(__m128i __A, int __B) {
  return (__m128i)__builtin_ia32_psrlqi128((__v2di)__A, __B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_sll_epi16(__m128i __A, __m128i __B) {
  return (__m128i)__builtin_ia32_psllw128((__v8hi)__A, (__v8hi)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_sll_epi32(__m128i __A, __m128i __B) {
  return (__m128i)__builtin_ia32_pslld128((__v4si)__A, (__v4si)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_sll_epi64(__m128i __A, __m128i __B) {
  return (__m128i)__builtin_ia32_psllq128((__v2di)__A, (__v2di)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_sra_epi16(__m128i __A, __m128i __B) {
  return (__m128i)__builtin_ia32_psraw128((__v8hi)__A, (__v8hi)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_sra_epi32(__m128i __A, __m128i __B) {
  return (__m128i)__builtin_ia32_psrad128((__v4si)__A, (__v4si)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_srl_epi16(__m128i __A, __m128i __B) {
  return (__m128i)__builtin_ia32_psrlw128((__v8hi)__A, (__v8hi)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_srl_epi32(__m128i __A, __m128i __B) {
  return (__m128i)__builtin_ia32_psrld128((__v4si)__A, (__v4si)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_srl_epi64(__m128i __A, __m128i __B) {
  return (__m128i)__builtin_ia32_psrlq128((__v2di)__A, (__v2di)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_and_si128(__m128i __A, __m128i __B) {
  return (__m128i)((__v2du)__A & (__v2du)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_andnot_si128(__m128i __A, __m128i __B) {
  return (__m128i)__builtin_ia32_pandn128((__v2di)__A, (__v2di)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_or_si128(__m128i __A, __m128i __B) {
  return (__m128i)((__v2du)__A | (__v2du)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_xor_si128(__m128i __A, __m128i __B) {
  return (__m128i)((__v2du)__A ^ (__v2du)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmpeq_epi8(__m128i __A, __m128i __B) {
  return (__m128i)((__v16qi)__A == (__v16qi)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmpeq_epi16(__m128i __A, __m128i __B) {
  return (__m128i)((__v8hi)__A == (__v8hi)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmpeq_epi32(__m128i __A, __m128i __B) {
  return (__m128i)((__v4si)__A == (__v4si)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmplt_epi8(__m128i __A, __m128i __B) {
  return (__m128i)((__v16qs)__A < (__v16qs)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmplt_epi16(__m128i __A, __m128i __B) {
  return (__m128i)((__v8hi)__A < (__v8hi)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmplt_epi32(__m128i __A, __m128i __B) {
  return (__m128i)((__v4si)__A < (__v4si)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmpgt_epi8(__m128i __A, __m128i __B) {
  return (__m128i)((__v16qs)__A > (__v16qs)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmpgt_epi16(__m128i __A, __m128i __B) {
  return (__m128i)((__v8hi)__A > (__v8hi)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cmpgt_epi32(__m128i __A, __m128i __B) {
  return (__m128i)((__v4si)__A > (__v4si)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_max_epi16(__m128i __A, __m128i __B) {
  return (__m128i)__builtin_ia32_pmaxsw128((__v8hi)__A, (__v8hi)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_max_epu8(__m128i __A, __m128i __B) {
  return (__m128i)__builtin_ia32_pmaxub128((__v16qi)__A, (__v16qi)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_min_epi16(__m128i __A, __m128i __B) {
  return (__m128i)__builtin_ia32_pminsw128((__v8hi)__A, (__v8hi)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_min_epu8(__m128i __A, __m128i __B) {
  return (__m128i)__builtin_ia32_pminub128((__v16qi)__A, (__v16qi)__B);
}
extern __inline int
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_movemask_epi8(__m128i __A) {
  return __builtin_ia32_pmovmskb128((__v16qi)__A);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_mulhi_epu16(__m128i __A, __m128i __B) {
  return (__m128i)__builtin_ia32_pmulhuw128((__v8hi)__A, (__v8hi)__B);
}
extern __inline void
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_maskmoveu_si128(__m128i __A, __m128i __B, char *__C) {
  __builtin_ia32_maskmovdqu((__v16qi)__A, (__v16qi)__B, __C);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_avg_epu8(__m128i __A, __m128i __B) {
  return (__m128i)__builtin_ia32_pavgb128((__v16qi)__A, (__v16qi)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_avg_epu16(__m128i __A, __m128i __B) {
  return (__m128i)__builtin_ia32_pavgw128((__v8hi)__A, (__v8hi)__B);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_sad_epu8(__m128i __A, __m128i __B) {
  return (__m128i)__builtin_ia32_psadbw128((__v16qi)__A, (__v16qi)__B);
}
extern __inline void
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_stream_si32(int *__A, int __B) {
  __builtin_ia32_movnti(__A, __B);
}
extern __inline void
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_stream_si64(long long int *__A, long long int __B) {
  __builtin_ia32_movnti64(__A, __B);
}
extern __inline void
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_stream_si128(__m128i *__A, __m128i __B) {
  __builtin_ia32_movntdq((__v2di *)__A, (__v2di)__B);
}
extern __inline void
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_stream_pd(double *__A, __m128d __B) {
  __builtin_ia32_movntpd(__A, (__v2df)__B);
}
extern __inline void
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_clflush(void const *__A) {
  __builtin_ia32_clflush(__A);
}
extern __inline void
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_lfence(void) {
  __builtin_ia32_lfence();
}
extern __inline void
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_mfence(void) {
  __builtin_ia32_mfence();
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvtsi32_si128(int __A) {
  return _mm_set_epi32(0, 0, 0, __A);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvtsi64_si128(long long __A) {
  return _mm_set_epi64x(0, __A);
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_cvtsi64x_si128(long long __A) {
  return _mm_set_epi64x(0, __A);
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_castpd_ps(__m128d __A) {
  return (__m128)__A;
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_castpd_si128(__m128d __A) {
  return (__m128i)__A;
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_castps_pd(__m128 __A) {
  return (__m128d)__A;
}
extern __inline __m128i
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_castps_si128(__m128 __A) {
  return (__m128i)__A;
}
extern __inline __m128
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_castsi128_ps(__m128i __A) {
  return (__m128)__A;
}
extern __inline __m128d
    __attribute__((__gnu_inline__, __always_inline__, __artificial__))
    _mm_castsi128_pd(__m128i __A) {
  return (__m128d)__A;
}
typedef unsigned char zend_uchar;
typedef enum {
  SUCCESS = 0,
  FAILURE = -1,
} ZEND_RESULT_CODE;
typedef ZEND_RESULT_CODE zend_result;
typedef struct _zend_object_handlers zend_object_handlers;
typedef struct _zend_class_entry zend_class_entry;
typedef union _zend_function zend_function;
typedef struct _zend_execute_data zend_execute_data;
typedef struct _zval_struct zval;
typedef struct _zend_refcounted zend_refcounted;
typedef struct _zend_string zend_string;
typedef struct _zend_array zend_array;
typedef struct _zend_object zend_object;
typedef struct _zend_resource zend_resource;
typedef struct _zend_reference zend_reference;
typedef struct _zend_ast_ref zend_ast_ref;
typedef struct _zend_ast zend_ast;
typedef int (*compare_func_t)(const void *, const void *);
typedef void (*swap_func_t)(void *, void *);
typedef void (*sort_func_t)(void *, size_t, size_t, compare_func_t,
                            swap_func_t);
typedef void (*dtor_func_t)(zval *pDest);
typedef void (*copy_ctor_func_t)(zval *pElement);
typedef struct {
  void *ptr;
  uint32_t type_mask;
} zend_type;
typedef struct {
  uint32_t num_types;
  zend_type types[1];
} zend_type_list;
typedef union _zend_value {
  zend_long lval;
  double dval;
  zend_refcounted *counted;
  zend_string *str;
  zend_array *arr;
  zend_object *obj;
  zend_resource *res;
  zend_reference *ref;
  zend_ast_ref *ast;
  zval *zv;
  void *ptr;
  zend_class_entry *ce;
  zend_function *func;
  struct {
    uint32_t w1;
    uint32_t w2;
  } ww;
} zend_value;
struct _zval_struct {
  zend_value value;
  union {
    uint32_t type_info;
    struct {
      uint8_t type;
      uint8_t type_flags;
      union {
        uint16_t extra;
      } u;
    } v;
  } u1;
  union {
    uint32_t next;
    uint32_t cache_slot;
    uint32_t opline_num;
    uint32_t lineno;
    uint32_t num_args;
    uint32_t fe_pos;
    uint32_t fe_iter_idx;
    uint32_t guard;
    uint32_t constant_flags;
    uint32_t extra;
  } u2;
};
typedef struct _zend_refcounted_h {
  uint32_t refcount;
  union {
    uint32_t type_info;
  } u;
} zend_refcounted_h;
struct _zend_refcounted {
  zend_refcounted_h gc;
};
struct _zend_string {
  zend_refcounted_h gc;
  zend_ulong h;
  size_t len;
  char val[1];
};
typedef struct _Bucket {
  zval val;
  zend_ulong h;
  zend_string *key;
} Bucket;
typedef struct _zend_array HashTable;
struct _zend_array {
  zend_refcounted_h gc;
  union {
    struct {
      uint8_t flags;
      uint8_t _unused;
      uint8_t nIteratorsCount;
      uint8_t _unused2;
    } v;
    uint32_t flags;
  } u;
  uint32_t nTableMask;
  union {
    uint32_t *arHash;
    Bucket *arData;
    zval *arPacked;
  };
  uint32_t nNumUsed;
  uint32_t nNumOfElements;
  uint32_t nTableSize;
  uint32_t nInternalPointer;
  zend_long nNextFreeElement;
  dtor_func_t pDestructor;
};
typedef uint32_t HashPosition;
typedef struct _HashTableIterator {
  HashTable *ht;
  HashPosition pos;
  uint32_t next_copy;
} HashTableIterator;
struct _zend_object {
  zend_refcounted_h gc;
  uint32_t handle;
  uint32_t extra_flags;
  zend_class_entry *ce;
  const zend_object_handlers *handlers;
  HashTable *properties;
  zval properties_table[1];
};
struct _zend_resource {
  zend_refcounted_h gc;
  zend_long handle;
  int type;
  void *ptr;
};
typedef struct {
  size_t num;
  size_t num_allocated;
  struct _zend_property_info *ptr[1];
} zend_property_info_list;
typedef union {
  struct _zend_property_info *ptr;
  uintptr_t list;
} zend_property_info_source_list;
struct _zend_reference {
  zend_refcounted_h gc;
  zval val;
  zend_property_info_source_list sources;
};
struct _zend_ast_ref {
  zend_refcounted_h gc;
};
static inline uint8_t zval_get_type(const zval *pz) { return pz->u1.v.type; }
static inline uint8_t zval_gc_type(uint32_t gc_type_info) {
  return (gc_type_info & 0x0000000f);
}
static inline uint32_t zval_gc_flags(uint32_t gc_type_info) {
  return (gc_type_info >> 0) & (0x000003f0 >> 0);
}
static inline uint32_t zval_gc_info(uint32_t gc_type_info) {
  return (gc_type_info >> 10);
}
static inline uint32_t zend_gc_refcount(const zend_refcounted_h *p) {
  return p->refcount;
}
static inline uint32_t zend_gc_set_refcount(zend_refcounted_h *p, uint32_t rc) {
  p->refcount = rc;
  return p->refcount;
}
static inline uint32_t zend_gc_addref(zend_refcounted_h *p) {
  do {
  } while (0);
  return ++(p->refcount);
}
static inline void zend_gc_try_addref(zend_refcounted_h *p) {
  if (!(p->u.type_info & (1 << 6))) {
    do {
    } while (0);
    ++p->refcount;
  }
}
static inline void zend_gc_try_delref(zend_refcounted_h *p) {
  if (!(p->u.type_info & (1 << 6))) {
    do {
    } while (0);
    --p->refcount;
  }
}
static inline uint32_t zend_gc_delref(zend_refcounted_h *p) {
  ((void)sizeof((p->refcount > 0) ? 1 : 0), __extension__({
     if (p->refcount > 0)
       ;
     else
       __assert_fail("p->refcount > 0", "Zend/zend_types.h", 1371,
                     __extension__ __PRETTY_FUNCTION__);
   }));
  do {
  } while (0);
  return --(p->refcount);
}
static inline uint32_t zend_gc_addref_ex(zend_refcounted_h *p, uint32_t rc) {
  do {
  } while (0);
  p->refcount += rc;
  return p->refcount;
}
static inline uint32_t zend_gc_delref_ex(zend_refcounted_h *p, uint32_t rc) {
  do {
  } while (0);
  p->refcount -= rc;
  return p->refcount;
}
static inline uint32_t zval_refcount_p(const zval *pz) {
  ((void)sizeof((((*(pz)).u1.v.type_flags != 0) || zval_get_type(&(*(pz))) == 7)
                    ? 1
                    : 0),
   __extension__({
     if (((*(pz)).u1.v.type_flags != 0) || zval_get_type(&(*(pz))) == 7)
       ;
     else
       __assert_fail(
           "((*(pz)).u1.v.type_flags != 0) || zval_get_type(&(*(pz))) == 7",
           "Zend/zend_types.h", 1390, __extension__ __PRETTY_FUNCTION__);
   }));
  return zend_gc_refcount(&((*(pz)).value.counted)->gc);
}
static inline uint32_t zval_set_refcount_p(zval *pz, uint32_t rc) {
  ((void)sizeof((((*(pz)).u1.v.type_flags != 0)) ? 1 : 0), __extension__({
     if (((*(pz)).u1.v.type_flags != 0))
       ;
     else
       __assert_fail("((*(pz)).u1.v.type_flags != 0)", "Zend/zend_types.h",
                     1396, __extension__ __PRETTY_FUNCTION__);
   }));
  return zend_gc_set_refcount(&((*(pz)).value.counted)->gc, rc);
}
static inline uint32_t zval_addref_p(zval *pz) {
  ((void)sizeof((((*(pz)).u1.v.type_flags != 0)) ? 1 : 0), __extension__({
     if (((*(pz)).u1.v.type_flags != 0))
       ;
     else
       __assert_fail("((*(pz)).u1.v.type_flags != 0)", "Zend/zend_types.h",
                     1401, __extension__ __PRETTY_FUNCTION__);
   }));
  return zend_gc_addref(&((*(pz)).value.counted)->gc);
}
static inline uint32_t zval_delref_p(zval *pz) {
  ((void)sizeof((((*(pz)).u1.v.type_flags != 0)) ? 1 : 0), __extension__({
     if (((*(pz)).u1.v.type_flags != 0))
       ;
     else
       __assert_fail("((*(pz)).u1.v.type_flags != 0)", "Zend/zend_types.h",
                     1406, __extension__ __PRETTY_FUNCTION__);
   }));
  return zend_gc_delref(&((*(pz)).value.counted)->gc);
}
static inline _Bool zend_may_modify_arg_in_place(const zval *arg) {
  return ((*(arg)).u1.v.type_flags != 0) &&
         !(zval_gc_flags(((*(arg)).value.counted)->gc.u.type_info) &
           ((1 << 6) | (1 << 7))) &&
         zval_refcount_p(arg) == 1;
}
typedef struct _zend_string zend_string;

__attribute__((visibility("default"))) void zend_map_ptr_reset(void);
__attribute__((visibility("default"))) void *zend_map_ptr_new(void);
__attribute__((visibility("default"))) void *zend_map_ptr_new_static(void);
__attribute__((visibility("default"))) void zend_map_ptr_extend(size_t last);
__attribute__((visibility("default"))) void
zend_alloc_ce_cache(zend_string *type_name);
__attribute__((visibility("default"))) extern size_t zend_map_ptr_static_last;
__attribute__((visibility("default"))) extern size_t zend_map_ptr_static_size;

typedef struct _zend_leak_info {
  void *addr;
  size_t size;
  const char *filename;
  const char *orig_filename;
  uint32_t lineno;
  uint32_t orig_lineno;
} zend_leak_info;
typedef struct _zend_mm_debug_info {
  size_t size;
  const char *filename;
  const char *orig_filename;
  uint32_t lineno;
  uint32_t orig_lineno;
} zend_mm_debug_info;

__attribute__((visibility("default"))) __attribute__((__malloc__)) char *
zend_strndup(const char *s, size_t length);
__attribute__((visibility("default"))) __attribute__((__malloc__)) void *
_emalloc(size_t size, const char *__zend_filename, const uint32_t __zend_lineno,
         const char *__zend_orig_filename, const uint32_t __zend_orig_lineno)
    __attribute__((alloc_size(1)));
__attribute__((visibility("default"))) __attribute__((__malloc__)) void *
_safe_emalloc(size_t nmemb, size_t size, size_t offset,
              const char *__zend_filename, const uint32_t __zend_lineno,
              const char *__zend_orig_filename,
              const uint32_t __zend_orig_lineno);
__attribute__((visibility("default"))) __attribute__((__malloc__)) void *
_safe_malloc(size_t nmemb, size_t size, size_t offset);
__attribute__((visibility("default"))) void
_efree(void *ptr, const char *__zend_filename, const uint32_t __zend_lineno,
       const char *__zend_orig_filename, const uint32_t __zend_orig_lineno);
__attribute__((visibility("default"))) __attribute__((__malloc__)) void *
_ecalloc(size_t nmemb, size_t size, const char *__zend_filename,
         const uint32_t __zend_lineno, const char *__zend_orig_filename,
         const uint32_t __zend_orig_lineno) __attribute__((alloc_size(1, 2)));
__attribute__((visibility("default"))) void *
_erealloc(void *ptr, size_t size, const char *__zend_filename,
          const uint32_t __zend_lineno, const char *__zend_orig_filename,
          const uint32_t __zend_orig_lineno) __attribute__((alloc_size(2)));
__attribute__((visibility("default"))) void *
_erealloc2(void *ptr, size_t size, size_t copy_size,
           const char *__zend_filename, const uint32_t __zend_lineno,
           const char *__zend_orig_filename, const uint32_t __zend_orig_lineno)
    __attribute__((alloc_size(2)));
__attribute__((visibility("default"))) void *
_safe_erealloc(void *ptr, size_t nmemb, size_t size, size_t offset,
               const char *__zend_filename, const uint32_t __zend_lineno,
               const char *__zend_orig_filename,
               const uint32_t __zend_orig_lineno);
__attribute__((visibility("default"))) void *
_safe_realloc(void *ptr, size_t nmemb, size_t size, size_t offset);
__attribute__((visibility("default"))) __attribute__((__malloc__)) char *
_estrdup(const char *s, const char *__zend_filename,
         const uint32_t __zend_lineno, const char *__zend_orig_filename,
         const uint32_t __zend_orig_lineno);
__attribute__((visibility("default"))) __attribute__((__malloc__)) char *
_estrndup(const char *s, size_t length, const char *__zend_filename,
          const uint32_t __zend_lineno, const char *__zend_orig_filename,
          const uint32_t __zend_orig_lineno);
__attribute__((visibility("default"))) size_t _zend_mem_block_size(
    void *ptr, const char *__zend_filename, const uint32_t __zend_lineno,
    const char *__zend_orig_filename, const uint32_t __zend_orig_lineno);
__attribute__((visibility("default"))) __attribute__((__malloc__)) void *
__zend_malloc(size_t len, const char *__zend_filename,
              const uint32_t __zend_lineno, const char *__zend_orig_filename,
              const uint32_t __zend_orig_lineno) __attribute__((alloc_size(1)));
__attribute__((visibility("default"))) __attribute__((__malloc__)) void *
__zend_calloc(size_t nmemb, size_t len, const char *__zend_filename,
              const uint32_t __zend_lineno, const char *__zend_orig_filename,
              const uint32_t __zend_orig_lineno)
    __attribute__((alloc_size(1, 2)));
__attribute__((visibility("default"))) void *
__zend_realloc(void *p, size_t len, const char *__zend_filename,
               const uint32_t __zend_lineno, const char *__zend_orig_filename,
               const uint32_t __zend_orig_lineno)
    __attribute__((alloc_size(2)));
__attribute__((visibility("default"))) void
__zend_free(void *p, const char *__zend_filename, const uint32_t __zend_lineno,
            const char *__zend_orig_filename,
            const uint32_t __zend_orig_lineno);
__attribute__((visibility("default"))) __attribute__((__malloc__)) char *
__zend_strdup(const char *s);
__attribute__((visibility("default"))) zend_result
zend_set_memory_limit(size_t memory_limit);
__attribute__((visibility("default"))) _Bool
zend_alloc_in_memory_limit_error_reporting(void);
__attribute__((visibility("default"))) void start_memory_manager(void);
__attribute__((visibility("default"))) void
shutdown_memory_manager(_Bool silent, _Bool full_shutdown);
__attribute__((visibility("default"))) _Bool is_zend_mm(void);
__attribute__((visibility("default"))) _Bool is_zend_ptr(const void *ptr);
__attribute__((visibility("default"))) size_t
zend_memory_usage(_Bool real_usage);
__attribute__((visibility("default"))) size_t
zend_memory_peak_usage(_Bool real_usage);
__attribute__((visibility("default"))) void zend_memory_reset_peak_usage(void);
typedef struct _zend_mm_heap zend_mm_heap;
__attribute__((visibility("default"))) zend_mm_heap *zend_mm_startup(void);
__attribute__((visibility("default"))) void
zend_mm_shutdown(zend_mm_heap *heap, _Bool full_shutdown, _Bool silent);
__attribute__((visibility("default"))) __attribute__((__malloc__)) void *
_zend_mm_alloc(zend_mm_heap *heap, size_t size, const char *__zend_filename,
               const uint32_t __zend_lineno, const char *__zend_orig_filename,
               const uint32_t __zend_orig_lineno)
    __attribute__((alloc_size(2)));
__attribute__((visibility("default"))) void
_zend_mm_free(zend_mm_heap *heap, void *p, const char *__zend_filename,
              const uint32_t __zend_lineno, const char *__zend_orig_filename,
              const uint32_t __zend_orig_lineno);
__attribute__((visibility("default"))) void *
_zend_mm_realloc(zend_mm_heap *heap, void *p, size_t size,
                 const char *__zend_filename, const uint32_t __zend_lineno,
                 const char *__zend_orig_filename,
                 const uint32_t __zend_orig_lineno);
__attribute__((visibility("default"))) void *
_zend_mm_realloc2(zend_mm_heap *heap, void *p, size_t size, size_t copy_size,
                  const char *__zend_filename, const uint32_t __zend_lineno,
                  const char *__zend_orig_filename,
                  const uint32_t __zend_orig_lineno);
__attribute__((visibility("default"))) size_t _zend_mm_block_size(
    zend_mm_heap *heap, void *p, const char *__zend_filename,
    const uint32_t __zend_lineno, const char *__zend_orig_filename,
    const uint32_t __zend_orig_lineno);
__attribute__((visibility("default"))) zend_mm_heap *
zend_mm_set_heap(zend_mm_heap *new_heap);
__attribute__((visibility("default"))) zend_mm_heap *zend_mm_get_heap(void);
__attribute__((visibility("default"))) size_t zend_mm_gc(zend_mm_heap *heap);
__attribute__((visibility("default"))) _Bool
zend_mm_is_custom_heap(zend_mm_heap *new_heap);
__attribute__((visibility("default"))) void zend_mm_set_custom_handlers(
    zend_mm_heap *heap,
    void *(*_malloc)(size_t, const char *__zend_filename,
                     const uint32_t __zend_lineno,
                     const char *__zend_orig_filename,
                     const uint32_t __zend_orig_lineno),
    void (*_free)(void *, const char *__zend_filename,
                  const uint32_t __zend_lineno,
                  const char *__zend_orig_filename,
                  const uint32_t __zend_orig_lineno),
    void *(*_realloc)(void *, size_t, const char *__zend_filename,
                      const uint32_t __zend_lineno,
                      const char *__zend_orig_filename,
                      const uint32_t __zend_orig_lineno));
__attribute__((visibility("default"))) void zend_mm_set_custom_handlers_ex(
    zend_mm_heap *heap,
    void *(*_malloc)(size_t, const char *__zend_filename,
                     const uint32_t __zend_lineno,
                     const char *__zend_orig_filename,
                     const uint32_t __zend_orig_lineno),
    void (*_free)(void *, const char *__zend_filename,
                  const uint32_t __zend_lineno,
                  const char *__zend_orig_filename,
                  const uint32_t __zend_orig_lineno),
    void *(*_realloc)(void *, size_t, const char *__zend_filename,
                      const uint32_t __zend_lineno,
                      const char *__zend_orig_filename,
                      const uint32_t __zend_orig_lineno),
    size_t (*_gc)(void), void (*_shutdown)(_Bool, _Bool));
__attribute__((visibility("default"))) void zend_mm_get_custom_handlers(
    zend_mm_heap *heap,
    void *(**_malloc)(size_t, const char *__zend_filename,
                      const uint32_t __zend_lineno,
                      const char *__zend_orig_filename,
                      const uint32_t __zend_orig_lineno),
    void (**_free)(void *, const char *__zend_filename,
                   const uint32_t __zend_lineno,
                   const char *__zend_orig_filename,
                   const uint32_t __zend_orig_lineno),
    void *(**_realloc)(void *, size_t, const char *__zend_filename,
                       const uint32_t __zend_lineno,
                       const char *__zend_orig_filename,
                       const uint32_t __zend_orig_lineno));
__attribute__((visibility("default"))) void zend_mm_get_custom_handlers_ex(
    zend_mm_heap *heap,
    void *(**_malloc)(size_t, const char *__zend_filename,
                      const uint32_t __zend_lineno,
                      const char *__zend_orig_filename,
                      const uint32_t __zend_orig_lineno),
    void (**_free)(void *, const char *__zend_filename,
                   const uint32_t __zend_lineno,
                   const char *__zend_orig_filename,
                   const uint32_t __zend_orig_lineno),
    void *(**_realloc)(void *, size_t, const char *__zend_filename,
                       const uint32_t __zend_lineno,
                       const char *__zend_orig_filename,
                       const uint32_t __zend_orig_lineno),
    size_t (**_gc)(void), void (**_shutdown)(_Bool, _Bool));
typedef struct _zend_mm_storage zend_mm_storage;
typedef void *(*zend_mm_chunk_alloc_t)(zend_mm_storage *storage, size_t size,
                                       size_t alignment);
typedef void (*zend_mm_chunk_free_t)(zend_mm_storage *storage, void *chunk,
                                     size_t size);
typedef _Bool (*zend_mm_chunk_truncate_t)(zend_mm_storage *storage, void *chunk,
                                          size_t old_size, size_t new_size);
typedef _Bool (*zend_mm_chunk_extend_t)(zend_mm_storage *storage, void *chunk,
                                        size_t old_size, size_t new_size);
typedef struct _zend_mm_handlers {
  zend_mm_chunk_alloc_t chunk_alloc;
  zend_mm_chunk_free_t chunk_free;
  zend_mm_chunk_truncate_t chunk_truncate;
  zend_mm_chunk_extend_t chunk_extend;
} zend_mm_handlers;
struct _zend_mm_storage {
  const zend_mm_handlers handlers;
  void *data;
};
__attribute__((visibility("default"))) zend_mm_storage *
zend_mm_get_storage(zend_mm_heap *heap);
__attribute__((visibility("default"))) zend_mm_heap *
zend_mm_startup_ex(const zend_mm_handlers *handlers, void *data,
                   size_t data_size);

typedef struct _zend_llist_element {
  struct _zend_llist_element *next;
  struct _zend_llist_element *prev;
  char data[1];
} zend_llist_element;
typedef void (*llist_dtor_func_t)(void *);
typedef int (*llist_compare_func_t)(const zend_llist_element **,
                                    const zend_llist_element **);
typedef void (*llist_apply_with_args_func_t)(void *data, int num_args,
                                             va_list args);
typedef void (*llist_apply_with_arg_func_t)(void *data, void *arg);
typedef void (*llist_apply_func_t)(void *);
typedef struct _zend_llist {
  zend_llist_element *head;
  zend_llist_element *tail;
  size_t count;
  size_t size;
  llist_dtor_func_t dtor;
  unsigned char persistent;
  zend_llist_element *traverse_ptr;
} zend_llist;
typedef zend_llist_element *zend_llist_position;

__attribute__((visibility("default"))) void
zend_llist_init(zend_llist *l, size_t size, llist_dtor_func_t dtor,
                unsigned char persistent);
__attribute__((visibility("default"))) void
zend_llist_add_element(zend_llist *l, const void *element);
__attribute__((visibility("default"))) void
zend_llist_prepend_element(zend_llist *l, const void *element);
__attribute__((visibility("default"))) void
zend_llist_del_element(zend_llist *l, void *element,
                       int (*compare)(void *element1, void *element2));
__attribute__((visibility("default"))) void zend_llist_destroy(zend_llist *l);
__attribute__((visibility("default"))) void zend_llist_clean(zend_llist *l);
__attribute__((visibility("default"))) void
zend_llist_remove_tail(zend_llist *l);
__attribute__((visibility("default"))) void zend_llist_copy(zend_llist *dst,
                                                            zend_llist *src);
__attribute__((visibility("default"))) void
zend_llist_apply(zend_llist *l, llist_apply_func_t func);
__attribute__((visibility("default"))) void
zend_llist_apply_with_del(zend_llist *l, int (*func)(void *data));
__attribute__((visibility("default"))) void
zend_llist_apply_with_argument(zend_llist *l, llist_apply_with_arg_func_t func,
                               void *arg);
__attribute__((visibility("default"))) void zend_llist_apply_with_arguments(
    zend_llist *l, llist_apply_with_args_func_t func, int num_args, ...);
__attribute__((visibility("default"))) size_t zend_llist_count(zend_llist *l);
__attribute__((visibility("default"))) void
zend_llist_sort(zend_llist *l, llist_compare_func_t comp_func);
__attribute__((visibility("default"))) void *
zend_llist_get_first_ex(zend_llist *l, zend_llist_position *pos);
__attribute__((visibility("default"))) void *
zend_llist_get_last_ex(zend_llist *l, zend_llist_position *pos);
__attribute__((visibility("default"))) void *
zend_llist_get_next_ex(zend_llist *l, zend_llist_position *pos);
__attribute__((visibility("default"))) void *
zend_llist_get_prev_ex(zend_llist *l, zend_llist_position *pos);
static inline void *zend_llist_get_first(zend_llist *l) {
  return zend_llist_get_first_ex(l, ((void *)0));
}
static inline void *zend_llist_get_last(zend_llist *l) {
  return zend_llist_get_last_ex(l, ((void *)0));
}
static inline void *zend_llist_get_next(zend_llist *l) {
  return zend_llist_get_next_ex(l, ((void *)0));
}
static inline void *zend_llist_get_prev(zend_llist *l) {
  return zend_llist_get_prev_ex(l, ((void *)0));
}

typedef __socklen_t socklen_t;
extern int access(const char *__name, int __type)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
extern int euidaccess(const char *__name, int __type)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
extern int eaccess(const char *__name, int __type)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
extern int execveat(int __fd, const char *__path, char *const __argv[],
                    char *const __envp[], int __flags)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2, 3)));
extern int faccessat(int __fd, const char *__file, int __type, int __flag)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2)));
extern __off_t lseek(int __fd, __off_t __offset, int __whence)
    __attribute__((__nothrow__, __leaf__));
extern __off64_t lseek64(int __fd, __off64_t __offset, int __whence)
    __attribute__((__nothrow__, __leaf__));
extern int close(int __fd);
extern void closefrom(int __lowfd) __attribute__((__nothrow__, __leaf__));
extern ssize_t read(int __fd, void *__buf, size_t __nbytes)
    __attribute__((__access__(__write_only__, 2, 3)));
extern ssize_t write(int __fd, const void *__buf, size_t __n)
    __attribute__((__access__(__read_only__, 2, 3)));
extern ssize_t pread(int __fd, void *__buf, size_t __nbytes, __off_t __offset)
    __attribute__((__access__(__write_only__, 2, 3)));
extern ssize_t pwrite(int __fd, const void *__buf, size_t __n, __off_t __offset)
    __attribute__((__access__(__read_only__, 2, 3)));
extern ssize_t pread64(int __fd, void *__buf, size_t __nbytes,
                       __off64_t __offset)
    __attribute__((__access__(__write_only__, 2, 3)));
extern ssize_t pwrite64(int __fd, const void *__buf, size_t __n,
                        __off64_t __offset)
    __attribute__((__access__(__read_only__, 2, 3)));
extern int pipe(int __pipedes[2]) __attribute__((__nothrow__, __leaf__));
extern int pipe2(int __pipedes[2], int __flags)
    __attribute__((__nothrow__, __leaf__));
extern unsigned int alarm(unsigned int __seconds)
    __attribute__((__nothrow__, __leaf__));
extern unsigned int sleep(unsigned int __seconds);
extern __useconds_t ualarm(__useconds_t __value, __useconds_t __interval)
    __attribute__((__nothrow__, __leaf__));
extern int usleep(__useconds_t __useconds);
extern int pause(void);
extern int chown(const char *__file, __uid_t __owner, __gid_t __group)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
extern int fchown(int __fd, __uid_t __owner, __gid_t __group)
    __attribute__((__nothrow__, __leaf__));
extern int lchown(const char *__file, __uid_t __owner, __gid_t __group)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
extern int fchownat(int __fd, const char *__file, __uid_t __owner,
                    __gid_t __group, int __flag)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2)));
extern int chdir(const char *__path) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(1)));
extern int fchdir(int __fd) __attribute__((__nothrow__, __leaf__));
extern char *getcwd(char *__buf, size_t __size)
    __attribute__((__nothrow__, __leaf__));
extern char *get_current_dir_name(void) __attribute__((__nothrow__, __leaf__));
extern char *getwd(char *__buf) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(1))) __attribute__((__deprecated__))
__attribute__((__access__(__write_only__, 1)));
extern int dup(int __fd) __attribute__((__nothrow__, __leaf__));
extern int dup2(int __fd, int __fd2) __attribute__((__nothrow__, __leaf__));
extern int dup3(int __fd, int __fd2, int __flags)
    __attribute__((__nothrow__, __leaf__));
extern char **__environ;
extern char **environ;
extern int execve(const char *__path, char *const __argv[],
                  char *const __envp[]) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(1, 2)));
extern int fexecve(int __fd, char *const __argv[], char *const __envp[])
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2)));
extern int execv(const char *__path, char *const __argv[])
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));
extern int execle(const char *__path, const char *__arg, ...)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));
extern int execl(const char *__path, const char *__arg, ...)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));
extern int execvp(const char *__file, char *const __argv[])
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));
extern int execlp(const char *__file, const char *__arg, ...)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));
extern int execvpe(const char *__file, char *const __argv[],
                   char *const __envp[]) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(1, 2)));
extern int nice(int __inc) __attribute__((__nothrow__, __leaf__));
extern void _exit(int __status) __attribute__((__noreturn__));
enum {
  _PC_LINK_MAX,
  _PC_MAX_CANON,
  _PC_MAX_INPUT,
  _PC_NAME_MAX,
  _PC_PATH_MAX,
  _PC_PIPE_BUF,
  _PC_CHOWN_RESTRICTED,
  _PC_NO_TRUNC,
  _PC_VDISABLE,
  _PC_SYNC_IO,
  _PC_ASYNC_IO,
  _PC_PRIO_IO,
  _PC_SOCK_MAXBUF,
  _PC_FILESIZEBITS,
  _PC_REC_INCR_XFER_SIZE,
  _PC_REC_MAX_XFER_SIZE,
  _PC_REC_MIN_XFER_SIZE,
  _PC_REC_XFER_ALIGN,
  _PC_ALLOC_SIZE_MIN,
  _PC_SYMLINK_MAX,
  _PC_2_SYMLINKS
};
enum {
  _SC_ARG_MAX,
  _SC_CHILD_MAX,
  _SC_CLK_TCK,
  _SC_NGROUPS_MAX,
  _SC_OPEN_MAX,
  _SC_STREAM_MAX,
  _SC_TZNAME_MAX,
  _SC_JOB_CONTROL,
  _SC_SAVED_IDS,
  _SC_REALTIME_SIGNALS,
  _SC_PRIORITY_SCHEDULING,
  _SC_TIMERS,
  _SC_ASYNCHRONOUS_IO,
  _SC_PRIORITIZED_IO,
  _SC_SYNCHRONIZED_IO,
  _SC_FSYNC,
  _SC_MAPPED_FILES,
  _SC_MEMLOCK,
  _SC_MEMLOCK_RANGE,
  _SC_MEMORY_PROTECTION,
  _SC_MESSAGE_PASSING,
  _SC_SEMAPHORES,
  _SC_SHARED_MEMORY_OBJECTS,
  _SC_AIO_LISTIO_MAX,
  _SC_AIO_MAX,
  _SC_AIO_PRIO_DELTA_MAX,
  _SC_DELAYTIMER_MAX,
  _SC_MQ_OPEN_MAX,
  _SC_MQ_PRIO_MAX,
  _SC_VERSION,
  _SC_PAGESIZE,
  _SC_RTSIG_MAX,
  _SC_SEM_NSEMS_MAX,
  _SC_SEM_VALUE_MAX,
  _SC_SIGQUEUE_MAX,
  _SC_TIMER_MAX,
  _SC_BC_BASE_MAX,
  _SC_BC_DIM_MAX,
  _SC_BC_SCALE_MAX,
  _SC_BC_STRING_MAX,
  _SC_COLL_WEIGHTS_MAX,
  _SC_EQUIV_CLASS_MAX,
  _SC_EXPR_NEST_MAX,
  _SC_LINE_MAX,
  _SC_RE_DUP_MAX,
  _SC_CHARCLASS_NAME_MAX,
  _SC_2_VERSION,
  _SC_2_C_BIND,
  _SC_2_C_DEV,
  _SC_2_FORT_DEV,
  _SC_2_FORT_RUN,
  _SC_2_SW_DEV,
  _SC_2_LOCALEDEF,
  _SC_PII,
  _SC_PII_XTI,
  _SC_PII_SOCKET,
  _SC_PII_INTERNET,
  _SC_PII_OSI,
  _SC_POLL,
  _SC_SELECT,
  _SC_UIO_MAXIOV,
  _SC_IOV_MAX = _SC_UIO_MAXIOV,
  _SC_PII_INTERNET_STREAM,
  _SC_PII_INTERNET_DGRAM,
  _SC_PII_OSI_COTS,
  _SC_PII_OSI_CLTS,
  _SC_PII_OSI_M,
  _SC_T_IOV_MAX,
  _SC_THREADS,
  _SC_THREAD_SAFE_FUNCTIONS,
  _SC_GETGR_R_SIZE_MAX,
  _SC_GETPW_R_SIZE_MAX,
  _SC_LOGIN_NAME_MAX,
  _SC_TTY_NAME_MAX,
  _SC_THREAD_DESTRUCTOR_ITERATIONS,
  _SC_THREAD_KEYS_MAX,
  _SC_THREAD_STACK_MIN,
  _SC_THREAD_THREADS_MAX,
  _SC_THREAD_ATTR_STACKADDR,
  _SC_THREAD_ATTR_STACKSIZE,
  _SC_THREAD_PRIORITY_SCHEDULING,
  _SC_THREAD_PRIO_INHERIT,
  _SC_THREAD_PRIO_PROTECT,
  _SC_THREAD_PROCESS_SHARED,
  _SC_NPROCESSORS_CONF,
  _SC_NPROCESSORS_ONLN,
  _SC_PHYS_PAGES,
  _SC_AVPHYS_PAGES,
  _SC_ATEXIT_MAX,
  _SC_PASS_MAX,
  _SC_XOPEN_VERSION,
  _SC_XOPEN_XCU_VERSION,
  _SC_XOPEN_UNIX,
  _SC_XOPEN_CRYPT,
  _SC_XOPEN_ENH_I18N,
  _SC_XOPEN_SHM,
  _SC_2_CHAR_TERM,
  _SC_2_C_VERSION,
  _SC_2_UPE,
  _SC_XOPEN_XPG2,
  _SC_XOPEN_XPG3,
  _SC_XOPEN_XPG4,
  _SC_CHAR_BIT,
  _SC_CHAR_MAX,
  _SC_CHAR_MIN,
  _SC_INT_MAX,
  _SC_INT_MIN,
  _SC_LONG_BIT,
  _SC_WORD_BIT,
  _SC_MB_LEN_MAX,
  _SC_NZERO,
  _SC_SSIZE_MAX,
  _SC_SCHAR_MAX,
  _SC_SCHAR_MIN,
  _SC_SHRT_MAX,
  _SC_SHRT_MIN,
  _SC_UCHAR_MAX,
  _SC_UINT_MAX,
  _SC_ULONG_MAX,
  _SC_USHRT_MAX,
  _SC_NL_ARGMAX,
  _SC_NL_LANGMAX,
  _SC_NL_MSGMAX,
  _SC_NL_NMAX,
  _SC_NL_SETMAX,
  _SC_NL_TEXTMAX,
  _SC_XBS5_ILP32_OFF32,
  _SC_XBS5_ILP32_OFFBIG,
  _SC_XBS5_LP64_OFF64,
  _SC_XBS5_LPBIG_OFFBIG,
  _SC_XOPEN_LEGACY,
  _SC_XOPEN_REALTIME,
  _SC_XOPEN_REALTIME_THREADS,
  _SC_ADVISORY_INFO,
  _SC_BARRIERS,
  _SC_BASE,
  _SC_C_LANG_SUPPORT,
  _SC_C_LANG_SUPPORT_R,
  _SC_CLOCK_SELECTION,
  _SC_CPUTIME,
  _SC_THREAD_CPUTIME,
  _SC_DEVICE_IO,
  _SC_DEVICE_SPECIFIC,
  _SC_DEVICE_SPECIFIC_R,
  _SC_FD_MGMT,
  _SC_FIFO,
  _SC_PIPE,
  _SC_FILE_ATTRIBUTES,
  _SC_FILE_LOCKING,
  _SC_FILE_SYSTEM,
  _SC_MONOTONIC_CLOCK,
  _SC_MULTI_PROCESS,
  _SC_SINGLE_PROCESS,
  _SC_NETWORKING,
  _SC_READER_WRITER_LOCKS,
  _SC_SPIN_LOCKS,
  _SC_REGEXP,
  _SC_REGEX_VERSION,
  _SC_SHELL,
  _SC_SIGNALS,
  _SC_SPAWN,
  _SC_SPORADIC_SERVER,
  _SC_THREAD_SPORADIC_SERVER,
  _SC_SYSTEM_DATABASE,
  _SC_SYSTEM_DATABASE_R,
  _SC_TIMEOUTS,
  _SC_TYPED_MEMORY_OBJECTS,
  _SC_USER_GROUPS,
  _SC_USER_GROUPS_R,
  _SC_2_PBS,
  _SC_2_PBS_ACCOUNTING,
  _SC_2_PBS_LOCATE,
  _SC_2_PBS_MESSAGE,
  _SC_2_PBS_TRACK,
  _SC_SYMLOOP_MAX,
  _SC_STREAMS,
  _SC_2_PBS_CHECKPOINT,
  _SC_V6_ILP32_OFF32,
  _SC_V6_ILP32_OFFBIG,
  _SC_V6_LP64_OFF64,
  _SC_V6_LPBIG_OFFBIG,
  _SC_HOST_NAME_MAX,
  _SC_TRACE,
  _SC_TRACE_EVENT_FILTER,
  _SC_TRACE_INHERIT,
  _SC_TRACE_LOG,
  _SC_LEVEL1_ICACHE_SIZE,
  _SC_LEVEL1_ICACHE_ASSOC,
  _SC_LEVEL1_ICACHE_LINESIZE,
  _SC_LEVEL1_DCACHE_SIZE,
  _SC_LEVEL1_DCACHE_ASSOC,
  _SC_LEVEL1_DCACHE_LINESIZE,
  _SC_LEVEL2_CACHE_SIZE,
  _SC_LEVEL2_CACHE_ASSOC,
  _SC_LEVEL2_CACHE_LINESIZE,
  _SC_LEVEL3_CACHE_SIZE,
  _SC_LEVEL3_CACHE_ASSOC,
  _SC_LEVEL3_CACHE_LINESIZE,
  _SC_LEVEL4_CACHE_SIZE,
  _SC_LEVEL4_CACHE_ASSOC,
  _SC_LEVEL4_CACHE_LINESIZE,
  _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,
  _SC_RAW_SOCKETS,
  _SC_V7_ILP32_OFF32,
  _SC_V7_ILP32_OFFBIG,
  _SC_V7_LP64_OFF64,
  _SC_V7_LPBIG_OFFBIG,
  _SC_SS_REPL_MAX,
  _SC_TRACE_EVENT_NAME_MAX,
  _SC_TRACE_NAME_MAX,
  _SC_TRACE_SYS_MAX,
  _SC_TRACE_USER_EVENT_MAX,
  _SC_XOPEN_STREAMS,
  _SC_THREAD_ROBUST_PRIO_INHERIT,
  _SC_THREAD_ROBUST_PRIO_PROTECT,
  _SC_MINSIGSTKSZ,
  _SC_SIGSTKSZ
};
enum {
  _CS_PATH,
  _CS_V6_WIDTH_RESTRICTED_ENVS,
  _CS_GNU_LIBC_VERSION,
  _CS_GNU_LIBPTHREAD_VERSION,
  _CS_V5_WIDTH_RESTRICTED_ENVS,
  _CS_V7_WIDTH_RESTRICTED_ENVS,
  _CS_LFS_CFLAGS = 1000,
  _CS_LFS_LDFLAGS,
  _CS_LFS_LIBS,
  _CS_LFS_LINTFLAGS,
  _CS_LFS64_CFLAGS,
  _CS_LFS64_LDFLAGS,
  _CS_LFS64_LIBS,
  _CS_LFS64_LINTFLAGS,
  _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,
  _CS_XBS5_ILP32_OFF32_LDFLAGS,
  _CS_XBS5_ILP32_OFF32_LIBS,
  _CS_XBS5_ILP32_OFF32_LINTFLAGS,
  _CS_XBS5_ILP32_OFFBIG_CFLAGS,
  _CS_XBS5_ILP32_OFFBIG_LDFLAGS,
  _CS_XBS5_ILP32_OFFBIG_LIBS,
  _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,
  _CS_XBS5_LP64_OFF64_CFLAGS,
  _CS_XBS5_LP64_OFF64_LDFLAGS,
  _CS_XBS5_LP64_OFF64_LIBS,
  _CS_XBS5_LP64_OFF64_LINTFLAGS,
  _CS_XBS5_LPBIG_OFFBIG_CFLAGS,
  _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,
  _CS_XBS5_LPBIG_OFFBIG_LIBS,
  _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,
  _CS_POSIX_V6_ILP32_OFF32_CFLAGS,
  _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,
  _CS_POSIX_V6_ILP32_OFF32_LIBS,
  _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,
  _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,
  _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,
  _CS_POSIX_V6_ILP32_OFFBIG_LIBS,
  _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,
  _CS_POSIX_V6_LP64_OFF64_CFLAGS,
  _CS_POSIX_V6_LP64_OFF64_LDFLAGS,
  _CS_POSIX_V6_LP64_OFF64_LIBS,
  _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,
  _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,
  _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,
  _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,
  _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,
  _CS_POSIX_V7_ILP32_OFF32_CFLAGS,
  _CS_POSIX_V7_ILP32_OFF32_LDFLAGS,
  _CS_POSIX_V7_ILP32_OFF32_LIBS,
  _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,
  _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,
  _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,
  _CS_POSIX_V7_ILP32_OFFBIG_LIBS,
  _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,
  _CS_POSIX_V7_LP64_OFF64_CFLAGS,
  _CS_POSIX_V7_LP64_OFF64_LDFLAGS,
  _CS_POSIX_V7_LP64_OFF64_LIBS,
  _CS_POSIX_V7_LP64_OFF64_LINTFLAGS,
  _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,
  _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,
  _CS_POSIX_V7_LPBIG_OFFBIG_LIBS,
  _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,
  _CS_V6_ENV,
  _CS_V7_ENV
};
extern long int pathconf(const char *__path, int __name)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
extern long int fpathconf(int __fd, int __name)
    __attribute__((__nothrow__, __leaf__));
extern long int sysconf(int __name) __attribute__((__nothrow__, __leaf__));
extern size_t confstr(int __name, char *__buf, size_t __len)
    __attribute__((__nothrow__, __leaf__))
    __attribute__((__access__(__write_only__, 2, 3)));
extern __pid_t getpid(void) __attribute__((__nothrow__, __leaf__));
extern __pid_t getppid(void) __attribute__((__nothrow__, __leaf__));
extern __pid_t getpgrp(void) __attribute__((__nothrow__, __leaf__));
extern __pid_t __getpgid(__pid_t __pid) __attribute__((__nothrow__, __leaf__));
extern __pid_t getpgid(__pid_t __pid) __attribute__((__nothrow__, __leaf__));
extern int setpgid(__pid_t __pid, __pid_t __pgid)
    __attribute__((__nothrow__, __leaf__));
extern int setpgrp(void) __attribute__((__nothrow__, __leaf__));
extern __pid_t setsid(void) __attribute__((__nothrow__, __leaf__));
extern __pid_t getsid(__pid_t __pid) __attribute__((__nothrow__, __leaf__));
extern __uid_t getuid(void) __attribute__((__nothrow__, __leaf__));
extern __uid_t geteuid(void) __attribute__((__nothrow__, __leaf__));
extern __gid_t getgid(void) __attribute__((__nothrow__, __leaf__));
extern __gid_t getegid(void) __attribute__((__nothrow__, __leaf__));
extern int getgroups(int __size, __gid_t __list[])
    __attribute__((__nothrow__, __leaf__))
    __attribute__((__access__(__write_only__, 2, 1)));
extern int group_member(__gid_t __gid) __attribute__((__nothrow__, __leaf__));
extern int setuid(__uid_t __uid) __attribute__((__nothrow__, __leaf__));
extern int setreuid(__uid_t __ruid, __uid_t __euid)
    __attribute__((__nothrow__, __leaf__));
extern int seteuid(__uid_t __uid) __attribute__((__nothrow__, __leaf__));
extern int setgid(__gid_t __gid) __attribute__((__nothrow__, __leaf__));
extern int setregid(__gid_t __rgid, __gid_t __egid)
    __attribute__((__nothrow__, __leaf__));
extern int setegid(__gid_t __gid) __attribute__((__nothrow__, __leaf__));
extern int getresuid(__uid_t *__ruid, __uid_t *__euid, __uid_t *__suid)
    __attribute__((__nothrow__, __leaf__));
extern int getresgid(__gid_t *__rgid, __gid_t *__egid, __gid_t *__sgid)
    __attribute__((__nothrow__, __leaf__));
extern int setresuid(__uid_t __ruid, __uid_t __euid, __uid_t __suid)
    __attribute__((__nothrow__, __leaf__));
extern int setresgid(__gid_t __rgid, __gid_t __egid, __gid_t __sgid)
    __attribute__((__nothrow__, __leaf__));
extern __pid_t fork(void) __attribute__((__nothrow__));
extern __pid_t vfork(void) __attribute__((__nothrow__, __leaf__));
extern __pid_t _Fork(void) __attribute__((__nothrow__, __leaf__));
extern char *ttyname(int __fd) __attribute__((__nothrow__, __leaf__));
extern int ttyname_r(int __fd, char *__buf, size_t __buflen)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2)))
    __attribute__((__access__(__write_only__, 2, 3)));
extern int isatty(int __fd) __attribute__((__nothrow__, __leaf__));
extern int ttyslot(void) __attribute__((__nothrow__, __leaf__));
extern int link(const char *__from, const char *__to)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));
extern int linkat(int __fromfd, const char *__from, int __tofd,
                  const char *__to, int __flags)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2, 4)));
extern int symlink(const char *__from, const char *__to)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));
extern ssize_t readlink(const char *__restrict __path, char *__restrict __buf,
                        size_t __len) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(1, 2)))
__attribute__((__access__(__write_only__, 2, 3)));
extern int symlinkat(const char *__from, int __tofd, const char *__to)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 3)));
extern ssize_t readlinkat(int __fd, const char *__restrict __path,
                          char *__restrict __buf, size_t __len)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2, 3)))
    __attribute__((__access__(__write_only__, 3, 4)));
extern int unlink(const char *__name) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(1)));
extern int unlinkat(int __fd, const char *__name, int __flag)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2)));
extern int rmdir(const char *__path) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(1)));
extern __pid_t tcgetpgrp(int __fd) __attribute__((__nothrow__, __leaf__));
extern int tcsetpgrp(int __fd, __pid_t __pgrp_id)
    __attribute__((__nothrow__, __leaf__));
extern char *getlogin(void);
extern int getlogin_r(char *__name, size_t __name_len)
    __attribute__((__nonnull__(1)))
    __attribute__((__access__(__write_only__, 1, 2)));
extern int setlogin(const char *__name) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(1)));

extern char *optarg;
extern int optind;
extern int opterr;
extern int optopt;
extern int getopt(int ___argc, char *const *___argv, const char *__shortopts)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2, 3)));

extern int gethostname(char *__name, size_t __len)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)))
    __attribute__((__access__(__write_only__, 1, 2)));
extern int sethostname(const char *__name, size_t __len)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)))
    __attribute__((__access__(__read_only__, 1, 2)));
extern int sethostid(long int __id) __attribute__((__nothrow__, __leaf__));
extern int getdomainname(char *__name, size_t __len)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)))
    __attribute__((__access__(__write_only__, 1, 2)));
extern int setdomainname(const char *__name, size_t __len)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)))
    __attribute__((__access__(__read_only__, 1, 2)));
extern int vhangup(void) __attribute__((__nothrow__, __leaf__));
extern int revoke(const char *__file) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(1)));
extern int profil(unsigned short int *__sample_buffer, size_t __size,
                  size_t __offset, unsigned int __scale)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
extern int acct(const char *__name) __attribute__((__nothrow__, __leaf__));
extern char *getusershell(void) __attribute__((__nothrow__, __leaf__));
extern void endusershell(void) __attribute__((__nothrow__, __leaf__));
extern void setusershell(void) __attribute__((__nothrow__, __leaf__));
extern int daemon(int __nochdir, int __noclose)
    __attribute__((__nothrow__, __leaf__));
extern int chroot(const char *__path) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(1)));
extern char *getpass(const char *__prompt) __attribute__((__nonnull__(1)));
extern int fsync(int __fd);
extern int syncfs(int __fd) __attribute__((__nothrow__, __leaf__));
extern long int gethostid(void);
extern void sync(void) __attribute__((__nothrow__, __leaf__));
extern int getpagesize(void) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern int getdtablesize(void) __attribute__((__nothrow__, __leaf__));
extern int truncate(const char *__file, __off_t __length)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
extern int truncate64(const char *__file, __off64_t __length)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
extern int ftruncate(int __fd, __off_t __length)
    __attribute__((__nothrow__, __leaf__));
extern int ftruncate64(int __fd, __off64_t __length)
    __attribute__((__nothrow__, __leaf__));
extern int brk(void *__addr) __attribute__((__nothrow__, __leaf__));
extern void *sbrk(intptr_t __delta) __attribute__((__nothrow__, __leaf__));
extern long int syscall(long int __sysno, ...)
    __attribute__((__nothrow__, __leaf__));
extern int lockf(int __fd, int __cmd, __off_t __len);
extern int lockf64(int __fd, int __cmd, __off64_t __len);
ssize_t copy_file_range(int __infd, __off64_t *__pinoff, int __outfd,
                        __off64_t *__poutoff, size_t __length,
                        unsigned int __flags);
extern int fdatasync(int __fildes);
extern char *crypt(const char *__key, const char *__salt)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));
extern void swab(const void *__restrict __from, void *__restrict __to,
                 ssize_t __n) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(1, 2)))
__attribute__((__access__(__read_only__, 1, 3)))
__attribute__((__access__(__write_only__, 2, 3)));
int getentropy(void *__buffer, size_t __length)
    __attribute__((__access__(__write_only__, 1, 2)));
extern int close_range(unsigned int __fd, unsigned int __max_fd, int __flags)
    __attribute__((__nothrow__, __leaf__));
extern __pid_t gettid(void) __attribute__((__nothrow__, __leaf__));

struct timex {
  unsigned int modes;
  __syscall_slong_t offset;
  __syscall_slong_t freq;
  __syscall_slong_t maxerror;
  __syscall_slong_t esterror;
  int status;
  __syscall_slong_t constant;
  __syscall_slong_t precision;
  __syscall_slong_t tolerance;
  struct timeval time;
  __syscall_slong_t tick;
  __syscall_slong_t ppsfreq;
  __syscall_slong_t jitter;
  int shift;
  __syscall_slong_t stabil;
  __syscall_slong_t jitcnt;
  __syscall_slong_t calcnt;
  __syscall_slong_t errcnt;
  __syscall_slong_t stbcnt;
  int tai;
  int : 32;
  int : 32;
  int : 32;
  int : 32;
  int : 32;
  int : 32;
  int : 32;
  int : 32;
  int : 32;
  int : 32;
  int : 32;
};

extern int clock_adjtime(__clockid_t __clock_id, struct timex *__utx)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2)));

struct tm {
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;
  long int tm_gmtoff;
  const char *tm_zone;
};
struct itimerspec {
  struct timespec it_interval;
  struct timespec it_value;
};
struct sigevent;

extern clock_t clock(void) __attribute__((__nothrow__, __leaf__));
extern time_t time(time_t *__timer) __attribute__((__nothrow__, __leaf__));
extern double difftime(time_t __time1, time_t __time0);
extern time_t mktime(struct tm *__tp) __attribute__((__nothrow__, __leaf__));
extern size_t strftime(char *__restrict __s, size_t __maxsize,
                       const char *__restrict __format,
                       const struct tm *__restrict __tp)
    __attribute__((__nothrow__, __leaf__))
    __attribute__((__nonnull__(1, 3, 4)));
extern char *strptime(const char *__restrict __s, const char *__restrict __fmt,
                      struct tm *__tp) __attribute__((__nothrow__, __leaf__));
extern size_t strftime_l(char *__restrict __s, size_t __maxsize,
                         const char *__restrict __format,
                         const struct tm *__restrict __tp, locale_t __loc)
    __attribute__((__nothrow__, __leaf__));
extern char *strptime_l(const char *__restrict __s,
                        const char *__restrict __fmt, struct tm *__tp,
                        locale_t __loc) __attribute__((__nothrow__, __leaf__));
extern struct tm *gmtime(const time_t *__timer)
    __attribute__((__nothrow__, __leaf__));
extern struct tm *localtime(const time_t *__timer)
    __attribute__((__nothrow__, __leaf__));
extern struct tm *gmtime_r(const time_t *__restrict __timer,
                           struct tm *__restrict __tp)
    __attribute__((__nothrow__, __leaf__));
extern struct tm *localtime_r(const time_t *__restrict __timer,
                              struct tm *__restrict __tp)
    __attribute__((__nothrow__, __leaf__));
extern char *asctime(const struct tm *__tp)
    __attribute__((__nothrow__, __leaf__));
extern char *ctime(const time_t *__timer)
    __attribute__((__nothrow__, __leaf__));
extern char *asctime_r(const struct tm *__restrict __tp, char *__restrict __buf)
    __attribute__((__nothrow__, __leaf__));
extern char *ctime_r(const time_t *__restrict __timer, char *__restrict __buf)
    __attribute__((__nothrow__, __leaf__));
extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;
extern char *tzname[2];
extern void tzset(void) __attribute__((__nothrow__, __leaf__));
extern int daylight;
extern long int timezone;
extern time_t timegm(struct tm *__tp) __attribute__((__nothrow__, __leaf__));
extern time_t timelocal(struct tm *__tp) __attribute__((__nothrow__, __leaf__));
extern int dysize(int __year) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern int nanosleep(const struct timespec *__requested_time,
                     struct timespec *__remaining);
extern int clock_getres(clockid_t __clock_id, struct timespec *__res)
    __attribute__((__nothrow__, __leaf__));
extern int clock_gettime(clockid_t __clock_id, struct timespec *__tp)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2)));
extern int clock_settime(clockid_t __clock_id, const struct timespec *__tp)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2)));
extern int clock_nanosleep(clockid_t __clock_id, int __flags,
                           const struct timespec *__req,
                           struct timespec *__rem);
extern int clock_getcpuclockid(pid_t __pid, clockid_t *__clock_id)
    __attribute__((__nothrow__, __leaf__));
extern int timer_create(clockid_t __clock_id, struct sigevent *__restrict __evp,
                        timer_t *__restrict __timerid)
    __attribute__((__nothrow__, __leaf__));
extern int timer_delete(timer_t __timerid)
    __attribute__((__nothrow__, __leaf__));
extern int timer_settime(timer_t __timerid, int __flags,
                         const struct itimerspec *__restrict __value,
                         struct itimerspec *__restrict __ovalue)
    __attribute__((__nothrow__, __leaf__));
extern int timer_gettime(timer_t __timerid, struct itimerspec *__value)
    __attribute__((__nothrow__, __leaf__));
extern int timer_getoverrun(timer_t __timerid)
    __attribute__((__nothrow__, __leaf__));
extern int timespec_get(struct timespec *__ts, int __base)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
extern int timespec_getres(struct timespec *__ts, int __base)
    __attribute__((__nothrow__, __leaf__));
extern int getdate_err;
extern struct tm *getdate(const char *__string);
extern int getdate_r(const char *__restrict __string,
                     struct tm *__restrict __resbufp);

typedef uint64_t zend_hrtime_t;
void zend_startup_hrtime(void);
static inline zend_hrtime_t zend_hrtime(void) {
  struct timespec ts = {.tv_sec = 0, .tv_nsec = 0};
  if (__builtin_expect(!!(0 == clock_gettime(1, &ts)), 1)) {
    return ((zend_hrtime_t)ts.tv_sec * (zend_hrtime_t)1000000000UL) +
           ts.tv_nsec;
  }
  return 0;
}

typedef struct _zend_gc_status {
  _Bool active;
  _Bool gc_protected;
  _Bool full;
  uint32_t runs;
  uint32_t collected;
  uint32_t threshold;
  uint32_t buf_size;
  uint32_t num_roots;
  zend_hrtime_t application_time;
  zend_hrtime_t collector_time;
  zend_hrtime_t dtor_time;
  zend_hrtime_t free_time;
} zend_gc_status;
__attribute__((visibility("default"))) extern int (*gc_collect_cycles)(void);
__attribute__((visibility("default"))) void
gc_possible_root(zend_refcounted *ref);
__attribute__((visibility("default"))) void
gc_remove_from_buffer(zend_refcounted *ref);
__attribute__((visibility("default"))) _Bool gc_enable(_Bool enable);
__attribute__((visibility("default"))) _Bool gc_enabled(void);
__attribute__((visibility("default"))) _Bool gc_protect(_Bool protect);
__attribute__((visibility("default"))) _Bool gc_protected(void);
__attribute__((visibility("default"))) int zend_gc_collect_cycles(void);
__attribute__((visibility("default"))) void
zend_gc_get_status(zend_gc_status *status);
void gc_init(void);
void gc_globals_ctor(void);
void gc_globals_dtor(void);
void gc_reset(void);
static inline void gc_check_possible_root(zend_refcounted *ref) {
  if (__builtin_expect(!!((ref)->gc.u.type_info == (10 | ((1 << 4) << 0))),
                       1)) {
    zval *zv = &((zend_reference *)ref)->val;
    if (!(((*(zv)).u1.v.type_flags & (1 << 1)) != 0)) {
      return;
    }
    ref = (*(zv)).value.counted;
  }
  if (__builtin_expect(
          !!((((ref)->gc.u.type_info & (0xfffffc00 | ((1 << 4) << 0))) == 0)),
          0)) {
    gc_possible_root(ref);
  }
}
static inline void gc_check_possible_root_no_ref(zend_refcounted *ref) {
  ((void)sizeof(((ref)->gc.u.type_info != (10 | ((1 << 4) << 0))) ? 1 : 0),
   __extension__({
     if ((ref)->gc.u.type_info != (10 | ((1 << 4) << 0)))
       ;
     else
       __assert_fail("(ref)->gc.u.type_info != (10 | ((1<<4) << 0))",
                     "Zend/zend_gc.h", 105, __extension__ __PRETTY_FUNCTION__);
   }));
  if (__builtin_expect(
          !!((((ref)->gc.u.type_info & (0xfffffc00 | ((1 << 4) << 0))) == 0)),
          0)) {
    gc_possible_root(ref);
  }
}
typedef struct {
  zval *cur;
  zval *end;
  zval *start;
} zend_get_gc_buffer;
__attribute__((visibility("default"))) zend_get_gc_buffer *
zend_get_gc_buffer_create(void);
__attribute__((visibility("default"))) void
zend_get_gc_buffer_grow(zend_get_gc_buffer *gc_buffer);
static inline void zend_get_gc_buffer_add_zval(zend_get_gc_buffer *gc_buffer,
                                               zval *zv) {
  if (((*(zv)).u1.v.type_flags != 0)) {
    if (__builtin_expect(!!(gc_buffer->cur == gc_buffer->end), 0)) {
      zend_get_gc_buffer_grow(gc_buffer);
    }
    do {
      zval *_z1 = (gc_buffer->cur);
      const zval *_z2 = (zv);
      zend_refcounted *_gc = (*(_z2)).value.counted;
      uint32_t _t = (*(_z2)).u1.type_info;
      do {
        (*(_z1)).value.counted = _gc;
        (*(_z1)).u1.type_info = _t;
      } while (0);
    } while (0);
    gc_buffer->cur++;
  }
}
static inline void zend_get_gc_buffer_add_obj(zend_get_gc_buffer *gc_buffer,
                                              zend_object *obj) {
  ((void)sizeof((obj != ((void *)0)) ? 1 : 0), __extension__({
     if (obj != ((void *)0))
       ;
     else
       __assert_fail("obj != ((void *)0)", "Zend/zend_gc.h", 137,
                     __extension__ __PRETTY_FUNCTION__);
   }));
  if (__builtin_expect(!!(gc_buffer->cur == gc_buffer->end), 0)) {
    zend_get_gc_buffer_grow(gc_buffer);
  }
  do {
    zval *__z = (gc_buffer->cur);
    (*(__z)).value.obj = (obj);
    (*(__z)).u1.type_info = (8 | ((1 << 0) << 8) | ((1 << 1) << 8));
  } while (0);
  gc_buffer->cur++;
}
static inline void zend_get_gc_buffer_add_ht(zend_get_gc_buffer *gc_buffer,
                                             HashTable *ht) {
  if (zval_gc_flags((ht)->gc.u.type_info) & (1 << 6)) {
    return;
  }
  if (__builtin_expect(!!(gc_buffer->cur == gc_buffer->end), 0)) {
    zend_get_gc_buffer_grow(gc_buffer);
  }
  do {
    zend_array *__arr = (ht);
    zval *__z = (gc_buffer->cur);
    (*(__z)).value.arr = __arr;
    (*(__z)).u1.type_info = (7 | ((1 << 0) << 8) | ((1 << 1) << 8));
  } while (0);
  gc_buffer->cur++;
}
static inline void zend_get_gc_buffer_add_ptr(zend_get_gc_buffer *gc_buffer,
                                              void *ptr) {
  if (__builtin_expect(!!(gc_buffer->cur == gc_buffer->end), 0)) {
    zend_get_gc_buffer_grow(gc_buffer);
  }
  do {
    (*(gc_buffer->cur)).value.ptr = (ptr);
    (*(gc_buffer->cur)).u1.type_info = 13;
  } while (0);
  gc_buffer->cur++;
}
static inline void zend_get_gc_buffer_use(zend_get_gc_buffer *gc_buffer,
                                          zval **table, int *n) {
  *table = gc_buffer->start;
  *n = gc_buffer->cur - gc_buffer->start;
}

typedef void (*zend_string_copy_storage_func_t)(void);
typedef zend_string *(*zend_new_interned_string_func_t)(zend_string *str);
typedef zend_string *(*zend_string_init_interned_func_t)(const char *str,
                                                         size_t size,
                                                         _Bool permanent);
typedef zend_string *(*zend_string_init_existing_interned_func_t)(
    const char *str, size_t size, _Bool permanent);
__attribute__((visibility("default"))) extern zend_new_interned_string_func_t
    zend_new_interned_string;
__attribute__((visibility("default"))) extern zend_string_init_interned_func_t
    zend_string_init_interned;
__attribute__((
    visibility("default"))) extern zend_string_init_existing_interned_func_t
    zend_string_init_existing_interned;
__attribute__((visibility("default"))) zend_ulong
zend_string_hash_func(zend_string *str);
__attribute__((visibility("default"))) zend_ulong
zend_hash_func(const char *str, size_t len);
__attribute__((visibility("default"))) zend_string *
zend_interned_string_find_permanent(zend_string *str);
__attribute__((visibility("default"))) zend_string *
zend_string_concat2(const char *str1, size_t str1_len, const char *str2,
                    size_t str2_len);
__attribute__((visibility("default"))) zend_string *
zend_string_concat3(const char *str1, size_t str1_len, const char *str2,
                    size_t str2_len, const char *str3, size_t str3_len);
__attribute__((visibility("default"))) void zend_interned_strings_init(void);
__attribute__((visibility("default"))) void zend_interned_strings_dtor(void);
__attribute__((visibility("default"))) void
zend_interned_strings_activate(void);
__attribute__((visibility("default"))) void
zend_interned_strings_deactivate(void);
__attribute__((visibility("default"))) void
zend_interned_strings_set_request_storage_handlers(
    zend_new_interned_string_func_t handler,
    zend_string_init_interned_func_t init_handler,
    zend_string_init_existing_interned_func_t init_existing_handler);
__attribute__((visibility("default"))) void
zend_interned_strings_switch_storage(_Bool request);
__attribute__((visibility("default"))) extern zend_string *zend_empty_string;
__attribute__((
    visibility("default"))) extern zend_string *zend_one_char_string[256];
__attribute__((visibility("default"))) extern zend_string **zend_known_strings;

static inline zend_ulong zend_string_hash_val(zend_string *s) {
  return (s)->h ? (s)->h : zend_string_hash_func(s);
}
static inline void zend_string_forget_hash_val(zend_string *s) {
  (s)->h = 0;
  do {
    (s)->gc.u.type_info &= ~(((1 << 9)) << 0);
  } while (0);
}
static inline uint32_t zend_string_refcount(const zend_string *s) {
  if (!(zval_gc_flags((s)->gc.u.type_info) & (1 << 6))) {
    return zend_gc_refcount(&(s)->gc);
  }
  return 1;
}
static inline uint32_t zend_string_addref(zend_string *s) {
  if (!(zval_gc_flags((s)->gc.u.type_info) & (1 << 6))) {
    return zend_gc_addref(&(s)->gc);
  }
  return 1;
}
static inline uint32_t zend_string_delref(zend_string *s) {
  if (!(zval_gc_flags((s)->gc.u.type_info) & (1 << 6))) {
    return zend_gc_delref(&(s)->gc);
  }
  return 1;
}
static inline zend_string *zend_string_alloc(size_t len, _Bool persistent) {
  zend_string *ret =
      (zend_string
           *)((persistent)
                  ? __zend_malloc(
                        ((((__builtin_offsetof(zend_string, val) + len + 1)) +
                          (size_t)8 - 1) &
                         ~((size_t)8 - 1)),
                        "Zend/zend_string.h", 176, ((void *)0), 0)
                  : _emalloc(
                        (((((__builtin_offsetof(zend_string, val) + len + 1)) +
                           (size_t)8 - 1) &
                          ~((size_t)8 - 1))),
                        "Zend/zend_string.h", 176, ((void *)0), 0));
  zend_gc_set_refcount(&(ret)->gc, 1);
  (ret)->gc.u.type_info =
      (6 | ((1 << 4) << 0)) | ((persistent ? (1 << 7) : 0) << 0);
  (ret)->h = 0;
  (ret)->len = len;
  return ret;
}
static inline zend_string *zend_string_safe_alloc(size_t n, size_t m, size_t l,
                                                  _Bool persistent) {
  zend_string *ret =
      (zend_string
           *)((persistent)
                  ? _safe_malloc(
                        n, m,
                        ((((__builtin_offsetof(zend_string, val) + l + 1)) +
                          (size_t)8 - 1) &
                         ~((size_t)8 - 1)))
                  : _safe_emalloc(
                        (n), (m),
                        (((((__builtin_offsetof(zend_string, val) + l + 1)) +
                           (size_t)8 - 1) &
                          ~((size_t)8 - 1))),
                        "Zend/zend_string.h", 187, ((void *)0), 0));
  zend_gc_set_refcount(&(ret)->gc, 1);
  (ret)->gc.u.type_info =
      (6 | ((1 << 4) << 0)) | ((persistent ? (1 << 7) : 0) << 0);
  (ret)->h = 0;
  (ret)->len = (n * m) + l;
  return ret;
}
static inline zend_string *zend_string_init(const char *str, size_t len,
                                            _Bool persistent) {
  zend_string *ret = zend_string_alloc(len, persistent);
  memcpy((ret)->val, str, len);
  (ret)->val[len] = '\0';
  return ret;
}
static inline zend_string *zend_string_init_fast(const char *str, size_t len) {
  if (len > 1) {
    return zend_string_init(str, len, 0);
  } else if (len == 0) {
    return zend_empty_string;
  } else {
    return zend_one_char_string[(zend_uchar)*str];
  }
}
static inline zend_string *zend_string_copy(zend_string *s) {
  if (!(zval_gc_flags((s)->gc.u.type_info) & (1 << 6))) {
    zend_gc_addref(&(s)->gc);
  }
  return s;
}
static inline zend_string *zend_string_dup(zend_string *s, _Bool persistent) {
  if ((zval_gc_flags((s)->gc.u.type_info) & (1 << 6))) {
    return s;
  } else {
    return zend_string_init((s)->val, (s)->len, persistent);
  }
}
static inline zend_string *zend_string_separate(zend_string *s,
                                                _Bool persistent) {
  if ((zval_gc_flags((s)->gc.u.type_info) & (1 << 6)) ||
      zend_gc_refcount(&(s)->gc) > 1) {
    if (!(zval_gc_flags((s)->gc.u.type_info) & (1 << 6))) {
      zend_gc_delref(&(s)->gc);
    }
    return zend_string_init((s)->val, (s)->len, persistent);
  }
  zend_string_forget_hash_val(s);
  return s;
}
static inline zend_string *zend_string_realloc(zend_string *s, size_t len,
                                               _Bool persistent) {
  zend_string *ret;
  if (!(zval_gc_flags((s)->gc.u.type_info) & (1 << 6))) {
    if (__builtin_expect(!!(zend_gc_refcount(&(s)->gc) == 1), 1)) {
      ret =
          (zend_string *)((persistent)
                              ? __zend_realloc(
                                    (s),
                                    (((((__builtin_offsetof(zend_string, val) +
                                         len + 1)) +
                                       (size_t)8 - 1) &
                                      ~((size_t)8 - 1))),
                                    "Zend/zend_string.h", 252, ((void *)0), 0)
                              : _erealloc(
                                    ((s)),
                                    ((((((__builtin_offsetof(zend_string, val) +
                                          len + 1)) +
                                        (size_t)8 - 1) &
                                       ~((size_t)8 - 1)))),
                                    "Zend/zend_string.h", 252, ((void *)0), 0));
      (ret)->len = len;
      zend_string_forget_hash_val(ret);
      return ret;
    }
  }
  ret = zend_string_alloc(len, persistent);
  memcpy((ret)->val, (s)->val, (((len) < ((s)->len)) ? (len) : ((s)->len)) + 1);
  if (!(zval_gc_flags((s)->gc.u.type_info) & (1 << 6))) {
    zend_gc_delref(&(s)->gc);
  }
  return ret;
}
static inline zend_string *zend_string_extend(zend_string *s, size_t len,
                                              _Bool persistent) {
  zend_string *ret;
  ((void)sizeof((len >= (s)->len) ? 1 : 0), __extension__({
     if (len >= (s)->len)
       ;
     else
       __assert_fail("len >= (s)->len", "Zend/zend_string.h", 270,
                     __extension__ __PRETTY_FUNCTION__);
   }));
  if (!(zval_gc_flags((s)->gc.u.type_info) & (1 << 6))) {
    if (__builtin_expect(!!(zend_gc_refcount(&(s)->gc) == 1), 1)) {
      ret =
          (zend_string *)((persistent)
                              ? __zend_realloc(
                                    (s),
                                    (((((__builtin_offsetof(zend_string, val) +
                                         len + 1)) +
                                       (size_t)8 - 1) &
                                      ~((size_t)8 - 1))),
                                    "Zend/zend_string.h", 273, ((void *)0), 0)
                              : _erealloc(
                                    ((s)),
                                    ((((((__builtin_offsetof(zend_string, val) +
                                          len + 1)) +
                                        (size_t)8 - 1) &
                                       ~((size_t)8 - 1)))),
                                    "Zend/zend_string.h", 273, ((void *)0), 0));
      (ret)->len = len;
      zend_string_forget_hash_val(ret);
      return ret;
    }
  }
  ret = zend_string_alloc(len, persistent);
  memcpy((ret)->val, (s)->val, (s)->len + 1);
  if (!(zval_gc_flags((s)->gc.u.type_info) & (1 << 6))) {
    zend_gc_delref(&(s)->gc);
  }
  return ret;
}
static inline zend_string *zend_string_truncate(zend_string *s, size_t len,
                                                _Bool persistent) {
  zend_string *ret;
  ((void)sizeof((len <= (s)->len) ? 1 : 0), __extension__({
     if (len <= (s)->len)
       ;
     else
       __assert_fail("len <= (s)->len", "Zend/zend_string.h", 291,
                     __extension__ __PRETTY_FUNCTION__);
   }));
  if (!(zval_gc_flags((s)->gc.u.type_info) & (1 << 6))) {
    if (__builtin_expect(!!(zend_gc_refcount(&(s)->gc) == 1), 1)) {
      ret =
          (zend_string *)((persistent)
                              ? __zend_realloc(
                                    (s),
                                    (((((__builtin_offsetof(zend_string, val) +
                                         len + 1)) +
                                       (size_t)8 - 1) &
                                      ~((size_t)8 - 1))),
                                    "Zend/zend_string.h", 294, ((void *)0), 0)
                              : _erealloc(
                                    ((s)),
                                    ((((((__builtin_offsetof(zend_string, val) +
                                          len + 1)) +
                                        (size_t)8 - 1) &
                                       ~((size_t)8 - 1)))),
                                    "Zend/zend_string.h", 294, ((void *)0), 0));
      (ret)->len = len;
      zend_string_forget_hash_val(ret);
      return ret;
    }
  }
  ret = zend_string_alloc(len, persistent);
  memcpy((ret)->val, (s)->val, len + 1);
  if (!(zval_gc_flags((s)->gc.u.type_info) & (1 << 6))) {
    zend_gc_delref(&(s)->gc);
  }
  return ret;
}
static inline zend_string *zend_string_safe_realloc(zend_string *s, size_t n,
                                                    size_t m, size_t l,
                                                    _Bool persistent) {
  zend_string *ret;
  if (!(zval_gc_flags((s)->gc.u.type_info) & (1 << 6))) {
    if (zend_gc_refcount(&(s)->gc) == 1) {
      ret =
          (zend_string *)((persistent)
                              ? _safe_realloc(
                                    (s), (n), (m),
                                    (((((__builtin_offsetof(zend_string, val) +
                                         l + 1)) +
                                       (size_t)8 - 1) &
                                      ~((size_t)8 - 1))))
                              : _safe_erealloc(
                                    ((s)), ((n)), ((m)),
                                    ((((((__builtin_offsetof(zend_string, val) +
                                          l + 1)) +
                                        (size_t)8 - 1) &
                                       ~((size_t)8 - 1)))),
                                    "Zend/zend_string.h", 314, ((void *)0), 0));
      (ret)->len = (n * m) + l;
      zend_string_forget_hash_val(ret);
      return ret;
    }
  }
  ret = zend_string_safe_alloc(n, m, l, persistent);
  memcpy((ret)->val, (s)->val,
         ((((n * m) + l) < ((s)->len)) ? ((n * m) + l) : ((s)->len)) + 1);
  if (!(zval_gc_flags((s)->gc.u.type_info) & (1 << 6))) {
    zend_gc_delref(&(s)->gc);
  }
  return ret;
}
static inline void zend_string_free(zend_string *s) {
  if (!(zval_gc_flags((s)->gc.u.type_info) & (1 << 6))) {
    ((void)sizeof((zend_gc_refcount(&(s)->gc) <= 1) ? 1 : 0), __extension__({
       if (zend_gc_refcount(&(s)->gc) <= 1)
         ;
       else
         __assert_fail("zend_gc_refcount(&(s)->gc) <= 1", "Zend/zend_string.h",
                       331, __extension__ __PRETTY_FUNCTION__);
     }));
    ((zval_gc_flags((s)->gc.u.type_info) & (1 << 7))
         ? free(s)
         : _efree((s), "Zend/zend_string.h", 332, ((void *)0), 0));
  }
}
static inline void zend_string_efree(zend_string *s) {
  ((void)sizeof((!(zval_gc_flags((s)->gc.u.type_info) & (1 << 6))) ? 1 : 0),
   __extension__({
     if (!(zval_gc_flags((s)->gc.u.type_info) & (1 << 6)))
       ;
     else
       __assert_fail("!(zval_gc_flags((s)->gc.u.type_info) & (1<<6))",
                     "Zend/zend_string.h", 338,
                     __extension__ __PRETTY_FUNCTION__);
   }));
  ((void)sizeof((zend_gc_refcount(&(s)->gc) <= 1) ? 1 : 0), __extension__({
     if (zend_gc_refcount(&(s)->gc) <= 1)
       ;
     else
       __assert_fail("zend_gc_refcount(&(s)->gc) <= 1", "Zend/zend_string.h",
                     339, __extension__ __PRETTY_FUNCTION__);
   }));
  ((void)sizeof((!(zval_gc_flags((s)->gc.u.type_info) & (1 << 7))) ? 1 : 0),
   __extension__({
     if (!(zval_gc_flags((s)->gc.u.type_info) & (1 << 7)))
       ;
     else
       __assert_fail("!(zval_gc_flags((s)->gc.u.type_info) & (1<<7))",
                     "Zend/zend_string.h", 340,
                     __extension__ __PRETTY_FUNCTION__);
   }));
  _efree((s), "Zend/zend_string.h", 341, ((void *)0), 0);
}
static inline void zend_string_release(zend_string *s) {
  if (!(zval_gc_flags((s)->gc.u.type_info) & (1 << 6))) {
    if (zend_gc_delref(&(s)->gc) == 0) {
      ((zval_gc_flags((s)->gc.u.type_info) & (1 << 7))
           ? free(s)
           : _efree((s), "Zend/zend_string.h", 348, ((void *)0), 0));
    }
  }
}
static inline void zend_string_release_ex(zend_string *s, _Bool persistent) {
  if (!(zval_gc_flags((s)->gc.u.type_info) & (1 << 6))) {
    if (zend_gc_delref(&(s)->gc) == 0) {
      if (persistent) {
        ((void)sizeof((zval_gc_flags((s)->gc.u.type_info) & (1 << 7)) ? 1 : 0),
         __extension__({
           if (zval_gc_flags((s)->gc.u.type_info) & (1 << 7))
             ;
           else
             __assert_fail("zval_gc_flags((s)->gc.u.type_info) & (1<<7)",
                           "Zend/zend_string.h", 358,
                           __extension__ __PRETTY_FUNCTION__);
         }));
        free(s);
      } else {
        ((void)sizeof((!(zval_gc_flags((s)->gc.u.type_info) & (1 << 7))) ? 1
                                                                         : 0),
         __extension__({
           if (!(zval_gc_flags((s)->gc.u.type_info) & (1 << 7)))
             ;
           else
             __assert_fail("!(zval_gc_flags((s)->gc.u.type_info) & (1<<7))",
                           "Zend/zend_string.h", 361,
                           __extension__ __PRETTY_FUNCTION__);
         }));
        _efree((s), "Zend/zend_string.h", 362, ((void *)0), 0);
      }
    }
  }
}
static inline _Bool zend_string_equals_cstr(const zend_string *s1,
                                            const char *s2, size_t s2_length) {
  return (s1)->len == s2_length && !memcmp((s1)->val, s2, s2_length);
}

__attribute__((visibility("default"))) _Bool
zend_string_equal_val(const zend_string *s1, const zend_string *s2);

static inline _Bool zend_string_equal_content(const zend_string *s1,
                                              const zend_string *s2) {
  return (s1)->len == (s2)->len && zend_string_equal_val(s1, s2);
}
static inline _Bool zend_string_equals(const zend_string *s1,
                                       const zend_string *s2) {
  return s1 == s2 || zend_string_equal_content(s1, s2);
}
static inline _Bool zend_string_starts_with_cstr(const zend_string *str,
                                                 const char *prefix,
                                                 size_t prefix_length) {
  return (str)->len >= prefix_length &&
         !memcmp((str)->val, prefix, prefix_length);
}
static inline _Bool zend_string_starts_with(const zend_string *str,
                                            const zend_string *prefix) {
  return zend_string_starts_with_cstr(str, (prefix)->val, (prefix)->len);
}
static inline _Bool zend_string_starts_with_cstr_ci(const zend_string *str,
                                                    const char *prefix,
                                                    size_t prefix_length) {
  return (str)->len >= prefix_length &&
         !strncasecmp((str)->val, prefix, prefix_length);
}
static inline _Bool zend_string_starts_with_ci(const zend_string *str,
                                               const zend_string *prefix) {
  return zend_string_starts_with_cstr_ci(str, (prefix)->val, (prefix)->len);
}
static inline zend_ulong zend_inline_hash_func(const char *str, size_t len) {
  zend_ulong hash = 5381UL;
  for (; len >= 8; len -= 8, str += 8) {
    hash = hash * 33 * 33 * 33 * 33L + str[0] * 33 * 33 * 33L +
           str[1] * 33 * 33L + str[2] * 33L + str[3];
    hash = hash * 33 * 33 * 33 * 33L + str[4] * 33 * 33 * 33L +
           str[5] * 33 * 33L + str[6] * 33L + str[7];
  }
  if (len >= 4) {
    hash = hash * 33 * 33 * 33 * 33L + str[0] * 33 * 33 * 33L +
           str[1] * 33 * 33L + str[2] * 33L + str[3];
    len -= 4;
    str += 4;
  }
  if (len >= 2) {
    if (len > 2) {
      hash = hash * 33 * 33 * 33L + str[0] * 33 * 33L + str[1] * 33L + str[2];
    } else {
      hash = hash * 33 * 33L + str[0] * 33L + str[1];
    }
  } else if (len != 0) {
    hash = hash * 33L + *str;
  }
  return hash | 0x8000000000000000UL;
}
typedef enum _zend_known_string_id {
  ZEND_STR_FILE,
  ZEND_STR_LINE,
  ZEND_STR_FUNCTION,
  ZEND_STR_CLASS,
  ZEND_STR_OBJECT,
  ZEND_STR_TYPE,
  ZEND_STR_OBJECT_OPERATOR,
  ZEND_STR_PAAMAYIM_NEKUDOTAYIM,
  ZEND_STR_ARGS,
  ZEND_STR_UNKNOWN,
  ZEND_STR_UNKNOWN_CAPITALIZED,
  ZEND_STR_EXIT,
  ZEND_STR_EVAL,
  ZEND_STR_INCLUDE,
  ZEND_STR_REQUIRE,
  ZEND_STR_INCLUDE_ONCE,
  ZEND_STR_REQUIRE_ONCE,
  ZEND_STR_SCALAR,
  ZEND_STR_ERROR_REPORTING,
  ZEND_STR_STATIC,
  ZEND_STR_THIS,
  ZEND_STR_VALUE,
  ZEND_STR_KEY,
  ZEND_STR_MAGIC_INVOKE,
  ZEND_STR_PREVIOUS,
  ZEND_STR_CODE,
  ZEND_STR_MESSAGE,
  ZEND_STR_SEVERITY,
  ZEND_STR_STRING,
  ZEND_STR_TRACE,
  ZEND_STR_SCHEME,
  ZEND_STR_HOST,
  ZEND_STR_PORT,
  ZEND_STR_USER,
  ZEND_STR_USERNAME,
  ZEND_STR_PASS,
  ZEND_STR_PASSWORD,
  ZEND_STR_PATH,
  ZEND_STR_QUERY,
  ZEND_STR_FRAGMENT,
  ZEND_STR_NULL,
  ZEND_STR_BOOLEAN,
  ZEND_STR_INTEGER,
  ZEND_STR_DOUBLE,
  ZEND_STR_ARRAY,
  ZEND_STR_RESOURCE,
  ZEND_STR_CLOSED_RESOURCE,
  ZEND_STR_NAME,
  ZEND_STR_ARGV,
  ZEND_STR_ARGC,
  ZEND_STR_ARRAY_CAPITALIZED,
  ZEND_STR_BOOL,
  ZEND_STR_INT,
  ZEND_STR_FLOAT,
  ZEND_STR_CALLABLE,
  ZEND_STR_ITERABLE,
  ZEND_STR_VOID,
  ZEND_STR_NEVER,
  ZEND_STR_FALSE,
  ZEND_STR_TRUE,
  ZEND_STR_NULL_LOWERCASE,
  ZEND_STR_MIXED,
  ZEND_STR_TRAVERSABLE,
  ZEND_STR_SELF,
  ZEND_STR_PARENT,
  ZEND_STR_SLEEP,
  ZEND_STR_WAKEUP,
  ZEND_STR_CASES,
  ZEND_STR_FROM,
  ZEND_STR_TRYFROM,
  ZEND_STR_TRYFROM_LOWERCASE,
  ZEND_STR_AUTOGLOBAL_SERVER,
  ZEND_STR_AUTOGLOBAL_ENV,
  ZEND_STR_AUTOGLOBAL_REQUEST,
  ZEND_STR_COUNT,
  ZEND_STR_SENSITIVEPARAMETER,
  ZEND_STR_CONST_EXPR_PLACEHOLDER,
  ZEND_STR_DEPRECATED_CAPITALIZED,
  ZEND_STR_SINCE,
  ZEND_STR_GET,
  ZEND_STR_SET,
  ZEND_STR_LAST_KNOWN
} zend_known_string_id;

__attribute__((visibility("default"))) void zend_sort(void *base, size_t nmemb,
                                                      size_t siz,
                                                      compare_func_t cmp,
                                                      swap_func_t swp);
__attribute__((visibility("default"))) void
zend_insert_sort(void *base, size_t nmemb, size_t siz, compare_func_t cmp,
                 swap_func_t swp);

extern __attribute__((visibility("default"))) const HashTable zend_empty_array;
typedef struct _zend_hash_key {
  zend_ulong h;
  zend_string *key;
} zend_hash_key;
typedef _Bool (*merge_checker_func_t)(HashTable *target_ht, zval *source_data,
                                      zend_hash_key *hash_key, void *pParam);

__attribute__((visibility("default"))) void
_zend_hash_init(HashTable *ht, uint32_t nSize, dtor_func_t pDestructor,
                _Bool persistent);
__attribute__((visibility("default"))) void zend_hash_destroy(HashTable *ht);
__attribute__((visibility("default"))) void zend_hash_clean(HashTable *ht);
__attribute__((visibility("default"))) void zend_hash_real_init(HashTable *ht,
                                                                _Bool packed);
__attribute__((visibility("default"))) void
zend_hash_real_init_packed(HashTable *ht);
__attribute__((visibility("default"))) void
zend_hash_real_init_mixed(HashTable *ht);
__attribute__((visibility("default"))) void
zend_hash_packed_to_hash(HashTable *ht);
__attribute__((visibility("default"))) void zend_hash_to_packed(HashTable *ht);
__attribute__((visibility("default"))) void
zend_hash_extend(HashTable *ht, uint32_t nSize, _Bool packed);
__attribute__((visibility("default"))) void
zend_hash_discard(HashTable *ht, uint32_t nNumUsed);
__attribute__((visibility("default"))) void
zend_hash_packed_grow(HashTable *ht);
__attribute__((visibility("default"))) zval *
zend_hash_add_or_update(HashTable *ht, zend_string *key, zval *pData,
                        uint32_t flag);
__attribute__((visibility("default"))) zval *
zend_hash_update(HashTable *ht, zend_string *key, zval *pData);
__attribute__((visibility("default"))) zval *
zend_hash_update_ind(HashTable *ht, zend_string *key, zval *pData);
__attribute__((visibility("default"))) zval *
zend_hash_add(HashTable *ht, zend_string *key, zval *pData);
__attribute__((visibility("default"))) zval *
zend_hash_add_new(HashTable *ht, zend_string *key, zval *pData);
__attribute__((visibility("default"))) zval *
zend_hash_str_add_or_update(HashTable *ht, const char *key, size_t len,
                            zval *pData, uint32_t flag);
__attribute__((visibility("default"))) zval *
zend_hash_str_update(HashTable *ht, const char *key, size_t len, zval *pData);
__attribute__((visibility("default"))) zval *
zend_hash_str_update_ind(HashTable *ht, const char *key, size_t len,
                         zval *pData);
__attribute__((visibility("default"))) zval *
zend_hash_str_add(HashTable *ht, const char *key, size_t len, zval *pData);
__attribute__((visibility("default"))) zval *
zend_hash_str_add_new(HashTable *ht, const char *key, size_t len, zval *pData);
__attribute__((visibility("default"))) zval *
zend_hash_index_add_or_update(HashTable *ht, zend_ulong h, zval *pData,
                              uint32_t flag);
__attribute__((visibility("default"))) zval *
zend_hash_index_add(HashTable *ht, zend_ulong h, zval *pData);
__attribute__((visibility("default"))) zval *
zend_hash_index_add_new(HashTable *ht, zend_ulong h, zval *pData);
__attribute__((visibility("default"))) zval *
zend_hash_index_update(HashTable *ht, zend_ulong h, zval *pData);
__attribute__((visibility("default"))) zval *
zend_hash_next_index_insert(HashTable *ht, zval *pData);
__attribute__((visibility("default"))) zval *
zend_hash_next_index_insert_new(HashTable *ht, zval *pData);
__attribute__((visibility("default"))) zval *
zend_hash_index_add_empty_element(HashTable *ht, zend_ulong h);
__attribute__((visibility("default"))) zval *
zend_hash_add_empty_element(HashTable *ht, zend_string *key);
__attribute__((visibility("default"))) zval *
zend_hash_str_add_empty_element(HashTable *ht, const char *key, size_t len);
__attribute__((visibility("default"))) zval *
zend_hash_set_bucket_key(HashTable *ht, Bucket *p, zend_string *key);
typedef int (*apply_func_t)(zval *pDest);
typedef int (*apply_func_arg_t)(zval *pDest, void *argument);
typedef int (*apply_func_args_t)(zval *pDest, int num_args, va_list args,
                                 zend_hash_key *hash_key);
__attribute__((visibility("default"))) void
zend_hash_graceful_destroy(HashTable *ht);
__attribute__((visibility("default"))) void
zend_hash_graceful_reverse_destroy(HashTable *ht);
__attribute__((visibility("default"))) void
zend_hash_apply(HashTable *ht, apply_func_t apply_func);
__attribute__((visibility("default"))) void
zend_hash_apply_with_argument(HashTable *ht, apply_func_arg_t apply_func,
                              void *);
__attribute__((visibility("default"))) void
zend_hash_apply_with_arguments(HashTable *ht, apply_func_args_t apply_func, int,
                               ...);
__attribute__((visibility("default"))) void
zend_hash_reverse_apply(HashTable *ht, apply_func_t apply_func);
__attribute__((visibility("default"))) zend_result
zend_hash_del(HashTable *ht, zend_string *key);
__attribute__((visibility("default"))) zend_result
zend_hash_del_ind(HashTable *ht, zend_string *key);
__attribute__((visibility("default"))) zend_result
zend_hash_str_del(HashTable *ht, const char *key, size_t len);
__attribute__((visibility("default"))) zend_result
zend_hash_str_del_ind(HashTable *ht, const char *key, size_t len);
__attribute__((visibility("default"))) zend_result
zend_hash_index_del(HashTable *ht, zend_ulong h);
__attribute__((visibility("default"))) void zend_hash_del_bucket(HashTable *ht,
                                                                 Bucket *p);
__attribute__((visibility("default"))) void
zend_hash_packed_del_val(HashTable *ht, zval *zv);
__attribute__((visibility("default"))) zval *zend_hash_find(const HashTable *ht,
                                                            zend_string *key);
__attribute__((visibility("default"))) zval *
zend_hash_str_find(const HashTable *ht, const char *key, size_t len);
__attribute__((visibility("default"))) zval *
zend_hash_index_find(const HashTable *ht, zend_ulong h);
__attribute__((visibility("default"))) zval *
_zend_hash_index_find(const HashTable *ht, zend_ulong h);
__attribute__((visibility("default"))) zval *
zend_hash_find_known_hash(const HashTable *ht, const zend_string *key);
static inline zval *zend_hash_find_ex(const HashTable *ht, zend_string *key,
                                      _Bool known_hash) {
  if (known_hash) {
    return zend_hash_find_known_hash(ht, key);
  } else {
    return zend_hash_find(ht, key);
  }
}
__attribute__((visibility("default"))) zval *zend_hash_lookup(HashTable *ht,
                                                              zend_string *key);
__attribute__((visibility("default"))) zval *
zend_hash_index_lookup(HashTable *ht, zend_ulong h);
static inline _Bool zend_hash_exists(const HashTable *ht, zend_string *key) {
  return zend_hash_find(ht, key) != ((void *)0);
}
static inline _Bool zend_hash_str_exists(const HashTable *ht, const char *str,
                                         size_t len) {
  return zend_hash_str_find(ht, str, len) != ((void *)0);
}
static inline _Bool zend_hash_index_exists(const HashTable *ht, zend_ulong h) {
  return zend_hash_index_find(ht, h) != ((void *)0);
}
__attribute__((visibility("default"))) HashPosition
zend_hash_get_current_pos_ex(const HashTable *ht, HashPosition pos);
__attribute__((visibility("default"))) HashPosition
zend_hash_get_current_pos(const HashTable *ht);
__attribute__((visibility("default"))) zend_result
zend_hash_move_forward_ex(const HashTable *ht, HashPosition *pos);
__attribute__((visibility("default"))) zend_result
zend_hash_move_backwards_ex(const HashTable *ht, HashPosition *pos);
__attribute__((visibility("default"))) int
zend_hash_get_current_key_ex(const HashTable *ht, zend_string **str_index,
                             zend_ulong *num_index, const HashPosition *pos);
__attribute__((visibility("default"))) void
zend_hash_get_current_key_zval_ex(const HashTable *ht, zval *key,
                                  const HashPosition *pos);
__attribute__((visibility("default"))) int
zend_hash_get_current_key_type_ex(const HashTable *ht, const HashPosition *pos);
__attribute__((visibility("default"))) zval *
zend_hash_get_current_data_ex(const HashTable *ht, const HashPosition *pos);
__attribute__((visibility("default"))) void
zend_hash_internal_pointer_reset_ex(const HashTable *ht, HashPosition *pos);
__attribute__((visibility("default"))) void
zend_hash_internal_pointer_end_ex(const HashTable *ht, HashPosition *pos);
static inline zend_result
zend_hash_has_more_elements_ex(const HashTable *ht, const HashPosition *pos) {
  return (zend_hash_get_current_key_type_ex(ht, pos) == 3 ? FAILURE : SUCCESS);
}
static inline zend_result zend_hash_has_more_elements(const HashTable *ht) {
  return zend_hash_has_more_elements_ex(ht, &ht->nInternalPointer);
}
static inline zend_result zend_hash_move_forward(HashTable *ht) {
  return zend_hash_move_forward_ex(ht, &ht->nInternalPointer);
}
static inline zend_result zend_hash_move_backwards(HashTable *ht) {
  return zend_hash_move_backwards_ex(ht, &ht->nInternalPointer);
}
static inline int zend_hash_get_current_key(const HashTable *ht,
                                            zend_string **str_index,
                                            zend_ulong *num_index) {
  return zend_hash_get_current_key_ex(ht, str_index, num_index,
                                      &ht->nInternalPointer);
}
static inline void zend_hash_get_current_key_zval(const HashTable *ht,
                                                  zval *key) {
  zend_hash_get_current_key_zval_ex(ht, key, &ht->nInternalPointer);
}
static inline int zend_hash_get_current_key_type(const HashTable *ht) {
  return zend_hash_get_current_key_type_ex(ht, &ht->nInternalPointer);
}
static inline zval *zend_hash_get_current_data(const HashTable *ht) {
  return zend_hash_get_current_data_ex(ht, &ht->nInternalPointer);
}
static inline void zend_hash_internal_pointer_reset(HashTable *ht) {
  zend_hash_internal_pointer_reset_ex(ht, &ht->nInternalPointer);
}
static inline void zend_hash_internal_pointer_end(HashTable *ht) {
  zend_hash_internal_pointer_end_ex(ht, &ht->nInternalPointer);
}
__attribute__((visibility("default"))) void
zend_hash_copy(HashTable *target, const HashTable *source,
               copy_ctor_func_t pCopyConstructor);
__attribute__((visibility("default"))) void
zend_hash_merge(HashTable *target, const HashTable *source,
                copy_ctor_func_t pCopyConstructor, _Bool overwrite);
__attribute__((visibility("default"))) void
zend_hash_merge_ex(HashTable *target, const HashTable *source,
                   copy_ctor_func_t pCopyConstructor,
                   merge_checker_func_t pMergeSource, void *pParam);
__attribute__((visibility("default"))) void zend_hash_bucket_swap(Bucket *p,
                                                                  Bucket *q);
__attribute__((visibility("default"))) void
zend_hash_bucket_renum_swap(Bucket *p, Bucket *q);
__attribute__((visibility("default"))) void
zend_hash_bucket_packed_swap(Bucket *p, Bucket *q);
typedef int (*bucket_compare_func_t)(Bucket *a, Bucket *b);
__attribute__((visibility("default"))) int
zend_hash_compare(HashTable *ht1, HashTable *ht2, compare_func_t compar,
                  _Bool ordered);
__attribute__((visibility("default"))) void
zend_hash_sort_ex(HashTable *ht, sort_func_t sort_func,
                  bucket_compare_func_t compare_func, _Bool renumber);
__attribute__((visibility("default"))) void
zend_array_sort_ex(HashTable *ht, sort_func_t sort_func,
                   bucket_compare_func_t compare_func, _Bool renumber);
__attribute__((visibility("default"))) zval *
zend_hash_minmax(const HashTable *ht, compare_func_t compar, uint32_t flag);
static inline void zend_hash_sort(HashTable *ht,
                                  bucket_compare_func_t compare_func,
                                  _Bool renumber) {
  zend_hash_sort_ex(ht, zend_sort, compare_func, renumber);
}
static inline void zend_array_sort(HashTable *ht,
                                   bucket_compare_func_t compare_func,
                                   _Bool renumber) {
  zend_array_sort_ex(ht, zend_sort, compare_func, renumber);
}
static inline uint32_t zend_hash_num_elements(const HashTable *ht) {
  return ht->nNumOfElements;
}
static inline zend_long zend_hash_next_free_element(const HashTable *ht) {
  return ht->nNextFreeElement;
}
__attribute__((visibility("default"))) void zend_hash_rehash(HashTable *ht);
__attribute__((visibility("default"))) HashTable *_zend_new_array_0(void);
__attribute__((visibility("default"))) HashTable *
_zend_new_array(uint32_t size);
__attribute__((visibility("default"))) HashTable *
zend_new_pair(const zval *val1, const zval *val2);
__attribute__((visibility("default"))) uint32_t zend_array_count(HashTable *ht);
__attribute__((visibility("default"))) HashTable *
zend_array_dup(const HashTable *source);
__attribute__((visibility("default"))) void zend_array_destroy(HashTable *ht);
__attribute__((visibility("default"))) HashTable *
zend_array_to_list(const HashTable *source);
__attribute__((visibility("default"))) void zend_symtable_clean(HashTable *ht);
__attribute__((visibility("default"))) HashTable *
zend_symtable_to_proptable(HashTable *ht);
__attribute__((visibility("default"))) HashTable *
zend_proptable_to_symtable(HashTable *ht, _Bool always_duplicate);
__attribute__((visibility("default"))) _Bool
_zend_handle_numeric_str_ex(const char *key, size_t length, zend_ulong *idx);
__attribute__((visibility("default"))) uint32_t
zend_hash_iterator_add(HashTable *ht, HashPosition pos);
__attribute__((visibility("default"))) HashPosition
zend_hash_iterator_pos(uint32_t idx, HashTable *ht);
__attribute__((visibility("default"))) HashPosition
zend_hash_iterator_pos_ex(uint32_t idx, zval *array);
__attribute__((visibility("default"))) void
zend_hash_iterator_del(uint32_t idx);
__attribute__((visibility("default"))) HashPosition
zend_hash_iterators_lower_pos(const HashTable *ht, HashPosition start);
__attribute__((visibility("default"))) void
_zend_hash_iterators_update(const HashTable *ht, HashPosition from,
                            HashPosition to);
__attribute__((visibility("default"))) void
zend_hash_iterators_advance(const HashTable *ht, HashPosition step);
static inline void zend_hash_iterators_update(const HashTable *ht,
                                              HashPosition from,
                                              HashPosition to) {
  if (__builtin_expect(!!(((ht)->u.v.nIteratorsCount != 0)), 0)) {
    _zend_hash_iterators_update(ht, from, to);
  }
}
static inline void zend_array_release(zend_array *array) {
  if (!(zval_gc_flags((array)->gc.u.type_info) & (1 << 6))) {
    if (zend_gc_delref(&(array)->gc) == 0) {
      zend_array_destroy(array);
    }
  }
}
static inline void zend_hash_release(zend_array *array) {
  if (!(zval_gc_flags((array)->gc.u.type_info) & (1 << 6))) {
    if (zend_gc_delref(&(array)->gc) == 0) {
      zend_hash_destroy(array);
      ((zval_gc_flags((array)->gc.u.type_info) & (1 << 7))
           ? free(array)
           : _efree((array), "Zend/zend_hash.h", 387, ((void *)0), 0));
    }
  }
}

static inline _Bool _zend_handle_numeric_str(const char *key, size_t length,
                                             zend_ulong *idx) {
  const char *tmp = key;
  if (__builtin_expect(!!(*tmp > '9'), 1)) {
    return 0;
  } else if (*tmp < '0') {
    if (*tmp != '-') {
      return 0;
    }
    tmp++;
    if (*tmp > '9' || *tmp < '0') {
      return 0;
    }
  }
  return _zend_handle_numeric_str_ex(key, length, idx);
}
static inline zval *zend_hash_find_ind(const HashTable *ht, zend_string *key) {
  zval *zv;
  zv = zend_hash_find(ht, key);
  return (zv && zval_get_type(&(*(zv))) == 12)
             ? ((zval_get_type(&(*((*(zv)).value.zv))) != 0) ? (*(zv)).value.zv
                                                             : ((void *)0))
             : zv;
}
static inline zval *zend_hash_find_ex_ind(const HashTable *ht, zend_string *key,
                                          _Bool known_hash) {
  zval *zv;
  zv = zend_hash_find_ex(ht, key, known_hash);
  return (zv && zval_get_type(&(*(zv))) == 12)
             ? ((zval_get_type(&(*((*(zv)).value.zv))) != 0) ? (*(zv)).value.zv
                                                             : ((void *)0))
             : zv;
}
static inline _Bool zend_hash_exists_ind(const HashTable *ht,
                                         zend_string *key) {
  zval *zv;
  zv = zend_hash_find(ht, key);
  return zv && (zval_get_type(&(*(zv))) != 12 ||
                zval_get_type(&(*((*(zv)).value.zv))) != 0);
}
static inline zval *zend_hash_str_find_ind(const HashTable *ht, const char *str,
                                           size_t len) {
  zval *zv;
  zv = zend_hash_str_find(ht, str, len);
  return (zv && zval_get_type(&(*(zv))) == 12)
             ? ((zval_get_type(&(*((*(zv)).value.zv))) != 0) ? (*(zv)).value.zv
                                                             : ((void *)0))
             : zv;
}
static inline _Bool zend_hash_str_exists_ind(const HashTable *ht,
                                             const char *str, size_t len) {
  zval *zv;
  zv = zend_hash_str_find(ht, str, len);
  return zv && (zval_get_type(&(*(zv))) != 12 ||
                zval_get_type(&(*((*(zv)).value.zv))) != 0);
}
static inline zval *zend_symtable_add_new(HashTable *ht, zend_string *key,
                                          zval *pData) {
  zend_ulong idx;
  if (_zend_handle_numeric_str((key)->val, (key)->len, &idx)) {
    return zend_hash_index_add_new(ht, idx, pData);
  } else {
    return zend_hash_add_new(ht, key, pData);
  }
}
static inline zval *zend_symtable_update(HashTable *ht, zend_string *key,
                                         zval *pData) {
  zend_ulong idx;
  if (_zend_handle_numeric_str((key)->val, (key)->len, &idx)) {
    return zend_hash_index_update(ht, idx, pData);
  } else {
    return zend_hash_update(ht, key, pData);
  }
}
static inline zval *zend_symtable_update_ind(HashTable *ht, zend_string *key,
                                             zval *pData) {
  zend_ulong idx;
  if (_zend_handle_numeric_str((key)->val, (key)->len, &idx)) {
    return zend_hash_index_update(ht, idx, pData);
  } else {
    return zend_hash_update_ind(ht, key, pData);
  }
}
static inline zend_result zend_symtable_del(HashTable *ht, zend_string *key) {
  zend_ulong idx;
  if (_zend_handle_numeric_str((key)->val, (key)->len, &idx)) {
    return zend_hash_index_del(ht, idx);
  } else {
    return zend_hash_del(ht, key);
  }
}
static inline zend_result zend_symtable_del_ind(HashTable *ht,
                                                zend_string *key) {
  zend_ulong idx;
  if (_zend_handle_numeric_str((key)->val, (key)->len, &idx)) {
    return zend_hash_index_del(ht, idx);
  } else {
    return zend_hash_del_ind(ht, key);
  }
}
static inline zval *zend_symtable_find(const HashTable *ht, zend_string *key) {
  zend_ulong idx;
  if (_zend_handle_numeric_str((key)->val, (key)->len, &idx)) {
    return zend_hash_index_find(ht, idx);
  } else {
    return zend_hash_find(ht, key);
  }
}
static inline zval *zend_symtable_find_ind(const HashTable *ht,
                                           zend_string *key) {
  zend_ulong idx;
  if (_zend_handle_numeric_str((key)->val, (key)->len, &idx)) {
    return zend_hash_index_find(ht, idx);
  } else {
    return zend_hash_find_ind(ht, key);
  }
}
static inline _Bool zend_symtable_exists(const HashTable *ht,
                                         zend_string *key) {
  zend_ulong idx;
  if (_zend_handle_numeric_str((key)->val, (key)->len, &idx)) {
    return zend_hash_index_exists(ht, idx);
  } else {
    return zend_hash_exists(ht, key);
  }
}
static inline _Bool zend_symtable_exists_ind(const HashTable *ht,
                                             zend_string *key) {
  zend_ulong idx;
  if (_zend_handle_numeric_str((key)->val, (key)->len, &idx)) {
    return zend_hash_index_exists(ht, idx);
  } else {
    return zend_hash_exists_ind(ht, key);
  }
}
static inline zval *zend_symtable_str_update(HashTable *ht, const char *str,
                                             size_t len, zval *pData) {
  zend_ulong idx;
  if (_zend_handle_numeric_str(str, len, &idx)) {
    return zend_hash_index_update(ht, idx, pData);
  } else {
    return zend_hash_str_update(ht, str, len, pData);
  }
}
static inline zval *zend_symtable_str_update_ind(HashTable *ht, const char *str,
                                                 size_t len, zval *pData) {
  zend_ulong idx;
  if (_zend_handle_numeric_str(str, len, &idx)) {
    return zend_hash_index_update(ht, idx, pData);
  } else {
    return zend_hash_str_update_ind(ht, str, len, pData);
  }
}
static inline zend_result zend_symtable_str_del(HashTable *ht, const char *str,
                                                size_t len) {
  zend_ulong idx;
  if (_zend_handle_numeric_str(str, len, &idx)) {
    return zend_hash_index_del(ht, idx);
  } else {
    return zend_hash_str_del(ht, str, len);
  }
}
static inline zend_result
zend_symtable_str_del_ind(HashTable *ht, const char *str, size_t len) {
  zend_ulong idx;
  if (_zend_handle_numeric_str(str, len, &idx)) {
    return zend_hash_index_del(ht, idx);
  } else {
    return zend_hash_str_del_ind(ht, str, len);
  }
}
static inline zval *zend_symtable_str_find(HashTable *ht, const char *str,
                                           size_t len) {
  zend_ulong idx;
  if (_zend_handle_numeric_str(str, len, &idx)) {
    return zend_hash_index_find(ht, idx);
  } else {
    return zend_hash_str_find(ht, str, len);
  }
}
static inline _Bool zend_symtable_str_exists(HashTable *ht, const char *str,
                                             size_t len) {
  zend_ulong idx;
  if (_zend_handle_numeric_str(str, len, &idx)) {
    return zend_hash_index_exists(ht, idx);
  } else {
    return zend_hash_str_exists(ht, str, len);
  }
}
static inline void *zend_hash_add_ptr(HashTable *ht, zend_string *key,
                                      void *pData) {
  zval tmp, *zv;
  do {
    (*(&tmp)).value.ptr = (pData);
    (*(&tmp)).u1.type_info = 13;
  } while (0);
  zv = zend_hash_add(ht, key, &tmp);
  if (zv) {
    ((void)sizeof(((*(zv)).value.ptr) ? 1 : 0), __extension__({
       if ((*(zv)).value.ptr)
         ;
       else
         __assert_fail("(*(zv)).value.ptr", "Zend/zend_hash.h", 659,
                       __extension__ __PRETTY_FUNCTION__);
     }));
    return (*(zv)).value.ptr;
  } else {
    return ((void *)0);
  }
}
static inline void *zend_hash_add_new_ptr(HashTable *ht, zend_string *key,
                                          void *pData) {
  zval tmp, *zv;
  do {
    (*(&tmp)).value.ptr = (pData);
    (*(&tmp)).u1.type_info = 13;
  } while (0);
  zv = zend_hash_add_new(ht, key, &tmp);
  if (zv) {
    ((void)sizeof(((*(zv)).value.ptr) ? 1 : 0), __extension__({
       if ((*(zv)).value.ptr)
         ;
       else
         __assert_fail("(*(zv)).value.ptr", "Zend/zend_hash.h", 673,
                       __extension__ __PRETTY_FUNCTION__);
     }));
    return (*(zv)).value.ptr;
  } else {
    return ((void *)0);
  }
}
static inline void *zend_hash_str_add_ptr(HashTable *ht, const char *str,
                                          size_t len, void *pData) {
  zval tmp, *zv;
  do {
    (*(&tmp)).value.ptr = (pData);
    (*(&tmp)).u1.type_info = 13;
  } while (0);
  zv = zend_hash_str_add(ht, str, len, &tmp);
  if (zv) {
    ((void)sizeof(((*(zv)).value.ptr) ? 1 : 0), __extension__({
       if ((*(zv)).value.ptr)
         ;
       else
         __assert_fail("(*(zv)).value.ptr", "Zend/zend_hash.h", 687,
                       __extension__ __PRETTY_FUNCTION__);
     }));
    return (*(zv)).value.ptr;
  } else {
    return ((void *)0);
  }
}
static inline void *zend_hash_str_add_new_ptr(HashTable *ht, const char *str,
                                              size_t len, void *pData) {
  zval tmp, *zv;
  do {
    (*(&tmp)).value.ptr = (pData);
    (*(&tmp)).u1.type_info = 13;
  } while (0);
  zv = zend_hash_str_add_new(ht, str, len, &tmp);
  if (zv) {
    ((void)sizeof(((*(zv)).value.ptr) ? 1 : 0), __extension__({
       if ((*(zv)).value.ptr)
         ;
       else
         __assert_fail("(*(zv)).value.ptr", "Zend/zend_hash.h", 701,
                       __extension__ __PRETTY_FUNCTION__);
     }));
    return (*(zv)).value.ptr;
  } else {
    return ((void *)0);
  }
}
static inline void *zend_hash_update_ptr(HashTable *ht, zend_string *key,
                                         void *pData) {
  zval tmp, *zv;
  do {
    (*(&tmp)).value.ptr = (pData);
    (*(&tmp)).u1.type_info = 13;
  } while (0);
  zv = zend_hash_update(ht, key, &tmp);
  ((void)sizeof(((*(zv)).value.ptr) ? 1 : 0), __extension__({
     if ((*(zv)).value.ptr)
       ;
     else
       __assert_fail("(*(zv)).value.ptr", "Zend/zend_hash.h", 714,
                     __extension__ __PRETTY_FUNCTION__);
   }));
  return (*(zv)).value.ptr;
}
static inline void *zend_hash_str_update_ptr(HashTable *ht, const char *str,
                                             size_t len, void *pData) {
  zval tmp, *zv;
  do {
    (*(&tmp)).value.ptr = (pData);
    (*(&tmp)).u1.type_info = 13;
  } while (0);
  zv = zend_hash_str_update(ht, str, len, &tmp);
  ((void)sizeof(((*(zv)).value.ptr) ? 1 : 0), __extension__({
     if ((*(zv)).value.ptr)
       ;
     else
       __assert_fail("(*(zv)).value.ptr", "Zend/zend_hash.h", 724,
                     __extension__ __PRETTY_FUNCTION__);
   }));
  return (*(zv)).value.ptr;
}
static inline void *zend_hash_add_mem(HashTable *ht, zend_string *key,
                                      void *pData, size_t size) {
  zval tmp, *zv;
  do {
    (*(&tmp)).value.ptr = (((void *)0));
    (*(&tmp)).u1.type_info = 13;
  } while (0);
  if ((zv = zend_hash_add(ht, key, &tmp))) {
    (*(zv)).value.ptr =
        ((zval_gc_flags((ht)->gc.u.type_info) & (1 << 7))
             ? __zend_malloc(size, "Zend/zend_hash.h", 734, ((void *)0), 0)
             : _emalloc((size), "Zend/zend_hash.h", 734, ((void *)0), 0));
    memcpy((*(zv)).value.ptr, pData, size);
    return (*(zv)).value.ptr;
  }
  return ((void *)0);
}
static inline void *zend_hash_add_new_mem(HashTable *ht, zend_string *key,
                                          void *pData, size_t size) {
  zval tmp, *zv;
  do {
    (*(&tmp)).value.ptr = (((void *)0));
    (*(&tmp)).u1.type_info = 13;
  } while (0);
  if ((zv = zend_hash_add_new(ht, key, &tmp))) {
    (*(zv)).value.ptr =
        ((zval_gc_flags((ht)->gc.u.type_info) & (1 << 7))
             ? __zend_malloc(size, "Zend/zend_hash.h", 747, ((void *)0), 0)
             : _emalloc((size), "Zend/zend_hash.h", 747, ((void *)0), 0));
    memcpy((*(zv)).value.ptr, pData, size);
    return (*(zv)).value.ptr;
  }
  return ((void *)0);
}
static inline void *zend_hash_str_add_mem(HashTable *ht, const char *str,
                                          size_t len, void *pData,
                                          size_t size) {
  zval tmp, *zv;
  do {
    (*(&tmp)).value.ptr = (((void *)0));
    (*(&tmp)).u1.type_info = 13;
  } while (0);
  if ((zv = zend_hash_str_add(ht, str, len, &tmp))) {
    (*(zv)).value.ptr =
        ((zval_gc_flags((ht)->gc.u.type_info) & (1 << 7))
             ? __zend_malloc(size, "Zend/zend_hash.h", 760, ((void *)0), 0)
             : _emalloc((size), "Zend/zend_hash.h", 760, ((void *)0), 0));
    memcpy((*(zv)).value.ptr, pData, size);
    return (*(zv)).value.ptr;
  }
  return ((void *)0);
}
static inline void *zend_hash_str_add_new_mem(HashTable *ht, const char *str,
                                              size_t len, void *pData,
                                              size_t size) {
  zval tmp, *zv;
  do {
    (*(&tmp)).value.ptr = (((void *)0));
    (*(&tmp)).u1.type_info = 13;
  } while (0);
  if ((zv = zend_hash_str_add_new(ht, str, len, &tmp))) {
    (*(zv)).value.ptr =
        ((zval_gc_flags((ht)->gc.u.type_info) & (1 << 7))
             ? __zend_malloc(size, "Zend/zend_hash.h", 773, ((void *)0), 0)
             : _emalloc((size), "Zend/zend_hash.h", 773, ((void *)0), 0));
    memcpy((*(zv)).value.ptr, pData, size);
    return (*(zv)).value.ptr;
  }
  return ((void *)0);
}
static inline void *zend_hash_update_mem(HashTable *ht, zend_string *key,
                                         void *pData, size_t size) {
  void *p;
  p = ((zval_gc_flags((ht)->gc.u.type_info) & (1 << 7))
           ? __zend_malloc(size, "Zend/zend_hash.h", 784, ((void *)0), 0)
           : _emalloc((size), "Zend/zend_hash.h", 784, ((void *)0), 0));
  memcpy(p, pData, size);
  return zend_hash_update_ptr(ht, key, p);
}
static inline void *zend_hash_str_update_mem(HashTable *ht, const char *str,
                                             size_t len, void *pData,
                                             size_t size) {
  void *p;
  p = ((zval_gc_flags((ht)->gc.u.type_info) & (1 << 7))
           ? __zend_malloc(size, "Zend/zend_hash.h", 793, ((void *)0), 0)
           : _emalloc((size), "Zend/zend_hash.h", 793, ((void *)0), 0));
  memcpy(p, pData, size);
  return zend_hash_str_update_ptr(ht, str, len, p);
}
static inline void *zend_hash_index_add_ptr(HashTable *ht, zend_ulong h,
                                            void *pData) {
  zval tmp, *zv;
  do {
    (*(&tmp)).value.ptr = (pData);
    (*(&tmp)).u1.type_info = 13;
  } while (0);
  zv = zend_hash_index_add(ht, h, &tmp);
  return zv ? (*(zv)).value.ptr : ((void *)0);
}
static inline void *zend_hash_index_add_new_ptr(HashTable *ht, zend_ulong h,
                                                void *pData) {
  zval tmp, *zv;
  do {
    (*(&tmp)).value.ptr = (pData);
    (*(&tmp)).u1.type_info = 13;
  } while (0);
  zv = zend_hash_index_add_new(ht, h, &tmp);
  return zv ? (*(zv)).value.ptr : ((void *)0);
}
static inline void *zend_hash_index_update_ptr(HashTable *ht, zend_ulong h,
                                               void *pData) {
  zval tmp, *zv;
  do {
    (*(&tmp)).value.ptr = (pData);
    (*(&tmp)).u1.type_info = 13;
  } while (0);
  zv = zend_hash_index_update(ht, h, &tmp);
  ((void)sizeof(((*(zv)).value.ptr) ? 1 : 0), __extension__({
     if ((*(zv)).value.ptr)
       ;
     else
       __assert_fail("(*(zv)).value.ptr", "Zend/zend_hash.h", 822,
                     __extension__ __PRETTY_FUNCTION__);
   }));
  return (*(zv)).value.ptr;
}
static inline void *zend_hash_index_add_mem(HashTable *ht, zend_ulong h,
                                            void *pData, size_t size) {
  zval tmp, *zv;
  do {
    (*(&tmp)).value.ptr = (((void *)0));
    (*(&tmp)).u1.type_info = 13;
  } while (0);
  if ((zv = zend_hash_index_add(ht, h, &tmp))) {
    (*(zv)).value.ptr =
        ((zval_gc_flags((ht)->gc.u.type_info) & (1 << 7))
             ? __zend_malloc(size, "Zend/zend_hash.h", 832, ((void *)0), 0)
             : _emalloc((size), "Zend/zend_hash.h", 832, ((void *)0), 0));
    memcpy((*(zv)).value.ptr, pData, size);
    return (*(zv)).value.ptr;
  }
  return ((void *)0);
}
static inline void *zend_hash_next_index_insert_ptr(HashTable *ht,
                                                    void *pData) {
  zval tmp, *zv;
  do {
    (*(&tmp)).value.ptr = (pData);
    (*(&tmp)).u1.type_info = 13;
  } while (0);
  zv = zend_hash_next_index_insert(ht, &tmp);
  if (zv) {
    ((void)sizeof(((*(zv)).value.ptr) ? 1 : 0), __extension__({
       if ((*(zv)).value.ptr)
         ;
       else
         __assert_fail("(*(zv)).value.ptr", "Zend/zend_hash.h", 846,
                       __extension__ __PRETTY_FUNCTION__);
     }));
    return (*(zv)).value.ptr;
  } else {
    return ((void *)0);
  }
}
static inline void *zend_hash_index_update_mem(HashTable *ht, zend_ulong h,
                                               void *pData, size_t size) {
  void *p;
  p = ((zval_gc_flags((ht)->gc.u.type_info) & (1 << 7))
           ? __zend_malloc(size, "Zend/zend_hash.h", 857, ((void *)0), 0)
           : _emalloc((size), "Zend/zend_hash.h", 857, ((void *)0), 0));
  memcpy(p, pData, size);
  return zend_hash_index_update_ptr(ht, h, p);
}
static inline void *zend_hash_next_index_insert_mem(HashTable *ht, void *pData,
                                                    size_t size) {
  zval tmp;
  void *p = ((zval_gc_flags((ht)->gc.u.type_info) & (1 << 7))
                 ? __zend_malloc(size, "Zend/zend_hash.h", 866, ((void *)0), 0)
                 : _emalloc((size), "Zend/zend_hash.h", 866, ((void *)0), 0));
  memcpy(p, pData, size);
  do {
    (*(&tmp)).value.ptr = (p);
    (*(&tmp)).u1.type_info = 13;
  } while (0);
  if (!zend_hash_next_index_insert(ht, &tmp)) {
    ((zval_gc_flags((ht)->gc.u.type_info) & (1 << 7))
         ? free(p)
         : _efree((p), "Zend/zend_hash.h", 870, ((void *)0), 0));
    return ((void *)0);
  }
  return p;
}
static inline void *zend_hash_find_ptr(const HashTable *ht, zend_string *key) {
  zval *zv;
  zv = zend_hash_find(ht, key);
  if (zv) {
    do {
      if (__builtin_expect(!((*(zv)).value.ptr), 0))
        __builtin_unreachable();
    } while (0);
    return (*(zv)).value.ptr;
  } else {
    return ((void *)0);
  }
}
static inline void *zend_hash_find_ex_ptr(const HashTable *ht, zend_string *key,
                                          _Bool known_hash) {
  zval *zv;
  zv = zend_hash_find_ex(ht, key, known_hash);
  if (zv) {
    do {
      if (__builtin_expect(!((*(zv)).value.ptr), 0))
        __builtin_unreachable();
    } while (0);
    return (*(zv)).value.ptr;
  } else {
    return ((void *)0);
  }
}
static inline void *zend_hash_str_find_ptr(const HashTable *ht, const char *str,
                                           size_t len) {
  zval *zv;
  zv = zend_hash_str_find(ht, str, len);
  if (zv) {
    do {
      if (__builtin_expect(!((*(zv)).value.ptr), 0))
        __builtin_unreachable();
    } while (0);
    return (*(zv)).value.ptr;
  } else {
    return ((void *)0);
  }
}

__attribute__((visibility("default"))) void *
zend_hash_str_find_ptr_lc(const HashTable *ht, const char *str, size_t len);
__attribute__((visibility("default"))) void *
zend_hash_find_ptr_lc(const HashTable *ht, zend_string *key);

static inline void *zend_hash_index_find_ptr(const HashTable *ht,
                                             zend_ulong h) {
  zval *zv;
  zv = zend_hash_index_find(ht, h);
  if (zv) {
    do {
      if (__builtin_expect(!((*(zv)).value.ptr), 0))
        __builtin_unreachable();
    } while (0);
    return (*(zv)).value.ptr;
  } else {
    return ((void *)0);
  }
}
static inline zval *zend_hash_index_find_deref(const HashTable *ht,
                                               zend_ulong h) {
  zval *zv = zend_hash_index_find(ht, h);
  if (zv) {
    do {
      if (__builtin_expect(!!((zval_get_type(&(*(zv))) == 10)), 0)) {
        (zv) = &(*(zv)).value.ref->val;
      }
    } while (0);
  }
  return zv;
}
static inline zval *zend_hash_find_deref(const HashTable *ht,
                                         zend_string *str) {
  zval *zv = zend_hash_find(ht, str);
  if (zv) {
    do {
      if (__builtin_expect(!!((zval_get_type(&(*(zv))) == 10)), 0)) {
        (zv) = &(*(zv)).value.ref->val;
      }
    } while (0);
  }
  return zv;
}
static inline zval *zend_hash_str_find_deref(const HashTable *ht,
                                             const char *str, size_t len) {
  zval *zv = zend_hash_str_find(ht, str, len);
  if (zv) {
    do {
      if (__builtin_expect(!!((zval_get_type(&(*(zv))) == 10)), 0)) {
        (zv) = &(*(zv)).value.ref->val;
      }
    } while (0);
  }
  return zv;
}
static inline void *zend_symtable_str_find_ptr(const HashTable *ht,
                                               const char *str, size_t len) {
  zend_ulong idx;
  if (_zend_handle_numeric_str(str, len, &idx)) {
    return zend_hash_index_find_ptr(ht, idx);
  } else {
    return zend_hash_str_find_ptr(ht, str, len);
  }
}
static inline void *zend_hash_get_current_data_ptr_ex(const HashTable *ht,
                                                      const HashPosition *pos) {
  zval *zv;
  zv = zend_hash_get_current_data_ex(ht, pos);
  if (zv) {
    do {
      if (__builtin_expect(!((*(zv)).value.ptr), 0))
        __builtin_unreachable();
    } while (0);
    return (*(zv)).value.ptr;
  } else {
    return ((void *)0);
  }
}
static inline _Bool zend_array_is_list(const zend_array *array) {
  zend_ulong expected_idx = 0;
  zend_ulong num_idx;
  zend_string *str_idx;
  if (zend_hash_num_elements(array) == 0) {
    return 1;
  }
  if ((((array)->u.flags & (1 << 2)) != 0)) {
    if (((array)->nNumUsed == (array)->nNumOfElements)) {
      return 1;
    }
    do {
      const HashTable *__ht = (array);
      zend_ulong _idx = (0);
      zval *_z = __ht->arPacked + (0);
      zval *_end = __ht->arPacked + __ht->nNumUsed;
      ((void)sizeof(((((__ht)->u.flags & (1 << 2)) != 0)) ? 1 : 0),
       __extension__({
         if ((((__ht)->u.flags & (1 << 2)) != 0))
           ;
         else
           __assert_fail("(((__ht)->u.flags & (1<<2)) != 0)",
                         "Zend/zend_hash.h", 1604,
                         __extension__ __PRETTY_FUNCTION__);
       }));
      for (; _z != _end; _z++, _idx++) {
        (void)_idx;
        if (__builtin_expect(!!(zval_get_type(&(*(_z))) == 0), 0))
          continue;
        ;
        num_idx = _idx;
        {
          if (num_idx != expected_idx++) {
            return 0;
          }
        }
      }
    } while (0);
  } else {
    do {
      const HashTable *__ht = (array);
      Bucket *_p = __ht->arData + (0);
      const Bucket *_end = __ht->arData + __ht->nNumUsed;
      ((void)sizeof((!(((__ht)->u.flags & (1 << 2)) != 0)) ? 1 : 0),
       __extension__({
         if (!(((__ht)->u.flags & (1 << 2)) != 0))
           ;
         else
           __assert_fail("!(((__ht)->u.flags & (1<<2)) != 0)",
                         "Zend/zend_hash.h", 1611,
                         __extension__ __PRETTY_FUNCTION__);
       }));
      for (; _p != _end; _p++) {
        zval *_z = &_p->val;
        if (0 && zval_get_type(&(*(_z))) == 12) {
          _z = (*(_z)).value.zv;
        }
        if (__builtin_expect(!!(zval_get_type(&(*(_z))) == 0), 0))
          continue;
        ;
        num_idx = _p->h;
        str_idx = _p->key;
        {
          if (str_idx != ((void *)0) || num_idx != expected_idx++) {
            return 0;
          }
        }
      }
    } while (0);
  }
  return 1;
}
static inline zval *_zend_hash_append_ex(HashTable *ht, zend_string *key,
                                         zval *zv, _Bool interned) {
  uint32_t idx = ht->nNumUsed++;
  uint32_t nIndex;
  Bucket *p = ht->arData + idx;
  do {
    zval *_z1 = (&p->val);
    const zval *_z2 = (zv);
    zend_refcounted *_gc = (*(_z2)).value.counted;
    uint32_t _t = (*(_z2)).u1.type_info;
    do {
      (*(_z1)).value.counted = _gc;
      (*(_z1)).u1.type_info = _t;
    } while (0);
  } while (0);
  if (!interned && !(zval_gc_flags((key)->gc.u.type_info) & (1 << 6))) {
    (ht)->u.flags &= ~(1 << 4);
    zend_string_addref(key);
    zend_string_hash_val(key);
  }
  p->key = key;
  p->h = (key)->h;
  nIndex = (uint32_t)p->h | ht->nTableMask;
  (p->val).u2.next = ((uint32_t *)((ht)->arHash))[(int32_t)(nIndex)];
  ((uint32_t *)((ht)->arHash))[(int32_t)(nIndex)] = (idx);
  ht->nNumOfElements++;
  return &p->val;
}
static inline zval *_zend_hash_append(HashTable *ht, zend_string *key,
                                      zval *zv) {
  return _zend_hash_append_ex(ht, key, zv, 0);
}
static inline zval *_zend_hash_append_ptr_ex(HashTable *ht, zend_string *key,
                                             void *ptr, _Bool interned) {
  uint32_t idx = ht->nNumUsed++;
  uint32_t nIndex;
  Bucket *p = ht->arData + idx;
  do {
    (*(&p->val)).value.ptr = (ptr);
    (*(&p->val)).u1.type_info = 13;
  } while (0);
  if (!interned && !(zval_gc_flags((key)->gc.u.type_info) & (1 << 6))) {
    (ht)->u.flags &= ~(1 << 4);
    zend_string_addref(key);
    zend_string_hash_val(key);
  }
  p->key = key;
  p->h = (key)->h;
  nIndex = (uint32_t)p->h | ht->nTableMask;
  (p->val).u2.next = ((uint32_t *)((ht)->arHash))[(int32_t)(nIndex)];
  ((uint32_t *)((ht)->arHash))[(int32_t)(nIndex)] = (idx);
  ht->nNumOfElements++;
  return &p->val;
}
static inline zval *_zend_hash_append_ptr(HashTable *ht, zend_string *key,
                                          void *ptr) {
  return _zend_hash_append_ptr_ex(ht, key, ptr, 0);
}
static inline void _zend_hash_append_ind(HashTable *ht, zend_string *key,
                                         zval *ptr) {
  uint32_t idx = ht->nNumUsed++;
  uint32_t nIndex;
  Bucket *p = ht->arData + idx;
  do {
    (*(&p->val)).value.zv = (ptr);
    (*(&p->val)).u1.type_info = 12;
  } while (0);
  if (!(zval_gc_flags((key)->gc.u.type_info) & (1 << 6))) {
    (ht)->u.flags &= ~(1 << 4);
    zend_string_addref(key);
    zend_string_hash_val(key);
  }
  p->key = key;
  p->h = (key)->h;
  nIndex = (uint32_t)p->h | ht->nTableMask;
  (p->val).u2.next = ((uint32_t *)((ht)->arHash))[(int32_t)(nIndex)];
  ((uint32_t *)((ht)->arHash))[(int32_t)(nIndex)] = (idx);
  ht->nNumOfElements++;
}
enum _zend_ast_kind {
  ZEND_AST_ZVAL = 1 << 6,
  ZEND_AST_CONSTANT,
  ZEND_AST_OP_ARRAY,
  ZEND_AST_ZNODE,
  ZEND_AST_FUNC_DECL,
  ZEND_AST_CLOSURE,
  ZEND_AST_METHOD,
  ZEND_AST_CLASS,
  ZEND_AST_ARROW_FUNC,
  ZEND_AST_PROPERTY_HOOK,
  ZEND_AST_ARG_LIST = 1 << 7,
  ZEND_AST_ARRAY,
  ZEND_AST_ENCAPS_LIST,
  ZEND_AST_EXPR_LIST,
  ZEND_AST_STMT_LIST,
  ZEND_AST_IF,
  ZEND_AST_SWITCH_LIST,
  ZEND_AST_CATCH_LIST,
  ZEND_AST_PARAM_LIST,
  ZEND_AST_CLOSURE_USES,
  ZEND_AST_PROP_DECL,
  ZEND_AST_CONST_DECL,
  ZEND_AST_CLASS_CONST_DECL,
  ZEND_AST_NAME_LIST,
  ZEND_AST_TRAIT_ADAPTATIONS,
  ZEND_AST_USE,
  ZEND_AST_TYPE_UNION,
  ZEND_AST_TYPE_INTERSECTION,
  ZEND_AST_ATTRIBUTE_LIST,
  ZEND_AST_ATTRIBUTE_GROUP,
  ZEND_AST_MATCH_ARM_LIST,
  ZEND_AST_MODIFIER_LIST,
  ZEND_AST_MAGIC_CONST = 0 << 8,
  ZEND_AST_TYPE,
  ZEND_AST_CONSTANT_CLASS,
  ZEND_AST_CALLABLE_CONVERT,
  ZEND_AST_VAR = 1 << 8,
  ZEND_AST_CONST,
  ZEND_AST_UNPACK,
  ZEND_AST_UNARY_PLUS,
  ZEND_AST_UNARY_MINUS,
  ZEND_AST_CAST,
  ZEND_AST_CAST_VOID,
  ZEND_AST_EMPTY,
  ZEND_AST_ISSET,
  ZEND_AST_SILENCE,
  ZEND_AST_SHELL_EXEC,
  ZEND_AST_CLONE,
  ZEND_AST_PRINT,
  ZEND_AST_INCLUDE_OR_EVAL,
  ZEND_AST_UNARY_OP,
  ZEND_AST_PRE_INC,
  ZEND_AST_PRE_DEC,
  ZEND_AST_POST_INC,
  ZEND_AST_POST_DEC,
  ZEND_AST_YIELD_FROM,
  ZEND_AST_CLASS_NAME,
  ZEND_AST_GLOBAL,
  ZEND_AST_UNSET,
  ZEND_AST_RETURN,
  ZEND_AST_LABEL,
  ZEND_AST_REF,
  ZEND_AST_HALT_COMPILER,
  ZEND_AST_ECHO,
  ZEND_AST_THROW,
  ZEND_AST_GOTO,
  ZEND_AST_BREAK,
  ZEND_AST_CONTINUE,
  ZEND_AST_PROPERTY_HOOK_SHORT_BODY,
  ZEND_AST_DIM = 2 << 8,
  ZEND_AST_PROP,
  ZEND_AST_NULLSAFE_PROP,
  ZEND_AST_STATIC_PROP,
  ZEND_AST_CALL,
  ZEND_AST_CLASS_CONST,
  ZEND_AST_ASSIGN,
  ZEND_AST_ASSIGN_REF,
  ZEND_AST_ASSIGN_OP,
  ZEND_AST_BINARY_OP,
  ZEND_AST_GREATER,
  ZEND_AST_GREATER_EQUAL,
  ZEND_AST_AND,
  ZEND_AST_OR,
  ZEND_AST_ARRAY_ELEM,
  ZEND_AST_NEW,
  ZEND_AST_INSTANCEOF,
  ZEND_AST_YIELD,
  ZEND_AST_COALESCE,
  ZEND_AST_ASSIGN_COALESCE,
  ZEND_AST_STATIC,
  ZEND_AST_WHILE,
  ZEND_AST_DO_WHILE,
  ZEND_AST_IF_ELEM,
  ZEND_AST_SWITCH,
  ZEND_AST_SWITCH_CASE,
  ZEND_AST_DECLARE,
  ZEND_AST_USE_TRAIT,
  ZEND_AST_TRAIT_PRECEDENCE,
  ZEND_AST_METHOD_REFERENCE,
  ZEND_AST_NAMESPACE,
  ZEND_AST_USE_ELEM,
  ZEND_AST_TRAIT_ALIAS,
  ZEND_AST_GROUP_USE,
  ZEND_AST_ATTRIBUTE,
  ZEND_AST_MATCH,
  ZEND_AST_MATCH_ARM,
  ZEND_AST_NAMED_ARG,
  ZEND_AST_PARENT_PROPERTY_HOOK_CALL,
  ZEND_AST_PIPE,
  ZEND_AST_METHOD_CALL = 3 << 8,
  ZEND_AST_NULLSAFE_METHOD_CALL,
  ZEND_AST_STATIC_CALL,
  ZEND_AST_CONDITIONAL,
  ZEND_AST_TRY,
  ZEND_AST_CATCH,
  ZEND_AST_PROP_GROUP,
  ZEND_AST_CONST_ELEM,
  ZEND_AST_CLASS_CONST_GROUP,
  ZEND_AST_CONST_ENUM_INIT,
  ZEND_AST_FOR = 4 << 8,
  ZEND_AST_FOREACH,
  ZEND_AST_ENUM_CASE,
  ZEND_AST_PROP_ELEM,
  ZEND_AST_PARAM = 6 << 8,
};
typedef uint16_t zend_ast_kind;
typedef uint16_t zend_ast_attr;
struct _zend_ast {
  zend_ast_kind kind;
  zend_ast_attr attr;
  uint32_t lineno;
  zend_ast *child[1];
};
typedef struct _zend_ast_list {
  zend_ast_kind kind;
  zend_ast_attr attr;
  uint32_t lineno;
  uint32_t children;
  zend_ast *child[1];
} zend_ast_list;
typedef struct _zend_ast_zval {
  zend_ast_kind kind;
  zend_ast_attr attr;
  zval val;
} zend_ast_zval;
typedef struct _zend_op_array zend_op_array;
typedef struct _zend_ast_op_array {
  zend_ast_kind kind;
  zend_ast_attr attr;
  uint32_t lineno;
  zend_op_array *op_array;
} zend_ast_op_array;
typedef struct _zend_ast_decl {
  zend_ast_kind kind;
  zend_ast_attr attr;
  uint32_t start_lineno;
  uint32_t end_lineno;
  uint32_t flags;
  zend_string *doc_comment;
  zend_string *name;
  zend_ast *child[5];
} zend_ast_decl;
typedef struct _zend_ast_fcc {
  zend_ast_kind kind;
  zend_ast_attr attr;
  uint32_t lineno;
  zend_function *fptr__ptr;
} zend_ast_fcc;
typedef void (*zend_ast_process_t)(zend_ast *ast);
extern
    __attribute__((visibility("default"))) zend_ast_process_t zend_ast_process;
__attribute__((visibility("default"))) zend_ast *
zend_ast_create_zval_with_lineno(zval *zv, uint32_t lineno);
__attribute__((visibility("default"))) zend_ast *
zend_ast_create_zval_ex(zval *zv, zend_ast_attr attr);
__attribute__((visibility("default"))) zend_ast *zend_ast_create_zval(zval *zv);
__attribute__((visibility("default"))) zend_ast *
zend_ast_create_zval_from_str(zend_string *str);
__attribute__((visibility("default"))) zend_ast *
zend_ast_create_zval_from_long(zend_long lval);
__attribute__((visibility("default"))) zend_ast *
zend_ast_create_constant(zend_string *name, zend_ast_attr attr);
__attribute__((visibility("default"))) zend_ast *
zend_ast_create_class_const_or_name(zend_ast *class_name, zend_ast *name);
__attribute__((visibility("default"))) zend_ast *
zend_ast_create_op_array(zend_op_array *op_array);
__attribute__((visibility("default"))) zend_ast *
zend_ast_create_0(zend_ast_kind kind);
__attribute__((visibility("default"))) zend_ast *
zend_ast_create_1(zend_ast_kind kind, zend_ast *child);
__attribute__((visibility("default"))) zend_ast *
zend_ast_create_2(zend_ast_kind kind, zend_ast *child1, zend_ast *child2);
__attribute__((visibility("default"))) zend_ast *
zend_ast_create_3(zend_ast_kind kind, zend_ast *child1, zend_ast *child2,
                  zend_ast *child3);
__attribute__((visibility("default"))) zend_ast *
zend_ast_create_4(zend_ast_kind kind, zend_ast *child1, zend_ast *child2,
                  zend_ast *child3, zend_ast *child4);
__attribute__((visibility("default"))) zend_ast *
zend_ast_create_5(zend_ast_kind kind, zend_ast *child1, zend_ast *child2,
                  zend_ast *child3, zend_ast *child4, zend_ast *child5);
__attribute__((visibility("default"))) zend_ast *
zend_ast_create_va(zend_ast_kind kind, zend_ast_attr attr, va_list *va);
__attribute__((visibility("default"))) zend_ast *
zend_ast_create_n(unsigned kind, ...);
__attribute__((visibility("default"))) zend_ast *
zend_ast_create_ex_n(zend_ast_kind kind, unsigned attr, ...);
static inline zend_ast *zend_ast_create_ex_0(zend_ast_kind kind,
                                             zend_ast_attr attr) {
  zend_ast *ast = zend_ast_create_0(kind);
  ast->attr = attr;
  return ast;
}
static inline zend_ast *
zend_ast_create_ex_1(zend_ast_kind kind, zend_ast_attr attr, zend_ast *child) {
  zend_ast *ast = zend_ast_create_1(kind, child);
  ast->attr = attr;
  return ast;
}
static inline zend_ast *zend_ast_create_ex_2(zend_ast_kind kind,
                                             zend_ast_attr attr,
                                             zend_ast *child1,
                                             zend_ast *child2) {
  zend_ast *ast = zend_ast_create_2(kind, child1, child2);
  ast->attr = attr;
  return ast;
}
static inline zend_ast *zend_ast_create_ex_3(zend_ast_kind kind,
                                             zend_ast_attr attr,
                                             zend_ast *child1, zend_ast *child2,
                                             zend_ast *child3) {
  zend_ast *ast = zend_ast_create_3(kind, child1, child2, child3);
  ast->attr = attr;
  return ast;
}
static inline zend_ast *
zend_ast_create_ex_4(zend_ast_kind kind, zend_ast_attr attr, zend_ast *child1,
                     zend_ast *child2, zend_ast *child3, zend_ast *child4) {
  zend_ast *ast = zend_ast_create_4(kind, child1, child2, child3, child4);
  ast->attr = attr;
  return ast;
}
static inline zend_ast *zend_ast_create_ex_5(zend_ast_kind kind,
                                             zend_ast_attr attr,
                                             zend_ast *child1, zend_ast *child2,
                                             zend_ast *child3, zend_ast *child4,
                                             zend_ast *child5) {
  zend_ast *ast =
      zend_ast_create_5(kind, child1, child2, child3, child4, child5);
  ast->attr = attr;
  return ast;
}
__attribute__((visibility("default"))) zend_ast *
zend_ast_create_list_0(zend_ast_kind kind);
__attribute__((visibility("default"))) zend_ast *
zend_ast_create_list_1(zend_ast_kind kind, zend_ast *child);
__attribute__((visibility("default"))) zend_ast *
zend_ast_create_list_2(zend_ast_kind kind, zend_ast *child1, zend_ast *child2);
__attribute__((visibility("default"))) zend_ast *
zend_ast_list_add(zend_ast *list, zend_ast *op);
__attribute__((visibility("default"))) zend_ast *
zend_ast_create_decl(zend_ast_kind kind, uint32_t flags, uint32_t start_lineno,
                     zend_string *doc_comment, zend_string *name,
                     zend_ast *child0, zend_ast *child1, zend_ast *child2,
                     zend_ast *child3, zend_ast *child4);
__attribute__((visibility("default"))) zend_ast *zend_ast_create_fcc(void);
typedef struct {
  _Bool had_side_effects;
} zend_ast_evaluate_ctx;
__attribute__((visibility("default"))) zend_result
zend_ast_evaluate(zval *result, zend_ast *ast, zend_class_entry *scope);
__attribute__((visibility("default"))) zend_result
zend_ast_evaluate_ex(zval *result, zend_ast *ast, zend_class_entry *scope,
                     _Bool *short_circuited_ptr, zend_ast_evaluate_ctx *ctx);
__attribute__((visibility("default"))) zend_string *
zend_ast_export(const char *prefix, zend_ast *ast, const char *suffix);
__attribute__((visibility("default"))) zend_ast_ref *
zend_ast_copy(zend_ast *ast);
__attribute__((visibility("default"))) void zend_ast_destroy(zend_ast *ast);
__attribute__((visibility("default"))) void
zend_ast_ref_destroy(zend_ast_ref *ast);
typedef void (*zend_ast_apply_func)(zend_ast **ast_ptr, void *context);
__attribute__((visibility("default"))) void
zend_ast_apply(zend_ast *ast, zend_ast_apply_func fn, void *context);
static inline size_t zend_ast_size(uint32_t children) {
  return __builtin_offsetof(zend_ast, child) + (sizeof(zend_ast *) * children);
}
static inline _Bool zend_ast_is_special(zend_ast *ast) {
  return (ast->kind >> 6) & 1;
}
static inline _Bool zend_ast_is_decl(zend_ast *ast) {
  return zend_ast_is_special(ast) && ast->kind >= ZEND_AST_FUNC_DECL;
}
static inline _Bool zend_ast_is_list(zend_ast *ast) {
  return (ast->kind >> 7) & 1;
}
static inline zend_ast_list *zend_ast_get_list(zend_ast *ast) {
  ((void)sizeof((zend_ast_is_list(ast)) ? 1 : 0), __extension__({
     if (zend_ast_is_list(ast))
       ;
     else
       __assert_fail("zend_ast_is_list(ast)", "Zend/zend_ast.h", 364,
                     __extension__ __PRETTY_FUNCTION__);
   }));
  return (zend_ast_list *)ast;
}
static inline zval *zend_ast_get_zval(zend_ast *ast) {
  ((void)sizeof((ast->kind == ZEND_AST_ZVAL) ? 1 : 0), __extension__({
     if (ast->kind == ZEND_AST_ZVAL)
       ;
     else
       __assert_fail("ast->kind == ZEND_AST_ZVAL", "Zend/zend_ast.h", 369,
                     __extension__ __PRETTY_FUNCTION__);
   }));
  return &((zend_ast_zval *)ast)->val;
}
static inline zend_string *zend_ast_get_str(zend_ast *ast) {
  zval *zv = zend_ast_get_zval(ast);
  ((void)sizeof((zval_get_type(&(*(zv))) == 6) ? 1 : 0), __extension__({
     if (zval_get_type(&(*(zv))) == 6)
       ;
     else
       __assert_fail("zval_get_type(&(*(zv))) == 6", "Zend/zend_ast.h", 374,
                     __extension__ __PRETTY_FUNCTION__);
   }));
  return (*(zv)).value.str;
}
static inline zend_ast_op_array *zend_ast_get_op_array(zend_ast *ast) {
  ((void)sizeof((ast->kind == ZEND_AST_OP_ARRAY) ? 1 : 0), __extension__({
     if (ast->kind == ZEND_AST_OP_ARRAY)
       ;
     else
       __assert_fail("ast->kind == ZEND_AST_OP_ARRAY", "Zend/zend_ast.h", 379,
                     __extension__ __PRETTY_FUNCTION__);
   }));
  return (zend_ast_op_array *)ast;
}
static inline zend_string *zend_ast_get_constant_name(zend_ast *ast) {
  ((void)sizeof((ast->kind == ZEND_AST_CONSTANT) ? 1 : 0), __extension__({
     if (ast->kind == ZEND_AST_CONSTANT)
       ;
     else
       __assert_fail("ast->kind == ZEND_AST_CONSTANT", "Zend/zend_ast.h", 384,
                     __extension__ __PRETTY_FUNCTION__);
   }));
  ((void)sizeof((zval_get_type(&(((zend_ast_zval *)ast)->val)) == 6) ? 1 : 0),
   __extension__({
     if (zval_get_type(&(((zend_ast_zval *)ast)->val)) == 6)
       ;
     else
       __assert_fail("zval_get_type(&(((zend_ast_zval *) ast)->val)) == 6",
                     "Zend/zend_ast.h", 385, __extension__ __PRETTY_FUNCTION__);
   }));
  return (((zend_ast_zval *)ast)->val).value.str;
}
static inline uint32_t zend_ast_get_num_children(zend_ast *ast) {
  ((void)sizeof((!zend_ast_is_list(ast)) ? 1 : 0), __extension__({
     if (!zend_ast_is_list(ast))
       ;
     else
       __assert_fail("!zend_ast_is_list(ast)", "Zend/zend_ast.h", 390,
                     __extension__ __PRETTY_FUNCTION__);
   }));
  ((void)sizeof((!zend_ast_is_special(ast)) ? 1 : 0), __extension__({
     if (!zend_ast_is_special(ast))
       ;
     else
       __assert_fail("!zend_ast_is_special(ast)", "Zend/zend_ast.h", 391,
                     __extension__ __PRETTY_FUNCTION__);
   }));
  return ast->kind >> 8;
}
static inline uint32_t zend_ast_get_lineno(zend_ast *ast) {
  if (ast->kind == ZEND_AST_ZVAL) {
    zval *zv = zend_ast_get_zval(ast);
    return (*(zv)).u2.lineno;
  } else if (ast->kind == ZEND_AST_CONSTANT) {
    zval *zv = &((zend_ast_zval *)ast)->val;
    return (*(zv)).u2.lineno;
  } else {
    return ast->lineno;
  }
}
static inline zend_ast *
zend_ast_create_binary_op(uint32_t opcode, zend_ast *op0, zend_ast *op1) {
  return zend_ast_create_ex_2(ZEND_AST_BINARY_OP, opcode, op0, op1);
}
zend_ast *zend_ast_create_concat_op(zend_ast *op0, zend_ast *op1);
static inline zend_ast *
zend_ast_create_assign_op(uint32_t opcode, zend_ast *op0, zend_ast *op1) {
  return zend_ast_create_ex_2(ZEND_AST_ASSIGN_OP, opcode, op0, op1);
}
static inline zend_ast *zend_ast_create_cast(uint32_t type, zend_ast *op0) {
  return zend_ast_create_ex_1(ZEND_AST_CAST, type, op0);
}
static inline zend_ast *zend_ast_list_rtrim(zend_ast *ast) {
  zend_ast_list *list = zend_ast_get_list(ast);
  if (list->children && list->child[list->children - 1] == ((void *)0)) {
    list->children--;
  }
  return ast;
}
zend_ast *zend_ast_with_attributes(zend_ast *ast, zend_ast *attr);

__attribute__((visibility("default"))) void rc_dtor_func(zend_refcounted *p);
__attribute__((visibility("default"))) void zval_copy_ctor_func(zval *zvalue);
static inline void zval_ptr_dtor_nogc(zval *zval_ptr) {
  if (((*(zval_ptr)).u1.v.type_flags != 0) && !zval_delref_p(zval_ptr)) {
    rc_dtor_func((*(zval_ptr)).value.counted);
  }
}
static inline void i_zval_ptr_dtor(zval *zval_ptr) {
  if (((*(zval_ptr)).u1.v.type_flags != 0)) {
    zend_refcounted *ref = (*(zval_ptr)).value.counted;
    if (!zend_gc_delref(&(ref)->gc)) {
      rc_dtor_func(ref);
    } else {
      gc_check_possible_root(ref);
    }
  }
}
static inline void zval_copy_ctor(zval *zvalue) {
  if (zval_get_type(&(*(zvalue))) == 7) {
    do {
      zend_array *__arr = (zend_array_dup((*(zvalue)).value.arr));
      zval *__z = (zvalue);
      (*(__z)).value.arr = __arr;
      (*(__z)).u1.type_info = (7 | ((1 << 0) << 8) | ((1 << 1) << 8));
    } while (0);
  } else if (((*(zvalue)).u1.v.type_flags != 0)) {
    zval_addref_p(zvalue);
  }
}
static inline void zval_opt_copy_ctor(zval *zvalue) {
  if (((*(zvalue)).u1.type_info & 0xff) == 7) {
    do {
      zend_array *__arr = (zend_array_dup((*(zvalue)).value.arr));
      zval *__z = (zvalue);
      (*(__z)).value.arr = __arr;
      (*(__z)).u1.type_info = (7 | ((1 << 0) << 8) | ((1 << 1) << 8));
    } while (0);
  } else if (((((*(zvalue)).u1.type_info) & 0xff00) != 0)) {
    zval_addref_p(zvalue);
  }
}
static inline void zval_ptr_dtor_str(zval *zval_ptr) {
  if (((*(zval_ptr)).u1.v.type_flags != 0) && !zval_delref_p(zval_ptr)) {
    ((void)sizeof((zval_get_type(&(*(zval_ptr))) == 6) ? 1 : 0), __extension__({
       if (zval_get_type(&(*(zval_ptr))) == 6)
         ;
       else
         __assert_fail("zval_get_type(&(*(zval_ptr))) == 6",
                       "Zend/zend_variables.h", 73,
                       __extension__ __PRETTY_FUNCTION__);
     }));
    ((void)sizeof((!(zval_gc_flags(((*(zval_ptr)).value.str)->gc.u.type_info) &
                     (1 << 6)))
                      ? 1
                      : 0),
     __extension__({
       if (!(zval_gc_flags(((*(zval_ptr)).value.str)->gc.u.type_info) &
             (1 << 6)))
         ;
       else
         __assert_fail("!(zval_gc_flags(((*(zval_ptr)).value.str)->gc.u.type_"
                       "info) & (1<<6))",
                       "Zend/zend_variables.h", 74,
                       __extension__ __PRETTY_FUNCTION__);
     }));
    ((void)sizeof((!(zval_gc_flags(((*(zval_ptr)).value.str)->gc.u.type_info) &
                     (1 << 7)))
                      ? 1
                      : 0),
     __extension__({
       if (!(zval_gc_flags(((*(zval_ptr)).value.str)->gc.u.type_info) &
             (1 << 7)))
         ;
       else
         __assert_fail("!(zval_gc_flags(((*(zval_ptr)).value.str)->gc.u.type_"
                       "info) & (1<<7))",
                       "Zend/zend_variables.h", 75,
                       __extension__ __PRETTY_FUNCTION__);
     }));
    _efree(((*(zval_ptr)).value.str), "Zend/zend_variables.h", 76, ((void *)0),
           0);
  }
}
__attribute__((visibility("default"))) void zval_ptr_dtor(zval *zval_ptr);
__attribute__((visibility("default"))) void zval_ptr_safe_dtor(zval *zval_ptr);
__attribute__((visibility("default"))) void
zval_internal_ptr_dtor(zval *zvalue);
__attribute__((visibility("default"))) void zval_add_ref(zval *p);

typedef struct _zend_object_iterator zend_object_iterator;
typedef struct _zend_object_iterator_funcs {
  void (*dtor)(zend_object_iterator *iter);
  zend_result (*valid)(zend_object_iterator *iter);
  zval *(*get_current_data)(zend_object_iterator *iter);
  void (*get_current_key)(zend_object_iterator *iter, zval *key);
  void (*move_forward)(zend_object_iterator *iter);
  void (*rewind)(zend_object_iterator *iter);
  void (*invalidate_current)(zend_object_iterator *iter);
  HashTable *(*get_gc)(zend_object_iterator *iter, zval **table, int *n);
} zend_object_iterator_funcs;
struct _zend_object_iterator {
  zend_object std;
  zval data;
  const zend_object_iterator_funcs *funcs;
  zend_ulong index;
};
typedef struct _zend_class_iterator_funcs {
  zend_function *zf_new_iterator;
  zend_function *zf_valid;
  zend_function *zf_current;
  zend_function *zf_key;
  zend_function *zf_next;
  zend_function *zf_rewind;
} zend_class_iterator_funcs;
typedef struct _zend_class_arrayaccess_funcs {
  zend_function *zf_offsetget;
  zend_function *zf_offsetexists;
  zend_function *zf_offsetset;
  zend_function *zf_offsetunset;
} zend_class_arrayaccess_funcs;

__attribute__((visibility("default"))) zend_object_iterator *
zend_iterator_unwrap(zval *array_ptr);
__attribute__((visibility("default"))) void
zend_iterator_init(zend_object_iterator *iter);
__attribute__((visibility("default"))) void
zend_iterator_dtor(zend_object_iterator *iter);
__attribute__((visibility("default"))) void
zend_register_iterator_wrapper(void);

struct stat {
  __dev_t st_dev;
  __ino_t st_ino;
  __nlink_t st_nlink;
  __mode_t st_mode;
  __uid_t st_uid;
  __gid_t st_gid;
  int __pad0;
  __dev_t st_rdev;
  __off_t st_size;
  __blksize_t st_blksize;
  __blkcnt_t st_blocks;
  struct timespec st_atim;
  struct timespec st_mtim;
  struct timespec st_ctim;
  __syscall_slong_t __glibc_reserved[3];
};
struct stat64 {
  __dev_t st_dev;
  __ino64_t st_ino;
  __nlink_t st_nlink;
  __mode_t st_mode;
  __uid_t st_uid;
  __gid_t st_gid;
  int __pad0;
  __dev_t st_rdev;
  __off_t st_size;
  __blksize_t st_blksize;
  __blkcnt64_t st_blocks;
  struct timespec st_atim;
  struct timespec st_mtim;
  struct timespec st_ctim;
  __syscall_slong_t __glibc_reserved[3];
};
extern int stat(const char *__restrict __file, struct stat *__restrict __buf)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));
extern int fstat(int __fd, struct stat *__buf)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2)));
extern int stat64(const char *__restrict __file,
                  struct stat64 *__restrict __buf)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));
extern int fstat64(int __fd, struct stat64 *__buf)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2)));
extern int fstatat(int __fd, const char *__restrict __file,
                   struct stat *__restrict __buf, int __flag)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(3)));
extern int fstatat64(int __fd, const char *__restrict __file,
                     struct stat64 *__restrict __buf, int __flag)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(3)));
extern int lstat(const char *__restrict __file, struct stat *__restrict __buf)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));
extern int lstat64(const char *__restrict __file,
                   struct stat64 *__restrict __buf)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));
extern int chmod(const char *__file, __mode_t __mode)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
extern int lchmod(const char *__file, __mode_t __mode)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
extern int fchmod(int __fd, __mode_t __mode)
    __attribute__((__nothrow__, __leaf__));
extern int fchmodat(int __fd, const char *__file, __mode_t __mode, int __flag)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2)));
extern __mode_t umask(__mode_t __mask) __attribute__((__nothrow__, __leaf__));
extern __mode_t getumask(void) __attribute__((__nothrow__, __leaf__));
extern int mkdir(const char *__path, __mode_t __mode)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
extern int mkdirat(int __fd, const char *__path, __mode_t __mode)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2)));
extern int mknod(const char *__path, __mode_t __mode, __dev_t __dev)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
extern int mknodat(int __fd, const char *__path, __mode_t __mode, __dev_t __dev)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2)));
extern int mkfifo(const char *__path, __mode_t __mode)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
extern int mkfifoat(int __fd, const char *__path, __mode_t __mode)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2)));
extern int utimensat(int __fd, const char *__path,
                     const struct timespec __times[2], int __flags)
    __attribute__((__nothrow__, __leaf__));
extern int futimens(int __fd, const struct timespec __times[2])
    __attribute__((__nothrow__, __leaf__));
typedef __signed__ char __s8;
typedef unsigned char __u8;
typedef __signed__ short __s16;
typedef unsigned short __u16;
typedef __signed__ int __s32;
typedef unsigned int __u32;
__extension__ typedef __signed__ long long __s64;
__extension__ typedef unsigned long long __u64;
typedef struct {
  unsigned long fds_bits[1024 / (8 * sizeof(long))];
} __kernel_fd_set;
typedef void (*__kernel_sighandler_t)(int);
typedef int __kernel_key_t;
typedef int __kernel_mqd_t;
typedef unsigned short __kernel_old_uid_t;
typedef unsigned short __kernel_old_gid_t;
typedef unsigned long __kernel_old_dev_t;
typedef long __kernel_long_t;
typedef unsigned long __kernel_ulong_t;
typedef __kernel_ulong_t __kernel_ino_t;
typedef unsigned int __kernel_mode_t;
typedef int __kernel_pid_t;
typedef int __kernel_ipc_pid_t;
typedef unsigned int __kernel_uid_t;
typedef unsigned int __kernel_gid_t;
typedef __kernel_long_t __kernel_suseconds_t;
typedef int __kernel_daddr_t;
typedef unsigned int __kernel_uid32_t;
typedef unsigned int __kernel_gid32_t;
typedef __kernel_ulong_t __kernel_size_t;
typedef __kernel_long_t __kernel_ssize_t;
typedef __kernel_long_t __kernel_ptrdiff_t;
typedef struct {
  int val[2];
} __kernel_fsid_t;
typedef __kernel_long_t __kernel_off_t;
typedef long long __kernel_loff_t;
typedef __kernel_long_t __kernel_old_time_t;
typedef __kernel_long_t __kernel_time_t;
typedef long long __kernel_time64_t;
typedef __kernel_long_t __kernel_clock_t;
typedef int __kernel_timer_t;
typedef int __kernel_clockid_t;
typedef char *__kernel_caddr_t;
typedef unsigned short __kernel_uid16_t;
typedef unsigned short __kernel_gid16_t;
typedef __signed__ __int128 __s128 __attribute__((aligned(16)));
typedef unsigned __int128 __u128 __attribute__((aligned(16)));
typedef __u16 __le16;
typedef __u16 __be16;
typedef __u32 __le32;
typedef __u32 __be32;
typedef __u64 __le64;
typedef __u64 __be64;
typedef __u16 __sum16;
typedef __u32 __wsum;
typedef unsigned __poll_t;
struct statx_timestamp {
  __s64 tv_sec;
  __u32 tv_nsec;
  __s32 __reserved;
};
struct statx {
  __u32 stx_mask;
  __u32 stx_blksize;
  __u64 stx_attributes;
  __u32 stx_nlink;
  __u32 stx_uid;
  __u32 stx_gid;
  __u16 stx_mode;
  __u16 __spare0[1];
  __u64 stx_ino;
  __u64 stx_size;
  __u64 stx_blocks;
  __u64 stx_attributes_mask;
  struct statx_timestamp stx_atime;
  struct statx_timestamp stx_btime;
  struct statx_timestamp stx_ctime;
  struct statx_timestamp stx_mtime;
  __u32 stx_rdev_major;
  __u32 stx_rdev_minor;
  __u32 stx_dev_major;
  __u32 stx_dev_minor;
  __u64 stx_mnt_id;
  __u32 stx_dio_mem_align;
  __u32 stx_dio_offset_align;
  __u64 stx_subvol;
  __u32 stx_atomic_write_unit_min;
  __u32 stx_atomic_write_unit_max;
  __u32 stx_atomic_write_segments_max;
  __u32 stx_dio_read_offset_align;
  __u64 __spare3[9];
};

int statx(int __dirfd, const char *__restrict __path, int __flags,
          unsigned int __mask, struct statx *__restrict __buf)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(5)));

typedef size_t (*zend_stream_fsizer_t)(void *handle);
typedef ssize_t (*zend_stream_reader_t)(void *handle, char *buf, size_t len);
typedef void (*zend_stream_closer_t)(void *handle);
typedef enum {
  ZEND_HANDLE_FILENAME,
  ZEND_HANDLE_FP,
  ZEND_HANDLE_STREAM
} zend_stream_type;
typedef struct _zend_stream {
  void *handle;
  int isatty;
  zend_stream_reader_t reader;
  zend_stream_fsizer_t fsizer;
  zend_stream_closer_t closer;
} zend_stream;
typedef struct _zend_file_handle {
  union {
    FILE *fp;
    zend_stream stream;
  } handle;
  zend_string *filename;
  zend_string *opened_path;
  uint8_t type;
  _Bool primary_script;
  _Bool in_list;
  char *buf;
  size_t len;
} zend_file_handle;

__attribute__((visibility("default"))) void
zend_stream_init_fp(zend_file_handle *handle, FILE *fp, const char *filename);
__attribute__((visibility("default"))) void
zend_stream_init_filename(zend_file_handle *handle, const char *filename);
__attribute__((visibility("default"))) void
zend_stream_init_filename_ex(zend_file_handle *handle, zend_string *filename);
__attribute__((visibility("default"))) zend_result
zend_stream_open(zend_file_handle *handle);
__attribute__((visibility("default"))) zend_result
zend_stream_fixup(zend_file_handle *file_handle, char **buf, size_t *len);
__attribute__((visibility("default"))) void
zend_destroy_file_handle(zend_file_handle *file_handle);
void zend_stream_init(void);
void zend_stream_shutdown(void);

typedef struct stat zend_stat_t;
typedef struct _zend_string zend_string;
typedef struct {
  zend_string *s;
  size_t a;
} smart_str;
typedef struct {
  char *c;
  size_t len;
  size_t a;
} smart_string;

typedef __sig_atomic_t sig_atomic_t;
union sigval {
  int sival_int;
  void *sival_ptr;
};
typedef union sigval __sigval_t;
typedef struct {
  int si_signo;
  int si_errno;
  int si_code;
  int __pad0;
  union {
    int _pad[((128 / sizeof(int)) - 4)];
    struct {
      __pid_t si_pid;
      __uid_t si_uid;
    } _kill;
    struct {
      int si_tid;
      int si_overrun;
      __sigval_t si_sigval;
    } _timer;
    struct {
      __pid_t si_pid;
      __uid_t si_uid;
      __sigval_t si_sigval;
    } _rt;
    struct {
      __pid_t si_pid;
      __uid_t si_uid;
      int si_status;
      __clock_t si_utime;
      __clock_t si_stime;
    } _sigchld;
    struct {
      void *si_addr;

      short int si_addr_lsb;
      union {
        struct {
          void *_lower;
          void *_upper;
        } _addr_bnd;
        __uint32_t _pkey;
      } _bounds;
    } _sigfault;
    struct {
      long int si_band;
      int si_fd;
    } _sigpoll;
    struct {
      void *_call_addr;
      int _syscall;
      unsigned int _arch;
    } _sigsys;
  } _sifields;
} siginfo_t;
enum {
  SI_ASYNCNL = -60,
  SI_DETHREAD = -7,
  SI_TKILL,
  SI_SIGIO,
  SI_ASYNCIO,
  SI_MESGQ,
  SI_TIMER,
  SI_QUEUE,
  SI_USER,
  SI_KERNEL = 0x80
};
enum {
  ILL_ILLOPC = 1,
  ILL_ILLOPN,
  ILL_ILLADR,
  ILL_ILLTRP,
  ILL_PRVOPC,
  ILL_PRVREG,
  ILL_COPROC,
  ILL_BADSTK,
  ILL_BADIADDR
};
enum {
  FPE_INTDIV = 1,
  FPE_INTOVF,
  FPE_FLTDIV,
  FPE_FLTOVF,
  FPE_FLTUND,
  FPE_FLTRES,
  FPE_FLTINV,
  FPE_FLTSUB,
  FPE_FLTUNK = 14,
  FPE_CONDTRAP
};
enum {
  SEGV_MAPERR = 1,
  SEGV_ACCERR,
  SEGV_BNDERR,
  SEGV_PKUERR,
  SEGV_ACCADI,
  SEGV_ADIDERR,
  SEGV_ADIPERR,
  SEGV_MTEAERR,
  SEGV_MTESERR,
  SEGV_CPERR
};
enum { BUS_ADRALN = 1, BUS_ADRERR, BUS_OBJERR, BUS_MCEERR_AR, BUS_MCEERR_AO };
enum { TRAP_BRKPT = 1, TRAP_TRACE, TRAP_BRANCH, TRAP_HWBKPT, TRAP_UNK };
enum {
  CLD_EXITED = 1,
  CLD_KILLED,
  CLD_DUMPED,
  CLD_TRAPPED,
  CLD_STOPPED,
  CLD_CONTINUED
};
enum { POLL_IN = 1, POLL_OUT, POLL_MSG, POLL_ERR, POLL_PRI, POLL_HUP };
typedef __sigval_t sigval_t;
typedef struct sigevent {
  __sigval_t sigev_value;
  int sigev_signo;
  int sigev_notify;
  union {
    int _pad[((64 / sizeof(int)) - 4)];
    __pid_t _tid;
    struct {
      void (*_function)(__sigval_t);
      pthread_attr_t *_attribute;
    } _sigev_thread;
  } _sigev_un;
} sigevent_t;
enum { SIGEV_SIGNAL = 0, SIGEV_NONE, SIGEV_THREAD, SIGEV_THREAD_ID = 4 };
typedef void (*__sighandler_t)(int);
extern __sighandler_t __sysv_signal(int __sig, __sighandler_t __handler)
    __attribute__((__nothrow__, __leaf__));
extern __sighandler_t sysv_signal(int __sig, __sighandler_t __handler)
    __attribute__((__nothrow__, __leaf__));
extern __sighandler_t signal(int __sig, __sighandler_t __handler)
    __attribute__((__nothrow__, __leaf__));
extern int kill(__pid_t __pid, int __sig)
    __attribute__((__nothrow__, __leaf__));
extern int killpg(__pid_t __pgrp, int __sig)
    __attribute__((__nothrow__, __leaf__));
extern int raise(int __sig) __attribute__((__nothrow__, __leaf__));
extern __sighandler_t ssignal(int __sig, __sighandler_t __handler)
    __attribute__((__nothrow__, __leaf__));
extern int gsignal(int __sig) __attribute__((__nothrow__, __leaf__));
extern void psignal(int __sig, const char *__s);
extern void psiginfo(const siginfo_t *__pinfo, const char *__s);
extern int sigpause(int __sig) __asm__("__xpg_sigpause")
    __attribute__((__deprecated__("Use the sigsuspend function instead")));
extern int sigblock(int __mask) __attribute__((__nothrow__, __leaf__))
__attribute__((__deprecated__));
extern int sigsetmask(int __mask) __attribute__((__nothrow__, __leaf__))
__attribute__((__deprecated__));
extern int siggetmask(void) __attribute__((__nothrow__, __leaf__))
__attribute__((__deprecated__));
typedef __sighandler_t sighandler_t;
typedef __sighandler_t sig_t;
extern int sigemptyset(sigset_t *__set) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(1)));
extern int sigfillset(sigset_t *__set) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(1)));
extern int sigaddset(sigset_t *__set, int __signo)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
extern int sigdelset(sigset_t *__set, int __signo)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
extern int sigismember(const sigset_t *__set, int __signo)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
extern int sigisemptyset(const sigset_t *__set)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
extern int sigandset(sigset_t *__set, const sigset_t *__left,
                     const sigset_t *__right)
    __attribute__((__nothrow__, __leaf__))
    __attribute__((__nonnull__(1, 2, 3)));
extern int sigorset(sigset_t *__set, const sigset_t *__left,
                    const sigset_t *__right)
    __attribute__((__nothrow__, __leaf__))
    __attribute__((__nonnull__(1, 2, 3)));
struct sigaction {
  union {
    __sighandler_t sa_handler;
    void (*sa_sigaction)(int, siginfo_t *, void *);
  } __sigaction_handler;
  __sigset_t sa_mask;
  int sa_flags;
  void (*sa_restorer)(void);
};
extern int sigprocmask(int __how, const sigset_t *__restrict __set,
                       sigset_t *__restrict __oset)
    __attribute__((__nothrow__, __leaf__));
extern int sigsuspend(const sigset_t *__set) __attribute__((__nonnull__(1)));
extern int sigaction(int __sig, const struct sigaction *__restrict __act,
                     struct sigaction *__restrict __oact)
    __attribute__((__nothrow__, __leaf__));
extern int sigpending(sigset_t *__set) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(1)));
extern int sigwait(const sigset_t *__restrict __set, int *__restrict __sig)
    __attribute__((__nonnull__(1, 2)));
extern int sigwaitinfo(const sigset_t *__restrict __set,
                       siginfo_t *__restrict __info)
    __attribute__((__nonnull__(1)));
extern int sigtimedwait(const sigset_t *__restrict __set,
                        siginfo_t *__restrict __info,
                        const struct timespec *__restrict __timeout)
    __attribute__((__nonnull__(1)));
extern int sigqueue(__pid_t __pid, int __sig, const union sigval __val)
    __attribute__((__nothrow__, __leaf__));
struct _fpx_sw_bytes {
  __uint32_t magic1;
  __uint32_t extended_size;
  __uint64_t xstate_bv;
  __uint32_t xstate_size;
  __uint32_t __glibc_reserved1[7];
};
struct _fpreg {
  unsigned short significand[4];
  unsigned short exponent;
};
struct _fpxreg {
  unsigned short significand[4];
  unsigned short exponent;
  unsigned short __glibc_reserved1[3];
};
struct _xmmreg {
  __uint32_t element[4];
};
struct _fpstate {
  __uint16_t cwd;
  __uint16_t swd;
  __uint16_t ftw;
  __uint16_t fop;
  __uint64_t rip;
  __uint64_t rdp;
  __uint32_t mxcsr;
  __uint32_t mxcr_mask;
  struct _fpxreg _st[8];
  struct _xmmreg _xmm[16];
  __uint32_t __glibc_reserved1[24];
};
struct sigcontext {
  __uint64_t r8;
  __uint64_t r9;
  __uint64_t r10;
  __uint64_t r11;
  __uint64_t r12;
  __uint64_t r13;
  __uint64_t r14;
  __uint64_t r15;
  __uint64_t rdi;
  __uint64_t rsi;
  __uint64_t rbp;
  __uint64_t rbx;
  __uint64_t rdx;
  __uint64_t rax;
  __uint64_t rcx;
  __uint64_t rsp;
  __uint64_t rip;
  __uint64_t eflags;
  unsigned short cs;
  unsigned short gs;
  unsigned short fs;
  unsigned short __pad0;
  __uint64_t err;
  __uint64_t trapno;
  __uint64_t oldmask;
  __uint64_t cr2;
  __extension__ union {
    struct _fpstate *fpstate;
    __uint64_t __fpstate_word;
  };
  __uint64_t __reserved1[8];
};
struct _xsave_hdr {
  __uint64_t xstate_bv;
  __uint64_t __glibc_reserved1[2];
  __uint64_t __glibc_reserved2[5];
};
struct _ymmh_state {
  __uint32_t ymmh_space[64];
};
struct _xstate {
  struct _fpstate fpstate;
  struct _xsave_hdr xstate_hdr;
  struct _ymmh_state ymmh;
};
extern int sigreturn(struct sigcontext *__scp)
    __attribute__((__nothrow__, __leaf__));
typedef struct {
  void *ss_sp;
  int ss_flags;
  size_t ss_size;
} stack_t;
__extension__ typedef long long int greg_t;
typedef greg_t gregset_t[23];
enum {
  REG_R8 = 0,
  REG_R9,
  REG_R10,
  REG_R11,
  REG_R12,
  REG_R13,
  REG_R14,
  REG_R15,
  REG_RDI,
  REG_RSI,
  REG_RBP,
  REG_RBX,
  REG_RDX,
  REG_RAX,
  REG_RCX,
  REG_RSP,
  REG_RIP,
  REG_EFL,
  REG_CSGSFS,
  REG_ERR,
  REG_TRAPNO,
  REG_OLDMASK,
  REG_CR2
};
struct _libc_fpxreg {
  unsigned short int significand[4];
  unsigned short int exponent;
  unsigned short int __glibc_reserved1[3];
};
struct _libc_xmmreg {
  __uint32_t element[4];
};
struct _libc_fpstate {
  __uint16_t cwd;
  __uint16_t swd;
  __uint16_t ftw;
  __uint16_t fop;
  __uint64_t rip;
  __uint64_t rdp;
  __uint32_t mxcsr;
  __uint32_t mxcr_mask;
  struct _libc_fpxreg _st[8];
  struct _libc_xmmreg _xmm[16];
  __uint32_t __glibc_reserved1[24];
};
typedef struct _libc_fpstate *fpregset_t;
typedef struct {
  gregset_t gregs;
  fpregset_t fpregs;
  __extension__ unsigned long long __reserved1[8];
} mcontext_t;
typedef struct ucontext_t {
  unsigned long int uc_flags;
  struct ucontext_t *uc_link;
  stack_t uc_stack;
  mcontext_t uc_mcontext;
  sigset_t uc_sigmask;
  struct _libc_fpstate __fpregs_mem;
  __extension__ unsigned long long int __ssp[4];
} ucontext_t;
extern int siginterrupt(int __sig, int __interrupt)
    __attribute__((__nothrow__, __leaf__))
    __attribute__((__deprecated__("Use sigaction with SA_RESTART instead")));
enum { SS_ONSTACK = 1, SS_DISABLE };
extern int sigaltstack(const stack_t *__restrict __ss,
                       stack_t *__restrict __oss)
    __attribute__((__nothrow__, __leaf__));
struct sigstack {
  void *ss_sp;
  int ss_onstack;
};
extern int sigstack(struct sigstack *__ss, struct sigstack *__oss)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__deprecated__));
extern int sighold(int __sig) __attribute__((__nothrow__, __leaf__))
__attribute__((__deprecated__("Use the sigprocmask function instead")));
extern int sigrelse(int __sig) __attribute__((__nothrow__, __leaf__))
__attribute__((__deprecated__("Use the sigprocmask function instead")));
extern int sigignore(int __sig) __attribute__((__nothrow__, __leaf__))
__attribute__((__deprecated__("Use the signal function instead")));
extern __sighandler_t sigset(int __sig, __sighandler_t __disp)
    __attribute__((__nothrow__, __leaf__)) __attribute__((
        __deprecated__("Use the signal and sigprocmask functions instead")));
extern int pthread_sigmask(int __how, const __sigset_t *__restrict __newmask,
                           __sigset_t *__restrict __oldmask)
    __attribute__((__nothrow__, __leaf__));
extern int pthread_kill(pthread_t __threadid, int __signo)
    __attribute__((__nothrow__, __leaf__));
extern int pthread_sigqueue(pthread_t __threadid, int __signo,
                            const union sigval __value)
    __attribute__((__nothrow__, __leaf__));
extern int __libc_current_sigrtmin(void) __attribute__((__nothrow__, __leaf__));
extern int __libc_current_sigrtmax(void) __attribute__((__nothrow__, __leaf__));
extern int tgkill(__pid_t __tgid, __pid_t __tid, int __signal);

typedef struct _zend_signal_entry_t {
  int flags;
  void *handler;
} zend_signal_entry_t;
typedef struct _zend_signal_t {
  int signo;
  siginfo_t *siginfo;
  void *context;
} zend_signal_t;
typedef struct _zend_signal_queue_t {
  zend_signal_t zend_signal;
  struct _zend_signal_queue_t *next;
} zend_signal_queue_t;
typedef struct _zend_signal_globals_t {
  int depth;
  int blocked;
  int running;
  int active;
  _Bool check;
  _Bool reset;
  zend_signal_entry_t handlers[(64 + 1)];
  zend_signal_queue_t pstorage[64], *phead, *ptail, *pavail;
} zend_signal_globals_t;

__attribute__((
    visibility("default"))) extern zend_signal_globals_t zend_signal_globals;

__attribute__((visibility("default"))) void zend_signal_handler_unblock(void);
void zend_signal_activate(void);
void zend_signal_deactivate(void);

__attribute__((visibility("default"))) void zend_signal_startup(void);

void zend_signal_init(void);
__attribute__((visibility("default"))) void zend_signal(int signo,
                                                        void (*handler)(int));
__attribute__((visibility("default"))) void
zend_sigaction(int signo, const struct sigaction *act,
               struct sigaction *oldact);

struct _zend_serialize_data;
struct _zend_unserialize_data;
typedef struct _zend_serialize_data zend_serialize_data;
typedef struct _zend_unserialize_data zend_unserialize_data;
typedef struct _zend_class_name {
  zend_string *name;
  zend_string *lc_name;
} zend_class_name;
typedef struct _zend_trait_method_reference {
  zend_string *method_name;
  zend_string *class_name;
} zend_trait_method_reference;
typedef struct _zend_trait_precedence {
  zend_trait_method_reference trait_method;
  uint32_t num_excludes;
  zend_string *exclude_class_names[1];
} zend_trait_precedence;
typedef struct _zend_trait_alias {
  zend_trait_method_reference trait_method;
  zend_string *alias;
  uint32_t modifiers;
} zend_trait_alias;
typedef struct _zend_class_mutable_data {
  zval *default_properties_table;
  HashTable *constants_table;
  uint32_t ce_flags;
  HashTable *backed_enum_table;
} zend_class_mutable_data;
typedef struct _zend_class_dependency {
  zend_string *name;
  zend_class_entry *ce;
} zend_class_dependency;
typedef struct _zend_inheritance_cache_entry zend_inheritance_cache_entry;
typedef struct _zend_error_info {
  int type;
  uint32_t lineno;
  zend_string *filename;
  zend_string *message;
} zend_error_info;
struct _zend_inheritance_cache_entry {
  zend_inheritance_cache_entry *next;
  zend_class_entry *ce;
  zend_class_entry *parent;
  zend_class_dependency *dependencies;
  uint32_t dependencies_count;
  uint32_t num_warnings;
  zend_error_info **warnings;
  zend_class_entry *traits_and_interfaces[1];
};
struct _zend_class_entry {
  char type;
  zend_string *name;
  union {
    zend_class_entry *parent;
    zend_string *parent_name;
  };
  int refcount;
  uint32_t ce_flags;
  int default_properties_count;
  int default_static_members_count;
  zval *default_properties_table;
  zval *default_static_members_table;
  zval *static_members_table__ptr;
  HashTable function_table;
  HashTable properties_info;
  HashTable constants_table;
  zend_class_mutable_data *mutable_data__ptr;
  zend_inheritance_cache_entry *inheritance_cache;
  struct _zend_property_info **properties_info_table;
  zend_function *constructor;
  zend_function *destructor;
  zend_function *clone;
  zend_function *__get;
  zend_function *__set;
  zend_function *__unset;
  zend_function *__isset;
  zend_function *__call;
  zend_function *__callstatic;
  zend_function *__tostring;
  zend_function *__debugInfo;
  zend_function *__serialize;
  zend_function *__unserialize;
  const zend_object_handlers *default_object_handlers;
  zend_class_iterator_funcs *iterator_funcs_ptr;
  zend_class_arrayaccess_funcs *arrayaccess_funcs_ptr;
  union {
    zend_object *(*create_object)(zend_class_entry *class_type);
    int (*interface_gets_implemented)(zend_class_entry *iface,
                                      zend_class_entry *class_type);
  };
  zend_object_iterator *(*get_iterator)(zend_class_entry *ce, zval *object,
                                        int by_ref);
  zend_function *(*get_static_method)(zend_class_entry *ce,
                                      zend_string *method);
  int (*serialize)(zval *object, unsigned char **buffer, size_t *buf_len,
                   zend_serialize_data *data);
  int (*unserialize)(zval *object, zend_class_entry *ce,
                     const unsigned char *buf, size_t buf_len,
                     zend_unserialize_data *data);
  uint32_t num_interfaces;
  uint32_t num_traits;
  uint32_t num_hooked_props;
  uint32_t num_hooked_prop_variance_checks;
  union {
    zend_class_entry **interfaces;
    zend_class_name *interface_names;
  };
  zend_class_name *trait_names;
  zend_trait_alias **trait_aliases;
  zend_trait_precedence **trait_precedences;
  HashTable *attributes;
  uint32_t enum_backing_type;
  HashTable *backed_enum_table;
  zend_string *doc_comment;
  union {
    struct {
      zend_string *filename;
      uint32_t line_start;
      uint32_t line_end;
    } user;
    struct {
      const struct _zend_function_entry *builtin_functions;
      struct _zend_module_entry *module;
    } internal;
  } info;
};
typedef union {
  zend_max_align_t align;
  uint64_t opaque[5];
} zend_random_bytes_insecure_state;
typedef struct _zend_utility_functions {
  void (*error_function)(int type, zend_string *error_filename,
                         const uint32_t error_lineno, zend_string *message);
  size_t (*printf_function)(const char *format, ...)
      __attribute__((format(printf, 1, 2)));
  size_t (*write_function)(const char *str, size_t str_length);
  FILE *(*fopen_function)(zend_string *filename, zend_string **opened_path);
  void (*message_handler)(zend_long message, const void *data);
  zval *(*get_configuration_directive)(zend_string *name);
  void (*ticks_function)(int ticks);
  void (*on_timeout)(int seconds);
  zend_result (*stream_open_function)(zend_file_handle *handle);
  void (*printf_to_smart_string_function)(smart_string *buf, const char *format,
                                          va_list ap);
  void (*printf_to_smart_str_function)(smart_str *buf, const char *format,
                                       va_list ap);
  char *(*getenv_function)(const char *name, size_t name_len);
  zend_string *(*resolve_path_function)(zend_string *filename);
  zend_result (*random_bytes_function)(void *bytes, size_t size, char *errstr,
                                       size_t errstr_size);
  void (*random_bytes_insecure_function)(
      zend_random_bytes_insecure_state *state, void *bytes, size_t size);
} zend_utility_functions;
typedef struct _zend_utility_values {
  _Bool html_errors;
} zend_utility_values;
typedef size_t (*zend_write_func_t)(const char *str, size_t str_length);

void zend_startup(zend_utility_functions *utility_functions);
void zend_shutdown(void);
void zend_register_standard_ini_entries(void);
zend_result zend_post_startup(void);
void zend_set_utility_values(zend_utility_values *utility_values);
void zend_unload_modules(void);
__attribute__((visibility("default"))) __attribute__((cold))
__attribute__((noreturn)) void
_zend_bailout(const char *filename, uint32_t lineno);
__attribute__((visibility("default"))) size_t zend_get_page_size(void);
__attribute__((visibility("default"))) size_t zend_vspprintf(char **pbuf,
                                                             size_t max_len,
                                                             const char *format,
                                                             va_list ap);
__attribute__((visibility("default"))) size_t
zend_spprintf(char **message, size_t max_len, const char *format, ...)
    __attribute__((format(printf, 3, 4)));
__attribute__((visibility("default"))) zend_string *
zend_vstrpprintf(size_t max_len, const char *format, va_list ap);
__attribute__((visibility("default"))) zend_string *
zend_strpprintf(size_t max_len, const char *format, ...)
    __attribute__((format(printf, 2, 3)));
__attribute__((visibility("default"))) size_t zend_spprintf_unchecked(
    char **message, size_t max_len, const char *format, ...);
__attribute__((visibility("default"))) zend_string *
zend_strpprintf_unchecked(size_t max_len, const char *format, ...);
__attribute__((visibility("default"))) const char *get_zend_version(void);
__attribute__((visibility("default"))) _Bool
zend_make_printable_zval(zval *expr, zval *expr_copy);
__attribute__((visibility("default"))) size_t zend_print_zval(zval *expr,
                                                              int indent);
__attribute__((visibility("default"))) void zend_print_zval_r(zval *expr,
                                                              int indent);
__attribute__((visibility("default"))) zend_string *
zend_print_zval_r_to_str(zval *expr, int indent);
__attribute__((visibility("default"))) void zend_print_flat_zval_r(zval *expr);
void zend_print_flat_zval_r_to_buf(smart_str *str, zval *expr);
static inline size_t zend_print_variable(zval *var) {
  return zend_print_zval(var, 0);
}
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_output_debug_string(_Bool trigger_break, const char *format, ...)
    __attribute__((format(printf, 2, 3)));
__attribute__((visibility("default"))) void zend_activate(void);
__attribute__((visibility("default"))) void zend_deactivate(void);
__attribute__((visibility("default"))) void zend_call_destructors(void);
__attribute__((visibility("default"))) void zend_activate_modules(void);
__attribute__((visibility("default"))) void zend_deactivate_modules(void);
__attribute__((visibility("default"))) void zend_post_deactivate_modules(void);
__attribute__((visibility("default"))) void free_estring(char **str_p);

extern __attribute__((visibility("default")))
size_t (*zend_printf)(const char *format, ...)
    __attribute__((format(printf, 1, 2)));
extern __attribute__((visibility("default"))) zend_write_func_t zend_write;
extern __attribute__((visibility("default")))
FILE *(*zend_fopen)(zend_string *filename, zend_string **opened_path);
extern __attribute__((visibility("default"))) void (*zend_ticks_function)(
    int ticks);
extern __attribute__((visibility("default"))) void (*zend_interrupt_function)(
    zend_execute_data *execute_data);
extern __attribute__((visibility("default"))) void (*zend_error_cb)(
    int type, zend_string *error_filename, const uint32_t error_lineno,
    zend_string *message);
extern
    __attribute__((visibility("default"))) void (*zend_on_timeout)(int seconds);
extern __attribute__((visibility("default")))
zend_result (*zend_stream_open_function)(zend_file_handle *handle);
extern void (*zend_printf_to_smart_string)(smart_string *buf,
                                           const char *format, va_list ap);
extern void (*zend_printf_to_smart_str)(smart_str *buf, const char *format,
                                        va_list ap);
extern __attribute__((visibility("default"))) char *(*zend_getenv)(
    const char *name, size_t name_len);
extern __attribute__((visibility("default")))
zend_string *(*zend_resolve_path)(zend_string *filename);
extern __attribute__((nonnull)) __attribute__((visibility("default")))
zend_result (*zend_random_bytes)(void *bytes, size_t size, char *errstr,
                                 size_t errstr_size);
extern __attribute__((nonnull))
__attribute__((visibility("default"))) void (*zend_random_bytes_insecure)(
    zend_random_bytes_insecure_state *state, void *bytes, size_t size);
extern __attribute__((visibility("default")))
zend_result (*zend_post_startup_cb)(void);
extern
    __attribute__((visibility("default"))) void (*zend_post_shutdown_cb)(void);
extern __attribute__((visibility("default"))) void (
    *zend_accel_schedule_restart_hook)(int reason);
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_error(int type, const char *format, ...)
    __attribute__((format(printf, 2, 3)));
__attribute__((visibility("default"))) __attribute__((cold))
__attribute__((noreturn)) void
zend_error_noreturn(int type, const char *format, ...)
    __attribute__((format(printf, 2, 3)));
__attribute__((visibility("default"))) __attribute__((cold))
__attribute__((noreturn)) void
zend_error_noreturn_unchecked(int type, const char *format, ...);
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_error_unchecked(int type, const char *format, ...);
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_error_at(int type, zend_string *filename, uint32_t lineno,
              const char *format, ...) __attribute__((format(printf, 4, 5)));
__attribute__((visibility("default"))) __attribute__((cold))
__attribute__((noreturn)) void
zend_error_at_noreturn(int type, zend_string *filename, uint32_t lineno,
                       const char *format, ...)
    __attribute__((format(printf, 4, 5)));
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_error_zstr(int type, zend_string *message);
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_error_zstr_at(int type, zend_string *filename, uint32_t lineno,
                   zend_string *message);
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_throw_error(zend_class_entry *exception_ce, const char *format, ...)
    __attribute__((format(printf, 2, 3)));
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_type_error(const char *format, ...) __attribute__((format(printf, 1, 2)));
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_argument_count_error(const char *format, ...)
    __attribute__((format(printf, 1, 2)));
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_value_error(const char *format, ...) __attribute__((format(printf, 1, 2)));
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_illegal_container_offset(const zend_string *container, const zval *offset,
                              int type);
__attribute__((cold)) void zenderror(const char *error);
__attribute__((visibility("default"))) __attribute__((cold))
__attribute__((noreturn)) void
zend_strerror_noreturn(int type, int errn, const char *message);
extern __attribute__((visibility("default")))
zend_class_entry *zend_standard_class_def;
extern __attribute__((visibility("default"))) zend_utility_values zend_uv;
extern __attribute__((visibility("default"))) _Bool zend_dtrace_enabled;

__attribute__((visibility("default"))) void
zend_message_dispatcher(zend_long message, const void *data);
__attribute__((visibility("default"))) zval *
zend_get_configuration_directive(zend_string *name);

typedef enum { EH_NORMAL = 0, EH_THROW } zend_error_handling_t;
typedef struct {
  zend_error_handling_t handling;
  zend_class_entry *exception;
} zend_error_handling;

__attribute__((visibility("default"))) void
zend_save_error_handling(zend_error_handling *current);
__attribute__((visibility("default"))) void
zend_replace_error_handling(zend_error_handling_t error_handling,
                            zend_class_entry *exception_class,
                            zend_error_handling *current);
__attribute__((visibility("default"))) void
zend_restore_error_handling(zend_error_handling *saved);
__attribute__((visibility("default"))) void zend_begin_record_errors(void);
__attribute__((visibility("default"))) void zend_emit_recorded_errors(void);
__attribute__((visibility("default"))) void zend_free_recorded_errors(void);

typedef struct _zend_array zend_array;
typedef struct _zend_class_entry zend_class_entry;
typedef struct _zend_object zend_object;
typedef struct _zend_object_iterator zend_object_iterator;
typedef struct _zval_struct zval;
typedef enum {
  ZEND_PROPERTY_HOOK_GET = 0,
  ZEND_PROPERTY_HOOK_SET = 1,
} zend_property_hook_kind;
__attribute__((visibility("default"))) zend_object_iterator *
zend_hooked_object_get_iterator(zend_class_entry *ce, zval *object, int by_ref);
__attribute__((visibility("default"))) zend_array *
zend_hooked_object_build_properties(zend_object *zobj);

typedef uint8_t zend_lazy_object_flags_t;
typedef struct _zend_lazy_objects_store {
  HashTable infos;
} zend_lazy_objects_store;
typedef struct _zend_property_info zend_property_info;
typedef struct _zend_fcall_info zend_fcall_info;
typedef struct _zend_fcall_info_cache zend_fcall_info_cache;
__attribute__((visibility("default"))) _Bool
zend_class_can_be_lazy(zend_class_entry *ce);
__attribute__((visibility("default"))) zend_object *zend_object_make_lazy(
    zend_object *obj, zend_class_entry *class_type, zval *initializer_zv,
    zend_fcall_info_cache *initializer_fcc, zend_lazy_object_flags_t flags);
__attribute__((visibility("default"))) zend_object *
zend_lazy_object_init(zend_object *obj);
__attribute__((visibility("default"))) zend_object *
zend_lazy_object_mark_as_initialized(zend_object *obj);
void zend_lazy_objects_init(zend_lazy_objects_store *store);
void zend_lazy_objects_destroy(zend_lazy_objects_store *store);
zval *zend_lazy_object_get_initializer_zv(zend_object *obj);
zend_object *zend_lazy_object_get_instance(zend_object *obj);
zend_lazy_object_flags_t zend_lazy_object_get_flags(zend_object *obj);
void zend_lazy_object_del_info(zend_object *obj);
__attribute__((visibility("default"))) HashTable *
zend_lazy_object_get_properties(zend_object *object);
zend_object *zend_lazy_object_clone(zend_object *old_obj);
HashTable *zend_lazy_object_debug_info(zend_object *object, int *is_temp);
HashTable *zend_lazy_object_get_gc(zend_object *zobj, zval **table, int *n);
_Bool zend_lazy_object_decr_lazy_props(zend_object *obj);
void zend_lazy_object_realize(zend_object *obj);
__attribute__((visibility("default"))) zend_property_info *
zend_lazy_object_get_property_info_for_slot(zend_object *obj, zval *slot);
static inline _Bool zend_object_is_lazy(zend_object *obj) {
  return (((obj)->extra_flags) & ((1U << 31) | (1U << 30)));
}
static inline _Bool zend_object_is_lazy_proxy(zend_object *obj) {
  return (((obj)->extra_flags) & (1U << 30));
}
static inline _Bool zend_lazy_object_initialized(zend_object *obj) {
  return !(((obj)->extra_flags) & (1U << 31));
}
static inline _Bool zend_lazy_object_must_init(zend_object *obj) {
  return zend_object_is_lazy(obj);
}
static inline _Bool zend_lazy_object_initialize_on_serialize(zend_object *obj) {
  return !(zend_lazy_object_get_flags(obj) & (1 << 3));
}
struct _zend_property_info;
typedef zval *(*zend_object_read_property_t)(zend_object *object,
                                             zend_string *member, int type,
                                             void **cache_slot, zval *rv);
typedef zval *(*zend_object_read_dimension_t)(zend_object *object, zval *offset,
                                              int type, zval *rv);
typedef zval *(*zend_object_write_property_t)(zend_object *object,
                                              zend_string *member, zval *value,
                                              void **cache_slot);
typedef void (*zend_object_write_dimension_t)(zend_object *object, zval *offset,
                                              zval *value);
typedef zval *(*zend_object_get_property_ptr_ptr_t)(zend_object *object,
                                                    zend_string *member,
                                                    int type,
                                                    void **cache_slot);
typedef int (*zend_object_has_property_t)(zend_object *object,
                                          zend_string *member,
                                          int has_set_exists,
                                          void **cache_slot);
typedef int (*zend_object_has_dimension_t)(zend_object *object, zval *member,
                                           int check_empty);
typedef void (*zend_object_unset_property_t)(zend_object *object,
                                             zend_string *member,
                                             void **cache_slot);
typedef void (*zend_object_unset_dimension_t)(zend_object *object,
                                              zval *offset);
typedef HashTable *(*zend_object_get_properties_t)(zend_object *object);
typedef HashTable *(*zend_object_get_debug_info_t)(zend_object *object,
                                                   int *is_temp);
typedef enum _zend_prop_purpose {
  ZEND_PROP_PURPOSE_DEBUG,
  ZEND_PROP_PURPOSE_ARRAY_CAST,
  ZEND_PROP_PURPOSE_SERIALIZE,
  ZEND_PROP_PURPOSE_VAR_EXPORT,
  ZEND_PROP_PURPOSE_JSON,
  ZEND_PROP_PURPOSE_GET_OBJECT_VARS,
  _ZEND_PROP_PURPOSE_NON_EXHAUSTIVE_ENUM
} zend_prop_purpose;
typedef zend_array *(*zend_object_get_properties_for_t)(
    zend_object *object, zend_prop_purpose purpose);
typedef zend_function *(*zend_object_get_method_t)(zend_object **object,
                                                   zend_string *method,
                                                   const zval *key);
typedef zend_function *(*zend_object_get_constructor_t)(zend_object *object);
typedef void (*zend_object_free_obj_t)(zend_object *object);
typedef void (*zend_object_dtor_obj_t)(zend_object *object);
typedef zend_object *(*zend_object_clone_obj_t)(zend_object *object);
typedef zend_string *(*zend_object_get_class_name_t)(const zend_object *object);
typedef int (*zend_object_compare_t)(zval *object1, zval *object2);
typedef zend_result (*zend_object_cast_t)(zend_object *readobj, zval *retval,
                                          int type);
typedef zend_result (*zend_object_count_elements_t)(zend_object *object,
                                                    zend_long *count);
typedef zend_result (*zend_object_get_closure_t)(zend_object *obj,
                                                 zend_class_entry **ce_ptr,
                                                 zend_function **fptr_ptr,
                                                 zend_object **obj_ptr,
                                                 _Bool check_only);
typedef HashTable *(*zend_object_get_gc_t)(zend_object *object, zval **table,
                                           int *n);
typedef zend_result (*zend_object_do_operation_t)(uint8_t opcode, zval *result,
                                                  zval *op1, zval *op2);
struct _zend_object_handlers {
  int offset;
  zend_object_free_obj_t free_obj;
  zend_object_dtor_obj_t dtor_obj;
  zend_object_clone_obj_t clone_obj;
  zend_object_read_property_t read_property;
  zend_object_write_property_t write_property;
  zend_object_read_dimension_t read_dimension;
  zend_object_write_dimension_t write_dimension;
  zend_object_get_property_ptr_ptr_t get_property_ptr_ptr;
  zend_object_has_property_t has_property;
  zend_object_unset_property_t unset_property;
  zend_object_has_dimension_t has_dimension;
  zend_object_unset_dimension_t unset_dimension;
  zend_object_get_properties_t get_properties;
  zend_object_get_method_t get_method;
  zend_object_get_constructor_t get_constructor;
  zend_object_get_class_name_t get_class_name;
  zend_object_cast_t cast_object;
  zend_object_count_elements_t count_elements;
  zend_object_get_debug_info_t get_debug_info;
  zend_object_get_closure_t get_closure;
  zend_object_get_gc_t get_gc;
  zend_object_do_operation_t do_operation;
  zend_object_compare_t compare;
  zend_object_get_properties_for_t get_properties_for;
};

extern const __attribute__((
    visibility("default"))) zend_object_handlers std_object_handlers;
__attribute__((visibility("default"))) void
zend_class_init_statics(zend_class_entry *ce);
__attribute__((visibility("default"))) zend_function *
zend_std_get_static_method(zend_class_entry *ce,
                           zend_string *function_name_strval, const zval *key);
__attribute__((visibility("default"))) zval *
zend_std_get_static_property_with_info(zend_class_entry *ce,
                                       zend_string *property_name, int type,
                                       struct _zend_property_info **prop_info);
__attribute__((visibility("default"))) zval *
zend_std_get_static_property(zend_class_entry *ce, zend_string *property_name,
                             int type);
__attribute__((visibility("default"))) __attribute__((cold)) _Bool
zend_std_unset_static_property(zend_class_entry *ce,
                               zend_string *property_name);
__attribute__((visibility("default"))) zend_function *
zend_std_get_constructor(zend_object *object);
__attribute__((visibility("default"))) struct _zend_property_info *
zend_get_property_info(const zend_class_entry *ce, zend_string *member,
                       int silent);
__attribute__((visibility("default"))) HashTable *
zend_std_get_properties(zend_object *object);
__attribute__((visibility("default"))) HashTable *
zend_get_properties_no_lazy_init(zend_object *zobj);
__attribute__((visibility("default"))) HashTable *
zend_std_get_gc(zend_object *object, zval **table, int *n);
__attribute__((visibility("default"))) HashTable *
zend_std_get_debug_info(zend_object *object, int *is_temp);
__attribute__((visibility("default"))) zend_result
zend_std_cast_object_tostring(zend_object *object, zval *writeobj, int type);
__attribute__((visibility("default"))) zval *
zend_std_get_property_ptr_ptr(zend_object *object, zend_string *member,
                              int type, void **cache_slot);
__attribute__((visibility("default"))) zval *
zend_std_read_property(zend_object *object, zend_string *member, int type,
                       void **cache_slot, zval *rv);
__attribute__((visibility("default"))) zval *
zend_std_write_property(zend_object *object, zend_string *member, zval *value,
                        void **cache_slot);
__attribute__((visibility("default"))) int
zend_std_has_property(zend_object *object, zend_string *member,
                      int has_set_exists, void **cache_slot);
__attribute__((visibility("default"))) void
zend_std_unset_property(zend_object *object, zend_string *member,
                        void **cache_slot);
__attribute__((visibility("default"))) zval *
zend_std_read_dimension(zend_object *object, zval *offset, int type, zval *rv);
__attribute__((visibility("default"))) void
zend_std_write_dimension(zend_object *object, zval *offset, zval *value);
__attribute__((visibility("default"))) int
zend_std_has_dimension(zend_object *object, zval *offset, int check_empty);
__attribute__((visibility("default"))) void
zend_std_unset_dimension(zend_object *object, zval *offset);
__attribute__((visibility("default"))) zend_function *
zend_std_get_method(zend_object **obj_ptr, zend_string *method_name,
                    const zval *key);
__attribute__((visibility("default"))) zend_string *
zend_std_get_class_name(const zend_object *zobj);
__attribute__((visibility("default"))) int zend_std_compare_objects(zval *o1,
                                                                    zval *o2);
__attribute__((visibility("default"))) zend_result zend_std_get_closure(
    zend_object *obj, zend_class_entry **ce_ptr, zend_function **fptr_ptr,
    zend_object **obj_ptr, _Bool check_only);
__attribute__((visibility("default"))) HashTable *
rebuild_object_properties_internal(zend_object *zobj);
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_bad_method_call(zend_function *fbc, zend_string *method_name,
                     zend_class_entry *scope);
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_abstract_method_call(zend_function *fbc);
static inline HashTable *zend_std_get_properties_ex(zend_object *object) {
  if (__builtin_expect(!!(zend_lazy_object_must_init(object)), 0)) {
    return zend_lazy_object_get_properties(object);
  }
  if (!object->properties) {
    return rebuild_object_properties_internal(object);
  }
  return object->properties;
}
__attribute__((visibility("default"))) HashTable *
zend_std_build_object_properties_array(zend_object *zobj);
__attribute__((visibility("default"))) int
zend_objects_not_comparable(zval *o1, zval *o2);
__attribute__((visibility("default"))) _Bool
zend_check_protected(const zend_class_entry *ce, const zend_class_entry *scope);
__attribute__((visibility("default"))) zend_result zend_check_property_access(
    const zend_object *zobj, zend_string *prop_info_name, _Bool is_dynamic);
__attribute__((visibility("default"))) zend_function *
zend_get_call_trampoline_func(const zend_class_entry *ce,
                              zend_string *method_name, _Bool is_static);
__attribute__((visibility("default"))) uint32_t *
zend_get_property_guard(zend_object *zobj, zend_string *member);
__attribute__((visibility("default"))) uint32_t *
zend_get_property_guard(zend_object *zobj, zend_string *member);
__attribute__((visibility("default"))) uint32_t *
zend_get_recursion_guard(zend_object *zobj);
__attribute__((visibility("default"))) HashTable *
zend_std_get_properties_for(zend_object *obj, zend_prop_purpose purpose);
__attribute__((visibility("default"))) HashTable *
zend_get_properties_for(zval *obj, zend_prop_purpose purpose);
typedef struct _zend_property_info zend_property_info;
__attribute__((visibility("default"))) zend_function *
zend_get_property_hook_trampoline(const zend_property_info *prop_info,
                                  zend_property_hook_kind kind,
                                  zend_string *prop_name);
__attribute__((visibility("default"))) _Bool
zend_asymmetric_property_has_set_access(const zend_property_info *prop_info);

extern int *__errno_location(void) __attribute__((__nothrow__, __leaf__))
__attribute__((__const__));
extern char *program_invocation_name;
extern char *program_invocation_short_name;
typedef int error_t;

typedef struct _zend_strtod_bigint zend_strtod_bigint;
typedef struct _zend_strtod_state {
  zend_strtod_bigint *freelist[7 + 1];
  zend_strtod_bigint *p5s;
  char *result;
} zend_strtod_state;
__attribute__((visibility("default"))) void zend_freedtoa(char *s);
__attribute__((visibility("default"))) char *zend_dtoa(double _d, int mode,
                                                       int ndigits, int *decpt,
                                                       _Bool *sign, char **rve);
__attribute__((visibility("default"))) char *
zend_gcvt(double value, int ndigit, char dec_point, char exponent, char *buf);
__attribute__((visibility("default"))) double zend_strtod(const char *s00,
                                                          const char **se);
__attribute__((visibility("default"))) double
zend_hex_strtod(const char *str, const char **endptr);
__attribute__((visibility("default"))) double
zend_oct_strtod(const char *str, const char **endptr);
__attribute__((visibility("default"))) double
zend_bin_strtod(const char *str, const char **endptr);
__attribute__((visibility("default"))) int zend_shutdown_strtod(void);

static inline size_t zend_safe_address(size_t nmemb, size_t size, size_t offset,
                                       _Bool *overflow) {
  size_t res = nmemb;
  zend_ulong m_overflow = 0;
  if ((__builtin_constant_p(offset == 0) ? (offset == 0) : (0))) {
    __asm__("mul"
            "q"
            " %3\n\t"
            "adc $0,%1"
            : "=&a"(res), "=&d"(m_overflow)
            : "%0"(res), "rm"(size));
  } else {
    __asm__("mul"
            "q"
            " %3\n\t"
            "add %4,%0\n\t"
            "adc $0,%1"
            : "=&a"(res), "=&d"(m_overflow)
            : "%0"(res), "rm"(size), "rm"(offset));
  }
  if (__builtin_expect(!!(m_overflow), 0)) {
    *overflow = 1;
    return 0;
  }
  *overflow = 0;
  return res;
}
static inline size_t zend_safe_address_guarded(size_t nmemb, size_t size,
                                               size_t offset) {
  _Bool overflow;
  size_t ret = zend_safe_address(nmemb, size, offset, &overflow);
  if (__builtin_expect(!!(overflow), 0)) {
    zend_error_noreturn(
        (1 << 0L),
        "Possible integer overflow in memory allocation (%zu * %zu + %zu)",
        nmemb, size, offset);
    return 0;
  }
  return ret;
}
static inline size_t zend_safe_addmult(size_t nmemb, size_t size, size_t offset,
                                       const char *message) {
  _Bool overflow;
  size_t ret = zend_safe_address(nmemb, size, offset, &overflow);
  if (__builtin_expect(!!(overflow), 0)) {
    zend_error_noreturn((1 << 0L),
                        "Possible integer overflow in %s (%zu * %zu + %zu)",
                        message, nmemb, size, offset);
    return 0;
  }
  return ret;
}

__attribute__((visibility("default"))) zend_result add_function(zval *result,
                                                                zval *op1,
                                                                zval *op2);
__attribute__((visibility("default"))) zend_result sub_function(zval *result,
                                                                zval *op1,
                                                                zval *op2);
__attribute__((visibility("default"))) zend_result mul_function(zval *result,
                                                                zval *op1,
                                                                zval *op2);
__attribute__((visibility("default"))) zend_result pow_function(zval *result,
                                                                zval *op1,
                                                                zval *op2);
__attribute__((visibility("default"))) zend_result div_function(zval *result,
                                                                zval *op1,
                                                                zval *op2);
__attribute__((visibility("default"))) zend_result mod_function(zval *result,
                                                                zval *op1,
                                                                zval *op2);
__attribute__((visibility("default"))) zend_result
boolean_xor_function(zval *result, zval *op1, zval *op2);
__attribute__((visibility("default"))) zend_result
boolean_not_function(zval *result, zval *op1);
__attribute__((visibility("default"))) zend_result
bitwise_not_function(zval *result, zval *op1);
__attribute__((visibility("default"))) zend_result
bitwise_or_function(zval *result, zval *op1, zval *op2);
__attribute__((visibility("default"))) zend_result
bitwise_and_function(zval *result, zval *op1, zval *op2);
__attribute__((visibility("default"))) zend_result
bitwise_xor_function(zval *result, zval *op1, zval *op2);
__attribute__((visibility("default"))) zend_result
shift_left_function(zval *result, zval *op1, zval *op2);
__attribute__((visibility("default"))) zend_result
shift_right_function(zval *result, zval *op1, zval *op2);
__attribute__((visibility("default"))) zend_result concat_function(zval *result,
                                                                   zval *op1,
                                                                   zval *op2);
__attribute__((visibility("default"))) _Bool zend_is_identical(const zval *op1,
                                                               const zval *op2);
__attribute__((visibility("default"))) zend_result
is_equal_function(zval *result, zval *op1, zval *op2);
__attribute__((visibility("default"))) zend_result
is_identical_function(zval *result, zval *op1, zval *op2);
__attribute__((visibility("default"))) zend_result
is_not_identical_function(zval *result, zval *op1, zval *op2);
__attribute__((visibility("default"))) zend_result
is_not_equal_function(zval *result, zval *op1, zval *op2);
__attribute__((visibility("default"))) zend_result
is_smaller_function(zval *result, zval *op1, zval *op2);
__attribute__((visibility("default"))) zend_result
is_smaller_or_equal_function(zval *result, zval *op1, zval *op2);
__attribute__((visibility("default"))) _Bool zend_class_implements_interface(
    const zend_class_entry *class_ce, const zend_class_entry *interface_ce);
__attribute__((visibility("default"))) _Bool instanceof_function_slow(
    const zend_class_entry *instance_ce, const zend_class_entry *ce);
static inline _Bool instanceof_function(const zend_class_entry *instance_ce,
                                        const zend_class_entry *ce) {
  return instance_ce == ce || instanceof_function_slow(instance_ce, ce);
}
__attribute__((visibility("default"))) _Bool
zend_string_only_has_ascii_alphanumeric(const zend_string *str);
__attribute__((visibility("default"))) uint8_t _is_numeric_string_ex(
    const char *str, size_t length, zend_long *lval, double *dval,
    _Bool allow_errors, int *oflow_info, _Bool *trailing_data);
__attribute__((visibility("default"))) const char *
zend_memnstr_ex(const char *haystack, const char *needle, size_t needle_len,
                const char *end);
__attribute__((visibility("default"))) const char *
zend_memnrstr_ex(const char *haystack, const char *needle, size_t needle_len,
                 const char *end);
__attribute__((visibility("default"))) zend_long
zend_dval_to_lval_slow(double d);
static inline zend_long zend_dval_to_lval(double d) {
  if (__builtin_expect(!!(!__builtin_isfinite(d)), 0) ||
      __builtin_expect(!!(__builtin_isnan(d)), 0)) {
    return 0;
  } else if (!(!((d) >= (double)(9223372036854775807L) ||
                 (d) < (double)(-9223372036854775807L - 1)))) {
    return zend_dval_to_lval_slow(d);
  }
  return (zend_long)d;
}
static inline zend_long zend_dval_to_lval_cap(double d) {
  if (__builtin_expect(!!(!__builtin_isfinite(d)), 0) ||
      __builtin_expect(!!(__builtin_isnan(d)), 0)) {
    return 0;
  } else if (!(!((d) >= (double)(9223372036854775807L) ||
                 (d) < (double)(-9223372036854775807L - 1)))) {
    return (d > 0 ? (9223372036854775807L) : (-9223372036854775807L - 1));
  }
  return (zend_long)d;
}
static inline _Bool zend_is_long_compatible(double d, zend_long l) {
  return (double)l == d;
}
__attribute__((visibility("default"))) void
zend_incompatible_double_to_long_error(double d);
__attribute__((visibility("default"))) void
zend_incompatible_string_to_long_error(const zend_string *s);
static inline zend_long zend_dval_to_lval_safe(double d) {
  zend_long l = zend_dval_to_lval(d);
  if (!zend_is_long_compatible(d, l)) {
    zend_incompatible_double_to_long_error(d);
  }
  return l;
}
static inline uint8_t is_numeric_string_ex(const char *str, size_t length,
                                           zend_long *lval, double *dval,
                                           _Bool allow_errors, int *oflow_info,
                                           _Bool *trailing_data) {
  if (*str > '9') {
    return 0;
  }
  return _is_numeric_string_ex(str, length, lval, dval, allow_errors,
                               oflow_info, trailing_data);
}
static inline uint8_t is_numeric_string(const char *str, size_t length,
                                        zend_long *lval, double *dval,
                                        _Bool allow_errors) {
  return is_numeric_string_ex(str, length, lval, dval, allow_errors,
                              ((void *)0), ((void *)0));
}
__attribute__((visibility("default"))) uint8_t
is_numeric_str_function(const zend_string *str, zend_long *lval, double *dval);
static inline const char *zend_memnstr(const char *haystack, const char *needle,
                                       size_t needle_len, const char *end) {
  const char *p = haystack;
  size_t off_s;
  ((void)sizeof((end >= p) ? 1 : 0), __extension__({
     if (end >= p)
       ;
     else
       __assert_fail("end >= p", "Zend/zend_operators.h", 182,
                     __extension__ __PRETTY_FUNCTION__);
   }));
  if (needle_len == 1) {
    return (const char *)memchr(p, *needle, (end - p));
  } else if (__builtin_expect(!!(needle_len == 0), 0)) {
    return p;
  }
  off_s = (size_t)(end - p);
  if (needle_len > off_s) {
    return ((void *)0);
  }
  if (__builtin_expect(!!(off_s < 1024 || needle_len < 9), 1)) {
    const char ne = needle[needle_len - 1];
    end -= needle_len;
    while (p <= end) {
      if ((p = (const char *)memchr(p, *needle, (end - p + 1)))) {
        if (ne == p[needle_len - 1] &&
            !memcmp(needle + 1, p + 1, needle_len - 2)) {
          return p;
        }
      } else {
        return ((void *)0);
      }
      p++;
    }
    return ((void *)0);
  } else {
    return zend_memnstr_ex(haystack, needle, needle_len, end);
  }
}
static inline const void *zend_memrchr(const void *s, int c, size_t n) {
  return (const void *)memrchr(s, c, n);
}
static inline const char *zend_memnrstr(const char *haystack,
                                        const char *needle, size_t needle_len,
                                        const char *end) {
  const char *p = end;
  ptrdiff_t off_p;
  size_t off_s;
  if (needle_len == 0) {
    return p;
  }
  if (needle_len == 1) {
    return (const char *)zend_memrchr(haystack, *needle, (p - haystack));
  }
  off_p = end - haystack;
  off_s = (off_p > 0) ? (size_t)off_p : 0;
  if (needle_len > off_s) {
    return ((void *)0);
  }
  if (__builtin_expect(!!(off_s < 1024 || needle_len < 3), 1)) {
    const char ne = needle[needle_len - 1];
    p -= needle_len;
    do {
      p = (const char *)zend_memrchr(haystack, *needle, (p - haystack) + 1);
      if (!p) {
        return ((void *)0);
      }
      if (ne == p[needle_len - 1] &&
          !memcmp(needle + 1, p + 1, needle_len - 2)) {
        return p;
      }
    } while (p-- >= haystack);
    return ((void *)0);
  } else {
    return zend_memnrstr_ex(haystack, needle, needle_len, end);
  }
}
static inline size_t zend_strnlen(const char *s, size_t maxlen) {
  return strnlen(s, maxlen);
}
static inline void *zend_mempcpy(void *dest, const void *src, size_t n) {
  return mempcpy(dest, src, n);
}
__attribute__((visibility("default"))) zend_result
increment_function(zval *op1);
__attribute__((visibility("default"))) zend_result
decrement_function(zval *op2);
__attribute__((visibility("default"))) void convert_scalar_to_number(zval *op);
__attribute__((visibility("default"))) void _convert_to_string(zval *op);
__attribute__((visibility("default"))) void convert_to_long(zval *op);
__attribute__((visibility("default"))) void convert_to_double(zval *op);
__attribute__((visibility("default"))) void convert_to_null(zval *op);
__attribute__((visibility("default"))) void convert_to_boolean(zval *op);
__attribute__((visibility("default"))) void convert_to_array(zval *op);
__attribute__((visibility("default"))) void convert_to_object(zval *op);
__attribute__((visibility("default"))) zend_long
zval_get_long_func(const zval *op, _Bool is_strict);
__attribute__((visibility("default"))) zend_long
zval_try_get_long(const zval *op, _Bool *failed);
__attribute__((visibility("default"))) double
zval_get_double_func(const zval *op);
__attribute__((visibility("default"))) zend_string *
zval_get_string_func(zval *op);
__attribute__((visibility("default"))) zend_string *
zval_try_get_string_func(zval *op);
static inline zend_long zval_get_long(const zval *op) {
  return __builtin_expect(!!(zval_get_type(&(*(op))) == 4), 1)
             ? (*(op)).value.lval
             : zval_get_long_func(op, 0);
}
static inline zend_long zval_get_long_ex(const zval *op, _Bool is_strict) {
  return __builtin_expect(!!(zval_get_type(&(*(op))) == 4), 1)
             ? (*(op)).value.lval
             : zval_get_long_func(op, is_strict);
}
static inline double zval_get_double(const zval *op) {
  return __builtin_expect(!!(zval_get_type(&(*(op))) == 5), 1)
             ? (*(op)).value.dval
             : zval_get_double_func(op);
}
static inline zend_string *zval_get_string(zval *op) {
  return __builtin_expect(!!(zval_get_type(&(*(op))) == 6), 1)
             ? zend_string_copy((*(op)).value.str)
             : zval_get_string_func(op);
}
static inline zend_string *zval_get_tmp_string(zval *op, zend_string **tmp) {
  if (__builtin_expect(!!(zval_get_type(&(*(op))) == 6), 1)) {
    *tmp = ((void *)0);
    return (*(op)).value.str;
  } else {
    return *tmp = zval_get_string_func(op);
  }
}
static inline void zend_tmp_string_release(zend_string *tmp) {
  if (__builtin_expect(!!(tmp), 0)) {
    zend_string_release_ex(tmp, 0);
  }
}
static inline zend_string *zval_try_get_string(zval *op) {
  if (__builtin_expect(!!(zval_get_type(&(*(op))) == 6), 1)) {
    zend_string *ret = zend_string_copy((*(op)).value.str);
    do {
      if (__builtin_expect(!(ret != ((void *)0)), 0))
        __builtin_unreachable();
    } while (0);
    return ret;
  } else {
    return zval_try_get_string_func(op);
  }
}
static inline zend_string *zval_try_get_tmp_string(zval *op,
                                                   zend_string **tmp) {
  if (__builtin_expect(!!(zval_get_type(&(*(op))) == 6), 1)) {
    zend_string *ret = (*(op)).value.str;
    *tmp = ((void *)0);
    do {
      if (__builtin_expect(!(ret != ((void *)0)), 0))
        __builtin_unreachable();
    } while (0);
    return ret;
  } else {
    return *tmp = zval_try_get_string_func(op);
  }
}
__attribute__((visibility("default"))) _Bool _try_convert_to_string(zval *op);
static inline _Bool try_convert_to_string(zval *op) {
  if (zval_get_type(&(*(op))) == 6) {
    return 1;
  }
  return _try_convert_to_string(op);
}
__attribute__((visibility("default"))) _Bool zend_is_true(const zval *op);
__attribute__((visibility("default"))) _Bool
zend_object_is_true(const zval *op);
static inline _Bool i_zend_is_true(const zval *op) {
  _Bool result = 0;
again:
  switch (zval_get_type(&(*(op)))) {
  case 3:
    result = 1;
    break;
  case 4:
    if ((*(op)).value.lval) {
      result = 1;
    }
    break;
  case 5:
    if ((*(op)).value.dval) {
      result = 1;
    }
    break;
  case 6:
    if (((*(op)).value.str)->len > 1 ||
        (((*(op)).value.str)->len && ((*(op)).value.str)->val[0] != '0')) {
      result = 1;
    }
    break;
  case 7:
    if (zend_hash_num_elements((*(op)).value.arr)) {
      result = 1;
    }
    break;
  case 8:
    if (__builtin_expect(!!((*(op)).value.obj->handlers->cast_object ==
                            zend_std_cast_object_tostring),
                         1)) {
      result = 1;
    } else {
      result = zend_object_is_true(op);
    }
    break;
  case 9:
    if (__builtin_expect(!!((*op).value.res->handle), 1)) {
      result = 1;
    }
    break;
  case 10:
    op = &(*(op)).value.ref->val;
    goto again;
    break;
  default:
    break;
  }
  return result;
}
__attribute__((visibility("default"))) int zend_compare(zval *op1, zval *op2);
__attribute__((visibility("default"))) zend_result
compare_function(zval *result, zval *op1, zval *op2);
__attribute__((visibility("default"))) int numeric_compare_function(zval *op1,
                                                                    zval *op2);
__attribute__((visibility("default"))) int
string_compare_function_ex(zval *op1, zval *op2, _Bool case_insensitive);
__attribute__((visibility("default"))) int string_compare_function(zval *op1,
                                                                   zval *op2);
__attribute__((visibility("default"))) int
string_case_compare_function(zval *op1, zval *op2);
__attribute__((visibility("default"))) int
string_locale_compare_function(zval *op1, zval *op2);
__attribute__((
    visibility("default"))) extern const unsigned char zend_tolower_map[256];
__attribute__((
    visibility("default"))) extern const unsigned char zend_toupper_map[256];
__attribute__((visibility("default"))) void zend_str_tolower(char *str,
                                                             size_t length);
__attribute__((visibility("default"))) void zend_str_toupper(char *str,
                                                             size_t length);
__attribute__((visibility("default"))) char *
zend_str_tolower_copy(char *dest, const char *source, size_t length);
__attribute__((visibility("default"))) char *
zend_str_toupper_copy(char *dest, const char *source, size_t length);
__attribute__((visibility("default"))) char *
zend_str_tolower_dup(const char *source, size_t length);
__attribute__((visibility("default"))) char *
zend_str_toupper_dup(const char *source, size_t length);
__attribute__((visibility("default"))) char *
zend_str_tolower_dup_ex(const char *source, size_t length);
__attribute__((visibility("default"))) char *
zend_str_toupper_dup_ex(const char *source, size_t length);
__attribute__((visibility("default"))) zend_string *
zend_string_tolower_ex(zend_string *str, _Bool persistent);
__attribute__((visibility("default"))) zend_string *
zend_string_toupper_ex(zend_string *str, _Bool persistent);
static inline zend_string *zend_string_tolower(zend_string *str) {
  return zend_string_tolower_ex(str, 0);
}
static inline zend_string *zend_string_toupper(zend_string *str) {
  return zend_string_toupper_ex(str, 0);
}
__attribute__((visibility("default"))) int zend_binary_zval_strcmp(zval *s1,
                                                                   zval *s2);
__attribute__((visibility("default"))) int
zend_binary_zval_strncmp(zval *s1, zval *s2, zval *s3);
__attribute__((visibility("default"))) int
zend_binary_strcmp(const char *s1, size_t len1, const char *s2, size_t len2);
__attribute__((visibility("default"))) int
zend_binary_strncmp(const char *s1, size_t len1, const char *s2, size_t len2,
                    size_t length);
__attribute__((visibility("default"))) int
zend_binary_strcasecmp(const char *s1, size_t len1, const char *s2,
                       size_t len2);
__attribute__((visibility("default"))) int
zend_binary_strncasecmp(const char *s1, size_t len1, const char *s2,
                        size_t len2, size_t length);
__attribute__((visibility("default"))) int
zend_binary_strcasecmp_l(const char *s1, size_t len1, const char *s2,
                         size_t len2);
__attribute__((visibility("default"))) int
zend_binary_strncasecmp_l(const char *s1, size_t len1, const char *s2,
                          size_t len2, size_t length);
__attribute__((visibility("default"))) _Bool zendi_smart_streq(zend_string *s1,
                                                               zend_string *s2);
__attribute__((visibility("default"))) int zendi_smart_strcmp(zend_string *s1,
                                                              zend_string *s2);
__attribute__((visibility("default"))) int
zend_compare_symbol_tables(HashTable *ht1, HashTable *ht2);
__attribute__((visibility("default"))) int zend_compare_arrays(zval *a1,
                                                               zval *a2);
__attribute__((visibility("default"))) int zend_compare_objects(zval *o1,
                                                                zval *o2);
__attribute__((deprecated)) __attribute__((visibility("default"))) int
zend_atoi(const char *str, size_t str_len);
__attribute__((deprecated)) __attribute__((visibility("default"))) zend_long
zend_atol(const char *str, size_t str_len);
__attribute__((visibility("default"))) void zend_update_current_locale(void);
__attribute__((visibility("default"))) void zend_reset_lc_ctype_locale(void);
static inline void fast_long_increment_function(zval *op1) {
  __asm__ goto("addq $1,(%0)\n\t"
               "jo  %l1\n"
               :
               : "r"(&op1->value)
               : "cc", "memory"
               : overflow);
  return;
overflow:
  __attribute__((cold));
  do {
    zval *__z = (op1);
    (*(__z)).value.dval = (double)(9223372036854775807L) + 1.0;
    (*(__z)).u1.type_info = 5;
  } while (0);
}
static inline void fast_long_decrement_function(zval *op1) {
  __asm__ goto("subq $1,(%0)\n\t"
               "jo  %l1\n"
               :
               : "r"(&op1->value)
               : "cc", "memory"
               : overflow);
  return;
overflow:
  __attribute__((cold));
  do {
    zval *__z = (op1);
    (*(__z)).value.dval = (double)(-9223372036854775807L - 1) - 1.0;
    (*(__z)).u1.type_info = 5;
  } while (0);
}
static inline void fast_long_add_function(zval *result, zval *op1, zval *op2) {
  __asm__ goto("movq	(%1), %%rax\n\t"
               "addq   (%2), %%rax\n\t"
               "jo     %l5\n\t"
               "movq   %%rax, (%0)\n\t"
               "movl   %3, %c4(%0)\n"
               :
               : "r"(&result->value), "r"(&op1->value), "r"(&op2->value),
                 "n"(4),
                 "n"((__builtin_offsetof(zval, u1.type_info) -
                      __builtin_offsetof(zval, value)))
               : "rax", "cc", "memory"
               : overflow);
  return;
overflow:
  __attribute__((cold));
  do {
    zval *__z = (result);
    (*(__z)).value.dval =
        (double)(*(op1)).value.lval + (double)(*(op2)).value.lval;
    (*(__z)).u1.type_info = 5;
  } while (0);
}
static inline void fast_long_sub_function(zval *result, zval *op1, zval *op2) {
  __asm__ goto("movq	(%1), %%rax\n\t"
               "subq   (%2), %%rax\n\t"
               "jo     %l5\n\t"
               "movq   %%rax, (%0)\n\t"
               "movl   %3, %c4(%0)\n"
               :
               : "r"(&result->value), "r"(&op1->value), "r"(&op2->value),
                 "n"(4),
                 "n"((__builtin_offsetof(zval, u1.type_info) -
                      __builtin_offsetof(zval, value)))
               : "rax", "cc", "memory"
               : overflow);
  return;
overflow:
  __attribute__((cold));
  do {
    zval *__z = (result);
    (*(__z)).value.dval =
        (double)(*(op1)).value.lval - (double)(*(op2)).value.lval;
    (*(__z)).u1.type_info = 5;
  } while (0);
}
static inline _Bool zend_fast_equal_strings(zend_string *s1, zend_string *s2) {
  if (s1 == s2) {
    return 1;
  } else if ((s1)->val[0] > '9' || (s2)->val[0] > '9') {
    return zend_string_equal_content(s1, s2);
  } else {
    return zendi_smart_streq(s1, s2);
  }
}
static inline _Bool fast_equal_check_function(zval *op1, zval *op2) {
  if (__builtin_expect(!!(zval_get_type(&(*(op1))) == 4), 1)) {
    if (__builtin_expect(!!(zval_get_type(&(*(op2))) == 4), 1)) {
      return (*(op1)).value.lval == (*(op2)).value.lval;
    } else if (__builtin_expect(!!(zval_get_type(&(*(op2))) == 5), 1)) {
      return ((double)(*(op1)).value.lval) == (*(op2)).value.dval;
    }
  } else if (__builtin_expect(!!(zval_get_type(&(*(op1))) == 5), 1)) {
    if (__builtin_expect(!!(zval_get_type(&(*(op2))) == 5), 1)) {
      return (*(op1)).value.dval == (*(op2)).value.dval;
    } else if (__builtin_expect(!!(zval_get_type(&(*(op2))) == 4), 1)) {
      return (*(op1)).value.dval == ((double)(*(op2)).value.lval);
    }
  } else if (__builtin_expect(!!(zval_get_type(&(*(op1))) == 6), 1)) {
    if (__builtin_expect(!!(zval_get_type(&(*(op2))) == 6), 1)) {
      return zend_fast_equal_strings((*(op1)).value.str, (*(op2)).value.str);
    }
  }
  return zend_compare(op1, op2) == 0;
}
static inline _Bool fast_equal_check_long(zval *op1, zval *op2) {
  if (__builtin_expect(!!(zval_get_type(&(*(op2))) == 4), 1)) {
    return (*(op1)).value.lval == (*(op2)).value.lval;
  }
  return zend_compare(op1, op2) == 0;
}
static inline _Bool fast_equal_check_string(zval *op1, zval *op2) {
  if (__builtin_expect(!!(zval_get_type(&(*(op2))) == 6), 1)) {
    return zend_fast_equal_strings((*(op1)).value.str, (*(op2)).value.str);
  }
  return zend_compare(op1, op2) == 0;
}
static inline _Bool fast_is_identical_function(zval *op1, zval *op2) {
  if (zval_get_type(&(*(op1))) != zval_get_type(&(*(op2)))) {
    return 0;
  } else if (zval_get_type(&(*(op1))) <= 3) {
    return 1;
  }
  return zend_is_identical(op1, op2);
}
static inline _Bool fast_is_not_identical_function(zval *op1, zval *op2) {
  if (zval_get_type(&(*(op1))) != zval_get_type(&(*(op2)))) {
    return 1;
  } else if (zval_get_type(&(*(op1))) <= 3) {
    return 0;
  }
  return !zend_is_identical(op1, op2);
}
static inline char *zend_print_ulong_to_buf(char *buf, zend_ulong num) {
  *buf = '\0';
  do {
    *--buf = (char)(num % 10) + '0';
    num /= 10;
  } while (num > 0);
  return buf;
}
static inline char *zend_print_long_to_buf(char *buf, zend_long num) {
  if (num < 0) {
    char *result = zend_print_ulong_to_buf(buf, ~((zend_ulong)num) + 1);
    *--result = '-';
    return result;
  } else {
    return zend_print_ulong_to_buf(buf, num);
  }
}
__attribute__((visibility("default"))) zend_string *
zend_long_to_str(zend_long num);
__attribute__((visibility("default"))) zend_string *
zend_ulong_to_str(zend_ulong num);
__attribute__((visibility("default"))) zend_string *
zend_u64_to_str(uint64_t num);
__attribute__((visibility("default"))) zend_string *
zend_i64_to_str(int64_t num);
__attribute__((visibility("default"))) zend_string *
zend_double_to_str(double num);
static inline void zend_unwrap_reference(zval *op) {
  if (zval_refcount_p(op) == 1) {
    do {
      zval *_z = (op);
      zend_reference *ref;
      ((void)sizeof(((zval_get_type(&(*(_z))) == 10)) ? 1 : 0), __extension__({
         if ((zval_get_type(&(*(_z))) == 10))
           ;
         else
           __assert_fail("(zval_get_type(&(*(_z))) == 10)",
                         "Zend/zend_operators.h", 994,
                         __extension__ __PRETTY_FUNCTION__);
       }));
      ref = (*(_z)).value.ref;
      do {
        zval *_z1 = (_z);
        const zval *_z2 = (&ref->val);
        zend_refcounted *_gc = (*(_z2)).value.counted;
        uint32_t _t = (*(_z2)).u1.type_info;
        do {
          (*(_z1)).value.counted = _gc;
          (*(_z1)).u1.type_info = _t;
        } while (0);
      } while (0);
      _efree((ref), "Zend/zend_operators.h", 994, ((void *)0), 0);
    } while (0);
  } else {
    zval_delref_p(op);
    do {
      zval *_z1 = (op);
      const zval *_z2 = (&(*(op)).value.ref->val);
      zend_refcounted *_gc = (*(_z2)).value.counted;
      uint32_t _t = (*(_z2)).u1.type_info;
      do {
        (*(_z1)).value.counted = _gc;
        (*(_z1)).u1.type_info = _t;
      } while (0);
      if ((((_t) & 0xff00) != 0)) {
        zend_gc_addref(&(_gc)->gc);
      }
    } while (0);
  }
}
static inline _Bool zend_strnieq(const char *ptr1, const char *ptr2,
                                 size_t num) {
  const char *end = ptr1 + num;
  while (ptr1 < end) {
    if ((zend_tolower_map[(unsigned char)(*ptr1++)]) !=
        (zend_tolower_map[(unsigned char)(*ptr2++)])) {
      return 0;
    }
  }
  return 1;
}
static inline const char *zend_memnistr(const char *haystack,
                                        const char *needle, size_t needle_len,
                                        const char *end) {
  ((void)sizeof((end >= haystack) ? 1 : 0), __extension__({
     if (end >= haystack)
       ;
     else
       __assert_fail("end >= haystack", "Zend/zend_operators.h", 1016,
                     __extension__ __PRETTY_FUNCTION__);
   }));
  if (__builtin_expect(!!(needle_len == 0), 0)) {
    return haystack;
  }
  if (__builtin_expect(!!(needle_len > (size_t)(end - haystack)), 0)) {
    return ((void *)0);
  }
  const char first_lower = (zend_tolower_map[(unsigned char)(*needle)]);
  const char first_upper = (zend_toupper_map[(unsigned char)(*needle)]);
  const char *p_lower =
      (const char *)memchr(haystack, first_lower, end - haystack);
  const char *p_upper = ((void *)0);
  if (first_lower != first_upper) {
    size_t upper_search_length = needle_len == 1 && p_lower != ((void *)0)
                                     ? p_lower - haystack
                                     : end - haystack;
    p_upper = (const char *)memchr(haystack, first_upper, upper_search_length);
  }
  const char *p =
      !p_upper || (p_lower && p_lower < p_upper) ? p_lower : p_upper;
  if (needle_len == 1) {
    return p;
  }
  const char needle_end_lower =
      (zend_tolower_map[(unsigned char)(needle[needle_len - 1])]);
  const char needle_end_upper =
      (zend_toupper_map[(unsigned char)(needle[needle_len - 1])]);
  end -= needle_len;
  while (p && p <= end) {
    if (needle_end_lower == p[needle_len - 1] ||
        needle_end_upper == p[needle_len - 1]) {
      if (zend_strnieq(needle + 1, p + 1, needle_len - 2)) {
        return p;
      }
    }
    if (p_lower == p) {
      p_lower = (const char *)memchr(p_lower + 1, first_lower, end - p_lower);
    }
    if (p_upper == p) {
      p_upper = (const char *)memchr(p_upper + 1, first_upper, end - p_upper);
    }
    p = !p_upper || (p_lower && p_lower < p_upper) ? p_lower : p_upper;
  }
  return ((void *)0);
}

typedef struct _zval_struct zval;
typedef struct _zend_op zend_op;
typedef union _zend_function zend_function;
typedef void (*zend_frameless_function_0)(zval *return_value);
typedef void (*zend_frameless_function_1)(zval *return_value, zval *op1);
typedef void (*zend_frameless_function_2)(zval *return_value, zval *op1,
                                          zval *op2);
typedef void (*zend_frameless_function_3)(zval *return_value, zval *op1,
                                          zval *op2, zval *op3);
extern size_t zend_flf_count;
extern size_t zend_flf_capacity;
__attribute__((visibility("default"))) extern void **zend_flf_handlers;
__attribute__((
    visibility("default"))) extern zend_function **zend_flf_functions;
typedef struct {
  void *handler;
  uint32_t num_args;
} zend_frameless_function_info;
typedef enum {
  ZEND_JMP_FL_UNPRIMED = 0,
  ZEND_JMP_FL_MISS = 1,
  ZEND_JMP_FL_HIT = 2,
} zend_jmp_fl_result;

typedef struct _zend_op_array zend_op_array;
typedef struct _zend_op zend_op;
typedef union _znode_op {
  uint32_t constant;
  uint32_t var;
  uint32_t num;
  uint32_t opline_num;
  uint32_t jmp_offset;
} znode_op;
typedef struct _znode {
  uint8_t op_type;
  uint8_t flag;
  union {
    znode_op op;
    zval constant;
  } u;
} znode;
typedef struct _zend_ast_znode {
  zend_ast_kind kind;
  zend_ast_attr attr;
  uint32_t lineno;
  znode node;
} zend_ast_znode;
__attribute__((visibility("default"))) zend_ast *
zend_ast_create_znode(znode *node);
static inline znode *zend_ast_get_znode(zend_ast *ast) {
  return &((zend_ast_znode *)ast)->node;
}
typedef struct _zend_declarables {
  zend_long ticks;
} zend_declarables;
typedef struct _zend_file_context {
  zend_declarables declarables;
  zend_string *current_namespace;
  _Bool in_namespace;
  _Bool has_bracketed_namespaces;
  HashTable *imports;
  HashTable *imports_function;
  HashTable *imports_const;
  HashTable seen_symbols;
} zend_file_context;
typedef union _zend_parser_stack_elem {
  zend_ast *ast;
  zend_string *str;
  zend_ulong num;
  unsigned char *ptr;
  unsigned char *ident;
} zend_parser_stack_elem;
void zend_compile_top_stmt(zend_ast *ast);
void zend_const_expr_to_zval(zval *result, zend_ast **ast_ptr,
                             _Bool allow_dynamic);
typedef int (*user_opcode_handler_t)(zend_execute_data *execute_data);
struct _zend_op {
  const void *handler;
  znode_op op1;
  znode_op op2;
  znode_op result;
  uint32_t extended_value;
  uint32_t lineno;
  uint8_t opcode;
  uint8_t op1_type;
  uint8_t op2_type;
  uint8_t result_type;
};
typedef struct _zend_brk_cont_element {
  int start;
  int cont;
  int brk;
  int parent;
  _Bool is_switch;
} zend_brk_cont_element;
typedef struct _zend_label {
  int brk_cont;
  uint32_t opline_num;
} zend_label;
typedef struct _zend_try_catch_element {
  uint32_t try_op;
  uint32_t catch_op;
  uint32_t finally_op;
  uint32_t finally_end;
} zend_try_catch_element;
typedef struct _zend_live_range {
  uint32_t var;
  uint32_t start;
  uint32_t end;
} zend_live_range;
typedef struct _zend_property_info zend_property_info;
typedef struct _zend_oparray_context {
  struct _zend_oparray_context *prev;
  zend_op_array *op_array;
  uint32_t opcodes_size;
  int vars_size;
  int literals_size;
  uint32_t fast_call_var;
  uint32_t try_catch_offset;
  int current_brk_cont;
  int last_brk_cont;
  zend_brk_cont_element *brk_cont_array;
  HashTable *labels;
  zend_string *active_property_info_name;
  zend_property_hook_kind active_property_hook_kind;
  _Bool in_jmp_frameless_branch;
} zend_oparray_context;
static inline uint32_t zend_visibility_to_set_visibility(uint32_t visibility) {
  switch (visibility) {
  case (1 << 0):
    return (1 << 10);
  case (1 << 1):
    return (1 << 11);
  case (1 << 2):
    return (1 << 12);
  default:
    do {
      ((void)sizeof((0) ? 1 : 0), __extension__({
         if (0)
           ;
         else
           __assert_fail("0", "Zend/zend_compile.h", 421,
                         __extension__ __PRETTY_FUNCTION__);
       }));
      __builtin_unreachable();
    } while (0);
    break;
    ;
  }
}
char *zend_visibility_string(uint32_t fn_flags);
zend_property_hook_kind
zend_get_property_hook_kind_from_name(zend_string *name);
typedef struct _zend_property_info {
  uint32_t offset;
  uint32_t flags;
  zend_string *name;
  zend_string *doc_comment;
  HashTable *attributes;
  zend_class_entry *ce;
  zend_type type;
  const zend_property_info *prototype;
  zend_function **hooks;
} zend_property_info;
typedef struct _zend_class_constant {
  zval value;
  zend_string *doc_comment;
  HashTable *attributes;
  zend_class_entry *ce;
  zend_type type;
} zend_class_constant;
typedef struct _zend_internal_arg_info {
  const char *name;
  zend_type type;
  const char *default_value;
} zend_internal_arg_info;
typedef struct _zend_arg_info {
  zend_string *name;
  zend_type type;
  zend_string *default_value;
} zend_arg_info;
typedef struct _zend_internal_function_info {
  uintptr_t required_num_args;
  zend_type type;
  const char *default_value;
} zend_internal_function_info;
struct _zend_op_array {
  uint8_t type;
  uint8_t arg_flags[3];
  uint32_t fn_flags;
  zend_string *function_name;
  zend_class_entry *scope;
  zend_function *prototype;
  uint32_t num_args;
  uint32_t required_num_args;
  zend_arg_info *arg_info;
  HashTable *attributes;
  void **run_time_cache__ptr;
  zend_string *doc_comment;
  uint32_t T;
  const zend_property_info *prop_info;
  int cache_size;
  int last_var;
  uint32_t last;
  zend_op *opcodes;
  HashTable *static_variables_ptr__ptr;
  HashTable *static_variables;
  zend_string **vars;
  uint32_t *refcount;
  int last_live_range;
  int last_try_catch;
  zend_live_range *live_range;
  zend_try_catch_element *try_catch_array;
  zend_string *filename;
  uint32_t line_start;
  uint32_t line_end;
  int last_literal;
  uint32_t num_dynamic_func_defs;
  zval *literals;
  zend_op_array **dynamic_func_defs;
  void *reserved[6];
};
typedef void (*zif_handler)(zend_execute_data *execute_data,
                            zval *return_value);
typedef struct _zend_internal_function {
  uint8_t type;
  uint8_t arg_flags[3];
  uint32_t fn_flags;
  zend_string *function_name;
  zend_class_entry *scope;
  zend_function *prototype;
  uint32_t num_args;
  uint32_t required_num_args;
  zend_internal_arg_info *arg_info;
  HashTable *attributes;
  void **run_time_cache__ptr;
  zend_string *doc_comment;
  uint32_t T;
  const zend_property_info *prop_info;
  zif_handler handler;
  struct _zend_module_entry *module;
  const zend_frameless_function_info *frameless_function_infos;
  void *reserved[6];
} zend_internal_function;
union _zend_function {
  uint8_t type;
  uint32_t quick_arg_flags;
  struct {
    uint8_t type;
    uint8_t arg_flags[3];
    uint32_t fn_flags;
    zend_string *function_name;
    zend_class_entry *scope;
    zend_function *prototype;
    uint32_t num_args;
    uint32_t required_num_args;
    zend_arg_info *arg_info;
    HashTable *attributes;
    void **run_time_cache__ptr;
    zend_string *doc_comment;
    uint32_t T;
    const zend_property_info *prop_info;
  } common;
  zend_op_array op_array;
  zend_internal_function internal_function;
};
struct _zend_execute_data {
  const zend_op *opline;
  zend_execute_data *call;
  zval *return_value;
  zend_function *func;
  zval This;
  zend_execute_data *prev_execute_data;
  zend_array *symbol_table;
  void **run_time_cache;
  zend_array *extra_named_params;
};
_Static_assert(((((sizeof(zval)) + (size_t)8 - 1) & ~((size_t)8 - 1)) ==
                sizeof(zval)),
               "zval must be aligned by ZEND_MM_ALIGNMENT");

typedef long int __jmp_buf[8];
struct __jmp_buf_tag {
  __jmp_buf __jmpbuf;
  int __mask_was_saved;
  __sigset_t __saved_mask;
};
typedef struct __jmp_buf_tag jmp_buf[1];
extern int setjmp(jmp_buf __env) __attribute__((__nothrow__));
extern int __sigsetjmp(struct __jmp_buf_tag __env[1], int __savemask)
    __attribute__((__nothrow__));
extern int _setjmp(struct __jmp_buf_tag __env[1]) __attribute__((__nothrow__));
extern void longjmp(struct __jmp_buf_tag __env[1], int __val)
    __attribute__((__nothrow__)) __attribute__((__noreturn__));
extern void _longjmp(struct __jmp_buf_tag __env[1], int __val)
    __attribute__((__nothrow__)) __attribute__((__noreturn__));
typedef struct __jmp_buf_tag sigjmp_buf[1];
extern void siglongjmp(sigjmp_buf __env, int __val) __attribute__((__nothrow__))
__attribute__((__noreturn__));

typedef struct _zend_compiler_globals zend_compiler_globals;
typedef struct _zend_executor_globals zend_executor_globals;
typedef struct _zend_php_scanner_globals zend_php_scanner_globals;
typedef struct _zend_ini_scanner_globals zend_ini_scanner_globals;

extern __attribute__((
    visibility("default"))) struct _zend_compiler_globals compiler_globals;
__attribute__((visibility("default"))) int zendparse(void);
extern __attribute__((
    visibility("default"))) zend_executor_globals executor_globals;
extern __attribute__((
    visibility("default"))) zend_php_scanner_globals language_scanner_globals;
extern __attribute__((
    visibility("default"))) zend_ini_scanner_globals ini_scanner_globals;

typedef struct zend_atomic_bool_s {
  volatile _Bool value;
} zend_atomic_bool;
typedef struct zend_atomic_int_s {
  volatile int value;
} zend_atomic_int;

static inline _Bool zend_atomic_bool_exchange_ex(zend_atomic_bool *obj,
                                                 _Bool desired) {
  _Bool prev = 0;
  __atomic_exchange(&obj->value, &desired, &prev, 5);
  return prev;
}
static inline int zend_atomic_int_exchange_ex(zend_atomic_int *obj,
                                              int desired) {
  int prev = 0;
  __atomic_exchange(&obj->value, &desired, &prev, 5);
  return prev;
}
static inline _Bool zend_atomic_bool_compare_exchange_ex(zend_atomic_bool *obj,
                                                         _Bool *expected,
                                                         _Bool desired) {
  return __atomic_compare_exchange(&obj->value, expected, &desired, 0, 5, 5);
}
static inline _Bool zend_atomic_int_compare_exchange_ex(zend_atomic_int *obj,
                                                        int *expected,
                                                        int desired) {
  return __atomic_compare_exchange(&obj->value, expected, &desired, 0, 5, 5);
}
static inline _Bool zend_atomic_bool_load_ex(const zend_atomic_bool *obj) {
  _Bool prev = 0;
  __atomic_load(&obj->value, &prev, 5);
  return prev;
}
static inline int zend_atomic_int_load_ex(const zend_atomic_int *obj) {
  int prev = 0;
  __atomic_load(&obj->value, &prev, 5);
  return prev;
}
static inline void zend_atomic_bool_store_ex(zend_atomic_bool *obj,
                                             _Bool desired) {
  __atomic_store(&obj->value, &desired, 5);
}
static inline void zend_atomic_int_store_ex(zend_atomic_int *obj, int desired) {
  __atomic_store(&obj->value, &desired, 5);
}
__attribute__((visibility("default"))) void
zend_atomic_bool_init(zend_atomic_bool *obj, _Bool desired);
__attribute__((visibility("default"))) void
zend_atomic_int_init(zend_atomic_int *obj, int desired);
__attribute__((visibility("default"))) _Bool
zend_atomic_bool_exchange(zend_atomic_bool *obj, _Bool desired);
__attribute__((visibility("default"))) int
zend_atomic_int_exchange(zend_atomic_int *obj, int desired);
__attribute__((visibility("default"))) _Bool zend_atomic_bool_compare_exchange(
    zend_atomic_bool *obj, _Bool *expected, _Bool desired);
__attribute__((visibility("default"))) _Bool zend_atomic_int_compare_exchange(
    zend_atomic_int *obj, int *expected, int desired);
__attribute__((visibility("default"))) void
zend_atomic_bool_store(zend_atomic_bool *obj, _Bool desired);
__attribute__((visibility("default"))) void
zend_atomic_int_store(zend_atomic_int *obj, int desired);
__attribute__((visibility("default"))) _Bool
zend_atomic_bool_load(const zend_atomic_bool *obj);
__attribute__((visibility("default"))) int
zend_atomic_int_load(const zend_atomic_int *obj);

typedef struct _zend_stack {
  int size, top, max;
  void *elements;
} zend_stack;
typedef enum {
  ZEND_STACK_APPLY_TOPDOWN,
  ZEND_STACK_APPLY_BOTTOMUP,
} zend_stack_apply_direction;

__attribute__((visibility("default"))) void zend_stack_init(zend_stack *stack,
                                                            int size);
__attribute__((visibility("default"))) int zend_stack_push(zend_stack *stack,
                                                           const void *element);
__attribute__((visibility("default"))) void *
zend_stack_top(const zend_stack *stack);
__attribute__((visibility("default"))) void
zend_stack_del_top(zend_stack *stack);
__attribute__((visibility("default"))) int
zend_stack_int_top(const zend_stack *stack);
__attribute__((visibility("default"))) _Bool
zend_stack_is_empty(const zend_stack *stack);
__attribute__((visibility("default"))) void
zend_stack_destroy(zend_stack *stack);
__attribute__((visibility("default"))) void *
zend_stack_base(const zend_stack *stack);
__attribute__((visibility("default"))) int
zend_stack_count(const zend_stack *stack);
__attribute__((visibility("default"))) void
zend_stack_apply(zend_stack *stack, int type,
                 int (*apply_function)(void *element));
__attribute__((visibility("default"))) void zend_stack_apply_with_argument(
    zend_stack *stack, zend_stack_apply_direction type,
    int (*apply_function)(void *element, void *arg), void *arg);
__attribute__((visibility("default"))) void
zend_stack_clean(zend_stack *stack, void (*func)(void *), _Bool free_elements);

typedef struct _zend_ptr_stack {
  int top, max;
  void **elements;
  void **top_element;
  _Bool persistent;
} zend_ptr_stack;

__attribute__((visibility("default"))) void
zend_ptr_stack_init(zend_ptr_stack *stack);
__attribute__((visibility("default"))) void
zend_ptr_stack_init_ex(zend_ptr_stack *stack, _Bool persistent);
__attribute__((visibility("default"))) void
zend_ptr_stack_n_push(zend_ptr_stack *stack, int count, ...);
__attribute__((visibility("default"))) void
zend_ptr_stack_n_pop(zend_ptr_stack *stack, int count, ...);
__attribute__((visibility("default"))) void
zend_ptr_stack_destroy(zend_ptr_stack *stack);
__attribute__((visibility("default"))) void
zend_ptr_stack_apply(zend_ptr_stack *stack, void (*func)(void *));
__attribute__((visibility("default"))) void
zend_ptr_stack_reverse_apply(zend_ptr_stack *stack, void (*func)(void *));
__attribute__((visibility("default"))) void
zend_ptr_stack_clean(zend_ptr_stack *stack, void (*func)(void *),
                     _Bool free_elements);
__attribute__((visibility("default"))) int
zend_ptr_stack_num_elements(zend_ptr_stack *stack);

static inline void zend_ptr_stack_3_push(zend_ptr_stack *stack, void *a,
                                         void *b, void *c) {
  if (stack->top + 3 > stack->max) {
    do {
      stack->max += 64;
    } while (stack->top + 3 > stack->max);
    stack->elements =
        (void **)((stack->persistent)
                      ? _safe_realloc((stack->elements), (sizeof(void *)),
                                      ((stack->max)), (0))
                      : _safe_erealloc(((stack->elements)), ((sizeof(void *))),
                                       (((stack->max))), ((0)),
                                       "Zend/zend_ptr_stack.h", 63, ((void *)0),
                                       0));
    stack->top_element = stack->elements + stack->top;
  }
  stack->top += 3;
  *(stack->top_element++) = a;
  *(stack->top_element++) = b;
  *(stack->top_element++) = c;
}
static inline void zend_ptr_stack_2_push(zend_ptr_stack *stack, void *a,
                                         void *b) {
  if (stack->top + 2 > stack->max) {
    do {
      stack->max += 64;
    } while (stack->top + 2 > stack->max);
    stack->elements =
        (void **)((stack->persistent)
                      ? _safe_realloc((stack->elements), (sizeof(void *)),
                                      ((stack->max)), (0))
                      : _safe_erealloc(((stack->elements)), ((sizeof(void *))),
                                       (((stack->max))), ((0)),
                                       "Zend/zend_ptr_stack.h", 77, ((void *)0),
                                       0));
    stack->top_element = stack->elements + stack->top;
  }
  stack->top += 2;
  *(stack->top_element++) = a;
  *(stack->top_element++) = b;
}
static inline void zend_ptr_stack_3_pop(zend_ptr_stack *stack, void **a,
                                        void **b, void **c) {
  *a = *(--stack->top_element);
  *b = *(--stack->top_element);
  *c = *(--stack->top_element);
  stack->top -= 3;
}
static inline void zend_ptr_stack_2_pop(zend_ptr_stack *stack, void **a,
                                        void **b) {
  *a = *(--stack->top_element);
  *b = *(--stack->top_element);
  stack->top -= 2;
}
static inline void zend_ptr_stack_push(zend_ptr_stack *stack, void *ptr) {
  if (stack->top + 1 > stack->max) {
    do {
      stack->max += 64;
    } while (stack->top + 1 > stack->max);
    stack->elements =
        (void **)((stack->persistent)
                      ? _safe_realloc((stack->elements), (sizeof(void *)),
                                      ((stack->max)), (0))
                      : _safe_erealloc(((stack->elements)), ((sizeof(void *))),
                                       (((stack->max))), ((0)),
                                       "Zend/zend_ptr_stack.h", 103,
                                       ((void *)0), 0));
    stack->top_element = stack->elements + stack->top;
  }
  stack->top++;
  *(stack->top_element++) = ptr;
}
static inline void *zend_ptr_stack_pop(zend_ptr_stack *stack) {
  stack->top--;
  return *(--stack->top_element);
}
static inline void *zend_ptr_stack_top(zend_ptr_stack *stack) {
  return stack->elements[stack->top - 1];
}

__attribute__((visibility("default"))) void
zend_object_std_init(zend_object *object, zend_class_entry *ce);
__attribute__((visibility("default"))) zend_object *
zend_objects_new(zend_class_entry *ce);
__attribute__((visibility("default"))) void
zend_objects_clone_members(zend_object *new_object, zend_object *old_object);
__attribute__((visibility("default"))) void
zend_object_std_dtor(zend_object *object);
__attribute__((visibility("default"))) void
zend_objects_destroy_object(zend_object *object);
__attribute__((visibility("default"))) zend_object *
zend_objects_clone_obj(zend_object *object);
void zend_object_dtor_dynamic_properties(zend_object *object);
void zend_object_dtor_property(zend_object *object, zval *p);

typedef struct _zend_objects_store {
  zend_object **object_buckets;
  uint32_t top;
  uint32_t size;
  int free_list_head;
} zend_objects_store;

__attribute__((visibility("default"))) void
zend_objects_store_init(zend_objects_store *objects, uint32_t init_size);
__attribute__((visibility("default"))) void
zend_objects_store_call_destructors(zend_objects_store *objects);
__attribute__((visibility("default"))) void
zend_objects_store_mark_destructed(zend_objects_store *objects);
__attribute__((visibility("default"))) void
zend_objects_store_free_object_storage(zend_objects_store *objects,
                                       _Bool fast_shutdown);
__attribute__((visibility("default"))) void
zend_objects_store_destroy(zend_objects_store *objects);
__attribute__((visibility("default"))) void
zend_objects_store_put(zend_object *object);
__attribute__((visibility("default"))) void
zend_objects_store_del(zend_object *object);
static inline void zend_object_store_ctor_failed(zend_object *obj) {
  do {
    (obj)->gc.u.type_info |= ((1 << 8)) << 0;
  } while (0);
}

static inline void zend_object_release(zend_object *obj) {
  if (zend_gc_delref(&(obj)->gc) == 0) {
    zend_objects_store_del(obj);
  } else if (__builtin_expect(!!(((((zend_refcounted *)obj)->gc.u.type_info &
                                   (0xfffffc00 | ((1 << 4) << 0))) == 0)),
                              0)) {
    gc_possible_root((zend_refcounted *)obj);
  }
}
static inline size_t zend_object_properties_size(zend_class_entry *ce) {
  return sizeof(zval) *
         (ce->default_properties_count - ((ce->ce_flags & (1 << 11)) ? 0 : 1));
}
static inline void *zend_object_alloc(size_t obj_size, zend_class_entry *ce) {
  void *obj = _emalloc((obj_size + zend_object_properties_size(ce)),
                       "Zend/zend_objects_API.h", 94, ((void *)0), 0);
  memset(obj, 0, obj_size - sizeof(zend_object));
  return obj;
}
__attribute__((visibility("default"))) __attribute__((cold))
zend_property_info *
zend_get_property_info_for_slot_slow(zend_object *obj, zval *slot);
static inline zend_property_info *
zend_get_property_info_for_slot_self(zend_object *obj, zval *slot) {
  zend_property_info **table = obj->ce->properties_info_table;
  intptr_t prop_num = slot - obj->properties_table;
  ((void)sizeof(
       (prop_num >= 0 && prop_num < obj->ce->default_properties_count) ? 1 : 0),
   __extension__({
     if (prop_num >= 0 && prop_num < obj->ce->default_properties_count)
       ;
     else
       __assert_fail(
           "prop_num >= 0 && prop_num < obj->ce->default_properties_count",
           "Zend/zend_objects_API.h", 107, __extension__ __PRETTY_FUNCTION__);
   }));
  if (table[prop_num]) {
    return table[prop_num];
  } else {
    return zend_get_property_info_for_slot_slow(obj, slot);
  }
}
static inline zend_property_info *
zend_get_property_info_for_slot(zend_object *obj, zval *slot) {
  if (__builtin_expect(!!(zend_object_is_lazy_proxy(obj)), 0)) {
    return zend_lazy_object_get_property_info_for_slot(obj, slot);
  }
  zend_property_info **table = obj->ce->properties_info_table;
  intptr_t prop_num = slot - obj->properties_table;
  ((void)sizeof(
       (prop_num >= 0 && prop_num < obj->ce->default_properties_count) ? 1 : 0),
   __extension__({
     if (prop_num >= 0 && prop_num < obj->ce->default_properties_count)
       ;
     else
       __assert_fail(
           "prop_num >= 0 && prop_num < obj->ce->default_properties_count",
           "Zend/zend_objects_API.h", 122, __extension__ __PRETTY_FUNCTION__);
   }));
  if (table[prop_num]) {
    return table[prop_num];
  } else {
    return zend_get_property_info_for_slot_slow(obj, slot);
  }
}
static inline zend_property_info *
zend_get_typed_property_info_for_slot(zend_object *obj, zval *slot) {
  zend_property_info *prop_info = zend_get_property_info_for_slot(obj, slot);
  if (prop_info && (((prop_info->type).type_mask & ((1u << 25) - 1)) != 0)) {
    return prop_info;
  }
  return ((void *)0);
}

extern __attribute__((visibility("default"))) void zend_init_fpu(void);
extern __attribute__((visibility("default"))) void zend_shutdown_fpu(void);
extern __attribute__((visibility("default"))) void zend_ensure_fpu_mode(void);

typedef struct _zend_encoding zend_encoding;
typedef size_t (*zend_encoding_filter)(unsigned char **str, size_t *str_length,
                                       const unsigned char *buf, size_t length);
typedef const zend_encoding *(*zend_encoding_fetcher)(
    const char *encoding_name);
typedef const char *(*zend_encoding_name_getter)(const zend_encoding *encoding);
typedef _Bool (*zend_encoding_lexer_compatibility_checker)(
    const zend_encoding *encoding);
typedef const zend_encoding *(*zend_encoding_detector)(
    const unsigned char *string, size_t length, const zend_encoding **list,
    size_t list_size);
typedef size_t (*zend_encoding_converter)(unsigned char **to, size_t *to_length,
                                          const unsigned char *from,
                                          size_t from_length,
                                          const zend_encoding *encoding_to,
                                          const zend_encoding *encoding_from);
typedef zend_result (*zend_encoding_list_parser)(
    const char *encoding_list, size_t encoding_list_len,
    const zend_encoding ***return_list, size_t *return_size, _Bool persistent);
typedef const zend_encoding *(*zend_encoding_internal_encoding_getter)(void);
typedef zend_result (*zend_encoding_internal_encoding_setter)(
    const zend_encoding *encoding);
typedef struct _zend_multibyte_functions {
  const char *provider_name;
  zend_encoding_fetcher encoding_fetcher;
  zend_encoding_name_getter encoding_name_getter;
  zend_encoding_lexer_compatibility_checker lexer_compatibility_checker;
  zend_encoding_detector encoding_detector;
  zend_encoding_converter encoding_converter;
  zend_encoding_list_parser encoding_list_parser;
  zend_encoding_internal_encoding_getter internal_encoding_getter;
  zend_encoding_internal_encoding_setter internal_encoding_setter;
} zend_multibyte_functions;

__attribute__((visibility(
    "default"))) extern const zend_encoding *zend_multibyte_encoding_utf32be;
__attribute__((visibility(
    "default"))) extern const zend_encoding *zend_multibyte_encoding_utf32le;
__attribute__((visibility(
    "default"))) extern const zend_encoding *zend_multibyte_encoding_utf16be;
__attribute__((visibility(
    "default"))) extern const zend_encoding *zend_multibyte_encoding_utf16le;
__attribute__((visibility(
    "default"))) extern const zend_encoding *zend_multibyte_encoding_utf8;
__attribute__((visibility("default"))) zend_result
zend_multibyte_set_functions(const zend_multibyte_functions *functions);
__attribute__((visibility("default"))) void
zend_multibyte_restore_functions(void);
__attribute__((visibility("default"))) const zend_multibyte_functions *
zend_multibyte_get_functions(void);
__attribute__((visibility("default"))) const zend_encoding *
zend_multibyte_fetch_encoding(const char *name);
__attribute__((visibility("default"))) const char *
zend_multibyte_get_encoding_name(const zend_encoding *encoding);
__attribute__((visibility("default"))) int
zend_multibyte_check_lexer_compatibility(const zend_encoding *encoding);
__attribute__((visibility("default"))) const zend_encoding *
zend_multibyte_encoding_detector(const unsigned char *string, size_t length,
                                 const zend_encoding **list, size_t list_size);
__attribute__((visibility("default"))) size_t zend_multibyte_encoding_converter(
    unsigned char **to, size_t *to_length, const unsigned char *from,
    size_t from_length, const zend_encoding *encoding_to,
    const zend_encoding *encoding_from);
__attribute__((visibility("default"))) zend_result
zend_multibyte_parse_encoding_list(const char *encoding_list,
                                   size_t encoding_list_len,
                                   const zend_encoding ***return_list,
                                   size_t *return_size, _Bool persistent);
__attribute__((visibility("default"))) const zend_encoding *
zend_multibyte_get_internal_encoding(void);
__attribute__((visibility("default"))) const zend_encoding *
zend_multibyte_get_script_encoding(void);
__attribute__((visibility("default"))) zend_result
zend_multibyte_set_script_encoding(const zend_encoding **encoding_list,
                                   size_t encoding_list_size);
__attribute__((visibility("default"))) zend_result
zend_multibyte_set_internal_encoding(const zend_encoding *encoding);
__attribute__((visibility("default"))) zend_result
zend_multibyte_set_script_encoding_by_string(const char *new_value,
                                             size_t new_value_length);

typedef struct _zend_arena zend_arena;
struct _zend_arena {
  char *ptr;
  char *end;
  zend_arena *prev;
};
static inline zend_arena *zend_arena_create(size_t size) {
  zend_arena *arena =
      (zend_arena *)_emalloc((size), "Zend/zend_arena.h", 36, ((void *)0), 0);
  arena->ptr = (char *)arena +
               (((sizeof(zend_arena)) + (size_t)8 - 1) & ~((size_t)8 - 1));
  arena->end = (char *)arena + size;
  arena->prev = ((void *)0);
  return arena;
}
static inline void zend_arena_destroy(zend_arena *arena) {
  do {
    zend_arena *prev = arena->prev;
    _efree((arena), "Zend/zend_arena.h", 48, ((void *)0), 0);
    arena = prev;
  } while (arena);
}
static inline void *zend_arena_alloc(zend_arena **arena_ptr, size_t size) {
  zend_arena *arena = *arena_ptr;
  char *ptr = arena->ptr;
  size = (((size) + (size_t)8 - 1) & ~((size_t)8 - 1));
  if (__builtin_expect(!!(size <= (size_t)(arena->end - ptr)), 1)) {
    arena->ptr = ptr + size;
  } else {
    size_t arena_size =
        __builtin_expect(!!((size + (((sizeof(zend_arena)) + (size_t)8 - 1) &
                                     ~((size_t)8 - 1))) >
                            (size_t)(arena->end - (char *)arena)),
                         0)
            ? (size +
               (((sizeof(zend_arena)) + (size_t)8 - 1) & ~((size_t)8 - 1)))
            : (size_t)(arena->end - (char *)arena);
    zend_arena *new_arena = (zend_arena *)_emalloc(
        (arena_size), "Zend/zend_arena.h", 67, ((void *)0), 0);
    ptr = (char *)new_arena +
          (((sizeof(zend_arena)) + (size_t)8 - 1) & ~((size_t)8 - 1));
    new_arena->ptr =
        (char *)new_arena +
        (((sizeof(zend_arena)) + (size_t)8 - 1) & ~((size_t)8 - 1)) + size;
    new_arena->end = (char *)new_arena + arena_size;
    new_arena->prev = arena;
    *arena_ptr = new_arena;
  }
  return (void *)ptr;
}
static inline void *zend_arena_calloc(zend_arena **arena_ptr, size_t count,
                                      size_t unit_size) {
  _Bool overflow;
  size_t size;
  void *ret;
  size = zend_safe_address(unit_size, count, 0, &overflow);
  if (__builtin_expect(!!(overflow), 0)) {
    zend_error_noreturn(
        (1 << 0L),
        "Possible integer overflow in zend_arena_calloc() (%zu * %zu)",
        unit_size, count);
  }
  ret = zend_arena_alloc(arena_ptr, size);
  memset(ret, 0, size);
  return ret;
}
static inline void *zend_arena_checkpoint(zend_arena *arena) {
  return arena->ptr;
}
static inline void zend_arena_release(zend_arena **arena_ptr,
                                      void *checkpoint) {
  zend_arena *arena = *arena_ptr;
  while (__builtin_expect(!!((char *)checkpoint > arena->end), 0) ||
         __builtin_expect(!!((char *)checkpoint <= (char *)arena), 0)) {
    zend_arena *prev = arena->prev;
    _efree((arena), "Zend/zend_arena.h", 106, ((void *)0), 0);
    *arena_ptr = arena = prev;
  }
  ((void)sizeof(
       ((char *)checkpoint > (char *)arena && (char *)checkpoint <= arena->end)
           ? 1
           : 0),
   __extension__({
     if ((char *)checkpoint > (char *)arena && (char *)checkpoint <= arena->end)
       ;
     else
       __assert_fail("(char*)checkpoint > (char*)arena && (char*)checkpoint <= "
                     "arena->end",
                     "Zend/zend_arena.h", 109,
                     __extension__ __PRETTY_FUNCTION__);
   }));
  arena->ptr = (char *)checkpoint;
}
static inline _Bool zend_arena_contains(zend_arena *arena, void *ptr) {
  while (arena) {
    if ((char *)ptr > (char *)arena && (char *)ptr <= arena->ptr) {
      return 1;
    }
    arena = arena->prev;
  }
  return 0;
}
typedef struct _zend_call_stack {
  void *base;
  size_t max_size;
} zend_call_stack;
__attribute__((visibility("default"))) void zend_call_stack_init(void);
__attribute__((visibility("default"))) _Bool
zend_call_stack_get(zend_call_stack *stack);
static inline void *zend_call_stack_position(void) {
  return __builtin_frame_address(0);
}
static inline _Bool zend_call_stack_overflowed(void *stack_limit) {
  return (uintptr_t)zend_call_stack_position() <= (uintptr_t)stack_limit;
}
static inline void *zend_call_stack_limit(void *base, size_t size,
                                          size_t reserved_size) {
  if (__builtin_expect(!!(size > (uintptr_t)base), 0)) {
    return (void *)0;
  }
  base = (int8_t *)base - size;
  if (__builtin_expect(
          !!((18446744073709551615UL) - (uintptr_t)base < reserved_size), 0)) {
    return (void *)(18446744073709551615UL);
  }
  return (int8_t *)base + reserved_size;
}
static inline size_t zend_call_stack_default_size(void) {
  return 8 * 1024 * 1024;
  return 2 * 1024 * 1024;
}
typedef struct _zend_vm_stack *zend_vm_stack;
typedef struct _zend_ini_entry zend_ini_entry;
typedef struct _zend_fiber_context zend_fiber_context;
typedef struct _zend_fiber zend_fiber;
typedef enum {
  ZEND_MEMOIZE_NONE,
  ZEND_MEMOIZE_COMPILE,
  ZEND_MEMOIZE_FETCH,
} zend_memoize_mode;
struct _zend_compiler_globals {
  zend_stack loop_var_stack;
  zend_class_entry *active_class_entry;
  zend_string *compiled_filename;
  int zend_lineno;
  zend_op_array *active_op_array;
  HashTable *function_table;
  HashTable *class_table;
  HashTable *auto_globals;
  uint8_t parse_error;
  _Bool in_compilation;
  _Bool short_tags;
  _Bool unclean_shutdown;
  _Bool ini_parser_unbuffered_errors;
  zend_llist open_files;
  struct _zend_ini_parser_param *ini_parser_param;
  _Bool skip_shebang;
  _Bool increment_lineno;
  _Bool variable_width_locale;
  _Bool ascii_compatible_locale;
  zend_string *doc_comment;
  uint32_t extra_fn_flags;
  uint32_t compiler_options;
  zend_oparray_context context;
  zend_file_context file_context;
  zend_arena *arena;
  HashTable interned_strings;
  const zend_encoding **script_encoding_list;
  size_t script_encoding_list_size;
  _Bool multibyte;
  _Bool detect_unicode;
  _Bool encoding_declared;
  zend_ast *ast;
  zend_arena *ast_arena;
  zend_stack delayed_oplines_stack;
  HashTable *memoized_exprs;
  zend_memoize_mode memoize_mode;
  void *map_ptr_real_base;
  void *map_ptr_base;
  size_t map_ptr_size;
  size_t map_ptr_last;
  HashTable *delayed_variance_obligations;
  HashTable *delayed_autoloads;
  HashTable *unlinked_uses;
  zend_class_entry *current_linking_class;
  uint32_t rtd_key_counter;
  void *internal_run_time_cache;
  uint32_t internal_run_time_cache_size;
  zend_stack short_circuiting_opnums;
};
struct _zend_executor_globals {
  zval uninitialized_zval;
  zval error_zval;
  zend_array *symtable_cache[32];
  zend_array **symtable_cache_limit;
  zend_array **symtable_cache_ptr;
  zend_array symbol_table;
  HashTable included_files;
  sigjmp_buf *bailout;
  int error_reporting;
  _Bool fatal_error_backtrace_on;
  zval last_fatal_error_backtrace;
  int exit_status;
  HashTable *function_table;
  HashTable *class_table;
  HashTable *zend_constants;
  zval *vm_stack_top;
  zval *vm_stack_end;
  zend_vm_stack vm_stack;
  size_t vm_stack_page_size;
  struct _zend_execute_data *current_execute_data;
  zend_class_entry *fake_scope;
  uint32_t jit_trace_num;
  zend_execute_data *current_observed_frame;
  int ticks_count;
  zend_long precision;
  uint32_t persistent_constants_count;
  uint32_t persistent_functions_count;
  uint32_t persistent_classes_count;
  _Bool no_extensions;
  _Bool full_tables_cleanup;
  zend_atomic_bool vm_interrupt;
  zend_atomic_bool timed_out;
  HashTable *in_autoload;
  zend_long hard_timeout;
  void *stack_base;
  void *stack_limit;
  HashTable regular_list;
  HashTable persistent_list;
  int user_error_handler_error_reporting;
  _Bool exception_ignore_args;
  zval user_error_handler;
  zval user_exception_handler;
  zend_stack user_error_handlers_error_reporting;
  zend_stack user_error_handlers;
  zend_stack user_exception_handlers;
  zend_class_entry *exception_class;
  zend_error_handling_t error_handling;
  int capture_warnings_during_sccp;
  zend_long timeout_seconds;
  HashTable *ini_directives;
  HashTable *modified_ini_directives;
  zend_ini_entry *error_reporting_ini_entry;
  zend_objects_store objects_store;
  zend_lazy_objects_store lazy_objects_store;
  zend_object *exception, *prev_exception;
  const zend_op *opline_before_exception;
  zend_op exception_op[3];
  struct _zend_module_entry *current_module;
  _Bool active;
  uint8_t flags;
  zend_long assertions;
  uint32_t ht_iterators_count;
  uint32_t ht_iterators_used;
  HashTableIterator *ht_iterators;
  HashTableIterator ht_iterators_slots[16];
  void *saved_fpu_cw_ptr;
  zend_function trampoline;
  zend_op call_trampoline_op;
  HashTable weakrefs;
  zend_long exception_string_param_max_len;
  zend_get_gc_buffer get_gc_buffer;
  zend_fiber_context *main_fiber_context;
  zend_fiber_context *current_fiber_context;
  zend_fiber *active_fiber;
  size_t fiber_stack_size;
  _Bool record_errors;
  uint32_t num_errors;
  zend_error_info **errors;
  zend_string *filename_override;
  zend_long lineno_override;
  zend_call_stack call_stack;
  zend_long max_allowed_stack_size;
  zend_ulong reserved_stack_size;
  zend_strtod_state strtod_state;
  void *reserved[6];
};
struct _zend_ini_scanner_globals {
  zend_file_handle *yy_in;
  zend_file_handle *yy_out;
  unsigned int yy_leng;
  const unsigned char *yy_start;
  const unsigned char *yy_text;
  const unsigned char *yy_cursor;
  const unsigned char *yy_marker;
  const unsigned char *yy_limit;
  int yy_state;
  zend_stack state_stack;
  zend_string *filename;
  int lineno;
  int scanner_mode;
};
typedef enum { ON_TOKEN, ON_FEEDBACK, ON_STOP } zend_php_scanner_event;
struct _zend_php_scanner_globals {
  zend_file_handle *yy_in;
  zend_file_handle *yy_out;
  unsigned int yy_leng;
  unsigned char *yy_start;
  unsigned char *yy_text;
  unsigned char *yy_cursor;
  unsigned char *yy_marker;
  unsigned char *yy_limit;
  int yy_state;
  zend_stack state_stack;
  zend_ptr_stack heredoc_label_stack;
  zend_stack nest_location_stack;
  _Bool heredoc_scan_ahead;
  int heredoc_indentation;
  _Bool heredoc_indentation_uses_spaces;
  unsigned char *script_org;
  size_t script_org_size;
  unsigned char *script_filtered;
  size_t script_filtered_size;
  zend_encoding_filter input_filter;
  zend_encoding_filter output_filter;
  const zend_encoding *script_encoding;
  int scanned_string_len;
  void (*on_event)(zend_php_scanner_event event, int token, int line,
                   const char *text, size_t length, void *context);
  void *on_event_context;
};
typedef enum _zend_compile_position {
  ZEND_COMPILE_POSITION_AT_SHEBANG = 0,
  ZEND_COMPILE_POSITION_AT_OPEN_TAG,
  ZEND_COMPILE_POSITION_AFTER_OPEN_TAG
} zend_compile_position;

void init_compiler(void);
void shutdown_compiler(void);
void zend_init_compiler_data_structures(void);
void zend_oparray_context_begin(zend_oparray_context *prev_context,
                                zend_op_array *op_array);
void zend_oparray_context_end(zend_oparray_context *prev_context);
void zend_file_context_begin(zend_file_context *prev_context);
void zend_file_context_end(zend_file_context *prev_context);
extern __attribute__((visibility("default")))
zend_op_array *(*zend_compile_file)(zend_file_handle *file_handle, int type);
extern __attribute__((visibility("default")))
zend_op_array *(*zend_compile_string)(zend_string *source_string,
                                      const char *filename,
                                      zend_compile_position position);
__attribute__((visibility("default"))) int
lex_scan(zval *zendlval, zend_parser_stack_elem *elem);
void startup_scanner(void);
void shutdown_scanner(void);
__attribute__((visibility("default"))) zend_string *
zend_set_compiled_filename(zend_string *new_compiled_filename);
__attribute__((visibility("default"))) void
zend_restore_compiled_filename(zend_string *original_compiled_filename);
__attribute__((visibility("default"))) zend_string *
zend_get_compiled_filename(void);
__attribute__((visibility("default"))) int zend_get_compiled_lineno(void);
__attribute__((visibility("default"))) size_t
zend_get_scanned_file_offset(void);
__attribute__((visibility("default"))) zend_string *
zend_get_compiled_variable_name(const zend_op_array *op_array, uint32_t var);
typedef zend_result (*unary_op_type)(zval *, zval *);
typedef zend_result (*binary_op_type)(zval *, zval *, zval *);
__attribute__((visibility("default"))) unary_op_type get_unary_op(int opcode);
__attribute__((visibility("default"))) binary_op_type get_binary_op(int opcode);
void zend_stop_lexing(void);
void zend_emit_final_return(_Bool return_one);
typedef enum {
  ZEND_MODIFIER_TARGET_PROPERTY = 0,
  ZEND_MODIFIER_TARGET_METHOD,
  ZEND_MODIFIER_TARGET_CONSTANT,
  ZEND_MODIFIER_TARGET_CPP,
  ZEND_MODIFIER_TARGET_PROPERTY_HOOK,
} zend_modifier_target;
zend_ast *zend_ast_append_str(zend_ast *left, zend_ast *right);
zend_ast *zend_negate_num_string(zend_ast *ast);
uint32_t zend_add_class_modifier(uint32_t flags, uint32_t new_flag);
uint32_t zend_add_anonymous_class_modifier(uint32_t flags, uint32_t new_flag);
uint32_t zend_add_member_modifier(uint32_t flags, uint32_t new_flag,
                                  zend_modifier_target target);
uint32_t zend_modifier_token_to_flag(zend_modifier_target target,
                                     uint32_t flags);
uint32_t zend_modifier_list_to_flags(zend_modifier_target target,
                                     zend_ast *modifiers);
_Bool zend_handle_encoding_declaration(zend_ast *ast);
__attribute__((visibility("default"))) zend_class_entry *
zend_bind_class_in_slot(zval *class_table_slot, zval *lcname,
                        zend_string *lc_parent_name);
__attribute__((visibility("default"))) zend_result
do_bind_function(zend_function *func, zval *lcname);
__attribute__((visibility("default"))) zend_result
do_bind_class(zval *lcname, zend_string *lc_parent_name);
void zend_resolve_goto_label(zend_op_array *op_array, zend_op *opline);
__attribute__((visibility("default"))) void
function_add_ref(zend_function *function);
zend_string *zval_make_interned_string(zval *zv);
struct _zend_arena;
__attribute__((visibility("default"))) zend_op_array *
compile_file(zend_file_handle *file_handle, int type);
__attribute__((visibility("default"))) zend_op_array *
compile_string(zend_string *source_string, const char *filename,
               zend_compile_position position);
__attribute__((visibility("default"))) zend_op_array *
compile_filename(int type, zend_string *filename);
__attribute__((visibility("default"))) zend_ast *
zend_compile_string_to_ast(zend_string *code, struct _zend_arena **ast_arena,
                           zend_string *filename);
__attribute__((visibility("default"))) zend_result
zend_execute_scripts(int type, zval *retval, int file_count, ...);
__attribute__((visibility("default"))) zend_result
zend_execute_script(int type, zval *retval, zend_file_handle *file_handle);
__attribute__((visibility("default"))) zend_result
open_file_for_scanning(zend_file_handle *file_handle);
__attribute__((visibility("default"))) void
init_op_array(zend_op_array *op_array, uint8_t type, int initial_ops_size);
__attribute__((visibility("default"))) void
destroy_op_array(zend_op_array *op_array);
__attribute__((visibility("default"))) void
zend_destroy_static_vars(zend_op_array *op_array);
__attribute__((visibility("default"))) void
zend_destroy_file_handle(zend_file_handle *file_handle);
__attribute__((visibility("default"))) void
zend_cleanup_mutable_class_data(zend_class_entry *ce);
__attribute__((visibility("default"))) void
zend_cleanup_internal_class_data(zend_class_entry *ce);
__attribute__((visibility("default"))) void zend_type_release(zend_type type,
                                                              _Bool persistent);
__attribute__((visibility("default"))) zend_string *
zend_create_member_string(zend_string *class_name, zend_string *member_name);
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_user_exception_handler(void);
void zend_free_internal_arg_info(zend_internal_function *function);
__attribute__((visibility("default"))) void
destroy_zend_function(zend_function *function);
__attribute__((visibility("default"))) void zend_function_dtor(zval *zv);
__attribute__((visibility("default"))) void destroy_zend_class(zval *zv);
void zend_class_add_ref(zval *zv);
__attribute__((visibility("default"))) zend_string *
zend_mangle_property_name(const char *src1, size_t src1_length,
                          const char *src2, size_t src2_length, _Bool internal);
__attribute__((visibility("default"))) zend_result
zend_unmangle_property_name_ex(const zend_string *name, const char **class_name,
                               const char **prop_name, size_t *prop_len);
static inline const char *
zend_get_unmangled_property_name(const zend_string *mangled_prop) {
  const char *class_name, *prop_name;
  zend_unmangle_property_name_ex(mangled_prop, &class_name, &prop_name,
                                 ((void *)0));
  return prop_name;
}
typedef _Bool (*zend_needs_live_range_cb)(zend_op_array *op_array,
                                          zend_op *opline);
__attribute__((visibility("default"))) void
zend_recalc_live_ranges(zend_op_array *op_array,
                        zend_needs_live_range_cb needs_live_range);
__attribute__((visibility("default"))) void pass_two(zend_op_array *op_array);
__attribute__((visibility("default"))) _Bool zend_is_compiling(void);
__attribute__((visibility("default"))) char *
zend_make_compiled_string_description(const char *name);
__attribute__((visibility("default"))) void
zend_initialize_class_data(zend_class_entry *ce, _Bool nullify_handlers);
uint32_t zend_get_class_fetch_type(const zend_string *name);
__attribute__((visibility("default"))) uint8_t
zend_get_call_op(const zend_op *init_op, zend_function *fbc, _Bool result_used);
__attribute__((visibility("default"))) _Bool
zend_is_smart_branch(const zend_op *opline);
typedef _Bool (*zend_auto_global_callback)(zend_string *name);
typedef struct _zend_auto_global {
  zend_string *name;
  zend_auto_global_callback auto_global_callback;
  _Bool jit;
  _Bool armed;
} zend_auto_global;
__attribute__((visibility("default"))) zend_result
zend_register_auto_global(zend_string *name, _Bool jit,
                          zend_auto_global_callback auto_global_callback);
__attribute__((visibility("default"))) void zend_activate_auto_globals(void);
__attribute__((visibility("default"))) _Bool
zend_is_auto_global(zend_string *name);
__attribute__((visibility("default"))) _Bool
zend_is_auto_global_str(const char *name, size_t len);
__attribute__((visibility("default"))) size_t zend_dirname(char *path,
                                                           size_t len);
__attribute__((visibility("default"))) void
zend_set_function_arg_flags(zend_function *func);
int zendlex(zend_parser_stack_elem *elem);
void zend_assert_valid_class_name(const zend_string *const_name,
                                  const char *type);
zend_string *zend_type_to_string_resolved(zend_type type,
                                          zend_class_entry *scope);
__attribute__((visibility("default"))) zend_string *
zend_type_to_string(zend_type type);

__attribute__((visibility("default"))) const char *
zend_get_opcode_name(uint8_t opcode);
__attribute__((visibility("default"))) uint32_t
zend_get_opcode_flags(uint8_t opcode);
__attribute__((visibility("default"))) uint8_t
zend_get_opcode_id(const char *name, size_t length);

static inline _Bool zend_check_arg_send_type(const zend_function *zf,
                                             uint32_t arg_num, uint32_t mask) {
  arg_num--;
  if (__builtin_expect(!!(arg_num >= zf->common.num_args), 0)) {
    if (__builtin_expect(!!((zf->common.fn_flags & (1 << 14)) == 0), 1)) {
      return 0;
    }
    arg_num = zf->common.num_args;
  }
  return __builtin_expect(
      !!(((((((&zf->common.arg_info[arg_num])->type).type_mask) >> 25) & 3) &
          mask) != 0),
      0);
}

__attribute__((visibility("default"))) _Bool
zend_is_op_long_compatible(const zval *op);
__attribute__((visibility("default"))) _Bool zend_binary_op_produces_error(
    uint32_t opcode, const zval *op1, const zval *op2);
__attribute__((visibility("default"))) _Bool
zend_unary_op_produces_error(uint32_t opcode, const zval *op);
_Bool zend_try_ct_eval_cast(zval *result, uint32_t type, zval *op1);
struct _zend_ini_entry;
typedef struct _zend_module_entry zend_module_entry;
typedef struct _zend_module_dep zend_module_dep;
struct _zend_module_entry {
  unsigned short size;
  unsigned int zend_api;
  unsigned char zend_debug;
  unsigned char zts;
  const struct _zend_ini_entry *ini_entry;
  const struct _zend_module_dep *deps;
  const char *name;
  const struct _zend_function_entry *functions;
  zend_result (*module_startup_func)(int type, int module_number);
  zend_result (*module_shutdown_func)(int type, int module_number);
  zend_result (*request_startup_func)(int type, int module_number);
  zend_result (*request_shutdown_func)(int type, int module_number);
  void (*info_func)(zend_module_entry *zend_module);
  const char *version;
  size_t globals_size;
  void *globals_ptr;
  void (*globals_ctor)(void *global);
  void (*globals_dtor)(void *global);
  zend_result (*post_deactivate_func)(void);
  int module_started;
  unsigned char type;
  void *handle;
  int module_number;
  const char *build_id;
};
struct _zend_module_dep {
  const char *name;
  const char *rel;
  const char *version;
  unsigned char type;
};

extern __attribute__((visibility("default"))) HashTable module_registry;
void module_destructor(zend_module_entry *module);
int module_registry_request_startup(zend_module_entry *module);
void module_registry_unload(const zend_module_entry *module);

typedef void (*rsrc_dtor_func_t)(zend_resource *res);
typedef struct _zend_rsrc_list_dtors_entry {
  rsrc_dtor_func_t list_dtor_ex;
  rsrc_dtor_func_t plist_dtor_ex;
  const char *type_name;
  int module_number;
  int resource_id;
} zend_rsrc_list_dtors_entry;
__attribute__((visibility("default"))) int
zend_register_list_destructors_ex(rsrc_dtor_func_t ld, rsrc_dtor_func_t pld,
                                  const char *type_name, int module_number);
void list_entry_destructor(zval *ptr);
void plist_entry_destructor(zval *ptr);
void zend_clean_module_rsrc_dtors(int module_number);
__attribute__((visibility("default"))) void zend_init_rsrc_list(void);
void zend_init_rsrc_plist(void);
void zend_close_rsrc_list(HashTable *ht);
void zend_destroy_rsrc_list(HashTable *ht);
void zend_init_rsrc_list_dtors(void);
void zend_destroy_rsrc_list_dtors(void);
__attribute__((visibility("default"))) zval *zend_list_insert(void *ptr,
                                                              int type);
__attribute__((visibility("default"))) void zend_list_free(zend_resource *res);
__attribute__((visibility("default"))) zend_result
zend_list_delete(zend_resource *res);
__attribute__((visibility("default"))) void zend_list_close(zend_resource *res);
__attribute__((visibility("default"))) zend_resource *
zend_register_resource(void *rsrc_pointer, int rsrc_type);
__attribute__((visibility("default"))) void *
zend_fetch_resource(zend_resource *res, const char *resource_type_name,
                    int resource_type);
__attribute__((visibility("default"))) void *
zend_fetch_resource2(zend_resource *res, const char *resource_type_name,
                     int resource_type, int resource_type2);
__attribute__((visibility("default"))) void *
zend_fetch_resource_ex(zval *res, const char *resource_type_name,
                       int resource_type);
__attribute__((visibility("default"))) void *
zend_fetch_resource2_ex(zval *res, const char *resource_type_name,
                        int resource_type, int resource_type2);
__attribute__((visibility("default"))) const char *
zend_rsrc_list_get_rsrc_type(zend_resource *res);
__attribute__((visibility("default"))) int
zend_fetch_list_dtor_id(const char *type_name);
__attribute__((visibility("default"))) zend_resource *
zend_register_persistent_resource(const char *key, size_t key_len,
                                  void *rsrc_pointer, int rsrc_type);
__attribute__((visibility("default"))) zend_resource *
zend_register_persistent_resource_ex(zend_string *key, void *rsrc_pointer,
                                     int rsrc_type);
extern __attribute__((visibility("default"))) int le_index_ptr;

typedef struct _zend_constant {
  zval value;
  zend_string *name;
  zend_string *filename;
  HashTable *attributes;
} zend_constant;

void clean_module_constants(int module_number);
void free_zend_constant(zval *zv);
void zend_startup_constants(void);
void zend_register_standard_constants(void);
__attribute__((visibility("default"))) _Bool
zend_verify_const_access(zend_class_constant *c, zend_class_entry *ce);
__attribute__((visibility("default"))) zval *
zend_get_constant(zend_string *name);
__attribute__((visibility("default"))) zend_constant *
zend_get_constant_ptr(zend_string *name);
__attribute__((visibility("default"))) zval *
zend_get_constant_str(const char *name, size_t name_len);
__attribute__((visibility("default"))) zval *
zend_get_constant_ex(zend_string *name, zend_class_entry *scope,
                     uint32_t flags);
__attribute__((visibility("default"))) zval *
zend_get_class_constant_ex(zend_string *class_name, zend_string *constant_name,
                           zend_class_entry *scope, uint32_t flags);
__attribute__((visibility("default"))) void
zend_register_bool_constant(const char *name, size_t name_len, _Bool bval,
                            int flags, int module_number);
__attribute__((visibility("default"))) void
zend_register_null_constant(const char *name, size_t name_len, int flags,
                            int module_number);
__attribute__((visibility("default"))) void
zend_register_long_constant(const char *name, size_t name_len, zend_long lval,
                            int flags, int module_number);
__attribute__((visibility("default"))) void
zend_register_double_constant(const char *name, size_t name_len, double dval,
                              int flags, int module_number);
__attribute__((visibility("default"))) void
zend_register_string_constant(const char *name, size_t name_len,
                              const char *strval, int flags, int module_number);
__attribute__((visibility("default"))) void
zend_register_stringl_constant(const char *name, size_t name_len,
                               const char *strval, size_t strlen, int flags,
                               int module_number);
__attribute__((visibility("default"))) zend_result
zend_register_constant(zend_constant *c);
void zend_constant_add_attributes(zend_constant *c, HashTable *attributes);
__attribute__((visibility("default"))) zend_constant *
_zend_get_special_const(const char *name, size_t name_len);
static inline zend_constant *zend_get_special_const(const char *name,
                                                    size_t name_len) {
  if (name_len == 4 || name_len == 5) {
    return _zend_get_special_const(name, name_len);
  }
  return ((void *)0);
}

struct _zend_fcall_info;
__attribute__((visibility("default"))) extern void (*zend_execute_ex)(
    zend_execute_data *execute_data);
__attribute__((visibility("default"))) extern void (*zend_execute_internal)(
    zend_execute_data *execute_data, zval *return_value);
__attribute__((visibility("default"))) extern zend_class_entry *(
    *zend_autoload)(zend_string *name, zend_string *lc_name);
void init_executor(void);
void shutdown_executor(void);
void shutdown_destructors(void);
__attribute__((visibility("default"))) void
zend_shutdown_executor_values(_Bool fast_shutdown);
__attribute__((visibility("default"))) void
zend_init_execute_data(zend_execute_data *execute_data, zend_op_array *op_array,
                       zval *return_value);
__attribute__((visibility("default"))) void
zend_init_func_execute_data(zend_execute_data *execute_data,
                            zend_op_array *op_array, zval *return_value);
__attribute__((visibility("default"))) void
zend_init_code_execute_data(zend_execute_data *execute_data,
                            zend_op_array *op_array, zval *return_value);
__attribute__((visibility("default"))) void
zend_execute(zend_op_array *op_array, zval *return_value);
__attribute__((visibility("default"))) void
execute_ex(zend_execute_data *execute_data);
__attribute__((visibility("default"))) void
execute_internal(zend_execute_data *execute_data, zval *return_value);
__attribute__((visibility("default"))) _Bool
zend_is_valid_class_name(zend_string *name);
__attribute__((visibility("default"))) zend_class_entry *
zend_lookup_class(zend_string *name);
__attribute__((visibility("default"))) zend_class_entry *
zend_lookup_class_ex(zend_string *name, zend_string *lcname, uint32_t flags);
__attribute__((visibility("default"))) zend_class_entry *
zend_get_called_scope(zend_execute_data *ex);
__attribute__((visibility("default"))) zend_object *
zend_get_this_object(zend_execute_data *ex);
__attribute__((visibility("default"))) zend_result
zend_eval_string(const char *str, zval *retval_ptr, const char *string_name);
__attribute__((visibility("default"))) zend_result zend_eval_stringl(
    const char *str, size_t str_len, zval *retval_ptr, const char *string_name);
__attribute__((visibility("default"))) zend_result
zend_eval_string_ex(const char *str, zval *retval_ptr, const char *string_name,
                    _Bool handle_exceptions);
__attribute__((visibility("default"))) zend_result
zend_eval_stringl_ex(const char *str, size_t str_len, zval *retval_ptr,
                     const char *string_name, _Bool handle_exceptions);
extern __attribute__((visibility("default")))
const zend_internal_function zend_pass_function;
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_missing_arg_error(const zend_execute_data *execute_data);
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_deprecated_function(const zend_function *fbc);
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_nodiscard_function(const zend_function *fbc);
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_deprecated_class_constant(const zend_class_constant *c,
                               const zend_string *constant_name);
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_deprecated_constant(const zend_constant *c,
                         const zend_string *constant_name);
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_false_to_array_deprecated(void);
__attribute__((cold)) void zend_param_must_be_ref(const zend_function *func,
                                                  uint32_t arg_num);
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_use_resource_as_offset(const zval *dim);
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_call_stack_size_error(void);
__attribute__((visibility("default"))) _Bool
zend_verify_ref_assignable_zval(zend_reference *ref, zval *zv, _Bool strict);
typedef enum {
  ZEND_VERIFY_PROP_ASSIGNABLE_BY_REF_CONTEXT_ASSIGNMENT,
  ZEND_VERIFY_PROP_ASSIGNABLE_BY_REF_CONTEXT_MAGIC_GET,
} zend_verify_prop_assignable_by_ref_context;
__attribute__((visibility("default"))) _Bool
zend_verify_prop_assignable_by_ref_ex(
    const zend_property_info *prop_info, zval *orig_val, _Bool strict,
    zend_verify_prop_assignable_by_ref_context context);
__attribute__((visibility("default"))) _Bool zend_verify_prop_assignable_by_ref(
    const zend_property_info *prop_info, zval *orig_val, _Bool strict);
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_throw_ref_type_error_zval(const zend_property_info *prop, const zval *zv);
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_throw_ref_type_error_type(const zend_property_info *prop1,
                               const zend_property_info *prop2, const zval *zv);
__attribute__((visibility("default"))) __attribute__((cold)) zval *
zend_undefined_offset_write(HashTable *ht, zend_long lval);
__attribute__((visibility("default"))) __attribute__((cold)) zval *
zend_undefined_index_write(HashTable *ht, zend_string *offset);
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_wrong_string_offset_error(void);
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_readonly_property_modification_error(const zend_property_info *info);
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_readonly_property_modification_error_ex(const char *class_name,
                                             const char *prop_name);
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_readonly_property_indirect_modification_error(
    const zend_property_info *info);
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_invalid_class_constant_type_error(uint8_t type);
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_object_released_while_assigning_to_property_error(
    const zend_property_info *info);
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_cannot_add_element(void);
__attribute__((visibility("default"))) _Bool
zend_asymmetric_property_has_set_access(const zend_property_info *prop_info);
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_asymmetric_visibility_property_modification_error(
    const zend_property_info *prop_info, const char *operation);
__attribute__((visibility("default"))) _Bool zend_verify_scalar_type_hint(
    uint32_t type_mask, zval *arg, _Bool strict, _Bool is_internal_arg);
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_verify_arg_error(const zend_function *zf, const zend_arg_info *arg_info,
                      uint32_t arg_num, const zval *value);
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_verify_return_error(const zend_function *zf, const zval *value);
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_verify_never_error(const zend_function *zf);
__attribute__((visibility("default"))) _Bool
zend_verify_ref_array_assignable(zend_reference *ref);
__attribute__((visibility("default"))) _Bool
zend_check_user_type_slow(const zend_type *type, zval *arg,
                          const zend_reference *ref, _Bool is_return_type);
__attribute__((visibility("default"))) _Bool zend_internal_call_should_throw(
    const zend_function *fbc, zend_execute_data *call);
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_internal_call_arginfo_violation(const zend_function *fbc);
__attribute__((visibility("default"))) _Bool
zend_verify_internal_return_type(const zend_function *zf, zval *ret);
__attribute__((visibility("default"))) void
zend_ref_add_type_source(zend_property_info_source_list *source_list,
                         zend_property_info *prop);
__attribute__((visibility("default"))) void
zend_ref_del_type_source(zend_property_info_source_list *source_list,
                         const zend_property_info *prop);
__attribute__((visibility("default"))) zval *
zend_assign_to_typed_ref(zval *variable_ptr, zval *value, uint8_t value_type,
                         _Bool strict);
__attribute__((visibility("default"))) zval *
zend_assign_to_typed_ref_ex(zval *variable_ptr, zval *value, uint8_t value_type,
                            _Bool strict, zend_refcounted **garbage_ptr);
static inline void zend_copy_to_variable(zval *variable_ptr, zval *value,
                                         uint8_t value_type) {
  zend_refcounted *ref = ((void *)0);
  if ((__builtin_constant_p(value_type & ((1 << 2) | (1 << 3)))
           ? (value_type & ((1 << 2) | (1 << 3)))
           : (1)) &&
      (zval_get_type(&(*(value))) == 10)) {
    ref = (*(value)).value.counted;
    value = &(*(value)).value.ref->val;
  }
  do {
    zval *_z1 = (variable_ptr);
    const zval *_z2 = (value);
    zend_refcounted *_gc = (*(_z2)).value.counted;
    uint32_t _t = (*(_z2)).u1.type_info;
    do {
      (*(_z1)).value.counted = _gc;
      (*(_z1)).u1.type_info = _t;
    } while (0);
  } while (0);
  if ((__builtin_constant_p(value_type == (1 << 0)) ? (value_type == (1 << 0))
                                                    : (0))) {
    if (__builtin_expect(!!(((((*(variable_ptr)).u1.type_info) & 0xff00) != 0)),
                         0)) {
      zval_addref_p(variable_ptr);
    }
  } else if (value_type & ((1 << 0) | (1 << 3))) {
    if (((((*(variable_ptr)).u1.type_info) & 0xff00) != 0)) {
      zval_addref_p(variable_ptr);
    }
  } else if ((__builtin_constant_p(value_type == (1 << 2))
                  ? (value_type == (1 << 2))
                  : (1)) &&
             __builtin_expect(!!(ref), 0)) {
    if (__builtin_expect(!!(zend_gc_delref(&(ref)->gc) == 0), 0)) {
      _efree((ref), "Zend/zend_execute.h", 157, ((void *)0), 0);
    } else if (((((*(variable_ptr)).u1.type_info) & 0xff00) != 0)) {
      zval_addref_p(variable_ptr);
    }
  }
}
static inline zval *zend_assign_to_variable(zval *variable_ptr, zval *value,
                                            uint8_t value_type, _Bool strict) {
  do {
    if (__builtin_expect(!!(((*(variable_ptr)).u1.v.type_flags != 0)), 0)) {
      zend_refcounted *garbage;
      if ((zval_get_type(&(*(variable_ptr))) == 10)) {
        if (__builtin_expect(
                !!((((*(variable_ptr)).value.ref)->sources.ptr != ((void *)0))),
                0)) {
          return zend_assign_to_typed_ref(variable_ptr, value, value_type,
                                          strict);
        }
        variable_ptr = &(*(variable_ptr)).value.ref->val;
        if (__builtin_expect(!!(!((*(variable_ptr)).u1.v.type_flags != 0)),
                             1)) {
          break;
        }
      }
      garbage = (*(variable_ptr)).value.counted;
      zend_copy_to_variable(variable_ptr, value, value_type);
      do {
        zend_refcounted_h *_p = &(garbage)->gc;
        if (zend_gc_delref(_p) == 0) {
          rc_dtor_func((zend_refcounted *)_p);
        } else {
          gc_check_possible_root_no_ref((zend_refcounted *)_p);
        }
      } while (0);
      return variable_ptr;
    }
  } while (0);
  zend_copy_to_variable(variable_ptr, value, value_type);
  return variable_ptr;
}
static inline zval *zend_assign_to_variable_ex(zval *variable_ptr, zval *value,
                                               zend_uchar value_type,
                                               _Bool strict,
                                               zend_refcounted **garbage_ptr) {
  do {
    if (__builtin_expect(!!(((*(variable_ptr)).u1.v.type_flags != 0)), 0)) {
      if ((zval_get_type(&(*(variable_ptr))) == 10)) {
        if (__builtin_expect(
                !!((((*(variable_ptr)).value.ref)->sources.ptr != ((void *)0))),
                0)) {
          return zend_assign_to_typed_ref_ex(variable_ptr, value, value_type,
                                             strict, garbage_ptr);
        }
        variable_ptr = &(*(variable_ptr)).value.ref->val;
        if (__builtin_expect(!!(!((*(variable_ptr)).u1.v.type_flags != 0)),
                             1)) {
          break;
        }
      }
      *garbage_ptr = (*(variable_ptr)).value.counted;
    }
  } while (0);
  zend_copy_to_variable(variable_ptr, value, value_type);
  return variable_ptr;
}
static inline void zend_safe_assign_to_variable_noref(zval *variable_ptr,
                                                      zval *value) {
  if (((*(variable_ptr)).u1.v.type_flags != 0)) {
    ((void)sizeof((zval_get_type(&(*(variable_ptr))) != 10) ? 1 : 0),
     __extension__({
       if (zval_get_type(&(*(variable_ptr))) != 10)
         ;
       else
         __assert_fail("zval_get_type(&(*(variable_ptr))) != 10",
                       "Zend/zend_execute.h", 215,
                       __extension__ __PRETTY_FUNCTION__);
     }));
    zend_refcounted *ref = (*(variable_ptr)).value.counted;
    do {
      zval *_z1 = (variable_ptr);
      const zval *_z2 = (value);
      zend_refcounted *_gc = (*(_z2)).value.counted;
      uint32_t _t = (*(_z2)).u1.type_info;
      do {
        (*(_z1)).value.counted = _gc;
        (*(_z1)).u1.type_info = _t;
      } while (0);
    } while (0);
    do {
      zend_refcounted_h *_p = &(ref)->gc;
      if (zend_gc_delref(_p) == 0) {
        rc_dtor_func((zend_refcounted *)_p);
      } else {
        gc_check_possible_root_no_ref((zend_refcounted *)_p);
      }
    } while (0);
  } else {
    do {
      zval *_z1 = (variable_ptr);
      const zval *_z2 = (value);
      zend_refcounted *_gc = (*(_z2)).value.counted;
      uint32_t _t = (*(_z2)).u1.type_info;
      do {
        (*(_z1)).value.counted = _gc;
        (*(_z1)).u1.type_info = _t;
      } while (0);
    } while (0);
  }
}
static inline void zend_cast_zval_to_object(zval *result, zval *expr,
                                            uint8_t op1_type) {
  HashTable *ht;
  do {
    zval *__z = (result);
    (*(__z)).value.obj = (zend_objects_new(zend_standard_class_def));
    (*(__z)).u1.type_info = (8 | ((1 << 0) << 8) | ((1 << 1) << 8));
  } while (0);
  if (zval_get_type(&(*(expr))) == 7) {
    ht = zend_symtable_to_proptable((*(expr)).value.arr);
    if (zval_gc_flags((ht)->gc.u.type_info) & (1 << 6)) {
      ht = zend_array_dup(ht);
    }
    (*(result)).value.obj->properties = ht;
  } else if (zval_get_type(&(*(expr))) != 1) {
    (*(result)).value.obj->properties = ht = _zend_new_array(1);
    expr = zend_hash_add_new(ht, zend_known_strings[ZEND_STR_SCALAR], expr);
    if (op1_type == (1 << 0)) {
      if (__builtin_expect(!!(((((*(expr)).u1.type_info) & 0xff00) != 0)), 0))
        zval_addref_p(expr);
    } else {
      if (((((*(expr)).u1.type_info) & 0xff00) != 0))
        zval_addref_p(expr);
    }
  }
}
static inline void zend_cast_zval_to_array(zval *result, zval *expr,
                                           uint8_t op1_type) {
  extern zend_class_entry *zend_ce_closure;
  if (op1_type == (1 << 0) || zval_get_type(&(*(expr))) != 8 ||
      ((*(expr)).value.obj->ce) == zend_ce_closure) {
    if (zval_get_type(&(*(expr))) != 1) {
      do {
        zend_array *__arr = (_zend_new_array(1));
        zval *__z = (result);
        (*(__z)).value.arr = __arr;
        (*(__z)).u1.type_info = (7 | ((1 << 0) << 8) | ((1 << 1) << 8));
      } while (0);
      expr = zend_hash_index_add_new((*(result)).value.arr, 0, expr);
      if (op1_type == (1 << 0)) {
        if (__builtin_expect(!!(((((*(expr)).u1.type_info) & 0xff00) != 0)), 0))
          zval_addref_p(expr);
      } else {
        if (((((*(expr)).u1.type_info) & 0xff00) != 0))
          zval_addref_p(expr);
      }
    } else {
      do {
        zval *__z = (result);
        (*(__z)).value.arr = (zend_array *)&zend_empty_array;
        (*(__z)).u1.type_info = 7;
      } while (0);
    }
  } else if (((*(expr)).value.obj->properties == ((void *)0) &&
              (*(expr)).value.obj->handlers->get_properties_for ==
                  ((void *)0) &&
              (*(expr)).value.obj->handlers->get_properties ==
                  zend_std_get_properties &&
              (!zend_object_is_lazy_proxy((*(expr)).value.obj) ||
               !zend_lazy_object_initialized((*(expr)).value.obj)))) {
    do {
      zend_array *__arr =
          (zend_std_build_object_properties_array((*(expr)).value.obj));
      zval *__z = (result);
      (*(__z)).value.arr = __arr;
      (*(__z)).u1.type_info = (7 | ((1 << 0) << 8) | ((1 << 1) << 8));
    } while (0);
  } else {
    HashTable *obj_ht =
        zend_get_properties_for(expr, ZEND_PROP_PURPOSE_ARRAY_CAST);
    if (obj_ht) {
      do {
        zend_array *__arr = (zend_proptable_to_symtable(
            obj_ht, (((*(expr)).value.obj->ce)->default_properties_count ||
                     (*(expr)).value.obj->handlers != &std_object_handlers ||
                     (zval_gc_flags((obj_ht)->gc.u.type_info) & (1 << 5)))));
        zval *__z = (result);
        (*(__z)).value.arr = __arr;
        (*(__z)).u1.type_info = (7 | ((1 << 0) << 8) | ((1 << 1) << 8));
      } while (0);
      do {
        if (obj_ht) {
          zend_array_release(obj_ht);
        }
      } while (0);
    } else {
      do {
        zval *__z = (result);
        (*(__z)).value.arr = (zend_array *)&zend_empty_array;
        (*(__z)).u1.type_info = 7;
      } while (0);
    }
  }
}
__attribute__((visibility("default"))) zend_result
zval_update_constant(zval *pp);
__attribute__((visibility("default"))) zend_result
zval_update_constant_ex(zval *pp, zend_class_entry *scope);
__attribute__((visibility("default"))) zend_result
zval_update_constant_with_ctx(zval *pp, zend_class_entry *scope,
                              zend_ast_evaluate_ctx *ctx);
struct _zend_vm_stack {
  zval *top;
  zval *end;
  zend_vm_stack prev;
};
_Static_assert(((((sizeof(zval)) + (size_t)8 - 1) & ~((size_t)8 - 1)) ==
                sizeof(zval)),
               "zval must be aligned by ZEND_MM_ALIGNMENT");
__attribute__((visibility("default"))) void zend_vm_stack_init(void);
__attribute__((visibility("default"))) void
zend_vm_stack_init_ex(size_t page_size);
__attribute__((visibility("default"))) void zend_vm_stack_destroy(void);
__attribute__((visibility("default"))) void *zend_vm_stack_extend(size_t size);
static inline zend_vm_stack zend_vm_stack_new_page(size_t size,
                                                   zend_vm_stack prev) {
  zend_vm_stack page = (zend_vm_stack)_emalloc((size), "Zend/zend_execute.h",
                                               320, ((void *)0), 0);
  page->top =
      (((zval *)(page)) +
       ((sizeof(struct _zend_vm_stack) + sizeof(zval) - 1) / sizeof(zval)));
  page->end = (zval *)((char *)page + size);
  page->prev = prev;
  return page;
}
static inline void zend_vm_init_call_frame(zend_execute_data *call,
                                           uint32_t call_info,
                                           zend_function *func,
                                           uint32_t num_args,
                                           void *object_or_called_scope) {
  ((void)sizeof((!func->common.scope || object_or_called_scope) ? 1 : 0),
   __extension__({
     if (!func->common.scope || object_or_called_scope)
       ;
     else
       __assert_fail("!func->common.scope || object_or_called_scope",
                     "Zend/zend_execute.h", 330,
                     __extension__ __PRETTY_FUNCTION__);
   }));
  call->func = func;
  (call->This).value.ptr = object_or_called_scope;
  ((call)->This).u1.type_info = call_info;
  (call)->This.u2.num_args = num_args;
}
static inline zend_execute_data *
zend_vm_stack_push_call_frame_ex(uint32_t used_stack, uint32_t call_info,
                                 zend_function *func, uint32_t num_args,
                                 void *object_or_called_scope) {
  zend_execute_data *call =
      (zend_execute_data *)(executor_globals.vm_stack_top);
  ((void)sizeof(
       ((executor_globals.vm_stack_top) > (zval *)(executor_globals.vm_stack) &&
        (executor_globals.vm_stack_end) > (zval *)(executor_globals.vm_stack) &&
        (executor_globals.vm_stack_top) <= (executor_globals.vm_stack_end))
           ? 1
           : 0),
   __extension__({
     if ((executor_globals.vm_stack_top) >
             (zval *)(executor_globals.vm_stack) &&
         (executor_globals.vm_stack_end) >
             (zval *)(executor_globals.vm_stack) &&
         (executor_globals.vm_stack_top) <= (executor_globals.vm_stack_end))
       ;
     else
       __assert_fail(
           "(executor_globals.vm_stack_top) > (zval *) "
           "(executor_globals.vm_stack) && (executor_globals.vm_stack_end) > "
           "(zval *) (executor_globals.vm_stack) && "
           "(executor_globals.vm_stack_top) <= (executor_globals.vm_stack_end)",
           "Zend/zend_execute.h", 341, __extension__ __PRETTY_FUNCTION__);
   }));
  if (__builtin_expect(
          !!(used_stack > (size_t)(((char *)(executor_globals.vm_stack_end)) -
                                   (char *)call)),
          0)) {
    call = (zend_execute_data *)zend_vm_stack_extend(used_stack);
    ((void)sizeof(
         ((executor_globals.vm_stack_top) >
              (zval *)(executor_globals.vm_stack) &&
          (executor_globals.vm_stack_end) >
              (zval *)(executor_globals.vm_stack) &&
          (executor_globals.vm_stack_top) <= (executor_globals.vm_stack_end))
             ? 1
             : 0),
     __extension__({
       if ((executor_globals.vm_stack_top) >
               (zval *)(executor_globals.vm_stack) &&
           (executor_globals.vm_stack_end) >
               (zval *)(executor_globals.vm_stack) &&
           (executor_globals.vm_stack_top) <= (executor_globals.vm_stack_end))
         ;
       else
         __assert_fail(
             "(executor_globals.vm_stack_top) > (zval *) "
             "(executor_globals.vm_stack) && (executor_globals.vm_stack_end) > "
             "(zval *) (executor_globals.vm_stack) && "
             "(executor_globals.vm_stack_top) <= "
             "(executor_globals.vm_stack_end)",
             "Zend/zend_execute.h", 345, __extension__ __PRETTY_FUNCTION__);
     }));
    zend_vm_init_call_frame(call, call_info | (1 << 18), func, num_args,
                            object_or_called_scope);
    return call;
  } else {
    (executor_globals.vm_stack_top) = (zval *)((char *)call + used_stack);
    zend_vm_init_call_frame(call, call_info, func, num_args,
                            object_or_called_scope);
    return call;
  }
}
static inline uint32_t zend_vm_calc_used_stack(uint32_t num_args,
                                               zend_function *func) {
  uint32_t used_stack =
      ((int)((sizeof(zend_execute_data) + sizeof(zval) - 1) / sizeof(zval))) +
      num_args + func->common.T;
  if (__builtin_expect(!!(((func->type) != 1)), 1)) {
    used_stack +=
        func->op_array.last_var - (((func->op_array.num_args) < (num_args))
                                       ? (func->op_array.num_args)
                                       : (num_args));
  }
  return used_stack * sizeof(zval);
}
static inline zend_execute_data *
zend_vm_stack_push_call_frame(uint32_t call_info, zend_function *func,
                              uint32_t num_args, void *object_or_called_scope) {
  uint32_t used_stack = zend_vm_calc_used_stack(num_args, func);
  return zend_vm_stack_push_call_frame_ex(used_stack, call_info, func, num_args,
                                          object_or_called_scope);
}
static inline void zend_vm_stack_free_extra_args_ex(uint32_t call_info,
                                                    zend_execute_data *call) {
  if (__builtin_expect(!!(call_info & (1 << 19)), 0)) {
    uint32_t count = (call)->This.u2.num_args - call->func->op_array.num_args;
    zval *p =
        (((zval *)(call)) +
         (((int)((sizeof(zend_execute_data) + sizeof(zval) - 1) /
                 sizeof(zval))) +
          ((int)(call->func->op_array.last_var + call->func->op_array.T))));
    do {
      i_zval_ptr_dtor(p);
      p++;
    } while (--count);
  }
}
static inline void zend_vm_stack_free_extra_args(zend_execute_data *call) {
  zend_vm_stack_free_extra_args_ex(((call)->This).u1.type_info, call);
}
static inline void zend_vm_stack_free_args(zend_execute_data *call) {
  uint32_t num_args = (call)->This.u2.num_args;
  if (__builtin_expect(!!(num_args > 0), 1)) {
    zval *p = (((zval *)(call)) +
               (((int)((sizeof(zend_execute_data) + sizeof(zval) - 1) /
                       sizeof(zval))) +
                ((int)(((int)(1)) - 1))));
    do {
      zval_ptr_dtor_nogc(p);
      p++;
    } while (--num_args);
  }
}
static inline void zend_vm_stack_free_call_frame_ex(uint32_t call_info,
                                                    zend_execute_data *call) {
  ((void)sizeof(
       ((executor_globals.vm_stack_top) > (zval *)(executor_globals.vm_stack) &&
        (executor_globals.vm_stack_end) > (zval *)(executor_globals.vm_stack) &&
        (executor_globals.vm_stack_top) <= (executor_globals.vm_stack_end))
           ? 1
           : 0),
   __extension__({
     if ((executor_globals.vm_stack_top) >
             (zval *)(executor_globals.vm_stack) &&
         (executor_globals.vm_stack_end) >
             (zval *)(executor_globals.vm_stack) &&
         (executor_globals.vm_stack_top) <= (executor_globals.vm_stack_end))
       ;
     else
       __assert_fail(
           "(executor_globals.vm_stack_top) > (zval *) "
           "(executor_globals.vm_stack) && (executor_globals.vm_stack_end) > "
           "(zval *) (executor_globals.vm_stack) && "
           "(executor_globals.vm_stack_top) <= (executor_globals.vm_stack_end)",
           "Zend/zend_execute.h", 406, __extension__ __PRETTY_FUNCTION__);
   }));
  if (__builtin_expect(!!(call_info & (1 << 18)), 0)) {
    zend_vm_stack p = (executor_globals.vm_stack);
    zend_vm_stack prev = p->prev;
    ((void)sizeof(
         (call ==
          (zend_execute_data *)(((zval *)((executor_globals.vm_stack))) +
                                ((sizeof(struct _zend_vm_stack) + sizeof(zval) -
                                  1) /
                                 sizeof(zval))))
             ? 1
             : 0),
     __extension__({
       if (call ==
           (zend_execute_data *)(((zval *)((executor_globals.vm_stack))) +
                                 ((sizeof(struct _zend_vm_stack) +
                                   sizeof(zval) - 1) /
                                  sizeof(zval))))
         ;
       else
         __assert_fail("call == "
                       "(zend_execute_data*)(((zval*)((executor_globals.vm_"
                       "stack))) + ((sizeof(struct _zend_vm_stack) + "
                       "sizeof(zval) - 1) / sizeof(zval)))",
                       "Zend/zend_execute.h", 412,
                       __extension__ __PRETTY_FUNCTION__);
     }));
    (executor_globals.vm_stack_top) = prev->top;
    (executor_globals.vm_stack_end) = prev->end;
    (executor_globals.vm_stack) = prev;
    _efree((p), "Zend/zend_execute.h", 416, ((void *)0), 0);
  } else {
    (executor_globals.vm_stack_top) = (zval *)call;
  }
  ((void)sizeof(
       ((executor_globals.vm_stack_top) > (zval *)(executor_globals.vm_stack) &&
        (executor_globals.vm_stack_end) > (zval *)(executor_globals.vm_stack) &&
        (executor_globals.vm_stack_top) <= (executor_globals.vm_stack_end))
           ? 1
           : 0),
   __extension__({
     if ((executor_globals.vm_stack_top) >
             (zval *)(executor_globals.vm_stack) &&
         (executor_globals.vm_stack_end) >
             (zval *)(executor_globals.vm_stack) &&
         (executor_globals.vm_stack_top) <= (executor_globals.vm_stack_end))
       ;
     else
       __assert_fail(
           "(executor_globals.vm_stack_top) > (zval *) "
           "(executor_globals.vm_stack) && (executor_globals.vm_stack_end) > "
           "(zval *) (executor_globals.vm_stack) && "
           "(executor_globals.vm_stack_top) <= (executor_globals.vm_stack_end)",
           "Zend/zend_execute.h", 421, __extension__ __PRETTY_FUNCTION__);
   }));
}
static inline void zend_vm_stack_free_call_frame(zend_execute_data *call) {
  zend_vm_stack_free_call_frame_ex(((call)->This).u1.type_info, call);
}
zend_execute_data *zend_vm_stack_copy_call_frame(zend_execute_data *call,
                                                 uint32_t passed_args,
                                                 uint32_t additional_args);
static inline void zend_vm_stack_extend_call_frame(zend_execute_data **call,
                                                   uint32_t passed_args,
                                                   uint32_t additional_args) {
  if (__builtin_expect(
          !!((uint32_t)((executor_globals.vm_stack_end) -
                        (executor_globals.vm_stack_top)) > additional_args),
          1)) {
    (executor_globals.vm_stack_top) += additional_args;
  } else {
    *call = zend_vm_stack_copy_call_frame(*call, passed_args, additional_args);
  }
}
__attribute__((visibility("default"))) void
zend_free_extra_named_params(zend_array *extra_named_params);
__attribute__((visibility("default"))) const char *
get_active_class_name(const char **space);
__attribute__((visibility("default"))) const char *
get_active_function_name(void);
__attribute__((visibility("default"))) const char *
get_active_function_arg_name(uint32_t arg_num);
__attribute__((visibility("default"))) const char *
get_function_arg_name(const zend_function *func, uint32_t arg_num);
__attribute__((visibility("default"))) zend_function *
zend_active_function_ex(zend_execute_data *execute_data);
static inline zend_function *zend_active_function(void) {
  zend_function *func = (executor_globals.current_execute_data)->func;
  if (((func->type) != 1)) {
    return zend_active_function_ex((executor_globals.current_execute_data));
  } else {
    return func;
  }
}
__attribute__((visibility("default"))) zend_string *
get_active_function_or_method_name(void);
__attribute__((visibility("default"))) zend_string *
get_function_or_method_name(const zend_function *func);
__attribute__((visibility("default"))) const char *
zend_get_executed_filename(void);
__attribute__((visibility("default"))) zend_string *
zend_get_executed_filename_ex(void);
__attribute__((visibility("default"))) uint32_t zend_get_executed_lineno(void);
__attribute__((visibility("default"))) zend_class_entry *
zend_get_executed_scope(void);
__attribute__((visibility("default"))) _Bool zend_is_executing(void);
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_cannot_pass_by_reference(uint32_t arg_num);
__attribute__((visibility("default"))) void
zend_set_timeout(zend_long seconds, _Bool reset_signals);
__attribute__((visibility("default"))) void zend_unset_timeout(void);
__attribute__((visibility("default"))) __attribute__((noreturn)) void
zend_timeout(void);
__attribute__((visibility("default"))) zend_class_entry *
zend_fetch_class(zend_string *class_name, uint32_t fetch_type);
__attribute__((visibility("default"))) zend_class_entry *
zend_fetch_class_with_scope(zend_string *class_name, uint32_t fetch_type,
                            zend_class_entry *scope);
__attribute__((visibility("default"))) zend_class_entry *
zend_fetch_class_by_name(zend_string *class_name, zend_string *lcname,
                         uint32_t fetch_type);
__attribute__((visibility("default"))) zend_function *
zend_fetch_function(zend_string *name);
__attribute__((visibility("default"))) zend_function *
zend_fetch_function_str(const char *name, size_t len);
__attribute__((visibility("default"))) void
zend_init_func_run_time_cache(zend_op_array *op_array);
__attribute__((visibility("default"))) void
zend_fetch_dimension_const(zval *result, zval *container, zval *dim, int type);
__attribute__((visibility("default"))) zval *
zend_get_compiled_variable_value(const zend_execute_data *execute_data_ptr,
                                 uint32_t var);
__attribute__((visibility("default"))) _Bool zend_gcc_global_regs(void);
__attribute__((visibility("default"))) zend_result
zend_set_user_opcode_handler(uint8_t opcode, user_opcode_handler_t handler);
__attribute__((visibility("default"))) user_opcode_handler_t
zend_get_user_opcode_handler(uint8_t opcode);
__attribute__((visibility("default"))) zval *
zend_get_zval_ptr(const zend_op *opline, int op_type, const znode_op *node,
                  const zend_execute_data *execute_data);
__attribute__((visibility("default"))) void
zend_clean_and_cache_symbol_table(zend_array *symbol_table);
__attribute__((visibility("default"))) void
zend_free_compiled_variables(zend_execute_data *execute_data);
__attribute__((visibility("default"))) void
zend_unfinished_calls_gc(zend_execute_data *execute_data,
                         zend_execute_data *call, uint32_t op_num,
                         zend_get_gc_buffer *buf);
__attribute__((visibility("default"))) void
zend_cleanup_unfinished_execution(zend_execute_data *execute_data,
                                  uint32_t op_num, uint32_t catch_op_num);
__attribute__((visibility("default"))) __attribute__((deprecated)) HashTable *
zend_unfinished_execution_gc(zend_execute_data *execute_data,
                             zend_execute_data *call,
                             zend_get_gc_buffer *gc_buffer);
__attribute__((visibility("default"))) HashTable *
zend_unfinished_execution_gc_ex(zend_execute_data *execute_data,
                                zend_execute_data *call,
                                zend_get_gc_buffer *gc_buffer,
                                _Bool suspended_by_yield);
__attribute__((visibility("default"))) zval *
zend_fetch_static_property(zend_execute_data *ex, int fetch_type);
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_undefined_method(const zend_class_entry *ce, const zend_string *method);
__attribute__((visibility("default"))) void
zend_non_static_method_call(const zend_function *fbc);
__attribute__((visibility("default"))) void
zend_frameless_observed_call(zend_execute_data *execute_data);
zval *zend_handle_named_arg(zend_execute_data **call_ptr, zend_string *arg_name,
                            uint32_t *arg_num_ptr, void **cache_slot);
__attribute__((visibility("default"))) zend_result
zend_handle_undef_args(zend_execute_data *call);
__attribute__((visibility("default"))) _Bool zend_verify_class_constant_type(
    const zend_class_constant *c, const zend_string *name, zval *constant);
__attribute__((cold)) void
zend_verify_class_constant_type_error(const zend_class_constant *c,
                                      const zend_string *name,
                                      const zval *constant);
__attribute__((visibility("default"))) _Bool zend_verify_property_type(
    const zend_property_info *info, zval *property, _Bool strict);
__attribute__((cold)) void
zend_verify_property_type_error(const zend_property_info *info,
                                const zval *property);
__attribute__((cold)) void
zend_magic_get_property_type_inconsistency_error(const zend_property_info *info,
                                                 const zval *property);
__attribute__((cold)) void zend_match_unhandled_error(const zval *value);
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_fcall_interrupt(zend_execute_data *call);
static inline void *zend_get_bad_ptr(void) {
  do {
    ((void)sizeof((0) ? 1 : 0), __extension__({
       if (0)
         ;
       else
         __assert_fail("0", "Zend/zend_execute.h", 624,
                       __extension__ __PRETTY_FUNCTION__);
     }));
    __builtin_unreachable();
  } while (0);
  return ((void *)0);
}

typedef struct _zend_function_entry {
  const char *fname;
  zif_handler handler;
  const struct _zend_internal_arg_info *arg_info;
  uint32_t num_args;
  uint32_t flags;
  const zend_frameless_function_info *frameless_function_infos;
  const char *doc_comment;
} zend_function_entry;
typedef struct _zend_fcall_info {
  size_t size;
  zval function_name;
  zval *retval;
  zval *params;
  zend_object *object;
  uint32_t param_count;
  HashTable *named_params;
} zend_fcall_info;
typedef struct _zend_fcall_info_cache {
  zend_function *function_handler;
  zend_class_entry *calling_scope;
  zend_class_entry *called_scope;
  zend_object *object;
  zend_object *closure;
} zend_fcall_info_cache;
__attribute__((visibility("default"))) int zend_next_free_module(void);

__attribute__((visibility("default"))) zend_result
zend_get_parameters_array_ex(uint32_t param_count, zval *argument_array);
__attribute__((visibility("default"))) zend_result
zend_copy_parameters_array(uint32_t param_count, zval *argument_array);
__attribute__((visibility("default"))) zend_result
zend_parse_parameters(uint32_t num_args, const char *type_spec, ...);
__attribute__((visibility("default"))) zend_result zend_parse_parameters_ex(
    int flags, uint32_t num_args, const char *type_spec, ...);
__attribute__((visibility("default"))) const char *
zend_zval_type_name(const zval *arg);
__attribute__((visibility("default"))) const char *
zend_zval_value_name(const zval *arg);
__attribute__((visibility("default"))) zend_string *
zend_zval_get_legacy_type(const zval *arg);
__attribute__((visibility("default"))) zend_result zend_parse_method_parameters(
    uint32_t num_args, zval *this_ptr, const char *type_spec, ...);
__attribute__((visibility("default"))) zend_result
zend_parse_method_parameters_ex(int flags, uint32_t num_args, zval *this_ptr,
                                const char *type_spec, ...);
__attribute__((visibility("default"))) zend_result zend_parse_parameter(
    int flags, uint32_t arg_num, zval *arg, const char *spec, ...);
__attribute__((visibility("default"))) zend_result zend_register_functions(
    zend_class_entry *scope, const zend_function_entry *functions,
    HashTable *function_table, int type);
__attribute__((visibility("default"))) void
zend_unregister_functions(const zend_function_entry *functions, int count,
                          HashTable *function_table);
__attribute__((visibility("default"))) zend_result
zend_startup_module(zend_module_entry *module_entry);
__attribute__((visibility("default"))) zend_module_entry *
zend_register_internal_module(zend_module_entry *module_entry);
__attribute__((visibility("default"))) zend_module_entry *
zend_register_module_ex(zend_module_entry *module, int module_type);
__attribute__((visibility("default"))) zend_result
zend_startup_module_ex(zend_module_entry *module);
__attribute__((visibility("default"))) void zend_startup_modules(void);
__attribute__((visibility("default"))) void zend_collect_module_handlers(void);
__attribute__((visibility("default"))) void zend_destroy_modules(void);
__attribute__((visibility("default"))) void
zend_check_magic_method_implementation(const zend_class_entry *ce,
                                       const zend_function *fptr,
                                       zend_string *lcname, int error_type);
__attribute__((visibility("default"))) void
zend_add_magic_method(zend_class_entry *ce, zend_function *fptr,
                      zend_string *lcname);
__attribute__((visibility("default"))) zend_class_entry *
zend_register_internal_class(zend_class_entry *class_entry);
__attribute__((visibility("default"))) zend_class_entry *
zend_register_internal_class_ex(zend_class_entry *class_entry,
                                zend_class_entry *parent_ce);
__attribute__((visibility("default"))) zend_class_entry *
zend_register_internal_class_with_flags(zend_class_entry *class_entry,
                                        zend_class_entry *parent_ce,
                                        uint32_t flags);
__attribute__((visibility("default"))) zend_class_entry *
zend_register_internal_interface(zend_class_entry *orig_class_entry);
__attribute__((visibility("default"))) void
zend_class_implements(zend_class_entry *class_entry, int num_interfaces, ...);
__attribute__((visibility("default"))) zend_result zend_register_class_alias_ex(
    const char *name, size_t name_len, zend_class_entry *ce, _Bool persistent);
static inline zend_result zend_register_class_alias(const char *name,
                                                    zend_class_entry *ce) {
  return zend_register_class_alias_ex(name, strlen(name), ce, 1);
}
__attribute__((visibility("default"))) void
zend_disable_functions(const char *function_list);
__attribute__((visibility("default"))) zend_result
zend_disable_class(const char *class_name, size_t class_name_length);
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_wrong_param_count(void);
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_wrong_property_read(zval *object, zval *property);
__attribute__((visibility("default"))) void
zend_release_fcall_info_cache(zend_fcall_info_cache *fcc);
__attribute__((visibility("default"))) zend_string *
zend_get_callable_name_ex(zval *callable, zend_object *object);
__attribute__((visibility("default"))) zend_string *
zend_get_callable_name(zval *callable);
__attribute__((visibility("default"))) _Bool zend_is_callable_at_frame(
    zval *callable, zend_object *object, zend_execute_data *frame,
    uint32_t check_flags, zend_fcall_info_cache *fcc, char **error);
__attribute__((visibility("default"))) _Bool zend_is_callable_ex(
    zval *callable, zend_object *object, uint32_t check_flags,
    zend_string **callable_name, zend_fcall_info_cache *fcc, char **error);
__attribute__((visibility("default"))) _Bool zend_is_callable(
    zval *callable, uint32_t check_flags, zend_string **callable_name);
__attribute__((visibility("default"))) _Bool
zend_make_callable(zval *callable, zend_string **callable_name);
__attribute__((visibility("default"))) const char *
zend_get_module_version(const char *module_name);
__attribute__((visibility("default"))) zend_result
zend_get_module_started(const char *module_name);
__attribute__((visibility("default"))) zend_property_info *
zend_declare_typed_property(zend_class_entry *ce, zend_string *name,
                            zval *property, int access_type,
                            zend_string *doc_comment, zend_type type);
__attribute__((visibility("default"))) void
zend_declare_property_ex(zend_class_entry *ce, zend_string *name,
                         zval *property, int access_type,
                         zend_string *doc_comment);
__attribute__((visibility("default"))) void
zend_declare_property(zend_class_entry *ce, const char *name,
                      size_t name_length, zval *property, int access_type);
__attribute__((visibility("default"))) void
zend_declare_property_null(zend_class_entry *ce, const char *name,
                           size_t name_length, int access_type);
__attribute__((visibility("default"))) void
zend_declare_property_bool(zend_class_entry *ce, const char *name,
                           size_t name_length, zend_long value,
                           int access_type);
__attribute__((visibility("default"))) void
zend_declare_property_long(zend_class_entry *ce, const char *name,
                           size_t name_length, zend_long value,
                           int access_type);
__attribute__((visibility("default"))) void
zend_declare_property_double(zend_class_entry *ce, const char *name,
                             size_t name_length, double value, int access_type);
__attribute__((visibility("default"))) void
zend_declare_property_string(zend_class_entry *ce, const char *name,
                             size_t name_length, const char *value,
                             int access_type);
__attribute__((visibility("default"))) void
zend_declare_property_stringl(zend_class_entry *ce, const char *name,
                              size_t name_length, const char *value,
                              size_t value_len, int access_type);
__attribute__((visibility("default"))) zend_class_constant *
zend_declare_typed_class_constant(zend_class_entry *ce, zend_string *name,
                                  zval *value, int access_type,
                                  zend_string *doc_comment, zend_type type);
__attribute__((visibility("default"))) zend_class_constant *
zend_declare_class_constant_ex(zend_class_entry *ce, zend_string *name,
                               zval *value, int access_type,
                               zend_string *doc_comment);
__attribute__((visibility("default"))) void
zend_declare_class_constant(zend_class_entry *ce, const char *name,
                            size_t name_length, zval *value);
__attribute__((visibility("default"))) void
zend_declare_class_constant_null(zend_class_entry *ce, const char *name,
                                 size_t name_length);
__attribute__((visibility("default"))) void
zend_declare_class_constant_long(zend_class_entry *ce, const char *name,
                                 size_t name_length, zend_long value);
__attribute__((visibility("default"))) void
zend_declare_class_constant_bool(zend_class_entry *ce, const char *name,
                                 size_t name_length, _Bool value);
__attribute__((visibility("default"))) void
zend_declare_class_constant_double(zend_class_entry *ce, const char *name,
                                   size_t name_length, double value);
__attribute__((visibility("default"))) void
zend_declare_class_constant_stringl(zend_class_entry *ce, const char *name,
                                    size_t name_length, const char *value,
                                    size_t value_length);
__attribute__((visibility("default"))) void
zend_declare_class_constant_string(zend_class_entry *ce, const char *name,
                                   size_t name_length, const char *value);
__attribute__((visibility("default"))) zend_result zend_update_class_constant(
    zend_class_constant *c, const zend_string *name, zend_class_entry *scope);
__attribute__((visibility("default"))) zend_result
zend_update_class_constants(zend_class_entry *class_type);
__attribute__((visibility("default"))) HashTable *
zend_separate_class_constants_table(zend_class_entry *class_type);
static inline HashTable *zend_class_constants_table(zend_class_entry *ce) {
  if ((ce->ce_flags & (1 << 24)) && ce->mutable_data__ptr) {
    zend_class_mutable_data *mutable_data = (zend_class_mutable_data *)(*(
        (void **)((char *)(compiler_globals.map_ptr_base) +
                  (intptr_t)ce->mutable_data__ptr)));
    if (mutable_data && mutable_data->constants_table) {
      return mutable_data->constants_table;
    } else {
      return zend_separate_class_constants_table(ce);
    }
  } else {
    return &ce->constants_table;
  }
}
static inline zval *zend_class_default_properties_table(zend_class_entry *ce) {
  if ((ce->ce_flags & (1 << 25)) && ce->mutable_data__ptr) {
    zend_class_mutable_data *mutable_data = (zend_class_mutable_data *)(*(
        (void **)((char *)(compiler_globals.map_ptr_base) +
                  (intptr_t)ce->mutable_data__ptr)));
    return mutable_data->default_properties_table;
  } else {
    return ce->default_properties_table;
  }
}
static inline void
zend_class_set_backed_enum_table(zend_class_entry *ce,
                                 HashTable *backed_enum_table) {
  if (ce->mutable_data__ptr && ce->type == 2) {
    zend_class_mutable_data *mutable_data = (zend_class_mutable_data *)(*(
        (void **)((char *)(compiler_globals.map_ptr_base) +
                  (intptr_t)ce->mutable_data__ptr)));
    mutable_data->backed_enum_table = backed_enum_table;
  } else {
    ce->backed_enum_table = backed_enum_table;
  }
}
static inline HashTable *zend_class_backed_enum_table(zend_class_entry *ce) {
  if (ce->mutable_data__ptr && ce->type == 2) {
    zend_class_mutable_data *mutable_data = (zend_class_mutable_data *)(*(
        (void **)((char *)(compiler_globals.map_ptr_base) +
                  (intptr_t)ce->mutable_data__ptr)));
    return mutable_data->backed_enum_table;
  } else {
    return ce->backed_enum_table;
  }
}
__attribute__((visibility("default"))) void
zend_update_property_ex(zend_class_entry *scope, zend_object *object,
                        zend_string *name, zval *value);
__attribute__((visibility("default"))) void
zend_update_property(zend_class_entry *scope, zend_object *object,
                     const char *name, size_t name_length, zval *value);
__attribute__((visibility("default"))) void
zend_update_property_null(zend_class_entry *scope, zend_object *object,
                          const char *name, size_t name_length);
__attribute__((visibility("default"))) void
zend_update_property_bool(zend_class_entry *scope, zend_object *object,
                          const char *name, size_t name_length,
                          zend_long value);
__attribute__((visibility("default"))) void
zend_update_property_long(zend_class_entry *scope, zend_object *object,
                          const char *name, size_t name_length,
                          zend_long value);
__attribute__((visibility("default"))) void
zend_update_property_double(zend_class_entry *scope, zend_object *object,
                            const char *name, size_t name_length, double value);
__attribute__((visibility("default"))) void
zend_update_property_str(zend_class_entry *scope, zend_object *object,
                         const char *name, size_t name_length,
                         zend_string *value);
__attribute__((visibility("default"))) void
zend_update_property_string(zend_class_entry *scope, zend_object *object,
                            const char *name, size_t name_length,
                            const char *value);
__attribute__((visibility("default"))) void
zend_update_property_stringl(zend_class_entry *scope, zend_object *object,
                             const char *name, size_t name_length,
                             const char *value, size_t value_length);
__attribute__((visibility("default"))) void
zend_unset_property(zend_class_entry *scope, zend_object *object,
                    const char *name, size_t name_length);
__attribute__((visibility("default"))) zend_result
zend_update_static_property_ex(zend_class_entry *scope, zend_string *name,
                               zval *value);
__attribute__((visibility("default"))) zend_result zend_update_static_property(
    zend_class_entry *scope, const char *name, size_t name_length, zval *value);
__attribute__((visibility("default"))) zend_result
zend_update_static_property_null(zend_class_entry *scope, const char *name,
                                 size_t name_length);
__attribute__((visibility("default"))) zend_result
zend_update_static_property_bool(zend_class_entry *scope, const char *name,
                                 size_t name_length, zend_long value);
__attribute__((visibility("default"))) zend_result
zend_update_static_property_long(zend_class_entry *scope, const char *name,
                                 size_t name_length, zend_long value);
__attribute__((visibility("default"))) zend_result
zend_update_static_property_double(zend_class_entry *scope, const char *name,
                                   size_t name_length, double value);
__attribute__((visibility("default"))) zend_result
zend_update_static_property_string(zend_class_entry *scope, const char *name,
                                   size_t name_length, const char *value);
__attribute__((visibility("default"))) zend_result
zend_update_static_property_stringl(zend_class_entry *scope, const char *name,
                                    size_t name_length, const char *value,
                                    size_t value_length);
__attribute__((visibility("default"))) zval *
zend_read_property_ex(zend_class_entry *scope, zend_object *object,
                      zend_string *name, _Bool silent, zval *rv);
__attribute__((visibility("default"))) zval *
zend_read_property(zend_class_entry *scope, zend_object *object,
                   const char *name, size_t name_length, _Bool silent,
                   zval *rv);
__attribute__((visibility("default"))) zval *
zend_read_static_property_ex(zend_class_entry *scope, zend_string *name,
                             _Bool silent);
__attribute__((visibility("default"))) zval *
zend_read_static_property(zend_class_entry *scope, const char *name,
                          size_t name_length, _Bool silent);
__attribute__((visibility("default"))) const char *
zend_get_type_by_const(int type);
__attribute__((visibility("default"))) void object_init(zval *arg);
__attribute__((visibility("default"))) zend_result
object_init_ex(zval *arg, zend_class_entry *ce);
__attribute__((visibility("default"))) zend_result object_init_with_constructor(
    zval *arg, zend_class_entry *class_type, uint32_t param_count, zval *params,
    HashTable *named_params);
__attribute__((visibility("default"))) zend_result object_and_properties_init(
    zval *arg, zend_class_entry *ce, HashTable *properties);
__attribute__((visibility("default"))) void
object_properties_init(zend_object *object, zend_class_entry *class_type);
__attribute__((visibility("default"))) void
object_properties_init_ex(zend_object *object, HashTable *properties);
__attribute__((visibility("default"))) void
object_properties_load(zend_object *object, HashTable *properties);
__attribute__((visibility("default"))) void
zend_merge_properties(zval *obj, HashTable *properties);
__attribute__((visibility("default"))) void
add_assoc_long_ex(zval *arg, const char *key, size_t key_len, zend_long n);
__attribute__((visibility("default"))) void
add_assoc_null_ex(zval *arg, const char *key, size_t key_len);
__attribute__((visibility("default"))) void
add_assoc_bool_ex(zval *arg, const char *key, size_t key_len, _Bool b);
__attribute__((visibility("default"))) void
add_assoc_resource_ex(zval *arg, const char *key, size_t key_len,
                      zend_resource *r);
__attribute__((visibility("default"))) void
add_assoc_double_ex(zval *arg, const char *key, size_t key_len, double d);
__attribute__((visibility("default"))) void
add_assoc_str_ex(zval *arg, const char *key, size_t key_len, zend_string *str);
__attribute__((visibility("default"))) void
add_assoc_string_ex(zval *arg, const char *key, size_t key_len,
                    const char *str);
__attribute__((visibility("default"))) void
add_assoc_stringl_ex(zval *arg, const char *key, size_t key_len,
                     const char *str, size_t length);
__attribute__((visibility("default"))) void
add_assoc_array_ex(zval *arg, const char *key, size_t key_len, zend_array *arr);
__attribute__((visibility("default"))) void
add_assoc_object_ex(zval *arg, const char *key, size_t key_len,
                    zend_object *obj);
__attribute__((visibility("default"))) void
add_assoc_reference_ex(zval *arg, const char *key, size_t key_len,
                       zend_reference *ref);
__attribute__((visibility("default"))) void
add_assoc_zval_ex(zval *arg, const char *key, size_t key_len, zval *value);
static inline void add_assoc_long(zval *arg, const char *key, zend_long n) {
  add_assoc_long_ex(arg, key, strlen(key), n);
}
static inline void add_assoc_null(zval *arg, const char *key) {
  add_assoc_null_ex(arg, key, strlen(key));
}
static inline void add_assoc_bool(zval *arg, const char *key, _Bool b) {
  add_assoc_bool_ex(arg, key, strlen(key), b);
}
static inline void add_assoc_resource(zval *arg, const char *key,
                                      zend_resource *r) {
  add_assoc_resource_ex(arg, key, strlen(key), r);
}
static inline void add_assoc_double(zval *arg, const char *key, double d) {
  add_assoc_double_ex(arg, key, strlen(key), d);
}
static inline void add_assoc_str(zval *arg, const char *key, zend_string *str) {
  add_assoc_str_ex(arg, key, strlen(key), str);
}
static inline void add_assoc_string(zval *arg, const char *key,
                                    const char *str) {
  add_assoc_string_ex(arg, key, strlen(key), str);
}
static inline void add_assoc_stringl(zval *arg, const char *key,
                                     const char *str, size_t length) {
  add_assoc_stringl_ex(arg, key, strlen(key), str, length);
}
static inline void add_assoc_array(zval *arg, const char *key,
                                   zend_array *arr) {
  add_assoc_array_ex(arg, key, strlen(key), arr);
}
static inline void add_assoc_object(zval *arg, const char *key,
                                    zend_object *obj) {
  add_assoc_object_ex(arg, key, strlen(key), obj);
}
static inline void add_assoc_reference(zval *arg, const char *key,
                                       zend_reference *ref) {
  add_assoc_reference_ex(arg, key, strlen(key), ref);
}
static inline void add_assoc_zval(zval *arg, const char *key, zval *value) {
  add_assoc_zval_ex(arg, key, strlen(key), value);
}
__attribute__((visibility("default"))) void
add_index_long(zval *arg, zend_ulong index, zend_long n);
__attribute__((visibility("default"))) void add_index_null(zval *arg,
                                                           zend_ulong index);
__attribute__((visibility("default"))) void
add_index_bool(zval *arg, zend_ulong index, _Bool b);
__attribute__((visibility("default"))) void
add_index_resource(zval *arg, zend_ulong index, zend_resource *r);
__attribute__((visibility("default"))) void
add_index_double(zval *arg, zend_ulong index, double d);
__attribute__((visibility("default"))) void
add_index_str(zval *arg, zend_ulong index, zend_string *str);
__attribute__((visibility("default"))) void
add_index_string(zval *arg, zend_ulong index, const char *str);
__attribute__((visibility("default"))) void
add_index_stringl(zval *arg, zend_ulong index, const char *str, size_t length);
__attribute__((visibility("default"))) void
add_index_array(zval *arg, zend_ulong index, zend_array *arr);
__attribute__((visibility("default"))) void
add_index_object(zval *arg, zend_ulong index, zend_object *obj);
__attribute__((visibility("default"))) void
add_index_reference(zval *arg, zend_ulong index, zend_reference *ref);
static inline zend_result add_index_zval(zval *arg, zend_ulong index,
                                         zval *value) {
  return zend_hash_index_update((*(arg)).value.arr, index, value) ? SUCCESS
                                                                  : FAILURE;
}
__attribute__((visibility("default"))) zend_result
add_next_index_long(zval *arg, zend_long n);
__attribute__((visibility("default"))) zend_result
add_next_index_null(zval *arg);
__attribute__((visibility("default"))) zend_result
add_next_index_bool(zval *arg, _Bool b);
__attribute__((visibility("default"))) zend_result
add_next_index_resource(zval *arg, zend_resource *r);
__attribute__((visibility("default"))) zend_result
add_next_index_double(zval *arg, double d);
__attribute__((visibility("default"))) zend_result
add_next_index_str(zval *arg, zend_string *str);
__attribute__((visibility("default"))) zend_result
add_next_index_string(zval *arg, const char *str);
__attribute__((visibility("default"))) zend_result
add_next_index_stringl(zval *arg, const char *str, size_t length);
__attribute__((visibility("default"))) zend_result
add_next_index_array(zval *arg, zend_array *arr);
__attribute__((visibility("default"))) zend_result
add_next_index_object(zval *arg, zend_object *obj);
__attribute__((visibility("default"))) zend_result
add_next_index_reference(zval *arg, zend_reference *ref);
static inline zend_result add_next_index_zval(zval *arg, zval *value) {
  return zend_hash_next_index_insert((*(arg)).value.arr, value) ? SUCCESS
                                                                : FAILURE;
}
__attribute__((visibility("default"))) zend_result
array_set_zval_key(HashTable *ht, zval *key, zval *value);
__attribute__((visibility("default"))) void
add_property_long_ex(zval *arg, const char *key, size_t key_len, zend_long l);
__attribute__((visibility("default"))) void
add_property_null_ex(zval *arg, const char *key, size_t key_len);
__attribute__((visibility("default"))) void
add_property_bool_ex(zval *arg, const char *key, size_t key_len, zend_long b);
__attribute__((visibility("default"))) void
add_property_resource_ex(zval *arg, const char *key, size_t key_len,
                         zend_resource *r);
__attribute__((visibility("default"))) void
add_property_double_ex(zval *arg, const char *key, size_t key_len, double d);
__attribute__((visibility("default"))) void
add_property_str_ex(zval *arg, const char *key, size_t key_len,
                    zend_string *str);
__attribute__((visibility("default"))) void
add_property_string_ex(zval *arg, const char *key, size_t key_len,
                       const char *str);
__attribute__((visibility("default"))) void
add_property_stringl_ex(zval *arg, const char *key, size_t key_len,
                        const char *str, size_t length);
__attribute__((visibility("default"))) void
add_property_array_ex(zval *arg, const char *key, size_t key_len,
                      zend_array *arr);
__attribute__((visibility("default"))) void
add_property_object_ex(zval *arg, const char *key, size_t key_len,
                       zend_object *obj);
__attribute__((visibility("default"))) void
add_property_reference_ex(zval *arg, const char *key, size_t key_len,
                          zend_reference *ref);
__attribute__((visibility("default"))) void
add_property_zval_ex(zval *arg, const char *key, size_t key_len, zval *value);
static inline void add_property_long(zval *arg, const char *key, zend_long n) {
  add_property_long_ex(arg, key, strlen(key), n);
}
static inline void add_property_null(zval *arg, const char *key) {
  add_property_null_ex(arg, key, strlen(key));
}
static inline void add_property_bool(zval *arg, const char *key, _Bool b) {
  add_property_bool_ex(arg, key, strlen(key), b);
}
static inline void add_property_resource(zval *arg, const char *key,
                                         zend_resource *r) {
  add_property_resource_ex(arg, key, strlen(key), r);
}
static inline void add_property_double(zval *arg, const char *key, double d) {
  add_property_double_ex(arg, key, strlen(key), d);
}
static inline void add_property_str(zval *arg, const char *key,
                                    zend_string *str) {
  add_property_str_ex(arg, key, strlen(key), str);
}
static inline void add_property_string(zval *arg, const char *key,
                                       const char *str) {
  add_property_string_ex(arg, key, strlen(key), str);
}
static inline void add_property_stringl(zval *arg, const char *key,
                                        const char *str, size_t length) {
  add_property_stringl_ex(arg, key, strlen(key), str, length);
}
static inline void add_property_array(zval *arg, const char *key,
                                      zend_array *arr) {
  add_property_array_ex(arg, key, strlen(key), arr);
}
static inline void add_property_object(zval *arg, const char *key,
                                       zend_object *obj) {
  add_property_object_ex(arg, key, strlen(key), obj);
}
static inline void add_property_reference(zval *arg, const char *key,
                                          zend_reference *ref) {
  add_property_reference_ex(arg, key, strlen(key), ref);
}
static inline void add_property_zval(zval *arg, const char *key, zval *value) {
  add_property_zval_ex(arg, key, strlen(key), value);
}
__attribute__((visibility("default"))) zend_result _call_user_function_impl(
    zval *object, zval *function_name, zval *retval_ptr, uint32_t param_count,
    zval params[], HashTable *named_params);
__attribute__((visibility("default"))) zend_result zend_fcall_info_init(
    zval *callable, uint32_t check_flags, zend_fcall_info *fci,
    zend_fcall_info_cache *fcc, zend_string **callable_name, char **error);
__attribute__((visibility("default"))) void
zend_fcall_info_args_clear(zend_fcall_info *fci, _Bool free_mem);
__attribute__((visibility("default"))) void
zend_fcall_info_args_save(zend_fcall_info *fci, uint32_t *param_count,
                          zval **params);
__attribute__((visibility("default"))) void
zend_fcall_info_args_restore(zend_fcall_info *fci, uint32_t param_count,
                             zval *params);
__attribute__((visibility("default"))) zend_result
zend_fcall_info_args(zend_fcall_info *fci, zval *args);
__attribute__((visibility("default"))) zend_result
zend_fcall_info_args_ex(zend_fcall_info *fci, zend_function *func, zval *args);
__attribute__((visibility("default"))) void
zend_fcall_info_argp(zend_fcall_info *fci, uint32_t argc, zval *argv);
__attribute__((visibility("default"))) void
zend_fcall_info_argv(zend_fcall_info *fci, uint32_t argc, va_list *argv);
__attribute__((visibility("default"))) void
zend_fcall_info_argn(zend_fcall_info *fci, uint32_t argc, ...);
__attribute__((visibility("default"))) zend_result zend_fcall_info_call(
    zend_fcall_info *fci, zend_fcall_info_cache *fcc, zval *retval, zval *args);
static inline _Bool zend_fcc_equals(const zend_fcall_info_cache *a,
                                    const zend_fcall_info_cache *b) {
  if (__builtin_expect(!!((a->function_handler->common.fn_flags & (1 << 18)) &&
                          (b->function_handler->common.fn_flags & (1 << 18))),
                       0)) {
    return a->object == b->object && a->calling_scope == b->calling_scope &&
           a->closure == b->closure &&
           zend_string_equals(a->function_handler->common.function_name,
                              b->function_handler->common.function_name);
  }
  return a->function_handler == b->function_handler && a->object == b->object &&
         a->calling_scope == b->calling_scope && a->closure == b->closure;
}
static inline void zend_fcc_addref(zend_fcall_info_cache *fcc) {
  ((void)sizeof(
       (((*fcc).function_handler != ((void *)0)) &&
        "FCC Not initialized, possibly refetch trampoline freed by ZPP?")
           ? 1
           : 0),
   __extension__({
     if (((*fcc).function_handler != ((void *)0)) &&
         "FCC Not initialized, possibly refetch trampoline freed by ZPP?")
       ;
     else
       __assert_fail("((*fcc).function_handler != ((void *)0)) && \"FCC Not "
                     "initialized, possibly refetch trampoline freed by ZPP?\"",
                     "Zend/zend_API.h", 774, __extension__ __PRETTY_FUNCTION__);
   }));
  if (__builtin_expect(
          !!(fcc->function_handler == &(executor_globals.trampoline)), 0)) {
    zend_function *copy = (zend_function *)_emalloc(
        (sizeof(zend_function)), "Zend/zend_API.h", 777, ((void *)0), 0);
    memcpy(copy, fcc->function_handler, sizeof(zend_function));
    fcc->function_handler->common.function_name = ((void *)0);
    fcc->function_handler = copy;
  }
  if (fcc->object) {
    zend_gc_addref(&(fcc->object)->gc);
  }
  if (fcc->closure) {
    zend_gc_addref(&(fcc->closure)->gc);
  }
}
static inline void zend_fcc_dup(zend_fcall_info_cache *dest,
                                const zend_fcall_info_cache *src) {
  memcpy(dest, src, sizeof(zend_fcall_info_cache));
  zend_fcc_addref(dest);
}
static inline void zend_fcc_dtor(zend_fcall_info_cache *fcc) {
  ((void)sizeof((fcc->function_handler) ? 1 : 0), __extension__({
     if (fcc->function_handler)
       ;
     else
       __assert_fail("fcc->function_handler", "Zend/zend_API.h", 799,
                     __extension__ __PRETTY_FUNCTION__);
   }));
  if (fcc->object) {
    zend_object_release(fcc->object);
  }
  zend_release_fcall_info_cache(fcc);
  if (fcc->closure) {
    zend_object_release(fcc->closure);
  }
  *fcc = (zend_fcall_info_cache){0};
}
__attribute__((visibility("default"))) void
zend_get_callable_zval_from_fcc(const zend_fcall_info_cache *fcc,
                                zval *callable);
static inline void zend_get_gc_buffer_add_fcc(zend_get_gc_buffer *gc_buffer,
                                              zend_fcall_info_cache *fcc) {
  ((void)sizeof((((*fcc).function_handler != ((void *)0))) ? 1 : 0),
   __extension__({
     if (((*fcc).function_handler != ((void *)0)))
       ;
     else
       __assert_fail("((*fcc).function_handler != ((void *)0))",
                     "Zend/zend_API.h", 816, __extension__ __PRETTY_FUNCTION__);
   }));
  if (fcc->object) {
    zend_get_gc_buffer_add_obj(gc_buffer, fcc->object);
  }
  if (fcc->closure) {
    zend_get_gc_buffer_add_obj(gc_buffer, fcc->closure);
  }
}
__attribute__((visibility("default"))) zend_result
zend_call_function(zend_fcall_info *fci, zend_fcall_info_cache *fci_cache);
static inline zend_result zend_call_function_with_return_value(
    zend_fcall_info *fci, zend_fcall_info_cache *fci_cache, zval *retval) {
  ((void)sizeof(
       (retval && "Use zend_call_function() directly if not providing a retval")
           ? 1
           : 0),
   __extension__({
     if (retval &&
         "Use zend_call_function() directly if not providing a retval")
       ;
     else
       __assert_fail("retval && \"Use zend_call_function() directly if not "
                     "providing a retval\"",
                     "Zend/zend_API.h", 834, __extension__ __PRETTY_FUNCTION__);
   }));
  fci->retval = retval;
  return zend_call_function(fci, fci_cache);
}
__attribute__((visibility("default"))) void
zend_call_known_function(zend_function *fn, zend_object *object,
                         zend_class_entry *called_scope, zval *retval_ptr,
                         uint32_t param_count, zval *params,
                         HashTable *named_params);
static inline void zend_call_known_fcc(const zend_fcall_info_cache *fcc,
                                       zval *retval_ptr, uint32_t param_count,
                                       zval *params, HashTable *named_params) {
  zend_function *func = fcc->function_handler;
  if (__builtin_expect(!!(func->common.fn_flags & (1 << 18)), 0)) {
    func = (zend_function *)_emalloc((sizeof(zend_function)), "Zend/zend_API.h",
                                     853, ((void *)0), 0);
    memcpy(func, fcc->function_handler, sizeof(zend_function));
    zend_string_addref(func->op_array.function_name);
  }
  zend_call_known_function(func, fcc->object, fcc->called_scope, retval_ptr,
                           param_count, params, named_params);
}
static inline void zend_call_known_instance_method(zend_function *fn,
                                                   zend_object *object,
                                                   zval *retval_ptr,
                                                   uint32_t param_count,
                                                   zval *params) {
  zend_call_known_function(fn, object, object->ce, retval_ptr, param_count,
                           params, ((void *)0));
}
static inline void zend_call_known_instance_method_with_0_params(
    zend_function *fn, zend_object *object, zval *retval_ptr) {
  zend_call_known_instance_method(fn, object, retval_ptr, 0, ((void *)0));
}
static inline void zend_call_known_instance_method_with_1_params(
    zend_function *fn, zend_object *object, zval *retval_ptr, zval *param) {
  zend_call_known_instance_method(fn, object, retval_ptr, 1, param);
}
__attribute__((visibility("default"))) void
zend_call_known_instance_method_with_2_params(zend_function *fn,
                                              zend_object *object,
                                              zval *retval_ptr, zval *param1,
                                              zval *param2);
__attribute__((visibility("default"))) zend_result
zend_call_method_if_exists(zend_object *object, zend_string *method_name,
                           zval *retval, uint32_t param_count, zval *params);
__attribute__((visibility("default"))) zend_result
zend_set_hash_symbol(zval *symbol, const char *name, size_t name_length,
                     _Bool is_ref, int num_symbol_tables, ...);
__attribute__((visibility("default"))) zend_result
zend_delete_global_variable(zend_string *name);
__attribute__((visibility("default"))) zend_array *
zend_rebuild_symbol_table(void);
__attribute__((visibility("default"))) void
zend_attach_symbol_table(zend_execute_data *execute_data);
__attribute__((visibility("default"))) void
zend_detach_symbol_table(zend_execute_data *execute_data);
__attribute__((visibility("default"))) zend_result
zend_set_local_var(zend_string *name, zval *value, _Bool force);
__attribute__((visibility("default"))) zend_result
zend_set_local_var_str(const char *name, size_t len, zval *value, _Bool force);
static inline zend_result zend_forbid_dynamic_call(void) {
  zend_execute_data *ex = (executor_globals.current_execute_data);
  ((void)sizeof((ex != ((void *)0) && ex->func != ((void *)0)) ? 1 : 0),
   __extension__({
     if (ex != ((void *)0) && ex->func != ((void *)0))
       ;
     else
       __assert_fail("ex != ((void *)0) && ex->func != ((void *)0)",
                     "Zend/zend_API.h", 903, __extension__ __PRETTY_FUNCTION__);
   }));
  if (((ex)->This).u1.type_info & (1 << 25)) {
    zend_string *function_or_method_name = get_active_function_or_method_name();
    zend_throw_error(((void *)0), "Cannot call %.*s() dynamically",
                     (int)(function_or_method_name)->len,
                     (function_or_method_name)->val);
    zend_string_release(function_or_method_name);
    return FAILURE;
  }
  return SUCCESS;
}
__attribute__((visibility("default"))) __attribute__((cold)) const char *
zend_get_object_type_case(const zend_class_entry *ce, _Bool upper_case);
static inline const char *zend_get_object_type(const zend_class_entry *ce) {
  return zend_get_object_type_case(ce, 0);
}
static inline const char *zend_get_object_type_uc(const zend_class_entry *ce) {
  return zend_get_object_type_case(ce, 1);
}
__attribute__((visibility("default"))) _Bool
zend_is_iterable(const zval *iterable);
__attribute__((visibility("default"))) _Bool
zend_is_countable(const zval *countable);
__attribute__((visibility("default"))) zend_result
zend_get_default_from_internal_arg_info(zval *default_value_zval,
                                        zend_internal_arg_info *arg_info);

static inline _Bool zend_str_has_nul_byte(const zend_string *str) {
  return (str)->len != strlen((str)->val);
}
static inline _Bool zend_char_has_nul_byte(const char *s, size_t known_length) {
  return known_length != strlen(s);
}
__attribute__((visibility("default"))) zend_result
zend_try_assign_typed_ref_ex(zend_reference *ref, zval *zv, _Bool strict);
__attribute__((visibility("default"))) zend_result
zend_try_assign_typed_ref(zend_reference *ref, zval *zv);
__attribute__((visibility("default"))) zend_result
zend_try_assign_typed_ref_null(zend_reference *ref);
__attribute__((visibility("default"))) zend_result
zend_try_assign_typed_ref_bool(zend_reference *ref, _Bool val);
__attribute__((visibility("default"))) zend_result
zend_try_assign_typed_ref_long(zend_reference *ref, zend_long lval);
__attribute__((visibility("default"))) zend_result
zend_try_assign_typed_ref_double(zend_reference *ref, double dval);
__attribute__((visibility("default"))) zend_result
zend_try_assign_typed_ref_empty_string(zend_reference *ref);
__attribute__((visibility("default"))) zend_result
zend_try_assign_typed_ref_str(zend_reference *ref, zend_string *str);
__attribute__((visibility("default"))) zend_result
zend_try_assign_typed_ref_string(zend_reference *ref, const char *string);
__attribute__((visibility("default"))) zend_result
zend_try_assign_typed_ref_stringl(zend_reference *ref, const char *string,
                                  size_t len);
__attribute__((visibility("default"))) zend_result
zend_try_assign_typed_ref_arr(zend_reference *ref, zend_array *arr);
__attribute__((visibility("default"))) zend_result
zend_try_assign_typed_ref_res(zend_reference *ref, zend_resource *res);
__attribute__((visibility("default"))) zend_result
zend_try_assign_typed_ref_zval(zend_reference *ref, zval *zv);
__attribute__((visibility("default"))) zend_result
zend_try_assign_typed_ref_zval_ex(zend_reference *ref, zval *zv, _Bool strict);
static inline zval *zend_try_array_init_size(zval *zv, uint32_t size) {
  zend_array *arr = _zend_new_array(size);
  if (__builtin_expect(!!((zval_get_type(&(*(zv))) == 10)), 1)) {
    zend_reference *ref = (*(zv)).value.ref;
    if (__builtin_expect(!!(((ref)->sources.ptr != ((void *)0))), 0)) {
      if (zend_try_assign_typed_ref_arr(ref, arr) == FAILURE) {
        return ((void *)0);
      }
      return &ref->val;
    }
    zv = &ref->val;
  }
  zval_ptr_safe_dtor(zv);
  do {
    zend_array *__arr = (arr);
    zval *__z = (zv);
    (*(__z)).value.arr = __arr;
    (*(__z)).u1.type_info = (7 | ((1 << 0) << 8) | ((1 << 1) << 8));
  } while (0);
  return zv;
}
static inline zval *zend_try_array_init(zval *zv) {
  return zend_try_array_init_size(zv, 0);
}
typedef enum _zend_expected_type {
  Z_EXPECTED_LONG,
  Z_EXPECTED_LONG_OR_NULL,
  Z_EXPECTED_BOOL,
  Z_EXPECTED_BOOL_OR_NULL,
  Z_EXPECTED_STRING,
  Z_EXPECTED_STRING_OR_NULL,
  Z_EXPECTED_ARRAY,
  Z_EXPECTED_ARRAY_OR_NULL,
  Z_EXPECTED_ARRAY_OR_LONG,
  Z_EXPECTED_ARRAY_OR_LONG_OR_NULL,
  Z_EXPECTED_ITERABLE,
  Z_EXPECTED_ITERABLE_OR_NULL,
  Z_EXPECTED_FUNC,
  Z_EXPECTED_FUNC_OR_NULL,
  Z_EXPECTED_RESOURCE,
  Z_EXPECTED_RESOURCE_OR_NULL,
  Z_EXPECTED_PATH,
  Z_EXPECTED_PATH_OR_NULL,
  Z_EXPECTED_OBJECT,
  Z_EXPECTED_OBJECT_OR_NULL,
  Z_EXPECTED_DOUBLE,
  Z_EXPECTED_DOUBLE_OR_NULL,
  Z_EXPECTED_NUMBER,
  Z_EXPECTED_NUMBER_OR_NULL,
  Z_EXPECTED_NUMBER_OR_STRING,
  Z_EXPECTED_NUMBER_OR_STRING_OR_NULL,
  Z_EXPECTED_ARRAY_OR_STRING,
  Z_EXPECTED_ARRAY_OR_STRING_OR_NULL,
  Z_EXPECTED_STRING_OR_LONG,
  Z_EXPECTED_STRING_OR_LONG_OR_NULL,
  Z_EXPECTED_OBJECT_OR_CLASS_NAME,
  Z_EXPECTED_OBJECT_OR_CLASS_NAME_OR_NULL,
  Z_EXPECTED_OBJECT_OR_STRING,
  Z_EXPECTED_OBJECT_OR_STRING_OR_NULL,
  Z_EXPECTED_LAST
} zend_expected_type;
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_wrong_parameters_none_error(void);
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_wrong_parameters_count_error(uint32_t min_num_args, uint32_t max_num_args);
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_wrong_parameter_error(int error_code, uint32_t num, char *name,
                           zend_expected_type expected_type, zval *arg);
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_wrong_parameter_type_error(uint32_t num, zend_expected_type expected_type,
                                zval *arg);
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_wrong_parameter_class_error(uint32_t num, const char *name, zval *arg);
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_wrong_parameter_class_or_null_error(uint32_t num, const char *name,
                                         zval *arg);
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_wrong_parameter_class_or_long_error(uint32_t num, const char *name,
                                         zval *arg);
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_wrong_parameter_class_or_long_or_null_error(uint32_t num, const char *name,
                                                 zval *arg);
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_wrong_parameter_class_or_string_error(uint32_t num, const char *name,
                                           zval *arg);
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_wrong_parameter_class_or_string_or_null_error(uint32_t num,
                                                   const char *name, zval *arg);
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_wrong_callback_error(uint32_t num, char *error);
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_wrong_callback_or_null_error(uint32_t num, char *error);
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_unexpected_extra_named_error(void);
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_argument_error_variadic(zend_class_entry *error_ce, uint32_t arg_num,
                             const char *format, va_list va);
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_argument_error(zend_class_entry *error_ce, uint32_t arg_num,
                    const char *format, ...);
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_argument_type_error(uint32_t arg_num, const char *format, ...);
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_argument_value_error(uint32_t arg_num, const char *format, ...);
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_argument_must_not_be_empty_error(uint32_t arg_num);
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_class_redeclaration_error(int type, zend_class_entry *old_ce);
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_class_redeclaration_error_ex(int type, zend_string *new_name,
                                  zend_class_entry *old_ce);
__attribute__((visibility("default"))) _Bool zend_parse_arg_class(
    zval *arg, zend_class_entry **pce, uint32_t num, _Bool check_null);
__attribute__((visibility("default"))) _Bool
zend_parse_arg_bool_slow(const zval *arg, _Bool *dest, uint32_t arg_num);
__attribute__((visibility("default"))) _Bool
zend_parse_arg_bool_weak(const zval *arg, _Bool *dest, uint32_t arg_num);
__attribute__((visibility("default"))) _Bool
zend_parse_arg_long_slow(const zval *arg, zend_long *dest, uint32_t arg_num);
__attribute__((visibility("default"))) _Bool
zend_parse_arg_long_weak(const zval *arg, zend_long *dest, uint32_t arg_num);
__attribute__((visibility("default"))) _Bool
zend_parse_arg_double_slow(const zval *arg, double *dest, uint32_t arg_num);
__attribute__((visibility("default"))) _Bool
zend_parse_arg_double_weak(const zval *arg, double *dest, uint32_t arg_num);
__attribute__((visibility("default"))) _Bool
zend_parse_arg_str_slow(zval *arg, zend_string **dest, uint32_t arg_num);
__attribute__((visibility("default"))) _Bool
zend_parse_arg_str_weak(zval *arg, zend_string **dest, uint32_t arg_num);
__attribute__((visibility("default"))) _Bool
zend_parse_arg_number_slow(zval *arg, zval **dest, uint32_t arg_num);
__attribute__((visibility("default"))) _Bool
zend_parse_arg_number_or_str_slow(zval *arg, zval **dest, uint32_t arg_num);
__attribute__((visibility("default"))) _Bool zend_parse_arg_str_or_long_slow(
    zval *arg, zend_string **dest_str, zend_long *dest_long, uint32_t arg_num);
__attribute__((visibility("default"))) _Bool
zend_flf_parse_arg_bool_slow(const zval *arg, _Bool *dest, uint32_t arg_num);
__attribute__((visibility("default"))) _Bool
zend_flf_parse_arg_str_slow(zval *arg, zend_string **dest, uint32_t arg_num);
__attribute__((visibility("default"))) _Bool zend_flf_parse_arg_long_slow(
    const zval *arg, zend_long *dest, uint32_t arg_num);
static inline _Bool zend_parse_arg_bool_ex(const zval *arg, _Bool *dest,
                                           _Bool *is_null, _Bool check_null,
                                           uint32_t arg_num, _Bool frameless) {
  if (check_null) {
    *is_null = 0;
  }
  if (__builtin_expect(!!(zval_get_type(&(*(arg))) == 3), 1)) {
    *dest = 1;
  } else if (__builtin_expect(!!(zval_get_type(&(*(arg))) == 2), 1)) {
    *dest = 0;
  } else if (check_null && zval_get_type(&(*(arg))) == 1) {
    *is_null = 1;
    *dest = 0;
  } else {
    if (frameless) {
      return zend_flf_parse_arg_bool_slow(arg, dest, arg_num);
    } else {
      return zend_parse_arg_bool_slow(arg, dest, arg_num);
    }
  }
  return 1;
}
static inline _Bool zend_parse_arg_bool(const zval *arg, _Bool *dest,
                                        _Bool *is_null, _Bool check_null,
                                        uint32_t arg_num) {
  return zend_parse_arg_bool_ex(arg, dest, is_null, check_null, arg_num, 0);
}
static inline _Bool zend_parse_arg_long_ex(zval *arg, zend_long *dest,
                                           _Bool *is_null, _Bool check_null,
                                           uint32_t arg_num, _Bool frameless) {
  if (check_null) {
    *is_null = 0;
  }
  if (__builtin_expect(!!(zval_get_type(&(*(arg))) == 4), 1)) {
    *dest = (*(arg)).value.lval;
  } else if (check_null && zval_get_type(&(*(arg))) == 1) {
    *is_null = 1;
    *dest = 0;
  } else {
    if (frameless) {
      return zend_flf_parse_arg_long_slow(arg, dest, arg_num);
    } else {
      return zend_parse_arg_long_slow(arg, dest, arg_num);
    }
  }
  return 1;
}
static inline _Bool zend_parse_arg_long(zval *arg, zend_long *dest,
                                        _Bool *is_null, _Bool check_null,
                                        uint32_t arg_num) {
  return zend_parse_arg_long_ex(arg, dest, is_null, check_null, arg_num, 0);
}
static inline _Bool zend_parse_arg_double(const zval *arg, double *dest,
                                          _Bool *is_null, _Bool check_null,
                                          uint32_t arg_num) {
  if (check_null) {
    *is_null = 0;
  }
  if (__builtin_expect(!!(zval_get_type(&(*(arg))) == 5), 1)) {
    *dest = (*(arg)).value.dval;
  } else if (check_null && zval_get_type(&(*(arg))) == 1) {
    *is_null = 1;
    *dest = 0.0;
  } else {
    return zend_parse_arg_double_slow(arg, dest, arg_num);
  }
  return 1;
}
static inline _Bool zend_parse_arg_number(zval *arg, zval **dest,
                                          _Bool check_null, uint32_t arg_num) {
  if (__builtin_expect(
          !!(zval_get_type(&(*(arg))) == 4 || zval_get_type(&(*(arg))) == 5),
          1)) {
    *dest = arg;
  } else if (check_null &&
             __builtin_expect(!!(zval_get_type(&(*(arg))) == 1), 1)) {
    *dest = ((void *)0);
  } else {
    return zend_parse_arg_number_slow(arg, dest, arg_num);
  }
  return 1;
}
static inline _Bool zend_parse_arg_number_or_str(zval *arg, zval **dest,
                                                 _Bool check_null,
                                                 uint32_t arg_num) {
  if (__builtin_expect(!!(zval_get_type(&(*(arg))) == 4 ||
                          zval_get_type(&(*(arg))) == 5 ||
                          zval_get_type(&(*(arg))) == 6),
                       1)) {
    *dest = arg;
  } else if (check_null &&
             __builtin_expect(!!(zval_get_type(&(*(arg))) == 1), 1)) {
    *dest = ((void *)0);
  } else {
    return zend_parse_arg_number_or_str_slow(arg, dest, arg_num);
  }
  return 1;
}
static inline _Bool zend_parse_arg_str_ex(zval *arg, zend_string **dest,
                                          _Bool check_null, uint32_t arg_num,
                                          _Bool frameless) {
  if (__builtin_expect(!!(zval_get_type(&(*(arg))) == 6), 1)) {
    *dest = (*(arg)).value.str;
  } else if (check_null && zval_get_type(&(*(arg))) == 1) {
    *dest = ((void *)0);
  } else {
    if (frameless) {
      return zend_flf_parse_arg_str_slow(arg, dest, arg_num);
    } else {
      return zend_parse_arg_str_slow(arg, dest, arg_num);
    }
  }
  return 1;
}
static inline _Bool zend_parse_arg_str(zval *arg, zend_string **dest,
                                       _Bool check_null, uint32_t arg_num) {
  return zend_parse_arg_str_ex(arg, dest, check_null, arg_num, 0);
}
static inline _Bool zend_parse_arg_string(zval *arg, char **dest,
                                          size_t *dest_len, _Bool check_null,
                                          uint32_t arg_num) {
  zend_string *str;
  if (!zend_parse_arg_str(arg, &str, check_null, arg_num)) {
    return 0;
  }
  if (check_null && __builtin_expect(!!(!str), 0)) {
    *dest = ((void *)0);
    *dest_len = 0;
  } else {
    *dest = (str)->val;
    *dest_len = (str)->len;
  }
  return 1;
}
static inline _Bool zend_parse_arg_path_str(zval *arg, zend_string **dest,
                                            _Bool check_null,
                                            uint32_t arg_num) {
  if (!zend_parse_arg_str(arg, dest, check_null, arg_num) ||
      (*dest &&
       __builtin_expect(!!(zend_char_has_nul_byte((*dest)->val, (*dest)->len)),
                        0))) {
    return 0;
  }
  return 1;
}
static inline _Bool zend_parse_arg_path(zval *arg, char **dest,
                                        size_t *dest_len, _Bool check_null,
                                        uint32_t arg_num) {
  zend_string *str;
  if (!zend_parse_arg_path_str(arg, &str, check_null, arg_num)) {
    return 0;
  }
  if (check_null && __builtin_expect(!!(!str), 0)) {
    *dest = ((void *)0);
    *dest_len = 0;
  } else {
    *dest = (str)->val;
    *dest_len = (str)->len;
  }
  return 1;
}
static inline _Bool zend_parse_arg_iterable(zval *arg, zval **dest,
                                            _Bool check_null) {
  if (__builtin_expect(!!(zend_is_iterable(arg)), 1)) {
    *dest = arg;
    return 1;
  }
  if (check_null && __builtin_expect(!!(zval_get_type(&(*(arg))) == 1), 1)) {
    *dest = ((void *)0);
    return 1;
  }
  return 0;
}
static inline _Bool zend_parse_arg_array(zval *arg, zval **dest,
                                         _Bool check_null, _Bool or_object) {
  if (__builtin_expect(!!(zval_get_type(&(*(arg))) == 7), 1) ||
      (or_object && __builtin_expect(!!(zval_get_type(&(*(arg))) == 8), 1))) {
    *dest = arg;
  } else if (check_null &&
             __builtin_expect(!!(zval_get_type(&(*(arg))) == 1), 1)) {
    *dest = ((void *)0);
  } else {
    return 0;
  }
  return 1;
}
static inline _Bool zend_parse_arg_array_ht(const zval *arg, HashTable **dest,
                                            _Bool check_null, _Bool or_object,
                                            _Bool separate) {
  if (__builtin_expect(!!(zval_get_type(&(*(arg))) == 7), 1)) {
    *dest = (*(arg)).value.arr;
  } else if (or_object &&
             __builtin_expect(!!(zval_get_type(&(*(arg))) == 8), 1)) {
    zend_object *zobj = (*(arg)).value.obj;
    if (separate && zobj->properties &&
        __builtin_expect(!!(zend_gc_refcount(&(zobj->properties)->gc) > 1),
                         0)) {
      if (__builtin_expect(
              !!(!(zval_gc_flags((zobj->properties)->gc.u.type_info) &
                   (1 << 6))),
              1)) {
        zend_gc_delref(&(zobj->properties)->gc);
      }
      zobj->properties = zend_array_dup(zobj->properties);
    }
    *dest = zobj->handlers->get_properties(zobj);
  } else if (check_null &&
             __builtin_expect(!!(zval_get_type(&(*(arg))) == 1), 1)) {
    *dest = ((void *)0);
  } else {
    return 0;
  }
  return 1;
}
static inline _Bool
zend_parse_arg_array_ht_or_long(zval *arg, HashTable **dest_ht,
                                zend_long *dest_long, _Bool *is_null,
                                _Bool allow_null, uint32_t arg_num) {
  if (allow_null) {
    *is_null = 0;
  }
  if (__builtin_expect(!!(zval_get_type(&(*(arg))) == 7), 1)) {
    *dest_ht = (*(arg)).value.arr;
  } else if (__builtin_expect(!!(zval_get_type(&(*(arg))) == 4), 1)) {
    *dest_ht = ((void *)0);
    *dest_long = (*(arg)).value.lval;
  } else if (allow_null &&
             __builtin_expect(!!(zval_get_type(&(*(arg))) == 1), 1)) {
    *dest_ht = ((void *)0);
    *is_null = 1;
  } else {
    *dest_ht = ((void *)0);
    return zend_parse_arg_long_slow(arg, dest_long, arg_num);
  }
  return 1;
}
static inline _Bool zend_parse_arg_object(zval *arg, zval **dest,
                                          zend_class_entry *ce,
                                          _Bool check_null) {
  if (__builtin_expect(!!(zval_get_type(&(*(arg))) == 8), 1) &&
      (!ce ||
       __builtin_expect(
           !!(instanceof_function(((*(arg)).value.obj->ce), ce) != 0), 1))) {
    *dest = arg;
  } else if (check_null &&
             __builtin_expect(!!(zval_get_type(&(*(arg))) == 1), 1)) {
    *dest = ((void *)0);
  } else {
    return 0;
  }
  return 1;
}
static inline _Bool zend_parse_arg_obj(const zval *arg, zend_object **dest,
                                       zend_class_entry *ce, _Bool check_null) {
  if (__builtin_expect(!!(zval_get_type(&(*(arg))) == 8), 1) &&
      (!ce ||
       __builtin_expect(
           !!(instanceof_function(((*(arg)).value.obj->ce), ce) != 0), 1))) {
    *dest = (*(arg)).value.obj;
  } else if (check_null &&
             __builtin_expect(!!(zval_get_type(&(*(arg))) == 1), 1)) {
    *dest = ((void *)0);
  } else {
    return 0;
  }
  return 1;
}
static inline _Bool
zend_parse_arg_obj_or_long(zval *arg, zend_object **dest_obj,
                           zend_class_entry *ce, zend_long *dest_long,
                           _Bool *is_null, _Bool allow_null, uint32_t arg_num) {
  if (allow_null) {
    *is_null = 0;
  }
  if (__builtin_expect(!!(zval_get_type(&(*(arg))) == 8), 1) &&
      __builtin_expect(
          !!(instanceof_function(((*(arg)).value.obj->ce), ce) != 0), 1)) {
    *dest_obj = (*(arg)).value.obj;
  } else if (__builtin_expect(!!(zval_get_type(&(*(arg))) == 4), 1)) {
    *dest_obj = ((void *)0);
    *dest_long = (*(arg)).value.lval;
  } else if (allow_null &&
             __builtin_expect(!!(zval_get_type(&(*(arg))) == 1), 1)) {
    *dest_obj = ((void *)0);
    *is_null = 1;
  } else {
    *dest_obj = ((void *)0);
    return zend_parse_arg_long_slow(arg, dest_long, arg_num);
  }
  return 1;
}
static inline _Bool zend_parse_arg_resource(zval *arg, zval **dest,
                                            _Bool check_null) {
  if (__builtin_expect(!!(zval_get_type(&(*(arg))) == 9), 1)) {
    *dest = arg;
  } else if (check_null &&
             __builtin_expect(!!(zval_get_type(&(*(arg))) == 1), 1)) {
    *dest = ((void *)0);
  } else {
    return 0;
  }
  return 1;
}
static inline _Bool zend_parse_arg_func(zval *arg, zend_fcall_info *dest_fci,
                                        zend_fcall_info_cache *dest_fcc,
                                        _Bool check_null, char **error,
                                        _Bool free_trampoline) {
  if (check_null && __builtin_expect(!!(zval_get_type(&(*(arg))) == 1), 0)) {
    dest_fci->size = 0;
    dest_fcc->function_handler = ((void *)0);
    *error = ((void *)0);
  } else if (__builtin_expect(
                 !!(zend_fcall_info_init(arg, 0, dest_fci, dest_fcc,
                                         ((void *)0), error) != SUCCESS),
                 0)) {
    return 0;
  }
  if (free_trampoline) {
    zend_release_fcall_info_cache(dest_fcc);
  }
  return 1;
}
static inline void zend_parse_arg_zval(zval *arg, zval **dest,
                                       _Bool check_null) {
  *dest = (check_null &&
           (__builtin_expect(!!(zval_get_type(&(*(arg))) == 1), 0) ||
            (__builtin_expect(!!((zval_get_type(&(*(arg))) == 10)), 0) &&
             __builtin_expect(
                 !!(zval_get_type(&(*(&(*(arg)).value.ref->val))) == 1), 0))))
              ? ((void *)0)
              : arg;
}
static inline void zend_parse_arg_zval_deref(zval *arg, zval **dest,
                                             _Bool check_null) {
  *dest = (check_null && __builtin_expect(!!(zval_get_type(&(*(arg))) == 1), 0))
              ? ((void *)0)
              : arg;
}
static inline _Bool zend_parse_arg_array_ht_or_str(zval *arg,
                                                   HashTable **dest_ht,
                                                   zend_string **dest_str,
                                                   _Bool allow_null,
                                                   uint32_t arg_num) {
  if (__builtin_expect(!!(zval_get_type(&(*(arg))) == 6), 1)) {
    *dest_ht = ((void *)0);
    *dest_str = (*(arg)).value.str;
  } else if (__builtin_expect(!!(zval_get_type(&(*(arg))) == 7), 1)) {
    *dest_ht = (*(arg)).value.arr;
    *dest_str = ((void *)0);
  } else if (allow_null &&
             __builtin_expect(!!(zval_get_type(&(*(arg))) == 1), 1)) {
    *dest_ht = ((void *)0);
    *dest_str = ((void *)0);
  } else {
    *dest_ht = ((void *)0);
    return zend_parse_arg_str_slow(arg, dest_str, arg_num);
  }
  return 1;
}
static inline _Bool zend_parse_arg_str_or_long(zval *arg,
                                               zend_string **dest_str,
                                               zend_long *dest_long,
                                               _Bool *is_null, _Bool allow_null,
                                               uint32_t arg_num) {
  if (allow_null) {
    *is_null = 0;
  }
  if (__builtin_expect(!!(zval_get_type(&(*(arg))) == 6), 1)) {
    *dest_str = (*(arg)).value.str;
  } else if (__builtin_expect(!!(zval_get_type(&(*(arg))) == 4), 1)) {
    *dest_str = ((void *)0);
    *dest_long = (*(arg)).value.lval;
  } else if (allow_null &&
             __builtin_expect(!!(zval_get_type(&(*(arg))) == 1), 1)) {
    *dest_str = ((void *)0);
    *is_null = 1;
  } else {
    return zend_parse_arg_str_or_long_slow(arg, dest_str, dest_long, arg_num);
  }
  return 1;
}
static inline _Bool
zend_parse_arg_obj_or_class_name(zval *arg, zend_class_entry **destination,
                                 _Bool allow_null) {
  if (__builtin_expect(!!(zval_get_type(&(*(arg))) == 6), 1)) {
    *destination = zend_lookup_class((*(arg)).value.str);
    return *destination != ((void *)0);
  } else if (__builtin_expect(!!(zval_get_type(&(*(arg))) == 8), 1)) {
    *destination = (*(arg)).value.obj->ce;
  } else if (allow_null &&
             __builtin_expect(!!(zval_get_type(&(*(arg))) == 1), 1)) {
    *destination = ((void *)0);
  } else {
    return 0;
  }
  return 1;
}
static inline _Bool zend_parse_arg_obj_or_str(
    zval *arg, zend_object **destination_object, zend_class_entry *base_ce,
    zend_string **destination_string, _Bool allow_null, uint32_t arg_num) {
  if (__builtin_expect(!!(zval_get_type(&(*(arg))) == 8), 1)) {
    if (!base_ce ||
        __builtin_expect(
            !!(instanceof_function(((*(arg)).value.obj->ce), base_ce)), 1)) {
      *destination_object = (*(arg)).value.obj;
      *destination_string = ((void *)0);
      return 1;
    }
  }
  *destination_object = ((void *)0);
  return zend_parse_arg_str(arg, destination_string, allow_null, arg_num);
}

__attribute__((visibility("default"))) int php_safe_bcmp(const zend_string *a,
                                                         const zend_string *b);

enum {
  _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)),
  _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)),
  _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)),
  _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)),
  _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)),
  _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)),
  _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)),
  _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)),
  _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)),
  _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)),
  _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)),
  _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8))
};
extern const unsigned short int **__ctype_b_loc(void)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern const __int32_t **__ctype_tolower_loc(void)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern const __int32_t **__ctype_toupper_loc(void)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern int isalnum(int) __attribute__((__nothrow__, __leaf__));
extern int isalpha(int) __attribute__((__nothrow__, __leaf__));
extern int iscntrl(int) __attribute__((__nothrow__, __leaf__));
extern int isdigit(int) __attribute__((__nothrow__, __leaf__));
extern int islower(int) __attribute__((__nothrow__, __leaf__));
extern int isgraph(int) __attribute__((__nothrow__, __leaf__));
extern int isprint(int) __attribute__((__nothrow__, __leaf__));
extern int ispunct(int) __attribute__((__nothrow__, __leaf__));
extern int isspace(int) __attribute__((__nothrow__, __leaf__));
extern int isupper(int) __attribute__((__nothrow__, __leaf__));
extern int isxdigit(int) __attribute__((__nothrow__, __leaf__));
extern int tolower(int __c) __attribute__((__nothrow__, __leaf__));
extern int toupper(int __c) __attribute__((__nothrow__, __leaf__));
extern int isblank(int) __attribute__((__nothrow__, __leaf__));
extern int isctype(int __c, int __mask) __attribute__((__nothrow__, __leaf__));
extern int isascii(int __c) __attribute__((__nothrow__, __leaf__));
extern int toascii(int __c) __attribute__((__nothrow__, __leaf__));
extern int _toupper(int) __attribute__((__nothrow__, __leaf__));
extern int _tolower(int) __attribute__((__nothrow__, __leaf__));
extern int isalnum_l(int, locale_t) __attribute__((__nothrow__, __leaf__));
extern int isalpha_l(int, locale_t) __attribute__((__nothrow__, __leaf__));
extern int iscntrl_l(int, locale_t) __attribute__((__nothrow__, __leaf__));
extern int isdigit_l(int, locale_t) __attribute__((__nothrow__, __leaf__));
extern int islower_l(int, locale_t) __attribute__((__nothrow__, __leaf__));
extern int isgraph_l(int, locale_t) __attribute__((__nothrow__, __leaf__));
extern int isprint_l(int, locale_t) __attribute__((__nothrow__, __leaf__));
extern int ispunct_l(int, locale_t) __attribute__((__nothrow__, __leaf__));
extern int isspace_l(int, locale_t) __attribute__((__nothrow__, __leaf__));
extern int isupper_l(int, locale_t) __attribute__((__nothrow__, __leaf__));
extern int isxdigit_l(int, locale_t) __attribute__((__nothrow__, __leaf__));
extern int isblank_l(int, locale_t) __attribute__((__nothrow__, __leaf__));
extern int __tolower_l(int __c, locale_t __l)
    __attribute__((__nothrow__, __leaf__));
extern int tolower_l(int __c, locale_t __l)
    __attribute__((__nothrow__, __leaf__));
extern int __toupper_l(int __c, locale_t __l)
    __attribute__((__nothrow__, __leaf__));
extern int toupper_l(int __c, locale_t __l)
    __attribute__((__nothrow__, __leaf__));

struct passwd {
  char *pw_name;
  char *pw_passwd;
  __uid_t pw_uid;
  __gid_t pw_gid;
  char *pw_gecos;
  char *pw_dir;
  char *pw_shell;
};
extern void setpwent(void);
extern void endpwent(void);
extern struct passwd *getpwent(void);
extern struct passwd *fgetpwent(FILE *__stream) __attribute__((__nonnull__(1)));
extern int putpwent(const struct passwd *__restrict __p, FILE *__restrict __f);
extern struct passwd *getpwuid(__uid_t __uid);
extern struct passwd *getpwnam(const char *__name)
    __attribute__((__nonnull__(1)));
extern int getpwent_r(struct passwd *__restrict __resultbuf,
                      char *__restrict __buffer, size_t __buflen,
                      struct passwd **__restrict __result)
    __attribute__((__nonnull__(1, 2, 4)))
    __attribute__((__access__(__write_only__, 2, 3)));
extern int getpwuid_r(__uid_t __uid, struct passwd *__restrict __resultbuf,
                      char *__restrict __buffer, size_t __buflen,
                      struct passwd **__restrict __result)
    __attribute__((__nonnull__(2, 3, 5)))
    __attribute__((__access__(__write_only__, 3, 4)));
extern int getpwnam_r(const char *__restrict __name,
                      struct passwd *__restrict __resultbuf,
                      char *__restrict __buffer, size_t __buflen,
                      struct passwd **__restrict __result)
    __attribute__((__nonnull__(1, 2, 3, 5)))
    __attribute__((__access__(__write_only__, 3, 4)));
extern int fgetpwent_r(FILE *__restrict __stream,
                       struct passwd *__restrict __resultbuf,
                       char *__restrict __buffer, size_t __buflen,
                       struct passwd **__restrict __result)
    __attribute__((__nonnull__(1, 2, 3, 5)))
    __attribute__((__access__(__write_only__, 3, 4)));
extern int getpw(__uid_t __uid, char *__buffer);

__attribute__((visibility("default"))) int
ap_php_slprintf(char *buf, size_t len, const char *format, ...)
    __attribute__((format(printf, 3, 4)));
__attribute__((visibility("default"))) int
ap_php_vslprintf(char *buf, size_t len, const char *format, va_list ap);
__attribute__((visibility("default"))) int ap_php_snprintf(char *, size_t,
                                                           const char *, ...)
    __attribute__((format(printf, 3, 4)));
__attribute__((visibility("default"))) int
ap_php_vsnprintf(char *, size_t, const char *, va_list ap);
__attribute__((visibility("default"))) int
ap_php_vasprintf(char **buf, const char *format, va_list ap);
__attribute__((visibility("default"))) int
ap_php_asprintf(char **buf, const char *format, ...)
    __attribute__((format(printf, 2, 3)));
__attribute__((visibility("default"))) char *
php_0cvt(double value, int ndigit, char dec_point, char exponent, char *buf);
__attribute__((visibility("default"))) char *
php_conv_fp(char format, double num, _Bool add_dp, int precision,
            char dec_point, _Bool *is_negative, char *buf, size_t *len);

typedef enum {
  LM_STD = 0,
  LM_INTMAX_T,
  LM_PTRDIFF_T,
  LM_LONG_LONG,
  LM_SIZE_T,
  LM_LONG,
  LM_LONG_DOUBLE,
} length_modifier_e;
__attribute__((visibility("default"))) char *
ap_php_conv_10(int64_t num, _Bool is_unsigned, _Bool *is_negative,
               char *buf_end, size_t *len);
__attribute__((visibility("default"))) char *
ap_php_conv_p2(uint64_t num, int nbits, char format, char *buf_end,
               size_t *len);

__attribute__((visibility("default"))) void
php_printf_to_smart_string(smart_string *buf, const char *format, va_list ap);
__attribute__((visibility("default"))) void
php_printf_to_smart_str(smart_str *buf, const char *format, va_list ap);

extern char **environ;
extern const char php_build_date[];

void phperror(char *error);
__attribute__((visibility("default"))) size_t php_write(void *buf, size_t size);
__attribute__((visibility("default"))) size_t php_printf(const char *format,
                                                         ...)
    __attribute__((format(printf, 1, 2)));
__attribute__((visibility("default"))) size_t
php_printf_unchecked(const char *format, ...);
__attribute__((visibility("default"))) _Bool php_during_module_startup(void);
__attribute__((visibility("default"))) _Bool php_during_module_shutdown(void);
__attribute__((visibility("default"))) _Bool php_get_module_initialized(void);

extern void closelog(void);
extern void openlog(const char *__ident, int __option, int __facility);
extern int setlogmask(int __mask) __attribute__((__nothrow__, __leaf__));
extern void syslog(int __pri, const char *__fmt, ...)
    __attribute__((__format__(__printf__, 2, 3)));
extern void vsyslog(int __pri, const char *__fmt, __gnuc_va_list __ap)
    __attribute__((__format__(__printf__, 2, 0)));

__attribute__((visibility("default"))) void
php_syslog_str(int priority, const zend_string *message);
__attribute__((visibility("default"))) void php_syslog(int, const char *format,
                                                       ...);
__attribute__((visibility("default"))) void php_openlog(const char *, int, int);
__attribute__((visibility("default"))) void php_closelog(void);

__attribute__((visibility("default"))) __attribute__((cold)) void
php_log_err_with_severity(const char *log_message, int syslog_type_int);
int Debug(char *format, ...) __attribute__((format(printf, 1, 2)));
int cfgparse(void);

static inline __attribute__((deprecated)) void
php_set_error_handling(zend_error_handling_t error_handling,
                       zend_class_entry *exception_class) {
  zend_replace_error_handling(error_handling, exception_class, ((void *)0));
}
static inline __attribute__((deprecated)) void php_std_error_handling(void) {}
__attribute__((visibility("default"))) __attribute__((cold)) void
php_verror(const char *docref, const char *params, int type, const char *format,
           va_list args) __attribute__((format(printf, 4, 0)));
__attribute__((visibility("default"))) __attribute__((cold)) void
php_error_docref(const char *docref, int type, const char *format, ...)
    __attribute__((format(printf, 3, 4)));
__attribute__((visibility("default"))) __attribute__((cold)) void
php_error_docref_unchecked(const char *docref, int type, const char *format,
                           ...);
__attribute__((visibility("default"))) __attribute__((cold)) void
php_error_docref1(const char *docref, const char *param1, int type,
                  const char *format, ...)
    __attribute__((format(printf, 4, 5)));
__attribute__((visibility("default"))) __attribute__((cold)) void
php_error_docref2(const char *docref, const char *param1, const char *param2,
                  int type, const char *format, ...)
    __attribute__((format(printf, 5, 6)));

__attribute__((visibility("default"))) extern int (
    *php_register_internal_extensions_func)(void);
__attribute__((visibility("default"))) int
php_register_internal_extensions(void);
__attribute__((visibility("default"))) void
php_register_pre_request_shutdown(void (*func)(void *), void *userdata);
__attribute__((visibility("default"))) void php_com_initialize(void);
__attribute__((visibility("default"))) char *php_get_current_user(void);
__attribute__((visibility("default"))) const char *
php_get_internal_encoding(void);
__attribute__((visibility("default"))) const char *php_get_input_encoding(void);
__attribute__((visibility("default"))) const char *
php_get_output_encoding(void);
__attribute__((visibility("default"))) extern void (
    *php_internal_encoding_changed)(void);

typedef enum _php_output_handler_status_t {
  PHP_OUTPUT_HANDLER_FAILURE,
  PHP_OUTPUT_HANDLER_SUCCESS,
  PHP_OUTPUT_HANDLER_NO_DATA
} php_output_handler_status_t;
typedef enum _php_output_handler_hook_t {
  PHP_OUTPUT_HANDLER_HOOK_GET_OPAQ,
  PHP_OUTPUT_HANDLER_HOOK_GET_FLAGS,
  PHP_OUTPUT_HANDLER_HOOK_GET_LEVEL,
  PHP_OUTPUT_HANDLER_HOOK_IMMUTABLE,
  PHP_OUTPUT_HANDLER_HOOK_DISABLE,
  PHP_OUTPUT_HANDLER_HOOK_LAST
} php_output_handler_hook_t;
typedef struct _php_output_buffer {
  char *data;
  size_t size;
  size_t used;
  uint32_t free : 1;
  uint32_t _reserved : 31;
} php_output_buffer;
typedef struct _php_output_context {
  int op;
  php_output_buffer in;
  php_output_buffer out;
} php_output_context;
typedef void (*php_output_handler_func_t)(char *output, size_t output_len,
                                          char **handled_output,
                                          size_t *handled_output_len, int mode);
typedef zend_result (*php_output_handler_context_func_t)(
    void **handler_context, php_output_context *output_context);
typedef void (*php_output_handler_context_dtor_t)(void *opaq);
typedef zend_result (*php_output_handler_conflict_check_t)(
    const char *handler_name, size_t handler_name_len);
typedef struct _php_output_handler *(*php_output_handler_alias_ctor_t)(
    const char *handler_name, size_t handler_name_len, size_t chunk_size,
    int flags);
typedef struct _php_output_handler_user_func_t {
  zend_fcall_info fci;
  zend_fcall_info_cache fcc;
  zval zoh;
} php_output_handler_user_func_t;
typedef struct _php_output_handler {
  zend_string *name;
  int flags;
  int level;
  size_t size;
  php_output_buffer buffer;
  void *opaq;
  void (*dtor)(void *opaq);
  union {
    php_output_handler_user_func_t *user;
    php_output_handler_context_func_t internal;
  } func;
} php_output_handler;
typedef struct _zend_output_globals {
  zend_stack handlers;
  php_output_handler *active;
  php_output_handler *running;
  zend_string *output_start_filename;
  int output_start_lineno;
  int flags;
} zend_output_globals;
__attribute__((
    visibility("default"))) extern zend_output_globals output_globals;

extern const char
    php_output_default_handler_name[sizeof("default output handler")];
extern const char
    php_output_devnull_handler_name[sizeof("null output handler")];
__attribute__((visibility("default"))) void php_output_startup(void);
__attribute__((visibility("default"))) void php_output_shutdown(void);
__attribute__((visibility("default"))) int php_output_activate(void);
__attribute__((visibility("default"))) void php_output_deactivate(void);
__attribute__((visibility("default"))) void php_output_set_status(int status);
__attribute__((visibility("default"))) int php_output_get_status(void);
__attribute__((visibility("default"))) void
php_output_set_implicit_flush(int flush);
__attribute__((visibility("default"))) const char *
php_output_get_start_filename(void);
__attribute__((visibility("default"))) int php_output_get_start_lineno(void);
__attribute__((visibility("default"))) size_t
php_output_write_unbuffered(const char *str, size_t len);
__attribute__((visibility("default"))) size_t php_output_write(const char *str,
                                                               size_t len);
__attribute__((visibility("default"))) zend_result php_output_flush(void);
__attribute__((visibility("default"))) void php_output_flush_all(void);
__attribute__((visibility("default"))) zend_result php_output_clean(void);
__attribute__((visibility("default"))) void php_output_clean_all(void);
__attribute__((visibility("default"))) zend_result php_output_end(void);
__attribute__((visibility("default"))) void php_output_end_all(void);
__attribute__((visibility("default"))) zend_result php_output_discard(void);
__attribute__((visibility("default"))) void php_output_discard_all(void);
__attribute__((visibility("default"))) zend_result
php_output_get_contents(zval *p);
__attribute__((visibility("default"))) zend_result
php_output_get_length(zval *p);
__attribute__((visibility("default"))) int php_output_get_level(void);
__attribute__((visibility("default"))) php_output_handler *
php_output_get_active_handler(void);
__attribute__((visibility("default"))) zend_result
php_output_start_default(void);
__attribute__((visibility("default"))) zend_result
php_output_start_devnull(void);
__attribute__((visibility("default"))) zend_result
php_output_start_user(zval *output_handler, size_t chunk_size, int flags);
__attribute__((visibility("default"))) zend_result php_output_start_internal(
    const char *name, size_t name_len, php_output_handler_func_t output_handler,
    size_t chunk_size, int flags);
__attribute__((visibility("default"))) php_output_handler *
php_output_handler_create_user(zval *handler, size_t chunk_size, int flags);
__attribute__((visibility("default"))) php_output_handler *
php_output_handler_create_internal(const char *name, size_t name_len,
                                   php_output_handler_context_func_t handler,
                                   size_t chunk_size, int flags);
__attribute__((visibility("default"))) void
php_output_handler_set_context(php_output_handler *handler, void *opaq,
                               void (*dtor)(void *));
__attribute__((visibility("default"))) zend_result
php_output_handler_start(php_output_handler *handler);
__attribute__((visibility("default"))) _Bool
php_output_handler_started(const char *name, size_t name_len);
__attribute__((visibility("default"))) zend_result
php_output_handler_hook(php_output_handler_hook_t type, void *arg);
__attribute__((visibility("default"))) void
php_output_handler_dtor(php_output_handler *handler);
__attribute__((visibility("default"))) void
php_output_handler_free(php_output_handler **handler);
__attribute__((visibility("default"))) _Bool
php_output_handler_conflict(const char *handler_new, size_t handler_new_len,
                            const char *handler_set, size_t handler_set_len);
__attribute__((visibility("default"))) zend_result
php_output_handler_conflict_register(
    const char *handler_name, size_t handler_name_len,
    php_output_handler_conflict_check_t check_func);
__attribute__((visibility("default"))) zend_result
php_output_handler_reverse_conflict_register(
    const char *handler_name, size_t handler_name_len,
    php_output_handler_conflict_check_t check_func);
__attribute__((visibility("default"))) php_output_handler_alias_ctor_t
php_output_handler_alias(const char *handler_name, size_t handler_name_len);
__attribute__((visibility("default"))) zend_result
php_output_handler_alias_register(const char *handler_name,
                                  size_t handler_name_len,
                                  php_output_handler_alias_ctor_t func);

struct timezone {
  int tz_minuteswest;
  int tz_dsttime;
};
extern int gettimeofday(struct timeval *__restrict __tv, void *__restrict __tz)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
extern int settimeofday(const struct timeval *__tv, const struct timezone *__tz)
    __attribute__((__nothrow__, __leaf__));
extern int adjtime(const struct timeval *__delta, struct timeval *__olddelta)
    __attribute__((__nothrow__, __leaf__));
enum __itimer_which { ITIMER_REAL = 0, ITIMER_VIRTUAL = 1, ITIMER_PROF = 2 };
struct itimerval {
  struct timeval it_interval;
  struct timeval it_value;
};
typedef enum __itimer_which __itimer_which_t;
extern int getitimer(__itimer_which_t __which, struct itimerval *__value)
    __attribute__((__nothrow__, __leaf__));
extern int setitimer(__itimer_which_t __which,
                     const struct itimerval *__restrict __new,
                     struct itimerval *__restrict __old)
    __attribute__((__nothrow__, __leaf__));
extern int utimes(const char *__file, const struct timeval __tvp[2])
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
extern int lutimes(const char *__file, const struct timeval __tvp[2])
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
extern int futimes(int __fd, const struct timeval __tvp[2])
    __attribute__((__nothrow__, __leaf__));
extern int futimesat(int __fd, const char *__file,
                     const struct timeval __tvp[2])
    __attribute__((__nothrow__, __leaf__));

__attribute__((visibility("default"))) int php_file_le_stream(void);
__attribute__((visibility("default"))) int php_file_le_pstream(void);
__attribute__((visibility("default"))) int php_file_le_stream_filter(void);

typedef struct _php_stream php_stream;
typedef struct _php_stream_wrapper php_stream_wrapper;
typedef struct _php_stream_context php_stream_context;
typedef struct _php_stream_filter php_stream_filter;
typedef void (*php_stream_notification_func)(php_stream_context *context,
                                             int notifycode, int severity,
                                             char *xmsg, int xcode,
                                             size_t bytes_sofar,
                                             size_t bytes_max, void *ptr);
typedef struct _php_stream_notifier php_stream_notifier;
struct _php_stream_notifier {
  php_stream_notification_func func;
  void (*dtor)(php_stream_notifier *notifier);
  zval ptr;
  int mask;
  size_t progress, progress_max;
};
struct _php_stream_context {
  php_stream_notifier *notifier;
  zval options;
  zend_resource *res;
};

__attribute__((visibility("default"))) int php_le_stream_context(void);
__attribute__((visibility("default"))) void
php_stream_context_free(php_stream_context *context);
__attribute__((visibility("default"))) php_stream_context *
php_stream_context_alloc(void);
__attribute__((visibility("default"))) zval *
php_stream_context_get_option(php_stream_context *context,
                              const char *wrappername, const char *optionname);
__attribute__((visibility("default"))) void
php_stream_context_set_option(php_stream_context *context,
                              const char *wrappername, const char *optionname,
                              zval *optionvalue);
void php_stream_context_unset_option(php_stream_context *context,
                                     const char *wrappername,
                                     const char *optionname);
__attribute__((visibility("default"))) php_stream_notifier *
php_stream_notification_alloc(void);
__attribute__((visibility("default"))) void
php_stream_notification_free(php_stream_notifier *notifier);

__attribute__((visibility("default"))) void
php_stream_notification_notify(php_stream_context *context, int notifycode,
                               int severity, char *xmsg, int xcode,
                               size_t bytes_sofar, size_t bytes_max, void *ptr);
__attribute__((visibility("default"))) php_stream_context *
php_stream_context_set(php_stream *stream, php_stream_context *context);

typedef struct _php_stream_bucket php_stream_bucket;
typedef struct _php_stream_bucket_brigade php_stream_bucket_brigade;
struct _php_stream_bucket {
  php_stream_bucket *next, *prev;
  php_stream_bucket_brigade *brigade;
  char *buf;
  size_t buflen;
  uint8_t own_buf;
  uint8_t is_persistent;
  int refcount;
};
struct _php_stream_bucket_brigade {
  php_stream_bucket *head, *tail;
};
typedef enum {
  PSFS_ERR_FATAL,
  PSFS_FEED_ME,
  PSFS_PASS_ON
} php_stream_filter_status_t;

__attribute__((visibility("default"))) php_stream_bucket *
php_stream_bucket_new(php_stream *stream, char *buf, size_t buflen,
                      uint8_t own_buf, uint8_t buf_persistent);
__attribute__((visibility("default"))) int
php_stream_bucket_split(php_stream_bucket *in, php_stream_bucket **left,
                        php_stream_bucket **right, size_t length);
__attribute__((visibility("default"))) void
php_stream_bucket_delref(php_stream_bucket *bucket);
__attribute__((visibility("default"))) void
php_stream_bucket_prepend(php_stream_bucket_brigade *brigade,
                          php_stream_bucket *bucket);
__attribute__((visibility("default"))) void
php_stream_bucket_append(php_stream_bucket_brigade *brigade,
                         php_stream_bucket *bucket);
__attribute__((visibility("default"))) void
php_stream_bucket_unlink(php_stream_bucket *bucket);
__attribute__((visibility("default"))) php_stream_bucket *
php_stream_bucket_make_writeable(php_stream_bucket *bucket);

typedef struct _php_stream_filter_ops {
  php_stream_filter_status_t (*filter)(php_stream *stream,
                                       php_stream_filter *thisfilter,
                                       php_stream_bucket_brigade *buckets_in,
                                       php_stream_bucket_brigade *buckets_out,
                                       size_t *bytes_consumed, int flags);
  void (*dtor)(php_stream_filter *thisfilter);
  const char *label;
} php_stream_filter_ops;
typedef struct _php_stream_filter_chain {
  php_stream_filter *head, *tail;
  php_stream *stream;
} php_stream_filter_chain;
struct _php_stream_filter {
  const php_stream_filter_ops *fops;
  zval abstract;
  php_stream_filter *next;
  php_stream_filter *prev;
  int is_persistent;
  php_stream_filter_chain *chain;
  php_stream_bucket_brigade buffer;
  zend_resource *res;
};

__attribute__((visibility("default"))) void
_php_stream_filter_prepend(php_stream_filter_chain *chain,
                           php_stream_filter *filter);
__attribute__((visibility("default"))) int
php_stream_filter_prepend_ex(php_stream_filter_chain *chain,
                             php_stream_filter *filter);
__attribute__((visibility("default"))) void
_php_stream_filter_append(php_stream_filter_chain *chain,
                          php_stream_filter *filter);
__attribute__((visibility("default"))) int
php_stream_filter_append_ex(php_stream_filter_chain *chain,
                            php_stream_filter *filter);
__attribute__((visibility("default"))) int
_php_stream_filter_flush(php_stream_filter *filter, int finish);
__attribute__((visibility("default"))) php_stream_filter *
php_stream_filter_remove(php_stream_filter *filter, int call_dtor);
__attribute__((visibility("default"))) void
php_stream_filter_free(php_stream_filter *filter);
__attribute__((visibility("default"))) php_stream_filter *
_php_stream_filter_alloc(const php_stream_filter_ops *fops, void *abstract,
                         uint8_t persistent, int __php_stream_call_depth,
                         const char *__zend_filename,
                         const uint32_t __zend_lineno,
                         const char *__zend_orig_filename,
                         const uint32_t __zend_orig_lineno);

typedef struct _php_stream_filter_factory {
  php_stream_filter *(*create_filter)(const char *filtername,
                                      zval *filterparams, uint8_t persistent);
} php_stream_filter_factory;

__attribute__((visibility("default"))) int
php_stream_filter_register_factory(const char *filterpattern,
                                   const php_stream_filter_factory *factory);
__attribute__((visibility("default"))) int
php_stream_filter_unregister_factory(const char *filterpattern);
__attribute__((visibility("default"))) int
php_stream_filter_register_factory_volatile(
    zend_string *filterpattern, const php_stream_filter_factory *factory);
__attribute__((visibility("default"))) php_stream_filter *
php_stream_filter_create(const char *filtername, zval *filterparams,
                         uint8_t persistent);

typedef struct _php_stream_statbuf {
  zend_stat_t sb;
} php_stream_statbuf;
typedef struct _php_stream_dirent {
  char d_name[4096];
  unsigned char d_type;
} php_stream_dirent;
typedef struct _php_stream_ops {
  ssize_t (*write)(php_stream *stream, const char *buf, size_t count);
  ssize_t (*read)(php_stream *stream, char *buf, size_t count);
  int (*close)(php_stream *stream, int close_handle);
  int (*flush)(php_stream *stream);
  const char *label;
  int (*seek)(php_stream *stream, zend_off_t offset, int whence,
              zend_off_t *newoffset);
  int (*cast)(php_stream *stream, int castas, void **ret);
  int (*stat)(php_stream *stream, php_stream_statbuf *ssb);
  int (*set_option)(php_stream *stream, int option, int value, void *ptrparam);
} php_stream_ops;
typedef struct _php_stream_wrapper_ops {
  php_stream *(*stream_opener)(
      php_stream_wrapper *wrapper, const char *filename, const char *mode,
      int options, zend_string **opened_path, php_stream_context *context,
      int __php_stream_call_depth, const char *__zend_filename,
      const uint32_t __zend_lineno, const char *__zend_orig_filename,
      const uint32_t __zend_orig_lineno);
  int (*stream_closer)(php_stream_wrapper *wrapper, php_stream *stream);
  int (*stream_stat)(php_stream_wrapper *wrapper, php_stream *stream,
                     php_stream_statbuf *ssb);
  int (*url_stat)(php_stream_wrapper *wrapper, const char *url, int flags,
                  php_stream_statbuf *ssb, php_stream_context *context);
  php_stream *(*dir_opener)(
      php_stream_wrapper *wrapper, const char *filename, const char *mode,
      int options, zend_string **opened_path, php_stream_context *context,
      int __php_stream_call_depth, const char *__zend_filename,
      const uint32_t __zend_lineno, const char *__zend_orig_filename,
      const uint32_t __zend_orig_lineno);
  const char *label;
  int (*unlink)(php_stream_wrapper *wrapper, const char *url, int options,
                php_stream_context *context);
  int (*rename)(php_stream_wrapper *wrapper, const char *url_from,
                const char *url_to, int options, php_stream_context *context);
  int (*stream_mkdir)(php_stream_wrapper *wrapper, const char *url, int mode,
                      int options, php_stream_context *context);
  int (*stream_rmdir)(php_stream_wrapper *wrapper, const char *url, int options,
                      php_stream_context *context);
  int (*stream_metadata)(php_stream_wrapper *wrapper, const char *url,
                         int options, void *value, php_stream_context *context);
} php_stream_wrapper_ops;
struct _php_stream_wrapper {
  const php_stream_wrapper_ops *wops;
  void *abstract;
  int is_url;
};
struct _php_stream {
  const php_stream_ops *ops;
  void *abstract;
  php_stream_filter_chain readfilters, writefilters;
  php_stream_wrapper *wrapper;
  void *wrapperthis;
  zval wrapperdata;
  uint16_t is_persistent : 1;
  uint16_t in_free : 2;
  uint16_t eof : 1;
  uint16_t __exposed : 1;
  uint16_t fclose_stdiocast : 2;
  uint16_t has_buffered_data : 1;
  uint16_t fclose_stdiocast_flush_in_progress : 1;
  uint16_t fatal_error : 1;
  char mode[16];
  uint32_t flags;
  zend_resource *res;
  FILE *stdiocast;
  char *orig_path;
  zend_resource *ctx;
  zend_off_t position;
  unsigned char *readbuf;
  size_t readbuflen;
  zend_off_t readpos;
  zend_off_t writepos;
  size_t chunk_size;
  const char *open_filename;
  uint32_t open_lineno;
  struct _php_stream *enclosing_stream;
};

__attribute__((visibility("default"))) php_stream *_php_stream_alloc(
    const php_stream_ops *ops, void *abstract, const char *persistent_id,
    const char *mode, int __php_stream_call_depth, const char *__zend_filename,
    const uint32_t __zend_lineno, const char *__zend_orig_filename,
    const uint32_t __zend_orig_lineno);

static inline php_stream *php_stream_from_zval_no_verify_no_error(zval *zval) {
  return (php_stream *)zend_fetch_resource2_ex(
      zval, ((void *)0), php_file_le_stream(), php_file_le_pstream());
}

static inline _Bool
php_stream_zend_parse_arg_into_stream(zval *arg,
                                      php_stream **destination_stream_ptr,
                                      _Bool check_null, uint32_t arg_num) {
  if (__builtin_expect(!!(zval_get_type(&(*(arg))) == 9), 1)) {
    zend_resource *res = (*arg).value.res;
    if (__builtin_expect(!!(res->type == php_file_le_stream() ||
                            res->type == php_file_le_pstream()),
                         1)) {
      *destination_stream_ptr = (php_stream *)res->ptr;
      return 1;
    } else {
      zend_argument_type_error(arg_num, "must be an open stream resource");
      return 0;
    }
  } else if (check_null &&
             __builtin_expect(!!(zval_get_type(&(*(arg))) == 1), 1)) {
    *destination_stream_ptr = ((void *)0);
  } else {
    return 0;
  }
  return 1;
}
__attribute__((visibility("default"))) php_stream *
php_stream_encloses(php_stream *enclosing, php_stream *enclosed);
__attribute__((visibility("default"))) int
_php_stream_free_enclosed(php_stream *stream_enclosed, int close_options);
__attribute__((visibility("default"))) int
php_stream_from_persistent_id(const char *persistent_id, php_stream **stream);
__attribute__((visibility("default"))) int _php_stream_free(php_stream *stream,
                                                            int close_options);
__attribute__((visibility("default"))) int
_php_stream_seek(php_stream *stream, zend_off_t offset, int whence);
__attribute__((visibility("default"))) zend_off_t
_php_stream_tell(php_stream *stream);
__attribute__((visibility("default"))) ssize_t
_php_stream_read(php_stream *stream, char *buf, size_t count);
__attribute__((visibility("default"))) zend_string *
php_stream_read_to_str(php_stream *stream, size_t len);
__attribute__((visibility("default"))) ssize_t
_php_stream_write(php_stream *stream, const char *buf, size_t count);
__attribute__((visibility("default"))) zend_result
_php_stream_fill_read_buffer(php_stream *stream, size_t size);
__attribute__((visibility("default"))) ssize_t
_php_stream_printf(php_stream *stream, const char *fmt, ...)
    __attribute__((format(printf, 2, 3)));
__attribute__((visibility("default"))) _Bool
_php_stream_eof(php_stream *stream);
__attribute__((visibility("default"))) int _php_stream_getc(php_stream *stream);
__attribute__((visibility("default"))) int _php_stream_putc(php_stream *stream,
                                                            int c);
__attribute__((visibility("default"))) int _php_stream_flush(php_stream *stream,
                                                             int closing);
__attribute__((visibility("default"))) int _php_stream_sync(php_stream *stream,
                                                            _Bool data_only);
__attribute__((visibility("default"))) char *
_php_stream_get_line(php_stream *stream, char *buf, size_t maxlen,
                     size_t *returned_len);
__attribute__((visibility("default"))) zend_string *
php_stream_get_record(php_stream *stream, size_t maxlen, const char *delim,
                      size_t delim_len);
__attribute__((visibility("default"))) _Bool
_php_stream_puts(php_stream *stream, const char *buf);
__attribute__((visibility("default"))) int
_php_stream_stat(php_stream *stream, php_stream_statbuf *ssb);
__attribute__((visibility("default"))) int
_php_stream_stat_path(const char *path, int flags, php_stream_statbuf *ssb,
                      php_stream_context *context);
__attribute__((visibility("default"))) int
_php_stream_mkdir(const char *path, int mode, int options,
                  php_stream_context *context);
__attribute__((visibility("default"))) int
_php_stream_rmdir(const char *path, int options, php_stream_context *context);
__attribute__((visibility("default"))) php_stream *
_php_stream_opendir(const char *path, int options, php_stream_context *context,
                    int __php_stream_call_depth, const char *__zend_filename,
                    const uint32_t __zend_lineno,
                    const char *__zend_orig_filename,
                    const uint32_t __zend_orig_lineno);
__attribute__((visibility("default"))) php_stream_dirent *
_php_stream_readdir(php_stream *dirstream, php_stream_dirent *ent);
__attribute__((visibility("default"))) int
php_stream_dirent_alphasort(const zend_string **a, const zend_string **b);
__attribute__((visibility("default"))) int
php_stream_dirent_alphasortr(const zend_string **a, const zend_string **b);
__attribute__((visibility("default"))) int _php_stream_scandir(
    const char *dirname, zend_string **namelist[], int flags,
    php_stream_context *context,
    int (*compare)(const zend_string **a, const zend_string **b));
__attribute__((visibility("default"))) int
_php_stream_set_option(php_stream *stream, int option, int value,
                       void *ptrparam);

__attribute__((visibility("default"))) int
_php_stream_truncate_set_size(php_stream *stream, size_t newsize);

__attribute__((deprecated)) __attribute__((visibility("default"))) size_t
_php_stream_copy_to_stream(php_stream *src, php_stream *dest, size_t maxlen,
                           int __php_stream_call_depth,
                           const char *__zend_filename,
                           const uint32_t __zend_lineno,
                           const char *__zend_orig_filename,
                           const uint32_t __zend_orig_lineno);
__attribute__((visibility("default"))) zend_result
_php_stream_copy_to_stream_ex(php_stream *src, php_stream *dest, size_t maxlen,
                              size_t *len, int __php_stream_call_depth,
                              const char *__zend_filename,
                              const uint32_t __zend_lineno,
                              const char *__zend_orig_filename,
                              const uint32_t __zend_orig_lineno);
__attribute__((visibility("default"))) zend_string *_php_stream_copy_to_mem(
    php_stream *src, size_t maxlen, int persistent, int __php_stream_call_depth,
    const char *__zend_filename, const uint32_t __zend_lineno,
    const char *__zend_orig_filename, const uint32_t __zend_orig_lineno);
__attribute__((visibility("default"))) ssize_t _php_stream_passthru(
    php_stream *src, int __php_stream_call_depth, const char *__zend_filename,
    const uint32_t __zend_lineno, const char *__zend_orig_filename,
    const uint32_t __zend_orig_lineno);

struct iovec {
  void *iov_base;
  size_t iov_len;
};
enum __socket_type {
  SOCK_STREAM = 1,
  SOCK_DGRAM = 2,
  SOCK_RAW = 3,
  SOCK_RDM = 4,
  SOCK_SEQPACKET = 5,
  SOCK_DCCP = 6,
  SOCK_PACKET = 10,
  SOCK_CLOEXEC = 02000000,
  SOCK_NONBLOCK = 00004000
};
typedef unsigned short int sa_family_t;
struct __attribute__((__may_alias__)) sockaddr {
  sa_family_t sa_family;
  char sa_data[14];
};
struct __attribute__((__may_alias__)) sockaddr_storage {
  sa_family_t ss_family;
  char __ss_padding[(128 - (sizeof(unsigned short int)) -
                     sizeof(unsigned long int))];
  unsigned long int __ss_align;
};
enum {
  MSG_OOB = 0x01,
  MSG_PEEK = 0x02,
  MSG_DONTROUTE = 0x04,
  MSG_TRYHARD = MSG_DONTROUTE,
  MSG_CTRUNC = 0x08,
  MSG_PROXY = 0x10,
  MSG_TRUNC = 0x20,
  MSG_DONTWAIT = 0x40,
  MSG_EOR = 0x80,
  MSG_WAITALL = 0x100,
  MSG_FIN = 0x200,
  MSG_SYN = 0x400,
  MSG_CONFIRM = 0x800,
  MSG_RST = 0x1000,
  MSG_ERRQUEUE = 0x2000,
  MSG_NOSIGNAL = 0x4000,
  MSG_MORE = 0x8000,
  MSG_WAITFORONE = 0x10000,
  MSG_BATCH = 0x40000,
  MSG_SOCK_DEVMEM = 0x2000000,
  MSG_ZEROCOPY = 0x4000000,
  MSG_FASTOPEN = 0x20000000,
  MSG_CMSG_CLOEXEC = 0x40000000
};
struct msghdr {
  void *msg_name;
  socklen_t msg_namelen;
  struct iovec *msg_iov;
  size_t msg_iovlen;
  void *msg_control;
  size_t msg_controllen;
  int msg_flags;
};
struct cmsghdr {
  size_t cmsg_len;
  int cmsg_level;
  int cmsg_type;
  __extension__ unsigned char __cmsg_data[];
};
extern struct cmsghdr *__cmsg_nxthdr(struct msghdr *__mhdr,
                                     struct cmsghdr *__cmsg)
    __attribute__((__nothrow__, __leaf__));
enum {
  SCM_RIGHTS = 0x01,
  SCM_CREDENTIALS = 0x02,
  SCM_SECURITY = 0x03,
  SCM_PIDFD = 0x04
};
struct ucred {
  pid_t pid;
  uid_t uid;
  gid_t gid;
};
struct linger {
  int l_onoff;
  int l_linger;
};
struct osockaddr {
  unsigned short int sa_family;
  unsigned char sa_data[14];
};
enum { SHUT_RD = 0, SHUT_WR, SHUT_RDWR };
typedef union {
  struct sockaddr *__restrict __sockaddr__;
  struct sockaddr_at *__restrict __sockaddr_at__;
  struct sockaddr_ax25 *__restrict __sockaddr_ax25__;
  struct sockaddr_dl *__restrict __sockaddr_dl__;
  struct sockaddr_eon *__restrict __sockaddr_eon__;
  struct sockaddr_in *__restrict __sockaddr_in__;
  struct sockaddr_in6 *__restrict __sockaddr_in6__;
  struct sockaddr_inarp *__restrict __sockaddr_inarp__;
  struct sockaddr_ipx *__restrict __sockaddr_ipx__;
  struct sockaddr_iso *__restrict __sockaddr_iso__;
  struct sockaddr_ns *__restrict __sockaddr_ns__;
  struct sockaddr_un *__restrict __sockaddr_un__;
  struct sockaddr_x25 *__restrict __sockaddr_x25__;
} __SOCKADDR_ARG __attribute__((__transparent_union__));
typedef union {
  const struct sockaddr *__restrict __sockaddr__;
  const struct sockaddr_at *__restrict __sockaddr_at__;
  const struct sockaddr_ax25 *__restrict __sockaddr_ax25__;
  const struct sockaddr_dl *__restrict __sockaddr_dl__;
  const struct sockaddr_eon *__restrict __sockaddr_eon__;
  const struct sockaddr_in *__restrict __sockaddr_in__;
  const struct sockaddr_in6 *__restrict __sockaddr_in6__;
  const struct sockaddr_inarp *__restrict __sockaddr_inarp__;
  const struct sockaddr_ipx *__restrict __sockaddr_ipx__;
  const struct sockaddr_iso *__restrict __sockaddr_iso__;
  const struct sockaddr_ns *__restrict __sockaddr_ns__;
  const struct sockaddr_un *__restrict __sockaddr_un__;
  const struct sockaddr_x25 *__restrict __sockaddr_x25__;
} __CONST_SOCKADDR_ARG __attribute__((__transparent_union__));
struct mmsghdr {
  struct msghdr msg_hdr;
  unsigned int msg_len;
};
extern int socket(int __domain, int __type, int __protocol)
    __attribute__((__nothrow__, __leaf__));
extern int socketpair(int __domain, int __type, int __protocol, int __fds[2])
    __attribute__((__nothrow__, __leaf__));
extern int bind(int __fd, __CONST_SOCKADDR_ARG __addr, socklen_t __len)
    __attribute__((__nothrow__, __leaf__));
extern int getsockname(int __fd, __SOCKADDR_ARG __addr,
                       socklen_t *__restrict __len)
    __attribute__((__nothrow__, __leaf__));
extern int connect(int __fd, __CONST_SOCKADDR_ARG __addr, socklen_t __len);
extern int getpeername(int __fd, __SOCKADDR_ARG __addr,
                       socklen_t *__restrict __len)
    __attribute__((__nothrow__, __leaf__));
extern ssize_t send(int __fd, const void *__buf, size_t __n, int __flags);
extern ssize_t recv(int __fd, void *__buf, size_t __n, int __flags);
extern ssize_t sendto(int __fd, const void *__buf, size_t __n, int __flags,
                      __CONST_SOCKADDR_ARG __addr, socklen_t __addr_len);
extern ssize_t recvfrom(int __fd, void *__restrict __buf, size_t __n,
                        int __flags, __SOCKADDR_ARG __addr,
                        socklen_t *__restrict __addr_len);
extern ssize_t sendmsg(int __fd, const struct msghdr *__message, int __flags);
extern int sendmmsg(int __fd, struct mmsghdr *__vmessages, unsigned int __vlen,
                    int __flags);
extern ssize_t recvmsg(int __fd, struct msghdr *__message, int __flags);
extern int recvmmsg(int __fd, struct mmsghdr *__vmessages, unsigned int __vlen,
                    int __flags, struct timespec *__tmo);
extern int getsockopt(int __fd, int __level, int __optname,
                      void *__restrict __optval, socklen_t *__restrict __optlen)
    __attribute__((__nothrow__, __leaf__));
extern int setsockopt(int __fd, int __level, int __optname,
                      const void *__optval, socklen_t __optlen)
    __attribute__((__nothrow__, __leaf__));
extern int listen(int __fd, int __n) __attribute__((__nothrow__, __leaf__));
extern int accept(int __fd, __SOCKADDR_ARG __addr,
                  socklen_t *__restrict __addr_len);
extern int accept4(int __fd, __SOCKADDR_ARG __addr,
                   socklen_t *__restrict __addr_len, int __flags);
extern int shutdown(int __fd, int __how) __attribute__((__nothrow__, __leaf__));
extern int sockatmark(int __fd) __attribute__((__nothrow__, __leaf__));
extern int isfdtype(int __fd, int __fdtype)
    __attribute__((__nothrow__, __leaf__));

typedef php_stream *(
    php_stream_transport_factory_func)(const char *proto, size_t protolen,
                                       const char *resourcename,
                                       size_t resourcenamelen,
                                       const char *persistent_id, int options,
                                       int flags, struct timeval *timeout,
                                       php_stream_context *context,
                                       int __php_stream_call_depth,
                                       const char *__zend_filename,
                                       const uint32_t __zend_lineno,
                                       const char *__zend_orig_filename,
                                       const uint32_t __zend_orig_lineno);
typedef php_stream_transport_factory_func *php_stream_transport_factory;

__attribute__((visibility("default"))) int
php_stream_xport_register(const char *protocol,
                          php_stream_transport_factory factory);
__attribute__((visibility("default"))) int
php_stream_xport_unregister(const char *protocol);
__attribute__((visibility("default"))) php_stream *_php_stream_xport_create(
    const char *name, size_t namelen, int options, int flags,
    const char *persistent_id, struct timeval *timeout,
    php_stream_context *context, zend_string **error_string, int *error_code,
    int __php_stream_call_depth, const char *__zend_filename,
    const uint32_t __zend_lineno, const char *__zend_orig_filename,
    const uint32_t __zend_orig_lineno);
__attribute__((visibility("default"))) int
php_stream_xport_bind(php_stream *stream, const char *name, size_t namelen,
                      zend_string **error_text);
__attribute__((visibility("default"))) int
php_stream_xport_connect(php_stream *stream, const char *name, size_t namelen,
                         int asynchronous, struct timeval *timeout,
                         zend_string **error_text, int *error_code);
__attribute__((visibility("default"))) int
php_stream_xport_listen(php_stream *stream, int backlog,
                        zend_string **error_text);
__attribute__((visibility("default"))) int
php_stream_xport_accept(php_stream *stream, php_stream **client,
                        zend_string **textaddr, void **addr, socklen_t *addrlen,
                        struct timeval *timeout, zend_string **error_text);
__attribute__((visibility("default"))) int
php_stream_xport_get_name(php_stream *stream, int want_peer,
                          zend_string **textaddr, void **addr,
                          socklen_t *addrlen);
enum php_stream_xport_send_recv_flags { STREAM_OOB = 1, STREAM_PEEK = 2 };
__attribute__((visibility("default"))) int
php_stream_xport_recvfrom(php_stream *stream, char *buf, size_t buflen,
                          int flags, void **addr, socklen_t *addrlen,
                          zend_string **textaddr);
__attribute__((visibility("default"))) int
php_stream_xport_sendto(php_stream *stream, const char *buf, size_t buflen,
                        int flags, void *addr, socklen_t addrlen);
typedef enum {
  STREAM_SHUT_RD,
  STREAM_SHUT_WR,
  STREAM_SHUT_RDWR
} stream_shutdown_t;
__attribute__((visibility("default"))) int
php_stream_xport_shutdown(php_stream *stream, stream_shutdown_t how);

typedef struct _php_stream_xport_param {
  enum {
    STREAM_XPORT_OP_BIND,
    STREAM_XPORT_OP_CONNECT,
    STREAM_XPORT_OP_LISTEN,
    STREAM_XPORT_OP_ACCEPT,
    STREAM_XPORT_OP_CONNECT_ASYNC,
    STREAM_XPORT_OP_GET_NAME,
    STREAM_XPORT_OP_GET_PEER_NAME,
    STREAM_XPORT_OP_RECV,
    STREAM_XPORT_OP_SEND,
    STREAM_XPORT_OP_SHUTDOWN
  } op;
  unsigned int want_addr : 1;
  unsigned int want_textaddr : 1;
  unsigned int want_errortext : 1;
  unsigned int how : 2;
  struct {
    char *name;
    size_t namelen;
    struct timeval *timeout;
    struct sockaddr *addr;
    char *buf;
    size_t buflen;
    socklen_t addrlen;
    int backlog;
    int flags;
  } inputs;
  struct {
    php_stream *client;
    struct sockaddr *addr;
    socklen_t addrlen;
    zend_string *textaddr;
    zend_string *error_text;
    int returncode;
    int error_code;
  } outputs;
} php_stream_xport_param;
typedef enum {
  STREAM_CRYPTO_METHOD_SSLv2_CLIENT = (1 << 1 | 1),
  STREAM_CRYPTO_METHOD_SSLv3_CLIENT = (1 << 2 | 1),
  STREAM_CRYPTO_METHOD_SSLv23_CLIENT = ((1 << 3) | (1 << 4) | (1 << 5) | 1),
  STREAM_CRYPTO_METHOD_TLSv1_0_CLIENT = (1 << 3 | 1),
  STREAM_CRYPTO_METHOD_TLSv1_1_CLIENT = (1 << 4 | 1),
  STREAM_CRYPTO_METHOD_TLSv1_2_CLIENT = (1 << 5 | 1),
  STREAM_CRYPTO_METHOD_TLSv1_3_CLIENT = (1 << 6 | 1),
  STREAM_CRYPTO_METHOD_TLS_CLIENT =
      ((1 << 3) | (1 << 4) | (1 << 5) | (1 << 6) | 1),
  STREAM_CRYPTO_METHOD_TLS_ANY_CLIENT =
      ((1 << 3) | (1 << 4) | (1 << 5) | (1 << 6) | 1),
  STREAM_CRYPTO_METHOD_ANY_CLIENT =
      ((1 << 1) | (1 << 2) | (1 << 3) | (1 << 4) | (1 << 5) | (1 << 6) | 1),
  STREAM_CRYPTO_METHOD_SSLv2_SERVER = (1 << 1),
  STREAM_CRYPTO_METHOD_SSLv3_SERVER = (1 << 2),
  STREAM_CRYPTO_METHOD_SSLv23_SERVER =
      ((1 << 3) | (1 << 4) | (1 << 5) | (1 << 6)),
  STREAM_CRYPTO_METHOD_TLSv1_0_SERVER = (1 << 3),
  STREAM_CRYPTO_METHOD_TLSv1_1_SERVER = (1 << 4),
  STREAM_CRYPTO_METHOD_TLSv1_2_SERVER = (1 << 5),
  STREAM_CRYPTO_METHOD_TLSv1_3_SERVER = (1 << 6),
  STREAM_CRYPTO_METHOD_TLS_SERVER = ((1 << 3) | (1 << 4) | (1 << 5) | (1 << 6)),
  STREAM_CRYPTO_METHOD_TLS_ANY_SERVER =
      ((1 << 3) | (1 << 4) | (1 << 5) | (1 << 6)),
  STREAM_CRYPTO_METHOD_ANY_SERVER =
      ((1 << 1) | (1 << 2) | (1 << 3) | (1 << 4) | (1 << 5) | (1 << 6))
} php_stream_xport_crypt_method_t;

__attribute__((visibility("default"))) int
php_stream_xport_crypto_setup(php_stream *stream,
                              php_stream_xport_crypt_method_t crypto_method,
                              php_stream *session_stream);
__attribute__((visibility("default"))) int
php_stream_xport_crypto_enable(php_stream *stream, int activate);

typedef struct _php_stream_xport_crypto_param {
  struct {
    php_stream *session;
    int activate;
    php_stream_xport_crypt_method_t method;
  } inputs;
  struct {
    int returncode;
  } outputs;
  enum { STREAM_XPORT_CRYPTO_OP_SETUP, STREAM_XPORT_CRYPTO_OP_ENABLE } op;
} php_stream_xport_crypto_param;

__attribute__((visibility("default"))) HashTable *
php_stream_xport_get_hash(void);
__attribute__((visibility("default"))) php_stream_transport_factory_func
    php_stream_generic_socket_factory;

__attribute__((
    visibility("default"))) extern php_stream_ops php_stream_stdio_ops;
__attribute__((
    visibility("default"))) extern php_stream_wrapper php_plain_files_wrapper;

__attribute__((visibility("default"))) php_stream *_php_stream_fopen(
    const char *filename, const char *mode, zend_string **opened_path,
    int options, int __php_stream_call_depth, const char *__zend_filename,
    const uint32_t __zend_lineno, const char *__zend_orig_filename,
    const uint32_t __zend_orig_lineno);
__attribute__((visibility("default"))) php_stream *_php_stream_fopen_with_path(
    const char *filename, const char *mode, const char *path,
    zend_string **opened_path, int options, int __php_stream_call_depth,
    const char *__zend_filename, const uint32_t __zend_lineno,
    const char *__zend_orig_filename, const uint32_t __zend_orig_lineno);
__attribute__((visibility("default"))) php_stream *_php_stream_fopen_from_file(
    FILE *file, const char *mode, int __php_stream_call_depth,
    const char *__zend_filename, const uint32_t __zend_lineno,
    const char *__zend_orig_filename, const uint32_t __zend_orig_lineno);
__attribute__((visibility("default"))) php_stream *_php_stream_fopen_from_fd(
    int fd, const char *mode, const char *persistent_id, _Bool zero_position,
    int __php_stream_call_depth, const char *__zend_filename,
    const uint32_t __zend_lineno, const char *__zend_orig_filename,
    const uint32_t __zend_orig_lineno);
__attribute__((visibility("default"))) php_stream *_php_stream_fopen_from_pipe(
    FILE *file, const char *mode, int __php_stream_call_depth,
    const char *__zend_filename, const uint32_t __zend_lineno,
    const char *__zend_orig_filename, const uint32_t __zend_orig_lineno);
__attribute__((visibility("default"))) php_stream *_php_stream_fopen_tmpfile(
    int dummy, int __php_stream_call_depth, const char *__zend_filename,
    const uint32_t __zend_lineno, const char *__zend_orig_filename,
    const uint32_t __zend_orig_lineno);
__attribute__((visibility("default"))) php_stream *
_php_stream_fopen_temporary_file(const char *dir, const char *pfx,
                                 zend_string **opened_path,
                                 int __php_stream_call_depth,
                                 const char *__zend_filename,
                                 const uint32_t __zend_lineno,
                                 const char *__zend_orig_filename,
                                 const uint32_t __zend_orig_lineno);
__attribute__((visibility("default"))) FILE *_php_stream_open_wrapper_as_file(
    char *path, char *mode, int options, zend_string **opened_path,
    int __php_stream_call_depth, const char *__zend_filename,
    const uint32_t __zend_lineno, const char *__zend_orig_filename,
    const uint32_t __zend_orig_lineno);
__attribute__((visibility("default"))) int
php_stream_parse_fopen_modes(const char *mode, int *open_flags);

__attribute__((visibility(
    "default"))) extern const php_stream_wrapper php_glob_stream_wrapper;
__attribute__((
    visibility("default"))) extern const php_stream_ops php_glob_stream_ops;

__attribute__((visibility("default"))) char *_php_glob_stream_get_path(
    php_stream *stream, size_t *plen, int __php_stream_call_depth,
    const char *__zend_filename, const uint32_t __zend_lineno,
    const char *__zend_orig_filename, const uint32_t __zend_orig_lineno);
__attribute__((visibility("default"))) char *_php_glob_stream_get_pattern(
    php_stream *stream, size_t *plen, int __php_stream_call_depth,
    const char *__zend_filename, const uint32_t __zend_lineno,
    const char *__zend_orig_filename, const uint32_t __zend_orig_lineno);
__attribute__((visibility("default"))) int _php_glob_stream_get_count(
    php_stream *stream, int *pflags, int __php_stream_call_depth,
    const char *__zend_filename, const uint32_t __zend_lineno,
    const char *__zend_orig_filename, const uint32_t __zend_orig_lineno);

__attribute__((visibility(
    "default"))) extern const php_stream_ops php_stream_userspace_ops;
__attribute__((visibility(
    "default"))) extern const php_stream_ops php_stream_userspace_dir_ops;
typedef enum {
  PHP_STREAM_MMAP_SUPPORTED,
  PHP_STREAM_MMAP_MAP_RANGE,
  PHP_STREAM_MMAP_UNMAP
} php_stream_mmap_operation_t;
typedef enum {
  PHP_STREAM_MAP_MODE_READONLY,
  PHP_STREAM_MAP_MODE_READWRITE,
  PHP_STREAM_MAP_MODE_SHARED_READONLY,
  PHP_STREAM_MAP_MODE_SHARED_READWRITE
} php_stream_mmap_access_t;
typedef struct {
  size_t offset;
  size_t length;
  php_stream_mmap_access_t mode;
  char *mapped;
} php_stream_mmap_range;

__attribute__((visibility("default"))) char *
_php_stream_mmap_range(php_stream *stream, size_t offset, size_t length,
                       php_stream_mmap_access_t mode, size_t *mapped_len);
__attribute__((visibility("default"))) int
_php_stream_mmap_unmap(php_stream *stream);
__attribute__((visibility("default"))) int
_php_stream_mmap_unmap_ex(php_stream *stream, zend_off_t readden);

__attribute__((visibility("default"))) int
_php_stream_cast(php_stream *stream, int castas, void **ret, int show_err);

int php_init_stream_wrappers(int module_number);
void php_shutdown_stream_wrappers(int module_number);
void php_shutdown_stream_hashes(void);
zend_result zm_deactivate_streams(int type, int module_number);

__attribute__((visibility("default"))) zend_result
php_register_url_stream_wrapper(const char *protocol,
                                const php_stream_wrapper *wrapper);
__attribute__((visibility("default"))) zend_result
php_unregister_url_stream_wrapper(const char *protocol);
__attribute__((visibility("default"))) zend_result
php_register_url_stream_wrapper_volatile(zend_string *protocol,
                                         php_stream_wrapper *wrapper);
__attribute__((visibility("default"))) zend_result
php_unregister_url_stream_wrapper_volatile(zend_string *protocol);
__attribute__((visibility("default"))) php_stream *_php_stream_open_wrapper_ex(
    const char *path, const char *mode, int options, zend_string **opened_path,
    php_stream_context *context, int __php_stream_call_depth,
    const char *__zend_filename, const uint32_t __zend_lineno,
    const char *__zend_orig_filename, const uint32_t __zend_orig_lineno);
__attribute__((visibility("default"))) php_stream_wrapper *
php_stream_locate_url_wrapper(const char *path, const char **path_for_open,
                              int options);
__attribute__((visibility("default"))) const char *
php_stream_locate_eol(php_stream *stream, zend_string *buf);
__attribute__((visibility("default"))) void
php_stream_wrapper_log_error(const php_stream_wrapper *wrapper, int options,
                             const char *fmt, ...)
    __attribute__((format(printf, 3, 4)));
__attribute__((visibility("default"))) int _php_stream_make_seekable(
    php_stream *origstream, php_stream **newstream, int flags,
    int __php_stream_call_depth, const char *__zend_filename,
    const uint32_t __zend_lineno, const char *__zend_orig_filename,
    const uint32_t __zend_orig_lineno);
__attribute__((visibility("default"))) HashTable *
_php_stream_get_url_stream_wrappers_hash(void);
__attribute__((visibility("default"))) HashTable *
php_stream_get_url_stream_wrappers_hash_global(void);
__attribute__((visibility("default"))) HashTable *
_php_get_stream_filters_hash(void);
__attribute__((visibility("default"))) HashTable *
php_get_stream_filters_hash_global(void);
extern const php_stream_wrapper_ops *php_stream_user_wrapper_ops;
static inline _Bool php_is_stream_path(const char *filename) {
  const char *p;
  for (p = filename;
       (*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z') ||
       (*p >= '0' && *p <= '9') || *p == '+' || *p == '-' || *p == '.';
       p++)
    ;
  return ((p != filename) && (p[0] == ':') && (p[1] == '/') && (p[2] == '/'));
}

__attribute__((visibility("default"))) php_stream *_php_stream_memory_create(
    int mode, int __php_stream_call_depth, const char *__zend_filename,
    const uint32_t __zend_lineno, const char *__zend_orig_filename,
    const uint32_t __zend_orig_lineno);
__attribute__((visibility("default"))) php_stream *_php_stream_memory_open(
    int mode, zend_string *buf, int __php_stream_call_depth,
    const char *__zend_filename, const uint32_t __zend_lineno,
    const char *__zend_orig_filename, const uint32_t __zend_orig_lineno);
__attribute__((visibility("default"))) zend_string *
_php_stream_memory_get_buffer(php_stream *stream, int __php_stream_call_depth,
                              const char *__zend_filename,
                              const uint32_t __zend_lineno,
                              const char *__zend_orig_filename,
                              const uint32_t __zend_orig_lineno);
__attribute__((visibility("default"))) php_stream *_php_stream_temp_create(
    int mode, size_t max_memory_usage, int __php_stream_call_depth,
    const char *__zend_filename, const uint32_t __zend_lineno,
    const char *__zend_orig_filename, const uint32_t __zend_orig_lineno);
__attribute__((visibility("default"))) php_stream *_php_stream_temp_create_ex(
    int mode, size_t max_memory_usage, const char *tmpdir,
    int __php_stream_call_depth, const char *__zend_filename,
    const uint32_t __zend_lineno, const char *__zend_orig_filename,
    const uint32_t __zend_orig_lineno);
__attribute__((visibility("default"))) php_stream *
_php_stream_temp_open(int mode, size_t max_memory_usage, const char *buf,
                      size_t length, int __php_stream_call_depth,
                      const char *__zend_filename, const uint32_t __zend_lineno,
                      const char *__zend_orig_filename,
                      const uint32_t __zend_orig_lineno);
__attribute__((visibility("default"))) int
php_stream_mode_from_str(const char *mode);
__attribute__((visibility("default"))) const char *
_php_stream_mode_to_str(int mode);

extern __attribute__((visibility("default")))
const php_stream_ops php_stream_memory_ops;
extern __attribute__((visibility("default")))
const php_stream_ops php_stream_temp_ops;
extern __attribute__((visibility("default")))
const php_stream_ops php_stream_rfc2397_ops;
extern __attribute__((visibility("default")))
const php_stream_wrapper php_stream_rfc2397_wrapper;

typedef struct _php_core_globals php_core_globals;
extern __attribute__((
    visibility("default"))) struct _php_core_globals core_globals;
struct _php_tick_function_entry;
typedef struct _arg_separators {
  zend_string *output;
  zend_string *input;
} arg_separators;
struct _php_core_globals {
  zend_long output_buffering;
  _Bool implicit_flush;
  _Bool enable_dl;
  uint8_t display_errors;
  _Bool display_startup_errors;
  _Bool log_errors;
  _Bool ignore_repeated_errors;
  _Bool ignore_repeated_source;
  _Bool report_memleaks;
  char *output_handler;
  char *unserialize_callback_func;
  zend_long serialize_precision;
  zend_long memory_limit;
  zend_long max_input_time;
  char *error_log;
  char *doc_root;
  char *user_dir;
  char *include_path;
  char *open_basedir;
  _Bool open_basedir_modified;
  char *extension_dir;
  char *php_binary;
  char *sys_temp_dir;
  char *upload_tmp_dir;
  zend_long upload_max_filesize;
  char *error_append_string;
  char *error_prepend_string;
  char *auto_prepend_file;
  char *auto_append_file;
  char *input_encoding;
  char *internal_encoding;
  char *output_encoding;
  arg_separators arg_separator;
  char *variables_order;
  HashTable rfc1867_protected_variables;
  short connection_status;
  _Bool ignore_user_abort;
  unsigned char header_is_being_sent;
  zend_llist tick_functions;
  zval http_globals[6];
  _Bool expose_php;
  _Bool register_argc_argv;
  _Bool auto_globals_jit;
  _Bool html_errors;
  _Bool xmlrpc_errors;
  char *docref_root;
  char *docref_ext;
  zend_long xmlrpc_error_number;
  _Bool activated_auto_globals[8];
  _Bool modules_activated;
  _Bool file_uploads;
  _Bool during_request_startup;
  _Bool allow_url_fopen;
  _Bool enable_post_data_reading;
  _Bool report_zend_debug;
  int last_error_type;
  int last_error_lineno;
  zend_string *last_error_message;
  zend_string *last_error_file;
  char *php_sys_temp_dir;
  char *disable_classes;
  zend_long max_input_nesting_level;
  zend_long max_input_vars;
  char *user_ini_filename;
  zend_long user_ini_cache_ttl;
  char *request_order;
  char *mail_log;
  _Bool mail_x_header;
  _Bool mail_mixed_lf_and_crlf;
  _Bool in_error_log;
  _Bool allow_url_include;
  _Bool in_user_include;
  _Bool have_called_openlog;
  zend_long syslog_facility;
  char *syslog_ident;
  zend_long syslog_filter;
  zend_long error_log_mode;
};
typedef struct _zend_ini_entry_def {
  const char *name;
  int (*on_modify)(zend_ini_entry *entry, zend_string *new_value, void *mh_arg1,
                   void *mh_arg2, void *mh_arg3, int stage);
  void *mh_arg1;
  void *mh_arg2;
  void *mh_arg3;
  const char *value;
  void (*displayer)(zend_ini_entry *ini_entry, int type);
  uint32_t value_length;
  uint16_t name_length;
  uint8_t modifiable;
} zend_ini_entry_def;
struct _zend_ini_entry {
  zend_string *name;
  int (*on_modify)(zend_ini_entry *entry, zend_string *new_value, void *mh_arg1,
                   void *mh_arg2, void *mh_arg3, int stage);
  void *mh_arg1;
  void *mh_arg2;
  void *mh_arg3;
  zend_string *value;
  zend_string *orig_value;
  void (*displayer)(zend_ini_entry *ini_entry, int type);
  int module_number;
  uint8_t modifiable;
  uint8_t orig_modifiable;
  uint8_t modified;
  const zend_ini_entry_def *def;
};

__attribute__((visibility("default"))) void zend_ini_startup(void);
__attribute__((visibility("default"))) void zend_ini_shutdown(void);
__attribute__((visibility("default"))) void zend_ini_global_shutdown(void);
__attribute__((visibility("default"))) void zend_ini_deactivate(void);
__attribute__((visibility("default"))) void
zend_ini_dtor(HashTable *ini_directives);
__attribute__((visibility("default"))) void zend_copy_ini_directives(void);
__attribute__((visibility("default"))) void zend_ini_sort_entries(void);
__attribute__((visibility("default"))) zend_result zend_register_ini_entries(
    const zend_ini_entry_def *ini_entry, int module_number);
__attribute__((visibility("default"))) zend_result zend_register_ini_entries_ex(
    const zend_ini_entry_def *ini_entry, int module_number, int module_type);
__attribute__((visibility("default"))) void
zend_unregister_ini_entries(int module_number);
__attribute__((visibility("default"))) void
zend_unregister_ini_entries_ex(int module_number, int module_type);
__attribute__((visibility("default"))) void zend_ini_refresh_caches(int stage);
__attribute__((visibility("default"))) zend_result zend_alter_ini_entry(
    zend_string *name, zend_string *new_value, int modify_type, int stage);
__attribute__((visibility("default"))) zend_result
zend_alter_ini_entry_ex(zend_string *name, zend_string *new_value,
                        int modify_type, int stage, _Bool force_change);
__attribute__((visibility("default"))) zend_result
zend_alter_ini_entry_chars(zend_string *name, const char *value,
                           size_t value_length, int modify_type, int stage);
__attribute__((visibility("default"))) zend_result
zend_alter_ini_entry_chars_ex(zend_string *name, const char *value,
                              size_t value_length, int modify_type, int stage,
                              int force_change);
__attribute__((visibility("default"))) zend_result
zend_restore_ini_entry(zend_string *name, int stage);
__attribute__((visibility("default"))) void
display_ini_entries(zend_module_entry *module);
__attribute__((visibility("default"))) zend_long
zend_ini_long(const char *name, size_t name_length, int orig);
__attribute__((visibility("default"))) double
zend_ini_double(const char *name, size_t name_length, int orig);
__attribute__((visibility("default"))) char *
zend_ini_string(const char *name, size_t name_length, int orig);
__attribute__((visibility("default"))) char *
zend_ini_string_ex(const char *name, size_t name_length, int orig,
                   _Bool *exists);
__attribute__((visibility("default"))) zend_string *
zend_ini_str(const char *name, size_t name_length, _Bool orig);
__attribute__((visibility("default"))) zend_string *
zend_ini_str_ex(const char *name, size_t name_length, _Bool orig,
                _Bool *exists);
__attribute__((visibility("default"))) zend_string *
zend_ini_get_value(zend_string *name);
__attribute__((visibility("default"))) _Bool
zend_ini_parse_bool(zend_string *str);
__attribute__((visibility("default"))) zend_long
zend_ini_parse_quantity(zend_string *value, zend_string **errstr);
__attribute__((visibility("default"))) zend_ulong
zend_ini_parse_uquantity(zend_string *value, zend_string **errstr);
__attribute__((visibility("default"))) zend_long
zend_ini_parse_quantity_warn(zend_string *value, zend_string *setting);
__attribute__((visibility("default"))) zend_ulong
zend_ini_parse_uquantity_warn(zend_string *value, zend_string *setting);
__attribute__((visibility("default"))) zend_result zend_ini_register_displayer(
    const char *name, uint32_t name_length,
    void (*displayer)(zend_ini_entry *ini_entry, int type));
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_ini_boolean_displayer_cb(zend_ini_entry *ini_entry, int type);
__attribute__((visibility("default"))) __attribute__((cold)) void
zend_ini_color_displayer_cb(zend_ini_entry *ini_entry, int type);
__attribute__((visibility("default"))) __attribute__((cold)) void
display_link_numbers(zend_ini_entry *ini_entry, int type);

__attribute__((visibility("default"))) int
OnUpdateBool(zend_ini_entry *entry, zend_string *new_value, void *mh_arg1,
             void *mh_arg2, void *mh_arg3, int stage);
__attribute__((visibility("default"))) int
OnUpdateLong(zend_ini_entry *entry, zend_string *new_value, void *mh_arg1,
             void *mh_arg2, void *mh_arg3, int stage);
__attribute__((visibility("default"))) int
OnUpdateLongGEZero(zend_ini_entry *entry, zend_string *new_value, void *mh_arg1,
                   void *mh_arg2, void *mh_arg3, int stage);
__attribute__((visibility("default"))) int
OnUpdateReal(zend_ini_entry *entry, zend_string *new_value, void *mh_arg1,
             void *mh_arg2, void *mh_arg3, int stage);
__attribute__((visibility("default"))) int
OnUpdateString(zend_ini_entry *entry, zend_string *new_value, void *mh_arg1,
               void *mh_arg2, void *mh_arg3, int stage);
__attribute__((visibility("default"))) int
OnUpdateStringUnempty(zend_ini_entry *entry, zend_string *new_value,
                      void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage);
__attribute__((visibility("default"))) int
OnUpdateStr(zend_ini_entry *entry, zend_string *new_value, void *mh_arg1,
            void *mh_arg2, void *mh_arg3, int stage);
__attribute__((visibility("default"))) int
OnUpdateStrNotEmpty(zend_ini_entry *entry, zend_string *new_value,
                    void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage);

typedef void (*zend_ini_parser_cb_t)(zval *arg1, zval *arg2, zval *arg3,
                                     int callback_type, void *arg);

__attribute__((visibility("default"))) zend_result zend_parse_ini_file(
    zend_file_handle *fh, _Bool unbuffered_errors, int scanner_mode,
    zend_ini_parser_cb_t ini_parser_cb, void *arg);
__attribute__((visibility("default"))) zend_result zend_parse_ini_string(
    const char *str, _Bool unbuffered_errors, int scanner_mode,
    zend_ini_parser_cb_t ini_parser_cb, void *arg);

typedef struct _zend_ini_parser_param {
  zend_ini_parser_cb_t ini_parser_cb;
  void *arg;
} zend_ini_parser_param;

__attribute__((visibility("default"))) void config_zval_dtor(zval *zvalue);
int php_init_config(void);
int php_shutdown_config(void);
void php_ini_register_extensions(void);
__attribute__((visibility("default"))) zval *
cfg_get_entry_ex(zend_string *name);
__attribute__((visibility("default"))) zval *cfg_get_entry(const char *name,
                                                           size_t name_length);
__attribute__((visibility("default"))) int cfg_get_long(const char *varname,
                                                        zend_long *result);
__attribute__((visibility("default"))) int cfg_get_double(const char *varname,
                                                          double *result);
__attribute__((visibility("default"))) int cfg_get_string(const char *varname,
                                                          char **result);
__attribute__((visibility("default"))) int
php_parse_user_ini_file(const char *dirname, const char *ini_filename,
                        HashTable *target_hash);
__attribute__((visibility("default"))) void
php_ini_activate_config(HashTable *source_hash, int modify_type, int stage);
__attribute__((visibility("default"))) int php_ini_has_per_dir_config(void);
__attribute__((visibility("default"))) int php_ini_has_per_host_config(void);
__attribute__((visibility("default"))) void
php_ini_activate_per_dir_config(char *path, size_t path_len);
__attribute__((visibility("default"))) void
php_ini_activate_per_host_config(const char *host, size_t host_len);
__attribute__((visibility("default"))) HashTable *
php_ini_get_configuration_hash(void);

__attribute__((visibility("default"))) int
php_fopen_primary_script(zend_file_handle *file_handle);
__attribute__((visibility("default"))) char *
expand_filepath(const char *filepath, char *real_path);
__attribute__((visibility("default"))) char *
expand_filepath_ex(const char *filepath, char *real_path,
                   const char *relative_to, size_t relative_to_len);
__attribute__((visibility("default"))) char *
expand_filepath_with_mode(const char *filepath, char *real_path,
                          const char *relative_to, size_t relative_to_len,
                          int use_realpath);
__attribute__((visibility("default"))) int
php_check_open_basedir(const char *path);
__attribute__((visibility("default"))) int
php_check_open_basedir_ex(const char *path, int warn);
__attribute__((visibility("default"))) int
php_check_specific_open_basedir(const char *basedir, const char *path);
__attribute__((visibility("default"))) int
php_check_safe_mode_include_dir(const char *path);
__attribute__((visibility("default"))) zend_string *
php_resolve_path(const char *filename, size_t filename_len, const char *path);
__attribute__((visibility("default"))) FILE *
php_fopen_with_path(const char *filename, const char *mode, const char *path,
                    zend_string **opened_path);
__attribute__((visibility("default"))) char *php_strip_url_passwd(char *path);
__attribute__((visibility("default"))) int
OnUpdateBaseDir(zend_ini_entry *entry, zend_string *new_value, void *mh_arg1,
                void *mh_arg2, void *mh_arg3, int stage);

struct utimbuf {
  __time_t actime;
  __time_t modtime;
};
extern int utime(const char *__file, const struct utimbuf *__file_times)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

struct dirent {
  __ino_t d_ino;
  __off_t d_off;
  unsigned short int d_reclen;
  unsigned char d_type;
  char d_name[256];
};
struct dirent64 {
  __ino64_t d_ino;
  __off64_t d_off;
  unsigned short int d_reclen;
  unsigned char d_type;
  char d_name[256];
};
enum {
  DT_UNKNOWN = 0,
  DT_FIFO = 1,
  DT_CHR = 2,
  DT_DIR = 4,
  DT_BLK = 6,
  DT_REG = 8,
  DT_LNK = 10,
  DT_SOCK = 12,
  DT_WHT = 14
};
typedef struct __dirstream DIR;
extern int closedir(DIR *__dirp) __attribute__((__nonnull__(1)));
extern DIR *opendir(const char *__name) __attribute__((__nonnull__(1)))
__attribute__((__malloc__)) __attribute__((__malloc__(closedir, 1)));
extern DIR *fdopendir(int __fd) __attribute__((__malloc__))
__attribute__((__malloc__(closedir, 1)));
extern struct dirent *readdir(DIR *__dirp) __attribute__((__nonnull__(1)));
extern struct dirent64 *readdir64(DIR *__dirp) __attribute__((__nonnull__(1)));
extern int readdir_r(DIR *__restrict __dirp, struct dirent *__restrict __entry,
                     struct dirent **__restrict __result)
    __attribute__((__nonnull__(1, 2, 3))) __attribute__((__deprecated__));
extern int readdir64_r(DIR *__restrict __dirp,
                       struct dirent64 *__restrict __entry,
                       struct dirent64 **__restrict __result)
    __attribute__((__nonnull__(1, 2, 3))) __attribute__((__deprecated__));
extern void rewinddir(DIR *__dirp) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(1)));
extern void seekdir(DIR *__dirp, long int __pos)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
extern long int telldir(DIR *__dirp) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(1)));
extern int dirfd(DIR *__dirp) __attribute__((__nothrow__, __leaf__))
__attribute__((__nonnull__(1)));
extern int scandir(const char *__restrict __dir,
                   struct dirent ***__restrict __namelist,
                   int (*__selector)(const struct dirent *),
                   int (*__cmp)(const struct dirent **, const struct dirent **))
    __attribute__((__nonnull__(1, 2)));
extern int scandir64(const char *__restrict __dir,
                     struct dirent64 ***__restrict __namelist,
                     int (*__selector)(const struct dirent64 *),
                     int (*__cmp)(const struct dirent64 **,
                                  const struct dirent64 **))
    __attribute__((__nonnull__(1, 2)));
extern int scandirat(int __dfd, const char *__restrict __dir,
                     struct dirent ***__restrict __namelist,
                     int (*__selector)(const struct dirent *),
                     int (*__cmp)(const struct dirent **,
                                  const struct dirent **))
    __attribute__((__nonnull__(2, 3)));
extern int scandirat64(int __dfd, const char *__restrict __dir,
                       struct dirent64 ***__restrict __namelist,
                       int (*__selector)(const struct dirent64 *),
                       int (*__cmp)(const struct dirent64 **,
                                    const struct dirent64 **))
    __attribute__((__nonnull__(2, 3)));
extern int alphasort(const struct dirent **__e1, const struct dirent **__e2)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__))
    __attribute__((__nonnull__(1, 2)));
extern int alphasort64(const struct dirent64 **__e1,
                       const struct dirent64 **__e2)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__))
    __attribute__((__nonnull__(1, 2)));
extern __ssize_t getdirentries(int __fd, char *__restrict __buf,
                               size_t __nbytes, __off_t *__restrict __basep)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2, 4)));
extern __ssize_t getdirentries64(int __fd, char *__restrict __buf,
                                 size_t __nbytes, __off64_t *__restrict __basep)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2, 4)));
extern int versionsort(const struct dirent **__e1, const struct dirent **__e2)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__))
    __attribute__((__nonnull__(1, 2)));
extern int versionsort64(const struct dirent64 **__e1,
                         const struct dirent64 **__e2)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__))
    __attribute__((__nonnull__(1, 2)));

extern __ssize_t getdents64(int __fd, void *__buffer, size_t __length)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2)));

typedef struct _cwd_state {
  char *cwd;
  size_t cwd_length;
} cwd_state;
typedef int (*verify_path_func)(const cwd_state *);
__attribute__((visibility("default"))) void virtual_cwd_startup(void);
__attribute__((visibility("default"))) void virtual_cwd_shutdown(void);
__attribute__((visibility("default"))) void virtual_cwd_activate(void);
__attribute__((visibility("default"))) void virtual_cwd_deactivate(void);
__attribute__((visibility("default"))) char *virtual_getcwd_ex(size_t *length);
__attribute__((visibility("default"))) char *virtual_getcwd(char *buf,
                                                            size_t size);
__attribute__((visibility("default"))) zend_result
virtual_chdir(const char *path);
__attribute__((visibility("default"))) int
virtual_chdir_file(const char *path, int (*p_chdir)(const char *path));
__attribute__((visibility("default"))) int virtual_filepath(const char *path,
                                                            char **filepath);
__attribute__((visibility("default"))) int
virtual_filepath_ex(const char *path, char **filepath,
                    verify_path_func verify_path);
__attribute__((visibility("default"))) char *virtual_realpath(const char *path,
                                                              char *real_path);
__attribute__((visibility("default"))) FILE *virtual_fopen(const char *path,
                                                           const char *mode);
__attribute__((visibility("default"))) int virtual_open(const char *path,
                                                        int flags, ...);
__attribute__((visibility("default"))) int virtual_creat(const char *path,
                                                         mode_t mode);
__attribute__((visibility("default"))) int virtual_rename(const char *oldname,
                                                          const char *newname);
__attribute__((visibility("default"))) int virtual_stat(const char *path,
                                                        zend_stat_t *buf);
__attribute__((visibility("default"))) int virtual_lstat(const char *path,
                                                         zend_stat_t *buf);
__attribute__((visibility("default"))) int virtual_unlink(const char *path);
__attribute__((visibility("default"))) int virtual_mkdir(const char *pathname,
                                                         mode_t mode);
__attribute__((visibility("default"))) int virtual_rmdir(const char *pathname);
__attribute__((visibility("default"))) DIR *
virtual_opendir(const char *pathname);
__attribute__((visibility("default"))) FILE *virtual_popen(const char *command,
                                                           const char *type);
__attribute__((visibility("default"))) int virtual_access(const char *pathname,
                                                          int mode);
__attribute__((visibility("default"))) int virtual_utime(const char *filename,
                                                         struct utimbuf *buf);
__attribute__((visibility("default"))) int virtual_chmod(const char *filename,
                                                         mode_t mode);
__attribute__((visibility("default"))) int
virtual_chown(const char *filename, uid_t owner, gid_t group, int link);
__attribute__((visibility("default"))) int
virtual_file_ex(cwd_state *state, const char *path,
                verify_path_func verify_path, int use_realpath);
__attribute__((visibility("default"))) char *tsrm_realpath(const char *path,
                                                           char *real_path);
typedef struct _realpath_cache_bucket {
  zend_ulong key;
  char *path;
  char *realpath;
  struct _realpath_cache_bucket *next;
  time_t expires;
  uint16_t path_len;
  uint16_t realpath_len;
  uint8_t is_dir : 1;
} realpath_cache_bucket;
typedef struct _virtual_cwd_globals {
  cwd_state cwd;
  zend_long realpath_cache_size;
  zend_long realpath_cache_size_limit;
  zend_long realpath_cache_ttl;
  realpath_cache_bucket *realpath_cache[1024];
} virtual_cwd_globals;
extern virtual_cwd_globals cwd_globals;
__attribute__((visibility("default"))) void realpath_cache_clean(void);
__attribute__((visibility("default"))) void realpath_cache_del(const char *path,
                                                               size_t path_len);
__attribute__((visibility("default"))) realpath_cache_bucket *
realpath_cache_lookup(const char *path, size_t path_len, time_t t);
__attribute__((visibility("default"))) zend_long realpath_cache_size(void);
__attribute__((visibility("default"))) zend_long
realpath_cache_max_buckets(void);
__attribute__((visibility("default"))) realpath_cache_bucket **
realpath_cache_get_buckets(void);

typedef _Bool zend_bool;
typedef intptr_t zend_intptr_t;
typedef uintptr_t zend_uintptr_t;

__attribute__((visibility("default"))) void php_print_info_htmlhead(void);
__attribute__((visibility("default"))) void php_print_info(int flag);
__attribute__((visibility("default"))) void php_print_style(void);
__attribute__((visibility("default"))) void php_info_print_style(void);
__attribute__((visibility("default"))) void
php_info_print_table_colspan_header(int num_cols, const char *header);
__attribute__((visibility("default"))) void
php_info_print_table_header(int num_cols, ...);
__attribute__((visibility("default"))) void
php_info_print_table_row(int num_cols, ...);
__attribute__((visibility("default"))) void
php_info_print_table_row_ex(int num_cols, const char *, ...);
__attribute__((visibility("default"))) void php_info_print_table_start(void);
__attribute__((visibility("default"))) void php_info_print_table_end(void);
__attribute__((visibility("default"))) void php_info_print_box_start(int bg);
__attribute__((visibility("default"))) void php_info_print_box_end(void);
__attribute__((visibility("default"))) void php_info_print_hr(void);
__attribute__((visibility("default"))) void
php_info_print_module(zend_module_entry *module);
__attribute__((visibility("default"))) zend_string *php_get_uname(char mode);
void register_phpinfo_constants(int type, int module_number);

extern zend_module_entry print_lu_module_entry;
static const zend_internal_arg_info arginfo_printLuLu[] = {
    {(const char *)(uintptr_t)(1),
     {((void *)0),
      (((14) == 18
            ? ((1 << 2) | (1 << 3))
            : ((14) == 13 ? (1u << 21)
                          : ((14) == 16 ? ((1 << 1) | (1 << 2) | (1 << 3) |
                                           (1 << 4) | (1 << 5) | (1 << 6) |
                                           (1 << 7) | (1 << 8) | (1 << 9))
                                        : (1 << (14))))) |
       ((0) ? 0x2u : 0) |
       ((((0) << 25) | ((0) ? (1 << (25 + 2)) : 0) |
         ((0) ? (1 << (25 + 4)) : 0))))},
     ((void *)0)},
    {"string",
     {((void *)0),
      (((6) == 18 ? ((1 << 2) | (1 << 3))
                  : ((6) == 13 ? (1u << 21)
                               : ((6) == 16 ? ((1 << 1) | (1 << 2) | (1 << 3) |
                                               (1 << 4) | (1 << 5) | (1 << 6) |
                                               (1 << 7) | (1 << 8) | (1 << 9))
                                            : (1 << (6))))) |
       ((0) ? 0x2u : 0) |
       ((((0) << 25) | ((0) ? (1 << (25 + 2)) : 0) |
         ((0) ? (1 << (25 + 4)) : 0))))},
     ((void *)0)},
    {"len",
     {((void *)0),
      (((4) == 18 ? ((1 << 2) | (1 << 3))
                  : ((4) == 13 ? (1u << 21)
                               : ((4) == 16 ? ((1 << 1) | (1 << 2) | (1 << 3) |
                                               (1 << 4) | (1 << 5) | (1 << 6) |
                                               (1 << 7) | (1 << 8) | (1 << 9))
                                            : (1 << (4))))) |
       ((0) ? 0x2u : 0) |
       ((((0) << 25) | ((0) ? (1 << (25 + 2)) : 0) |
         ((0) ? (1 << (25 + 4)) : 0))))},
     "10"},
};
static const zend_internal_arg_info arginfo_class_PrintLu_getLuLen[] = {
    {(const char *)(uintptr_t)(1),
     {((void *)0),
      (((4) == 18 ? ((1 << 2) | (1 << 3))
                  : ((4) == 13 ? (1u << 21)
                               : ((4) == 16 ? ((1 << 1) | (1 << 2) | (1 << 3) |
                                               (1 << 4) | (1 << 5) | (1 << 6) |
                                               (1 << 7) | (1 << 8) | (1 << 9))
                                            : (1 << (4))))) |
       ((0) ? 0x2u : 0) |
       ((((0) << 25) | ((0) ? (1 << (25 + 2)) : 0) |
         ((0) ? (1 << (25 + 4)) : 0))))},
     ((void *)0)},
    {"string",
     {((void *)0),
      (((6) == 18 ? ((1 << 2) | (1 << 3))
                  : ((6) == 13 ? (1u << 21)
                               : ((6) == 16 ? ((1 << 1) | (1 << 2) | (1 << 3) |
                                               (1 << 4) | (1 << 5) | (1 << 6) |
                                               (1 << 7) | (1 << 8) | (1 << 9))
                                            : (1 << (6))))) |
       ((0) ? 0x2u : 0) |
       ((((0) << 25) | ((0) ? (1 << (25 + 2)) : 0) |
         ((0) ? (1 << (25 + 4)) : 0))))},
     ((void *)0)},
};
void zif_printLuLu(zend_execute_data *execute_data, zval *return_value);
void zim_PrintLu_printWrap(zend_execute_data *execute_data, zval *return_value);
void zim_PrintLu_getLuLen(zend_execute_data *execute_data, zval *return_value);
static const zend_function_entry ext_functions[] = {
    {"printLuLu", zif_printLuLu, arginfo_printLuLu,
     (uint32_t)(sizeof(arginfo_printLuLu) /
                    sizeof(struct _zend_internal_arg_info) -
                1),
     0, ((void *)0), ((void *)0)},
    {((void *)0), ((void *)0), ((void *)0), 0, 0, ((void *)0), ((void *)0)}};
static const zend_function_entry class_PrintLu_methods[] = {
    {"printWrap", zim_PrintLu_printWrap, arginfo_printLuLu,
     (uint32_t)(sizeof(arginfo_printLuLu) /
                    sizeof(struct _zend_internal_arg_info) -
                1),
     (1 << 0), ((void *)0), ((void *)0)},
    {"getLuLen", zim_PrintLu_getLuLen, arginfo_class_PrintLu_getLuLen,
     (uint32_t)(sizeof(arginfo_class_PrintLu_getLuLen) /
                    sizeof(struct _zend_internal_arg_info) -
                1),
     (1 << 0), ((void *)0), ((void *)0)},
    {((void *)0), ((void *)0), ((void *)0), 0, 0, ((void *)0), ((void *)0)}};
static zend_class_entry *register_class_PrintLu(void) {
  zend_class_entry ce, *class_entry;
  {
    memset(&ce, 0, sizeof(zend_class_entry));
    ce.name = zend_string_init_interned("PrintLu", strlen("PrintLu"), 1);
    ce.default_object_handlers = &std_object_handlers;
    ce.info.internal.builtin_functions = class_PrintLu_methods;
  };
  class_entry = zend_register_internal_class_with_flags(&ce, ((void *)0), 0);
  return class_entry;
}
void zif_printLuLu(zend_execute_data *execute_data, zval *return_value) {
  zend_long line_len = 10;
  char *var;
  size_t var_len;
  size_t i;
  do {
    const int _flags = (0);
    uint32_t _min_num_args = (1);
    uint32_t _max_num_args = (uint32_t)(2);
    uint32_t _num_args = (execute_data)->This.u2.num_args;
    uint32_t _i = 0;
    zval *_real_arg, *_arg = ((void *)0);
    zend_expected_type _expected_type = Z_EXPECTED_LONG;
    char *_error = ((void *)0);
    _Bool _dummy = 0;
    _Bool _optional = 0;
    int _error_code = 0;
    ((void)_i);
    ((void)_real_arg);
    ((void)_arg);
    ((void)_expected_type);
    ((void)_error);
    ((void)_optional);
    ((void)_dummy);
    do {
      if (__builtin_expect(!!(_num_args < _min_num_args), 0) ||
          __builtin_expect(!!(_num_args > _max_num_args), 0)) {
        if (!(_flags & (1 << 1))) {
          zend_wrong_parameters_count_error(_min_num_args, _max_num_args);
        }
        _error_code = 1;
        break;
      }
      _real_arg = (((zval *)(execute_data)) +
                   (((int)((sizeof(zend_execute_data) + sizeof(zval) - 1) /
                           sizeof(zval))) +
                    ((int)(((int)(0)) - 1))));
      ++_i;
      ((void)sizeof((_i <= _min_num_args || _optional == 1) ? 1 : 0),
       __extension__({
         if (_i <= _min_num_args || _optional == 1)
           ;
         else
           __assert_fail("_i <= _min_num_args || _optional==1",
                         "ext/print_lu/print_lu.c", 27,
                         __extension__ __PRETTY_FUNCTION__);
       }));
      ((void)sizeof((_i > _min_num_args || _optional == 0) ? 1 : 0),
       __extension__({
         if (_i > _min_num_args || _optional == 0)
           ;
         else
           __assert_fail("_i > _min_num_args || _optional==0",
                         "ext/print_lu/print_lu.c", 27,
                         __extension__ __PRETTY_FUNCTION__);
       }));
      if (_optional) {
        if (__builtin_expect(!!(_i > _num_args), 0))
          break;
      }
      _real_arg++;
      _arg = _real_arg;
      if (0) {
        if (__builtin_expect(!!((zval_get_type(&(*(_arg))) == 10)), 1)) {
          _arg = &(*(_arg)).value.ref->val;
        }
      }
      if (0) {
        do {
          zval *_zv = (_arg);
          ((void)sizeof((zval_get_type(&(*(_zv))) != 10) ? 1 : 0),
           __extension__({
             if (zval_get_type(&(*(_zv))) != 10)
               ;
             else
               __assert_fail("zval_get_type(&(*(_zv))) != 10",
                             "ext/print_lu/print_lu.c", 27,
                             __extension__ __PRETTY_FUNCTION__);
           }));
          if (zval_get_type(&(*(_zv))) == 7) {
            do {
              zval *__zv = (_zv);
              zend_array *_arr = (*(__zv)).value.arr;
              if (__builtin_expect(!!(zend_gc_refcount(&(_arr)->gc) > 1), 0)) {
                do {
                  zend_array *__arr = (zend_array_dup(_arr));
                  zval *__z = (__zv);
                  (*(__z)).value.arr = __arr;
                  (*(__z)).u1.type_info =
                      (7 | ((1 << 0) << 8) | ((1 << 1) << 8));
                } while (0);
                zend_gc_try_delref(&(_arr)->gc);
              }
            } while (0);
          }
        } while (0);
      };
      if (__builtin_expect(
              !!(!zend_parse_arg_string(_arg, &var, &var_len, 0, _i)), 0)) {
        _expected_type = 0 ? Z_EXPECTED_STRING_OR_NULL : Z_EXPECTED_STRING;
        _error_code = 9;
        break;
      }
      _optional = 1;
      ++_i;
      ((void)sizeof((_i <= _min_num_args || _optional == 1) ? 1 : 0),
       __extension__({
         if (_i <= _min_num_args || _optional == 1)
           ;
         else
           __assert_fail("_i <= _min_num_args || _optional==1",
                         "ext/print_lu/print_lu.c", 29,
                         __extension__ __PRETTY_FUNCTION__);
       }));
      ((void)sizeof((_i > _min_num_args || _optional == 0) ? 1 : 0),
       __extension__({
         if (_i > _min_num_args || _optional == 0)
           ;
         else
           __assert_fail("_i > _min_num_args || _optional==0",
                         "ext/print_lu/print_lu.c", 29,
                         __extension__ __PRETTY_FUNCTION__);
       }));
      if (_optional) {
        if (__builtin_expect(!!(_i > _num_args), 0))
          break;
      }
      _real_arg++;
      _arg = _real_arg;
      if (0) {
        if (__builtin_expect(!!((zval_get_type(&(*(_arg))) == 10)), 1)) {
          _arg = &(*(_arg)).value.ref->val;
        }
      }
      if (0) {
        do {
          zval *_zv = (_arg);
          ((void)sizeof((zval_get_type(&(*(_zv))) != 10) ? 1 : 0),
           __extension__({
             if (zval_get_type(&(*(_zv))) != 10)
               ;
             else
               __assert_fail("zval_get_type(&(*(_zv))) != 10",
                             "ext/print_lu/print_lu.c", 29,
                             __extension__ __PRETTY_FUNCTION__);
           }));
          if (zval_get_type(&(*(_zv))) == 7) {
            do {
              zval *__zv = (_zv);
              zend_array *_arr = (*(__zv)).value.arr;
              if (__builtin_expect(!!(zend_gc_refcount(&(_arr)->gc) > 1), 0)) {
                do {
                  zend_array *__arr = (zend_array_dup(_arr));
                  zval *__z = (__zv);
                  (*(__z)).value.arr = __arr;
                  (*(__z)).u1.type_info =
                      (7 | ((1 << 0) << 8) | ((1 << 1) << 8));
                } while (0);
                zend_gc_try_delref(&(_arr)->gc);
              }
            } while (0);
          }
        } while (0);
      };
      if (__builtin_expect(
              !!(!zend_parse_arg_long(_arg, &line_len, &_dummy, 0, _i)), 0)) {
        _expected_type = 0 ? Z_EXPECTED_LONG_OR_NULL : Z_EXPECTED_LONG;
        _error_code = 9;
        break;
      }
      ((void)sizeof((_i == _max_num_args || _max_num_args == (uint32_t)-1) ? 1
                                                                           : 0),
       __extension__({
         if (_i == _max_num_args || _max_num_args == (uint32_t)-1)
           ;
         else
           __assert_fail(
               "_i == _max_num_args || _max_num_args == (uint32_t) -1",
               "ext/print_lu/print_lu.c", 30,
               __extension__ __PRETTY_FUNCTION__);
       }));
    } while (0);
    if (__builtin_expect(!!(_error_code != 0), 0)) {
      if (!(_flags & (1 << 1))) {
        zend_wrong_parameter_error(_error_code, _i, _error, _expected_type,
                                   _arg);
      }
      return;
    }
  } while (0);
  for (i = 0; i < line_len; i++) {
    php_printf("%c", i % 2 == 0 ? '=' : '-');
  }
  php_printf("\n");
  php_printf("%s\n", var);
  for (i = 0; i < line_len; i++) {
    php_printf("%c", i % 2 == 0 ? '=' : '-');
  }
  php_printf("\n");
  do {
    do {
      (*(return_value)).u1.type_info = 1;
    } while (0);
    return;
  } while (0);
}
void zim_PrintLu_printWrap(zend_execute_data *execute_data,
                           zval *return_value) {
  zend_long line_len = 10;
  char *var;
  size_t var_len;
  size_t i;
  do {
    const int _flags = (0);
    uint32_t _min_num_args = (1);
    uint32_t _max_num_args = (uint32_t)(2);
    uint32_t _num_args = (execute_data)->This.u2.num_args;
    uint32_t _i = 0;
    zval *_real_arg, *_arg = ((void *)0);
    zend_expected_type _expected_type = Z_EXPECTED_LONG;
    char *_error = ((void *)0);
    _Bool _dummy = 0;
    _Bool _optional = 0;
    int _error_code = 0;
    ((void)_i);
    ((void)_real_arg);
    ((void)_arg);
    ((void)_expected_type);
    ((void)_error);
    ((void)_optional);
    ((void)_dummy);
    do {
      if (__builtin_expect(!!(_num_args < _min_num_args), 0) ||
          __builtin_expect(!!(_num_args > _max_num_args), 0)) {
        if (!(_flags & (1 << 1))) {
          zend_wrong_parameters_count_error(_min_num_args, _max_num_args);
        }
        _error_code = 1;
        break;
      }
      _real_arg = (((zval *)(execute_data)) +
                   (((int)((sizeof(zend_execute_data) + sizeof(zval) - 1) /
                           sizeof(zval))) +
                    ((int)(((int)(0)) - 1))));
      ++_i;
      ((void)sizeof((_i <= _min_num_args || _optional == 1) ? 1 : 0),
       __extension__({
         if (_i <= _min_num_args || _optional == 1)
           ;
         else
           __assert_fail("_i <= _min_num_args || _optional==1",
                         "ext/print_lu/print_lu.c", 55,
                         __extension__ __PRETTY_FUNCTION__);
       }));
      ((void)sizeof((_i > _min_num_args || _optional == 0) ? 1 : 0),
       __extension__({
         if (_i > _min_num_args || _optional == 0)
           ;
         else
           __assert_fail("_i > _min_num_args || _optional==0",
                         "ext/print_lu/print_lu.c", 55,
                         __extension__ __PRETTY_FUNCTION__);
       }));
      if (_optional) {
        if (__builtin_expect(!!(_i > _num_args), 0))
          break;
      }
      _real_arg++;
      _arg = _real_arg;
      if (0) {
        if (__builtin_expect(!!((zval_get_type(&(*(_arg))) == 10)), 1)) {
          _arg = &(*(_arg)).value.ref->val;
        }
      }
      if (0) {
        do {
          zval *_zv = (_arg);
          ((void)sizeof((zval_get_type(&(*(_zv))) != 10) ? 1 : 0),
           __extension__({
             if (zval_get_type(&(*(_zv))) != 10)
               ;
             else
               __assert_fail("zval_get_type(&(*(_zv))) != 10",
                             "ext/print_lu/print_lu.c", 55,
                             __extension__ __PRETTY_FUNCTION__);
           }));
          if (zval_get_type(&(*(_zv))) == 7) {
            do {
              zval *__zv = (_zv);
              zend_array *_arr = (*(__zv)).value.arr;
              if (__builtin_expect(!!(zend_gc_refcount(&(_arr)->gc) > 1), 0)) {
                do {
                  zend_array *__arr = (zend_array_dup(_arr));
                  zval *__z = (__zv);
                  (*(__z)).value.arr = __arr;
                  (*(__z)).u1.type_info =
                      (7 | ((1 << 0) << 8) | ((1 << 1) << 8));
                } while (0);
                zend_gc_try_delref(&(_arr)->gc);
              }
            } while (0);
          }
        } while (0);
      };
      if (__builtin_expect(
              !!(!zend_parse_arg_string(_arg, &var, &var_len, 0, _i)), 0)) {
        _expected_type = 0 ? Z_EXPECTED_STRING_OR_NULL : Z_EXPECTED_STRING;
        _error_code = 9;
        break;
      }
      _optional = 1;
      ++_i;
      ((void)sizeof((_i <= _min_num_args || _optional == 1) ? 1 : 0),
       __extension__({
         if (_i <= _min_num_args || _optional == 1)
           ;
         else
           __assert_fail("_i <= _min_num_args || _optional==1",
                         "ext/print_lu/print_lu.c", 57,
                         __extension__ __PRETTY_FUNCTION__);
       }));
      ((void)sizeof((_i > _min_num_args || _optional == 0) ? 1 : 0),
       __extension__({
         if (_i > _min_num_args || _optional == 0)
           ;
         else
           __assert_fail("_i > _min_num_args || _optional==0",
                         "ext/print_lu/print_lu.c", 57,
                         __extension__ __PRETTY_FUNCTION__);
       }));
      if (_optional) {
        if (__builtin_expect(!!(_i > _num_args), 0))
          break;
      }
      _real_arg++;
      _arg = _real_arg;
      if (0) {
        if (__builtin_expect(!!((zval_get_type(&(*(_arg))) == 10)), 1)) {
          _arg = &(*(_arg)).value.ref->val;
        }
      }
      if (0) {
        do {
          zval *_zv = (_arg);
          ((void)sizeof((zval_get_type(&(*(_zv))) != 10) ? 1 : 0),
           __extension__({
             if (zval_get_type(&(*(_zv))) != 10)
               ;
             else
               __assert_fail("zval_get_type(&(*(_zv))) != 10",
                             "ext/print_lu/print_lu.c", 57,
                             __extension__ __PRETTY_FUNCTION__);
           }));
          if (zval_get_type(&(*(_zv))) == 7) {
            do {
              zval *__zv = (_zv);
              zend_array *_arr = (*(__zv)).value.arr;
              if (__builtin_expect(!!(zend_gc_refcount(&(_arr)->gc) > 1), 0)) {
                do {
                  zend_array *__arr = (zend_array_dup(_arr));
                  zval *__z = (__zv);
                  (*(__z)).value.arr = __arr;
                  (*(__z)).u1.type_info =
                      (7 | ((1 << 0) << 8) | ((1 << 1) << 8));
                } while (0);
                zend_gc_try_delref(&(_arr)->gc);
              }
            } while (0);
          }
        } while (0);
      };
      if (__builtin_expect(
              !!(!zend_parse_arg_long(_arg, &line_len, &_dummy, 0, _i)), 0)) {
        _expected_type = 0 ? Z_EXPECTED_LONG_OR_NULL : Z_EXPECTED_LONG;
        _error_code = 9;
        break;
      }
      ((void)sizeof((_i == _max_num_args || _max_num_args == (uint32_t)-1) ? 1
                                                                           : 0),
       __extension__({
         if (_i == _max_num_args || _max_num_args == (uint32_t)-1)
           ;
         else
           __assert_fail(
               "_i == _max_num_args || _max_num_args == (uint32_t) -1",
               "ext/print_lu/print_lu.c", 58,
               __extension__ __PRETTY_FUNCTION__);
       }));
    } while (0);
    if (__builtin_expect(!!(_error_code != 0), 0)) {
      if (!(_flags & (1 << 1))) {
        zend_wrong_parameter_error(_error_code, _i, _error, _expected_type,
                                   _arg);
      }
      return;
    }
  } while (0);
  for (i = 0; i < line_len; i++) {
    php_printf("%c", i % 2 == 0 ? '=' : '-');
  }
  php_printf("\n");
  php_printf("%s\n", var);
  for (i = 0; i < line_len; i++) {
    php_printf("%c", i % 2 == 0 ? '=' : '-');
  }
  php_printf("\n");
  do {
    do {
      (*(return_value)).u1.type_info = 1;
    } while (0);
    return;
  } while (0);
}
void zim_PrintLu_getLuLen(zend_execute_data *execute_data, zval *return_value) {
  char *var;
  size_t var_len;
  do {
    const int _flags = (0);
    uint32_t _min_num_args = (1);
    uint32_t _max_num_args = (uint32_t)(1);
    uint32_t _num_args = (execute_data)->This.u2.num_args;
    uint32_t _i = 0;
    zval *_real_arg, *_arg = ((void *)0);
    zend_expected_type _expected_type = Z_EXPECTED_LONG;
    char *_error = ((void *)0);
    _Bool _dummy = 0;
    _Bool _optional = 0;
    int _error_code = 0;
    ((void)_i);
    ((void)_real_arg);
    ((void)_arg);
    ((void)_expected_type);
    ((void)_error);
    ((void)_optional);
    ((void)_dummy);
    do {
      if (__builtin_expect(!!(_num_args < _min_num_args), 0) ||
          __builtin_expect(!!(_num_args > _max_num_args), 0)) {
        if (!(_flags & (1 << 1))) {
          zend_wrong_parameters_count_error(_min_num_args, _max_num_args);
        }
        _error_code = 1;
        break;
      }
      _real_arg = (((zval *)(execute_data)) +
                   (((int)((sizeof(zend_execute_data) + sizeof(zval) - 1) /
                           sizeof(zval))) +
                    ((int)(((int)(0)) - 1))));
      ++_i;
      ((void)sizeof((_i <= _min_num_args || _optional == 1) ? 1 : 0),
       __extension__({
         if (_i <= _min_num_args || _optional == 1)
           ;
         else
           __assert_fail("_i <= _min_num_args || _optional==1",
                         "ext/print_lu/print_lu.c", 81,
                         __extension__ __PRETTY_FUNCTION__);
       }));
      ((void)sizeof((_i > _min_num_args || _optional == 0) ? 1 : 0),
       __extension__({
         if (_i > _min_num_args || _optional == 0)
           ;
         else
           __assert_fail("_i > _min_num_args || _optional==0",
                         "ext/print_lu/print_lu.c", 81,
                         __extension__ __PRETTY_FUNCTION__);
       }));
      if (_optional) {
        if (__builtin_expect(!!(_i > _num_args), 0))
          break;
      }
      _real_arg++;
      _arg = _real_arg;
      if (0) {
        if (__builtin_expect(!!((zval_get_type(&(*(_arg))) == 10)), 1)) {
          _arg = &(*(_arg)).value.ref->val;
        }
      }
      if (0) {
        do {
          zval *_zv = (_arg);
          ((void)sizeof((zval_get_type(&(*(_zv))) != 10) ? 1 : 0),
           __extension__({
             if (zval_get_type(&(*(_zv))) != 10)
               ;
             else
               __assert_fail("zval_get_type(&(*(_zv))) != 10",
                             "ext/print_lu/print_lu.c", 81,
                             __extension__ __PRETTY_FUNCTION__);
           }));
          if (zval_get_type(&(*(_zv))) == 7) {
            do {
              zval *__zv = (_zv);
              zend_array *_arr = (*(__zv)).value.arr;
              if (__builtin_expect(!!(zend_gc_refcount(&(_arr)->gc) > 1), 0)) {
                do {
                  zend_array *__arr = (zend_array_dup(_arr));
                  zval *__z = (__zv);
                  (*(__z)).value.arr = __arr;
                  (*(__z)).u1.type_info =
                      (7 | ((1 << 0) << 8) | ((1 << 1) << 8));
                } while (0);
                zend_gc_try_delref(&(_arr)->gc);
              }
            } while (0);
          }
        } while (0);
      };
      if (__builtin_expect(
              !!(!zend_parse_arg_string(_arg, &var, &var_len, 0, _i)), 0)) {
        _expected_type = 0 ? Z_EXPECTED_STRING_OR_NULL : Z_EXPECTED_STRING;
        _error_code = 9;
        break;
      }
      ((void)sizeof((_i == _max_num_args || _max_num_args == (uint32_t)-1) ? 1
                                                                           : 0),
       __extension__({
         if (_i == _max_num_args || _max_num_args == (uint32_t)-1)
           ;
         else
           __assert_fail(
               "_i == _max_num_args || _max_num_args == (uint32_t) -1",
               "ext/print_lu/print_lu.c", 82,
               __extension__ __PRETTY_FUNCTION__);
       }));
    } while (0);
    if (__builtin_expect(!!(_error_code != 0), 0)) {
      if (!(_flags & (1 << 1))) {
        zend_wrong_parameter_error(_error_code, _i, _error, _expected_type,
                                   _arg);
      }
      return;
    }
  } while (0);
  do {
    do {
      zval *__z = (return_value);
      (*(__z)).value.lval = var_len;
      (*(__z)).u1.type_info = 4;
    } while (0);
    return;
  } while (0);
}
zend_result zm_startup_print_lu(int type, int module_number) {
  zend_class_entry *print_lu_ce = register_class_PrintLu();
}
zend_result zm_activate_print_lu(int type, int module_number) {
  return SUCCESS;
}
__attribute__((cold)) void zm_info_print_lu(zend_module_entry *zend_module) {
  php_info_print_table_start();
  php_info_print_table_row(2, "print_lu support", "enabled");
  php_info_print_table_end();
}
zend_module_entry print_lu_module_entry = {sizeof(zend_module_entry),
                                           20240925,
                                           1,
                                           0,
                                           ((void *)0),
                                           ((void *)0),
                                           "print_lu",
                                           ext_functions,
                                           zm_startup_print_lu,
                                           ((void *)0),
                                           zm_activate_print_lu,
                                           ((void *)0),
                                           zm_info_print_lu,
                                           "0.1.0",
                                           0,
                                           ((void *)0),
                                           ((void *)0),
                                           ((void *)0),
                                           ((void *)0),
                                           0,
                                           0,
                                           ((void *)0),
                                           0,
                                           "API"
                                           "20240925"
                                           ",NTS"
                                           ",debug"};
