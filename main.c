#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
//#include <iostream>
//#include <fstream>
#include <sys/stat.h>
#include <SDL2/SDL.h>
//#include <cstdlib>
#include <time.h>
#include "MMU.c"

int main(int argc, char *argv[])
{
    MMU* mmu = MMU_create();
    MMU_load_bootrom(mmu);
    int read_value;
    MMU_write_16(mmu,0x0,0xFFFF);

    MMU_write_16(mmu,0x10,0xFFFF);

    read_value = MMU_read_16(mmu,0x00);
    printf("%d\n", read_value);
    read_value = MMU_read_8(mmu,0x00);
    printf("%d\n", read_value);
    read_value = MMU_read_16(mmu,0x10);
    printf("%d\n", read_value);
    read_value = MMU_read_8(mmu,0x10);
    printf("%d\n", read_value); 
    printf("%s",*mmu->bootRom);
    MMU_destroy(mmu);
}