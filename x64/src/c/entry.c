#include "type.h"
#include "kdef.h"
#include "print.h"
#include "mem.h"
#include "multiboot.h"

extern uint64_t text_pos;
void HYPKERNEL64 hk_main(multiboot_info_t* multiboot_info)
{
    hk_clear_screen();
    hk_print_str("Welcome to HYP OS. Kernel is now running in x64 mode.\n");
    x64:
    goto x64;
}
