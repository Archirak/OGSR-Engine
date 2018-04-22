/* API declaration export attribute */
#define AL_API  __declspec(dllexport)
#define ALC_API __declspec(dllexport)

/* Define any available alignment declaration */
#define ALIGN(x) __declspec(align(x))

/* Define a built-in call indicating an aligned data pointer */
#define ASSUME_ALIGNED(x, y) x

/* Define if HRTF data is embedded in the library */
/* #undef ALSOFT_EMBED_HRTF_DATA */

/* Define if we have the sysconf function */
/* #undef HAVE_SYSCONF */

/* Define if we have the C11 aligned_alloc function */
/* #undef HAVE_ALIGNED_ALLOC */

/* Define if we have the posix_memalign function */
/* #undef HAVE_POSIX_MEMALIGN */

/* Define if we have the _aligned_malloc function */
#define HAVE__ALIGNED_MALLOC

/* Define if we have the proc_pidpath function */
/* #undef HAVE_PROC_PIDPATH */

/* Define if we have the getopt function */
/* #undef HAVE_GETOPT */

/* Define if we have SSE CPU extensions */
#define HAVE_SSE
#define HAVE_SSE2
#define HAVE_SSE3
#define HAVE_SSE4_1

/* Define if we have ARM Neon CPU extensions */
/* #undef HAVE_NEON */

/* Define if we have the ALSA backend */
/* #undef HAVE_ALSA */

/* Define if we have the OSS backend */
/* #undef HAVE_OSS */

/* Define if we have the Solaris backend */
/* #undef HAVE_SOLARIS */

/* Define if we have the SndIO backend */
/* #undef HAVE_SNDIO */

/* Define if we have the QSA backend */
/* #undef HAVE_QSA */

/* Define if we have the WASAPI backend */
#define HAVE_WASAPI

/* Define if we have the DSound backend */
#define HAVE_DSOUND

/* Define if we have the Windows Multimedia backend */
#define HAVE_WINMM

/* Define if we have the PortAudio backend */
/* #undef HAVE_PORTAUDIO */

/* Define if we have the PulseAudio backend */
/* #undef HAVE_PULSEAUDIO */

/* Define if we have the JACK backend */
/* #undef HAVE_JACK */

/* Define if we have the CoreAudio backend */
/* #undef HAVE_COREAUDIO */

/* Define if we have the OpenSL backend */
/* #undef HAVE_OPENSL */

/* Define if we have the Wave Writer backend */
#define HAVE_WAVE

/* Define if we have the SDL2 backend */
/* #undef HAVE_SDL2 */

/* Define if we have the stat function */
#define HAVE_STAT

/* Define if we have the lrintf function */
#define HAVE_LRINTF

/* Define if we have the modff function */
#define HAVE_MODFF

/* Define if we have the log2f function */
#define HAVE_LOG2F

/* Define if we have the cbrtf function */
#define HAVE_CBRTF

/* Define if we have the strtof function */
#define HAVE_STRTOF

/* Define if we have the strnlen function */
#define HAVE_STRNLEN

/* Define if we have the __int64 type */
/* #undef HAVE___INT64 */

/* Define to the size of a long int type */
#define SIZEOF_LONG 4

/* Define to the size of a long long int type */
#define SIZEOF_LONG_LONG 8

/* Define if we have C99 _Bool support */
#define HAVE_C99_BOOL

/* Define if we have C11 _Static_assert support */
/* #undef HAVE_C11_STATIC_ASSERT */

/* Define if we have C11 _Alignas support */
/* #undef HAVE_C11_ALIGNAS */

/* Define if we have C11 _Atomic support */
/* #undef HAVE_C11_ATOMIC */

/* Define if we have GCC's destructor attribute */
/* #undef HAVE_GCC_DESTRUCTOR */

/* Define if we have GCC's format attribute */
/* #undef HAVE_GCC_FORMAT */

/* Define if we have stdint.h */
#define HAVE_STDINT_H

/* Define if we have stdbool.h */
#define HAVE_STDBOOL_H

/* Define if we have stdalign.h */
/* #undef HAVE_STDALIGN_H */

/* Define if we have windows.h */
#define HAVE_WINDOWS_H

/* Define if we have dlfcn.h */
/* #undef HAVE_DLFCN_H */

/* Define if we have pthread_np.h */
/* #undef HAVE_PTHREAD_NP_H */

/* Define if we have malloc.h */
#define HAVE_MALLOC_H

/* Define if we have dirent.h */
/* #undef HAVE_DIRENT_H */

/* Define if we have strings.h */
/* #undef HAVE_STRINGS_H */

/* Define if we have cpuid.h */
/* #undef HAVE_CPUID_H */

/* Define if we have intrin.h */
#define HAVE_INTRIN_H

/* Define if we have sys/sysconf.h */
/* #undef HAVE_SYS_SYSCONF_H */

/* Define if we have guiddef.h */
#define HAVE_GUIDDEF_H

/* Define if we have initguid.h */
/* #undef HAVE_INITGUID_H */

/* Define if we have ieeefp.h */
/* #undef HAVE_IEEEFP_H */

/* Define if we have float.h */
#define HAVE_FLOAT_H

/* Define if we have fenv.h */
#define HAVE_FENV_H

/* Define if we have GCC's __get_cpuid() */
/* #undef HAVE_GCC_GET_CPUID */

/* Define if we have the __cpuid() intrinsic */
#define HAVE_CPUID_INTRINSIC

/* Define if we have the _BitScanForward64() intrinsic */
/* #undef HAVE_BITSCANFORWARD64_INTRINSIC */

/* Define if we have the _BitScanForward() intrinsic */
#define HAVE_BITSCANFORWARD_INTRINSIC

/* Define if we have _controlfp() */
#define HAVE__CONTROLFP

/* Define if we have __control87_2() */
#define HAVE___CONTROL87_2

/* Define if we have pthread_setschedparam() */
/* #undef HAVE_PTHREAD_SETSCHEDPARAM */

/* Define if we have pthread_setname_np() */
/* #undef HAVE_PTHREAD_SETNAME_NP */

/* Define if pthread_setname_np() only accepts one parameter */
/* #undef PTHREAD_SETNAME_NP_ONE_PARAM */

/* Define if pthread_setname_np() accepts three parameters */
/* #undef PTHREAD_SETNAME_NP_THREE_PARAMS */

/* Define if we have pthread_set_name_np() */
/* #undef HAVE_PTHREAD_SET_NAME_NP */

/* Define if we have pthread_mutexattr_setkind_np() */
/* #undef HAVE_PTHREAD_MUTEXATTR_SETKIND_NP */

/* Define if we have pthread_mutex_timedlock() */
/* #undef HAVE_PTHREAD_MUTEX_TIMEDLOCK */