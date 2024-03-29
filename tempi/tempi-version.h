#ifndef __TEMPI_VERSION_H__
#define __TEMPI_VERSION_H__

/**
 * TEMPI_MAJOR_VERSION:
 *
 * The major version of the Tempi library (1, if %TEMPI_VERSION is 1.2.3)
 */
#define TEMPI_MAJOR_VERSION   (0)

/**
 * TEMPI_MINOR_VERSION:
 *
 * The minor version of the Tempi library (2, if %TEMPI_VERSION is 1.2.3)
 */
#define TEMPI_MINOR_VERSION   (1)

/**
 * TEMPI_MICRO_VERSION:
 *
 * The micro version of the Tempi library (3, if %TEMPI_VERSION is 1.2.3)
 */
#define TEMPI_MICRO_VERSION   (4)

#define TEMPI_VERSION_IS_GIT ((TEMPI_MICRO_VERSION % 2) == 1)
#define TEMPI_VERSION_IS_STABLE ((TEMPI_MINOR_VERSION % 2) == 0)
#define TEMPI_VERSION_IS_UNSTABLE ((TEMPI_MINOR_VERSION % 2) == 1)

/**
 * TEMPI_VERSION:
 *
 * The full version of the Tempi library, like 1.2.3
 */
#define TEMPI_VERSION         0.1.4

/**
 * TEMPI_VERSION_S:
 *
 * The full version of the Tempi library, in string form (suited for
 * string concatenation)
 */
#define TEMPI_VERSION_S       "0.1.4"

/**
 * TEMPI_VERSION_HEX:
 *
 * Numerically encoded version of the Tempi library, like 0x010203
 */
#define TEMPI_VERSION_HEX     ((TEMPI_MAJOR_VERSION << 24) | \
                                (TEMPI_MINOR_VERSION << 16) | \
                                (TEMPI_MICRO_VERSION << 8))
/**
 * TEMPI_CHECK_VERSION:
 * @major: major version, like 1 in 1.2.3
 * @minor: minor version, like 2 in 1.2.3
 * @micro: micro version, like 3 in 1.2.3
 *
 * Evaluates to %TRUE if the version of the Tempi library is greater
 * than @major, @minor and @micro
 */
#define TEMPI_CHECK_VERSION(major,minor,micro) \
        (TEMPI_MAJOR_VERSION > (major) || \
        (TEMPI_MAJOR_VERSION == (major) && TEMPI_MINOR_VERSION > (minor)) || \
        (TEMPI_MAJOR_VERSION == (major) && TEMPI_MINOR_VERSION == (minor) && TEMPI_MICRO_VERSION >= (micro)))

#endif // __TEMPI_VERSION_H__

