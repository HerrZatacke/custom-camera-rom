#define BLNK OFFSET_BLANK
#define FILL OFFSET_FILL
#define MBOL MENU_BORDER_LEFT
#define NUM_CONSTANT_TILES 37

const unsigned char constantTiles[] = {
  // Filled
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  // Arrow
  // 0x00, 0x00, 0x00, 0x20, 0x00, 0x30, 0x00, 0x38, 0x04, 0x38, 0x08, 0x30, 0x10, 0x20, 0x20, 0x00,
  0x00, 0x00, 0x20, 0x00, 0x30, 0x00, 0x38, 0x00, 0x38, 0x04, 0x30, 0x08, 0x20, 0x10, 0x00, 0x20,
  // Border Horizontal
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff,
  // Border Vertical
  0x00, 0x08, 0x00, 0x08, 0x00, 0x08, 0x00, 0x08, 0x00, 0x08, 0x00, 0x08, 0x00, 0x08, 0x00, 0x08,
  // Menu Border Left
  0x1e, 0x7f, 0x4b, 0x3f, 0x6f, 0x1f, 0x4b, 0x3f, 0x1e, 0x7f, 0x4b, 0x3f, 0x6f, 0x1f, 0x4b, 0x3f,

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


const unsigned char map_normal[] = {
  BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK,
  BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK,
  BLNK, BLNK, 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F, BLNK, BLNK,
  BLNK, BLNK, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, BLNK, BLNK,
  BLNK, BLNK, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2A, 0x2B, 0x2C, 0x2D, 0x2E, 0x2F, BLNK, BLNK,
  BLNK, BLNK, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3A, 0x3B, 0x3C, 0x3D, 0x3E, 0x3F, BLNK, BLNK,
  BLNK, BLNK, 0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4A, 0x4B, 0x4C, 0x4D, 0x4E, 0x4F, BLNK, BLNK,
  BLNK, BLNK, 0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5A, 0x5B, 0x5C, 0x5D, 0x5E, 0x5F, BLNK, BLNK,
  BLNK, BLNK, 0x60, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 0x6A, 0x6B, 0x6C, 0x6D, 0x6E, 0x6F, BLNK, BLNK,
  BLNK, BLNK, 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F, BLNK, BLNK,
  BLNK, BLNK, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, BLNK, BLNK,
  BLNK, BLNK, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2A, 0x2B, 0x2C, 0x2D, 0x2E, 0x2F, BLNK, BLNK,
  BLNK, BLNK, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3A, 0x3B, 0x3C, 0x3D, 0x3E, 0x3F, BLNK, BLNK,
  BLNK, BLNK, 0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4A, 0x4B, 0x4C, 0x4D, 0x4E, 0x4F, BLNK, BLNK,
  BLNK, BLNK, 0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5A, 0x5B, 0x5C, 0x5D, 0x5E, 0x5F, BLNK, BLNK,
  BLNK, BLNK, 0x60, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 0x6A, 0x6B, 0x6C, 0x6D, 0x6E, 0x6F, BLNK, BLNK,
  BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK,
  BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK,
};

const unsigned char map_flipped[] = {
  FILL, FILL, FILL, FILL, FILL, FILL, FILL, FILL, FILL, FILL, FILL, FILL, FILL, FILL, FILL, FILL, FILL, FILL, FILL, FILL,
  FILL, FILL, FILL, FILL, FILL, FILL, FILL, FILL, FILL, FILL, FILL, FILL, FILL, FILL, FILL, FILL, FILL, FILL, FILL, FILL,
  FILL, FILL, 0x0F, 0x0E, 0x0D, 0x0C, 0x0B, 0x0A, 0x09, 0x08, 0x07, 0x06, 0x05, 0x04, 0x03, 0x02, 0x01, 0x00, FILL, FILL,
  FILL, FILL, 0x1F, 0x1E, 0x1D, 0x1C, 0x1B, 0x1A, 0x19, 0x18, 0x17, 0x16, 0x15, 0x14, 0x13, 0x12, 0x11, 0x10, FILL, FILL,
  FILL, FILL, 0x2F, 0x2E, 0x2D, 0x2C, 0x2B, 0x2A, 0x29, 0x28, 0x27, 0x26, 0x25, 0x24, 0x23, 0x22, 0x21, 0x20, FILL, FILL,
  FILL, FILL, 0x3F, 0x3E, 0x3D, 0x3C, 0x3B, 0x3A, 0x39, 0x38, 0x37, 0x36, 0x35, 0x34, 0x33, 0x32, 0x31, 0x30, FILL, FILL,
  FILL, FILL, 0x4F, 0x4E, 0x4D, 0x4C, 0x4B, 0x4A, 0x49, 0x48, 0x47, 0x46, 0x45, 0x44, 0x43, 0x42, 0x41, 0x40, FILL, FILL,
  FILL, FILL, 0x5F, 0x5E, 0x5D, 0x5C, 0x5B, 0x5A, 0x59, 0x58, 0x57, 0x56, 0x55, 0x54, 0x53, 0x52, 0x51, 0x50, FILL, FILL,
  FILL, FILL, 0x6F, 0x6E, 0x6D, 0x6C, 0x6B, 0x6A, 0x69, 0x68, 0x67, 0x66, 0x65, 0x64, 0x63, 0x62, 0x61, 0x60, FILL, FILL,
  FILL, FILL, 0x0F, 0x0E, 0x0D, 0x0C, 0x0B, 0x0A, 0x09, 0x08, 0x07, 0x06, 0x05, 0x04, 0x03, 0x02, 0x01, 0x00, FILL, FILL,
  FILL, FILL, 0x1F, 0x1E, 0x1D, 0x1C, 0x1B, 0x1A, 0x19, 0x18, 0x17, 0x16, 0x15, 0x14, 0x13, 0x12, 0x11, 0x10, FILL, FILL,
  FILL, FILL, 0x2F, 0x2E, 0x2D, 0x2C, 0x2B, 0x2A, 0x29, 0x28, 0x27, 0x26, 0x25, 0x24, 0x23, 0x22, 0x21, 0x20, FILL, FILL,
  FILL, FILL, 0x3F, 0x3E, 0x3D, 0x3C, 0x3B, 0x3A, 0x39, 0x38, 0x37, 0x36, 0x35, 0x34, 0x33, 0x32, 0x31, 0x30, FILL, FILL,
  FILL, FILL, 0x4F, 0x4E, 0x4D, 0x4C, 0x4B, 0x4A, 0x49, 0x48, 0x47, 0x46, 0x45, 0x44, 0x43, 0x42, 0x41, 0x40, FILL, FILL,
  FILL, FILL, 0x5F, 0x5E, 0x5D, 0x5C, 0x5B, 0x5A, 0x59, 0x58, 0x57, 0x56, 0x55, 0x54, 0x53, 0x52, 0x51, 0x50, FILL, FILL,
  FILL, FILL, 0x6F, 0x6E, 0x6D, 0x6C, 0x6B, 0x6A, 0x69, 0x68, 0x67, 0x66, 0x65, 0x64, 0x63, 0x62, 0x61, 0x60, FILL, FILL,
  FILL, FILL, FILL, FILL, FILL, FILL, FILL, FILL, FILL, FILL, FILL, FILL, FILL, FILL, FILL, FILL, FILL, FILL, FILL, FILL,
  FILL, FILL, FILL, FILL, FILL, FILL, FILL, FILL, FILL, FILL, FILL, FILL, FILL, FILL, FILL, FILL, FILL, FILL, FILL, FILL,
};

const unsigned char map_sideMenu[] = {
   MBOL, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK,
   MBOL, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK,
   MBOL, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK,
   MBOL, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK,
   MBOL, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK,
   MBOL, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK,
   MBOL, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK,
   MBOL, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK,
   MBOL, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK,
   MBOL, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK,
   MBOL, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK,
   MBOL, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK,
   MBOL, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK,
   MBOL, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK,
   MBOL, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK,
   MBOL, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK,
   MBOL, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK,
   MBOL, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK, BLNK,
};
