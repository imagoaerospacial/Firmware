/**
 * @file helloworld.c
 * Minimal application example for PX4 autopilot
 *
 * @author Example User <mail@example.com>
 */

#include <px4_log.h>

__EXPORT int helloworld_main(int argc, char *argv[]);

int helloworld_main(int argc, char *argv[])
{
    PX4_INFO("Hello Sky!");
    return OK;
}
