#ifndef _S_PMM_H_
#define _S_PMM_H_

#include "g_abi.h"
#include "g_type.h"
#include "linked_list.h"

#define K_PAGE_SIZE 4096

typedef uint64_t k_physical_addr_t;

// note that these bases must be K_PAGE_SIZE aligned
// the size is the # of pages
// attr is not useful yet
// if unalignment is detected, the kernel bug checks.

typedef struct
{
    k_physical_addr_t base;
    uint64_t size;
    uint32_t attr;
} k_pmm_node_t;

typedef struct
{
    uint32_t num_of_nodes;
    k_pmm_node_t nodes[];
} k_pmm_info_t;

#endif