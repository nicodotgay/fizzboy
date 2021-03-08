#include <gb/gb.h>
#include <stdio.h>
#include "tiles.h"

#define ZEROPOS     360 // position of 0 char on tile map
#define NUMPOS      12  // origin of number on bg layer (grows right to left)

void set_num(int num) {
    int pos = NUMPOS;
    while(num > 0) {
        int digit = num % 10;
        set_bkg_tiles(pos, 7, 1, 1, fizzboy_map_data+ZEROPOS+digit);
        //printf("%u\n", digit);
        num /= 10;
        --pos;
    }
}

void draw_fizz() {
    for (int i = 0; i <= 4; ++i) {
        set_bkg_tiles(7+i, 9, 1, 1, fizzboy_map_data+380+i);
        set_bkg_tiles(7+i, 10, 1, 1, fizzboy_map_data+400+i);
    }
}

void draw_buzz() {
    for (int i = 0; i <= 4; ++i) {
        set_bkg_tiles(7+i, 9, 1, 1, fizzboy_map_data+386+i);
        set_bkg_tiles(7+i, 10, 1, 1, fizzboy_map_data+406+i);
    }
}

void draw_fizzbuzz() {
    for (int i = 0; i <= 4; ++i) {
        set_bkg_tiles(7+i, 9, 1, 1, fizzboy_map_data+392+i);
        set_bkg_tiles(7+i, 10, 1, 1, fizzboy_map_data+412+i);
    }
}

void draw_clear() {
    for (int i = 0; i <= 4; ++i) {
        set_bkg_tiles(7+i, 9, 1, 1, fizzboy_map_data+397);
        set_bkg_tiles(7+i, 10, 1, 1, fizzboy_map_data+397);
    }
}

void check(int num) {
    if(((num%3)||(num%5))== 0)
        draw_fizzbuzz();
    else if((num%3)==0)
        draw_fizz();
    else if((num%5)==0)
        draw_buzz();
    else
        draw_clear();
}

void main() {
    SHOW_BKG;
    DISPLAY_ON;
    int num = 0;
    set_bkg_data(0, fizzboy_tile_count, fizzboy_tile_data);
    set_bkg_tiles(0, 0, fizzboy_tile_map_width, fizzboy_tile_map_height, fizzboy_map_data);
    set_bkg_tiles(NUMPOS, 7, 1, 1, fizzboy_map_data+ZEROPOS);
    while (1) {
        if (joypad() == J_A) {
            ++num;
            set_num(num);
            check(num);
            delay(100);
        }
    }
}
