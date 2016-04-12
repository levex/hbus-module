#ifndef __BUS_CONSUMER_H
#define __BUS_CONSUMER_H

typedef int bus_handle_t; /* TODO */

struct bus_consumer {
	uint64_t con_id;
	void *con_callback; /* TODO */
	bus_handle_t con_handle;
};

#endif /* !DEFINED_ __BUS_CONSUMER_H */
