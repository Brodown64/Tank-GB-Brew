#include <gb/gb.h>
#include <stdio.h>
#include "TankSprites.c"


void main(void){
    UINT8 currentspriteindex = 0; // creates index

	set_sprite_data(0, 2, Tank);
	move_sprite(0, 88, 78);
	SHOW_SPRITES; 
    
    // shows sprite

	while(1){
        switch(joypad()){
          case J_RIGHT: 
                set_sprite_tile(0, 1);
                scroll_sprite(0,10,0);
                break;
          case J_LEFT: 
                set_sprite_tile(0, 0);
                scroll_sprite(0,-10,0);
                break;
        }
        
        delay(100);
	}
}

// while(1){
//         if(currentspriteindex==0){
//         	currentspriteindex = 1;
//         }
//         else{
//         	currentspriteindex = 0;
//         }