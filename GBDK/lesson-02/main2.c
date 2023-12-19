// Copyright (c) 2023 Ian Beddie All rights reserved
//
// Created by: Ian Beddie
// Created on: Dec 2023
// This program is the space aliens program for the GameBoy.

#include <gb/gb.h>
#include <stdio.h>

#include "MetaSprites.c"
#include "SpaceAliens.c"

int main() {
    // This displays a sprite to the GameBoy screen
    set_sprite_data(0, 16, SpaceAliens);

    set_meta_sprite_tile(0, 1, 2, 3, 4);

    move_meta_sprite(0, 76, 120);

    SHOW_SPRITES;
    DISPLAY_ON;

    return 0;
}
