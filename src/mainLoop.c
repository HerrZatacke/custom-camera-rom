
#include <gb/gb.h>
#include <gbdk/platform.h>

#include "./defines.h"
#include "./globals.h"
#include "./banks/banks.h"
#include "./camera.h"
#include "./modeShootingManual.h"
#include "./modeShootingBurst.h"
#include "./mainMenu.h"
#include "./debug.h"
#include "./gallery.h"

void fastLoadImageTiles() {
  SWITCH_RAM(0);
  set_data(VRAM_9000, last_seen_upper, HALF_IMAGE_SIZE);
  set_data(VRAM_8000, last_seen_lower, HALF_IMAGE_SIZE);
}

void mainLoop() {
  // Loop forever
  while (1) {
    switch (mainLoopState) {
      case MAIN_LOOP_SHOOT_MANUAL:
        fastLoadImageTiles();
        capture();
        manualShootMenu();
        break;
      case MAIN_LOOP_SHOOT_BURST:
        fastLoadImageTiles();
        capture();
        burstShootMenu();
        break;
      case MAIN_LOOP_MENU:
        mainMenu();
        break;
      case MAIN_LOOP_DEBUG:
        debugMenu();
        break;
      case MAIN_LOOP_IMAGE_GALLERY:
        galleryMenu();
        break;
      case MAIN_LOOP_IMAGE:
        imageMenu();
        break;
    }

    wait_vbl_done();
  }
}