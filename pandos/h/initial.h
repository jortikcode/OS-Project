#ifndef PCB_H
#define PCB_H

#include "../h/pcb.h"
#include "../h/asl.h"
#include "../h/exceptions.h"
#include "../h/interrupts.h"
#include "../h/scheduler.h"
#include "../h/types.h"

#define N_DEVICE 48

extern void test();
extern void uTLB_RefillHandler();
extern void exception_handler();

int sem[N_DEVICE];
int p_count, soft_counter;
pcb_t *ready_hq, *ready_lq, *current_p;
passupvector_t *passupvector;

#endif