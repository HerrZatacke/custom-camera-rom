#define OFFSET_FONT 128u
#define OFFSET_BLANK 128u
#define OFFSET_TILES 219u
#define OFFSET_FILL 219u
#define OFFSET_MENU_ARROW 220u
#define OFFSET_BORDER_H 221u
#define OFFSET_BORDER_V 222u
#define MENU_BORDER_LEFT 223u
#define MENU_BORDER_TOP 224u
#define OFFSET_BLEEP_CURSOR 225u

#define SPRITE_MENU_INDICATOR 0
#define SPRITE_BORDER_H_1 1
#define SPRITE_BORDER_H_2 2
#define SPRITE_BORDER_H_3 3
#define SPRITE_BORDER_H_4 4
#define SPRITE_BORDER_H_5 5
#define SPRITE_BORDER_H_6 6
#define SPRITE_BORDER_H_7 7
#define SPRITE_BORDER_H_8 8
#define SPRITE_BORDER_V_1 9
#define SPRITE_BORDER_V_2 10
#define SPRITE_BORDER_V_3 11
#define SPRITE_BORDER_V_4 12
#define SPRITE_BORDER_V_5 13
#define SPRITE_BORDER_V_6 14
#define SPRITE_BORDER_V_7 15
#define SPRITE_BORDER_V_8 16
#define SPRITE_BLEEP_CURSOR 17

#define PALETTE_SPRITES 0b11100100u
#define PALETTE_NORMAL 0b11100100u
#define PALETTE_INVERTED 0b00011011u
#define PALETTE_BLANK 0b11111111u

#define MAIN_LOOP_MENU 0
#define MAIN_LOOP_SHOOT_MANUAL 1
#define MAIN_LOOP_SHOOT_BURST 2
#define MAIN_LOOP_IMAGE_GALLERY 3
#define MAIN_LOOP_IMAGE 4
#define MAIN_LOOP_DELETE_ALL 5
#define MAIN_LOOP_DEBUG 254
#define MAIN_LOOP_NOT_IMPLEMENTED 255

#define IMAGE_MENU_INFO 0
#define IMAGE_MENU_DELETE 1
#define IMAGE_MENU_PRINT 2
#define IMAGE_MENU_BLEEP 3
#define IMAGE_MENU_EXPOSE 4

#define HALF_IMAGE_SIZE 1792
#define VRAM_9000 (unsigned char *)0x9000
#define VRAM_8000 (unsigned char *)0x8000

#define THUMBNAIL_BYTE_CAPTURE       0x00
#define THUMBNAIL_BYTE_EDGEGAINS     0x10
#define THUMBNAIL_BYTE_EXPOSURE_HIGH 0x20
#define THUMBNAIL_BYTE_EXPOSURE_LOW  0x30
#define THUMBNAIL_BYTE_EDMOVOLT      0xC6
#define THUMBNAIL_BYTE_VOUTZERO      0xD6
#define THUMBNAIL_BYTE_DITHERSET     0xE6
#define THUMBNAIL_BYTE_CONTRAST      0xF6