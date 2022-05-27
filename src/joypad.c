#pragma bank 1

#include <gb/gb.h>

// global joypad store variable
unsigned char jp = 0;
unsigned char jpCooldown = 0;

void joypadConsumed() BANKED {
  jp = 0;
  jpCooldown = 15;
}

void waitRelease() BANKED {
  // Wait until all inputs have been released
  while (jp != 0) {
    wait_vbl_done();
  }

  joypadConsumed();
}

void captureJoypadISR() BANKED {
  if (jpCooldown && joypad()) {
    jpCooldown--;
  } else {
    jp = joypad();
    jpCooldown = 0;
  }
}