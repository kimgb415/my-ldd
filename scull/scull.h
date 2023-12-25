#ifndef SCULL_MAJOR
#define SCULL_MAJOR 0   /* dynamic major by default */
#endif

#ifndef SCULL_NR_DEVS
#define SCULL_NR_DEVS 4    /* scull0 through scull3 */
#endif

#include <linux/cdev.h>

extern int scull_major;
extern int scull_nr_devs;

struct scull_dev {
	struct cdev cdev;
};
