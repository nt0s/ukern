#ifndef _HAL_HAL_H_
#define _HAL_HAL_H_
#include "../common/sys/kdef.h"
#include "../common/sys/type.h"
#include "multiboot.h"
#include "../common/sys/sys_info.h"

// concurrency
void SAPI hal_spin_lock(uint64_t * lock);
void SAPI hal_spin_unlock(uint64_t * lock);

// Atomically set *dst = val
// return: the previous value of *dst
extern uint64_t SAPI hal_interlocked_exchange(uint64_t* dst,
                                                     uint64_t val);
// loaded kernel addr
extern char kernel_start[];
extern char kernel_end[];

//hal
boot_info_t*SAPI hal_init(multiboot_info_t* m_info);

//debug
extern void SAPI BOCHS_MAGIC_BREAKPOINT();

#endif
