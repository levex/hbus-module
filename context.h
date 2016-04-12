#ifndef __BUS_CONTEXT_H
#define __BUS_CONTEXT_H

struct bus_context {
	uint32_t ctx_id;
	struct consumer *ctx_consumers; /* TODO */
	void *ctx_messages; /* TODO */
	void *ctx_scheduler; /* TODO */
};

#endif /* !DEFINED_ __BUS_CONTEXT_H */
