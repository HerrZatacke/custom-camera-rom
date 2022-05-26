#pragma bank 1

const unsigned char constantTiles[] = {
  // Filled
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  // Arrow
  // 0x00, 0x00, 0x00, 0x20, 0x00, 0x30, 0x00, 0x38, 0x04, 0x38, 0x08, 0x30, 0x10, 0x20, 0x20, 0x00,
  0x00, 0x00, 0x20, 0x00, 0x30, 0x00, 0x38, 0x00, 0x38, 0x04, 0x30, 0x08, 0x20, 0x10, 0x00, 0x20,
  // Border Horizontal
  0xff, 0xc3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  // Border Vertical
  0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01,
  // Menu Border Left
  0x83, 0x9f, 0xa7, 0x9f, 0xb3, 0x8f, 0xa6, 0x9f, 0x83, 0x9f, 0xa7, 0x9f, 0xb3, 0x8f, 0xa6, 0x9f,
  // Menu Border Top
  0xff, 0xff, 0x00, 0x00, 0xee, 0x00, 0x44, 0xbb, 0x00, 0xff, 0xaa, 0xff, 0xff, 0xff, 0x77, 0xff,

  // Beep Cursor
  0xfe, 0x00, 0xff, 0x7d, 0xc3, 0x41, 0xc3, 0x41, 0xc3, 0x41, 0xc3, 0x41, 0xff, 0x01, 0x7f, 0x7f,

  // Free space 31 more
  0x00, 0x00, 0x7e, 0x00, 0x42, 0x3c, 0x5a, 0x3c, 0xa5, 0xc3, 0xbd, 0xc3, 0x81, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x7e, 0x00, 0x42, 0x3c, 0x5a, 0x3c, 0xa5, 0xc3, 0xbd, 0xc3, 0x81, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x7e, 0x00, 0x42, 0x3c, 0x5a, 0x3c, 0xa5, 0xc3, 0xbd, 0xc3, 0x81, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x7e, 0x00, 0x42, 0x3c, 0x5a, 0x3c, 0xa5, 0xc3, 0xbd, 0xc3, 0x81, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x7e, 0x00, 0x42, 0x3c, 0x5a, 0x3c, 0xa5, 0xc3, 0xbd, 0xc3, 0x81, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x7e, 0x00, 0x42, 0x3c, 0x5a, 0x3c, 0xa5, 0xc3, 0xbd, 0xc3, 0x81, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x7e, 0x00, 0x42, 0x3c, 0x5a, 0x3c, 0xa5, 0xc3, 0xbd, 0xc3, 0x81, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x7e, 0x00, 0x42, 0x3c, 0x5a, 0x3c, 0xa5, 0xc3, 0xbd, 0xc3, 0x81, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x7e, 0x00, 0x42, 0x3c, 0x5a, 0x3c, 0xa5, 0xc3, 0xbd, 0xc3, 0x81, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x7e, 0x00, 0x42, 0x3c, 0x5a, 0x3c, 0xa5, 0xc3, 0xbd, 0xc3, 0x81, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x7e, 0x00, 0x42, 0x3c, 0x5a, 0x3c, 0xa5, 0xc3, 0xbd, 0xc3, 0x81, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x7e, 0x00, 0x42, 0x3c, 0x5a, 0x3c, 0xa5, 0xc3, 0xbd, 0xc3, 0x81, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x7e, 0x00, 0x42, 0x3c, 0x5a, 0x3c, 0xa5, 0xc3, 0xbd, 0xc3, 0x81, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x7e, 0x00, 0x42, 0x3c, 0x5a, 0x3c, 0xa5, 0xc3, 0xbd, 0xc3, 0x81, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x7e, 0x00, 0x42, 0x3c, 0x5a, 0x3c, 0xa5, 0xc3, 0xbd, 0xc3, 0x81, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x7e, 0x00, 0x42, 0x3c, 0x5a, 0x3c, 0xa5, 0xc3, 0xbd, 0xc3, 0x81, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x7e, 0x00, 0x42, 0x3c, 0x5a, 0x3c, 0xa5, 0xc3, 0xbd, 0xc3, 0x81, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x7e, 0x00, 0x42, 0x3c, 0x5a, 0x3c, 0xa5, 0xc3, 0xbd, 0xc3, 0x81, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x7e, 0x00, 0x42, 0x3c, 0x5a, 0x3c, 0xa5, 0xc3, 0xbd, 0xc3, 0x81, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x7e, 0x00, 0x42, 0x3c, 0x5a, 0x3c, 0xa5, 0xc3, 0xbd, 0xc3, 0x81, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x7e, 0x00, 0x42, 0x3c, 0x5a, 0x3c, 0xa5, 0xc3, 0xbd, 0xc3, 0x81, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x7e, 0x00, 0x42, 0x3c, 0x5a, 0x3c, 0xa5, 0xc3, 0xbd, 0xc3, 0x81, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x7e, 0x00, 0x42, 0x3c, 0x5a, 0x3c, 0xa5, 0xc3, 0xbd, 0xc3, 0x81, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x7e, 0x00, 0x42, 0x3c, 0x5a, 0x3c, 0xa5, 0xc3, 0xbd, 0xc3, 0x81, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x7e, 0x00, 0x42, 0x3c, 0x5a, 0x3c, 0xa5, 0xc3, 0xbd, 0xc3, 0x81, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x7e, 0x00, 0x42, 0x3c, 0x5a, 0x3c, 0xa5, 0xc3, 0xbd, 0xc3, 0x81, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x7e, 0x00, 0x42, 0x3c, 0x5a, 0x3c, 0xa5, 0xc3, 0xbd, 0xc3, 0x81, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x7e, 0x00, 0x42, 0x3c, 0x5a, 0x3c, 0xa5, 0xc3, 0xbd, 0xc3, 0x81, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x7e, 0x00, 0x42, 0x3c, 0x5a, 0x3c, 0xa5, 0xc3, 0xbd, 0xc3, 0x81, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x7e, 0x00, 0x42, 0x3c, 0x5a, 0x3c, 0xa5, 0xc3, 0xbd, 0xc3, 0x81, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x7e, 0x00, 0x42, 0x3c, 0x5a, 0x3c, 0xa5, 0xc3, 0xbd, 0xc3, 0x81, 0xff, 0xff, 0xff,
};

