const unsigned char hexCharLUT[] = "0123456789ABCDEF";

inline void hexChar(unsigned char *target, unsigned char value) {
  target[0] = hexCharLUT[(value >> 4) & 0b00001111];
  target[1] = hexCharLUT[value & 0b00001111];
}


void getImageInfo(unsigned char imageIndex, unsigned char *tileMap) {
  unsigned char imageSlot = getImageSlot(imageIndex);
  unsigned char i;

  SWITCH_RAM(images[imageSlot]->bank);

  unsigned char capture = images[imageSlot]->thumbnail[THUMBNAIL_BYTE_CAPTURE];
  unsigned char edgeGains = images[imageSlot]->thumbnail[THUMBNAIL_BYTE_EDGEGAINS];
  unsigned char exposureHigh = images[imageSlot]->thumbnail[THUMBNAIL_BYTE_EXPOSURE_HIGH];
  unsigned char exposureLow = images[imageSlot]->thumbnail[THUMBNAIL_BYTE_EXPOSURE_LOW];
  unsigned char edgeModeVolt = images[imageSlot]->thumbnail[THUMBNAIL_BYTE_EDMOVOLT];
  unsigned char voltageZeroPoint = images[imageSlot]->thumbnail[THUMBNAIL_BYTE_VOUTZERO];
  unsigned char ditherSet = images[imageSlot]->thumbnail[THUMBNAIL_BYTE_DITHERSET];
  unsigned char contrast = images[imageSlot]->thumbnail[THUMBNAIL_BYTE_CONTRAST];

  unsigned char captureMode   = capture          & A000_MASK_CAPTURE;
  unsigned char edgeExclusive = edgeGains        & A001_MASK_EDGE_EXCLUSIVE;
  unsigned char edgeOperation = edgeGains        & A001_MASK_EDGE_OP_MODE;
  unsigned char gain          = edgeGains        & A001_MASK_GAIN;
  unsigned char edgeMode      = edgeModeVolt     & A004_MASK_EDGE_RATIO;
  unsigned char invertOut     = edgeModeVolt     & A004_MASK_INVERT_OUTPUT;
  unsigned char vRef          = edgeModeVolt     & A004_MASK_VOLTAGE_REF;
  unsigned char zeroPoint     = voltageZeroPoint & A005_MASK_ZERO;
  unsigned char vOut          = voltageZeroPoint & A005_MASK_VOLTAGE_OUT;

  if (
    capture == 0xFF &&
    edgeGains == 0xFF &&
    exposureHigh == 0xFF &&
    exposureLow == 0xFF &&
    edgeModeVolt == 0xFF &&
    voltageZeroPoint == 0xFF &&
    ditherSet == 0xFF &&
    contrast == 0xFF
  ) {
    memcpy(&tileMap[0],
     "                    "
     "                    "
     "                    "
     "                    "
     "                    "
     "                    "
     "   Image was not    "
     "                    "
     "     taken with     "
     "                    "
     "  2bit PXLR Studio  "
     "                    "
     "                    "
     "                    "
     "                    "
     "                    "
     "                    "
     "                    ",
   360);
    return;
  }


  memcpy(&tileMap[0],
    "Image #??? Slot #???"
    "                    "
    "Exposure Time ??????"
    "Sensor Gain   ??????"
    "Voltage Output??????"
    "Dith. Contrast??????"
    "Dither Set    ??????"
    "Voltage Ref   ??????"
    "Invert Output ??????"
    "Zero Point    ??????"
    "Capture Mode  ??????"
    "Edge Operation??????"
    "Edge Mode     ??????"
    "Edge Exclusive??????"
    "                    "
    "Registers           "
    " 0x?? 0x?? 0x?? 0x??"
    " 0x?? 0x?? 0x?? 0x??",
  360);

#define POS_IMG 7
#define POS_SLOT 17
#define POS_01 54
#define POS_02 74
#define POS_03 94
#define POS_04 114
#define POS_05 134
#define POS_06 154
#define POS_07 174
#define POS_08 194
#define POS_09 214
#define POS_10 234
#define POS_11 254
#define POS_12 274

  savedBank = _current_bank;
  SWITCH_ROM(2);

  unsigned int exposureTimeInt = (exposureHigh << 8) + exposureLow;
  unsigned char exposureTime = 0xFF;
  for (i = 0; i < NUM_EXPOSURE_TIMES; i += 1) {
    if (exposureTimesValues[i] == exposureTimeInt) {
      exposureTime = i;
    }
  }

  for (i = 0; i < NUM_EXPOSURE_TIMES; i += 1) {
    if (exposureTimes[i].value == exposureTime) {
      memcpy(&tileMap[POS_01], exposureTimes[i].title, MENU_TEXT_LENGTH);
    }
  }

  for (i = 0; i < NUM_GAIN_LEVELS; i += 1) {
    if (gains[i].value == gain) {
      memcpy(&tileMap[POS_02], gains[i].title, MENU_TEXT_LENGTH);
    }
  }

  for (i = 0; i < NUM_VOLTAGE_OUTS; i += 1) {
    if (voltageOuts[i].value == vOut) {
      memcpy(&tileMap[POS_03], voltageOuts[i].title, MENU_TEXT_LENGTH);
    }
  }

  for (i = 0; i < NUM_CONTRASTS; i += 1) {
    if (contrasts[i].value == contrast) {
      memcpy(&tileMap[POS_04], contrasts[i].title, MENU_TEXT_LENGTH);
    }
  }

  for (i = 0; i < NUM_DITHERSETS; i += 1) {
    if (ditherSets[i].value == ditherSet) {
      memcpy(&tileMap[POS_05], ditherSets[i].title, MENU_TEXT_LENGTH);
    }
  }


  for (i = 0; i < NUM_VOLTAGE_REFS; i += 1) {
    if (voltageRefs[i].value == vRef) {
      memcpy(&tileMap[POS_06], voltageRefs[i].title, MENU_TEXT_LENGTH);
    }
  }

  for (i = 0; i < NUM_INVERT_OUTPUTS; i += 1) {
    if (invertOutputs[i].value == invertOut) {
      memcpy(&tileMap[POS_07], invertOutputs[i].title, MENU_TEXT_LENGTH);
    }
  }

  for (i = 0; i < NUM_ZERO_POINTS; i += 1) {
    if (zeroPoints[i].value == zeroPoint) {
      memcpy(&tileMap[POS_08], zeroPoints[i].title, MENU_TEXT_LENGTH);
    }
  }

  for (i = 0; i < NUM_CAPTURE_MODES; i += 1) {
    if (captureModes[i].value == captureMode) {
      memcpy(&tileMap[POS_09], captureModes[i].title, MENU_TEXT_LENGTH);
    }
  }

  for (i = 0; i < NUM_EDGE_OP_MODES; i += 1) {
    if (edgeOpModes[i].value == edgeOperation) {
      memcpy(&tileMap[POS_10], edgeOpModes[i].title, MENU_TEXT_LENGTH);
    }
  }

  for (i = 0; i < NUM_EDGE_MODES; i += 1) {
    if (edgeModes[i].value == edgeMode) {
      memcpy(&tileMap[POS_11], edgeModes[i].title, MENU_TEXT_LENGTH);
    }
  }

  for (i = 0; i < NUM_EDGE_EXCLUSIVE; i += 1) {
    if (edgeExclusives[i].value == edgeExclusive) {
      memcpy(&tileMap[POS_12], edgeExclusives[i].title, MENU_TEXT_LENGTH);
    }
  }

  SWITCH_ROM(savedBank);

  unsigned char digits[10];
  BCD bcd = MAKE_BCD(0);

  uint2bcd(imageIndex, &bcd);
  bcd2text(&bcd, 48u, digits);
  memcpy(&tileMap[POS_IMG], &digits[5], 3);

  uint2bcd(imageSlot, &bcd);
  bcd2text(&bcd, 48u, digits);
  memcpy(&tileMap[POS_SLOT], &digits[5], 3);

  hexChar(&tileMap[323], capture);
  hexChar(&tileMap[328], edgeGains);
  hexChar(&tileMap[333], exposureHigh);
  hexChar(&tileMap[338], exposureLow);
  hexChar(&tileMap[343], edgeModeVolt);
  hexChar(&tileMap[348], voltageZeroPoint);
  hexChar(&tileMap[353], ditherSet);
  hexChar(&tileMap[358], contrast);
}

inline void displayImageInfo(unsigned char imageIndex) {
  move_sprite(SPRITE_MENU_INDICATOR, 0, 0);

  getImageInfo(imageIndex, imageInfo);

  waitRelease();

  fill_win_rect(0, 0, 20, 18, OFFSET_BLANK);
  move_win(6, 0);
  set_win_based_tiles(0, 0, 20, 18, imageInfo, OFFSET_FONT - 32);

  while (jp != J_B && jp != J_A) {
    wait_vbl_done();
  }

  fill_win_rect(0, 0, 20, 18, OFFSET_BLANK);
  move_win(78, 0);
}