const unsigned char upperLowerDoubleTiles[] = {
  0x00, 0x00, 0x7e, 0x00, 0x42, 0x3c, 0x5a, 0x3c, 0xa5, 0xc3, 0xbd, 0xc3, 0x81, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x7e, 0x00, 0x42, 0x3c, 0x5a, 0x3c, 0xa5, 0xc3, 0xbd, 0xc3, 0x81, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x7e, 0x00, 0x42, 0x3c, 0x5a, 0x3c, 0xa5, 0xc3, 0xbd, 0xc3, 0x81, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x7e, 0x00, 0x42, 0x3c, 0x5a, 0x3c, 0xa5, 0xc3, 0xbd, 0xc3, 0x81, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x7e, 0x00, 0x42, 0x3c, 0x5a, 0x3c, 0xa5, 0xc3, 0xbd, 0xc3, 0x81, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x7e, 0x00, 0x42, 0x3c, 0x5a, 0x3c, 0xa5, 0xc3, 0xbd, 0xc3, 0x81, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x7e, 0x00, 0x42, 0x3c, 0x5a, 0x3c, 0xa5, 0xc3, 0xbd, 0xc3, 0x81, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x7e, 0x00, 0x42, 0x3c, 0x5a, 0x3c, 0xa5, 0xc3, 0xbd, 0xc3, 0x81, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x7e, 0x00, 0x42, 0x3c, 0x5a, 0x3c, 0xa5, 0xc3, 0xbd, 0xc3, 0x81, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x7e, 0x00, 0x42, 0x3c, 0x5a, 0x3c, 0xa5, 0xc3, 0xbd, 0xc3, 0x81, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x7e, 0x00, 0x42, 0x3c, 0x5a, 0x3c, 0xa5, 0xc3, 0xbd, 0xc3, 0x81, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x7e, 0x00, 0x42, 0x3c, 0x5a, 0x3c, 0xa5, 0xc3, 0xbd, 0xc3, 0x81, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x7e, 0x00, 0x42, 0x3c, 0x5a, 0x3c, 0xa5, 0xc3, 0xbd, 0xc3, 0x81, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x7e, 0x00, 0x42, 0x3c, 0x5a, 0x3c, 0xa5, 0xc3, 0xbd, 0xc3, 0x81, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x7e, 0x00, 0x42, 0x3c, 0x5a, 0x3c, 0xa5, 0xc3, 0xbd, 0xc3, 0x81, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x7e, 0x00, 0x42, 0x3c, 0x5a, 0x3c, 0xa5, 0xc3, 0xbd, 0xc3, 0x81, 0xff, 0xff, 0xff,
};

#define HBOR 0xFF
// bytes marked HBOR (horizontal border) are used for hidden data

const unsigned char tiles_thumbnail[] = {
  HBOR, 0xFF, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
  HBOR, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  HBOR, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  HBOR, 0xFF, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
  0x80, 0x80, 0x87, 0x80, 0x8F, 0x80, 0x8C, 0x83, 0x81, 0x8C, 0x83, 0x80, 0x87, 0x80, 0x8E, 0x81,
  0x00, 0x00, 0x9C, 0x00, 0xDC, 0x00, 0xCC, 0x10, 0xCF, 0x00, 0x8F, 0x40, 0x0C, 0x83, 0x0C, 0x00,
  0x00, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x00, 0x0C, 0x9D, 0x00, 0xDD, 0x00, 0xCC, 0x11, 0xCC, 0x00,
  0x01, 0x01, 0x01, 0x01, 0xC1, 0x01, 0xC1, 0x01, 0xF1, 0x01, 0xF1, 0x01, 0xC1, 0x31, 0xC1, 0x01,
  0x8F, 0x80, 0x8F, 0x80, 0x80, 0x8F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
  0xCF, 0x00, 0xCF, 0x00, 0x00, 0xCF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xDE, 0x00, 0x9E, 0x40, 0x00, 0x9E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xF1, 0x01, 0x71, 0x81, 0x01, 0x71, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
  0x80, 0x80, 0x80, 0x80, 0x80, 0x80, HBOR, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, HBOR, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, HBOR, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, HBOR, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
