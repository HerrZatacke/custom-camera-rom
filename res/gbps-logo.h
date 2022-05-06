#include "../version.h"

// TileCount
#define LOGO_TILE_COUNT 128

// Tiles
const unsigned char logo_tiles[2048] = {
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xBD, 0xC2, 0xC3, 0x80, 0x83, 0xC1, 0xC3, 0xF1,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x1E, 0x3F, 0x1E, 0xBB, 0x07, 0x85, 0x02,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0xFF, 0x39, 0x1F, 0x39, 0x11, 0x89, 0x70, 0x30, 0x00,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0xFF, 0xFF, 0x7F,
    0xE1, 0xE3, 0xC3, 0xC7, 0xC5, 0x83, 0xC3, 0x81, 0xBD, 0xC3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0x92, 0x01, 0x9B, 0x11, 0x92, 0x01, 0x85, 0x02, 0x7A, 0x87, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0x29, 0x10, 0xB9, 0x11, 0xA9, 0x10, 0x18, 0x00, 0xEF, 0x18, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0x7F, 0xFF, 0xFF, 0xFF, 0x7F, 0xFF, 0xFF, 0x7F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xCF, 0xF0, 0xC0, 0x80, 0x00, 0x80, 0x00, 0x00, 0x02, 0x05, 0x00, 0x0F, 0x0A, 0x05, 0x0C, 0x03,
    0xFD, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB2, 0x41, 0x80, 0xFB, 0x02, 0xF9, 0x00, 0xFB,
    0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xAF, 0x50, 0x88, 0xFF, 0x00, 0xFF, 0x00, 0xFF,
    0xC7, 0x3F, 0x29, 0x06, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA0, 0xC0, 0x0C, 0xF0, 0x06, 0xF8,
    0x5F, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0A, 0x15, 0x28, 0x1F, 0x00, 0x1F, 0x10, 0x0F,
    0xF4, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB0, 0x40, 0x88, 0xF0, 0x88, 0x70, 0x00, 0xF8,
    0xFF, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2A, 0x15, 0x08, 0x3F, 0x48, 0x37, 0x61, 0x3E,
    0xF7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB3, 0x44, 0x98, 0xE7, 0x20, 0xC7, 0x08, 0xE7,
    0x76, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xAC, 0x50, 0x8C, 0xF8, 0x04, 0xF8, 0x40, 0xB8,
    0x7F, 0xFF, 0x3F, 0xFF, 0x1F, 0x7F, 0x4F, 0x3F, 0x6F, 0x1F, 0x4F, 0x3F, 0x6F, 0x1F, 0x4F, 0x3F,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF,
    0xDB, 0xE0, 0xC0, 0x80, 0x00, 0x80, 0x00, 0x00, 0x05, 0x0A, 0x04, 0x0F, 0x00, 0x0F, 0x00, 0x0F,
    0x9B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB2, 0x41, 0x80, 0xFB, 0x02, 0xF9, 0x00, 0xFB,
    0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xAF, 0x50, 0x88, 0xFF, 0x00, 0xFF, 0x00, 0xFF,
    0xE7, 0x1F, 0x0D, 0x03, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x90, 0xE0, 0x0C, 0xF0, 0x06, 0xF8,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x7F, 0x3F, 0x1F, 0x3F, 0x0F, 0x1F, 0x37, 0x0F,
    0x00, 0x0F, 0x04, 0x0F, 0x00, 0x0F, 0x00, 0x0F, 0x00, 0x0F, 0x00, 0x0F, 0x00, 0x0F, 0x00, 0x0F,
    0x0A, 0xF1, 0x00, 0xFB, 0x02, 0xF9, 0x02, 0xF8, 0x88, 0x70, 0x00, 0xF8, 0x08, 0xF0, 0x00, 0xF8,
    0x00, 0xFF, 0x08, 0xFF, 0x00, 0xFF, 0xAC, 0x03, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00,
    0x02, 0xFC, 0x09, 0xFE, 0x00, 0xFF, 0x00, 0xFF, 0x80, 0x7F, 0x00, 0xFF, 0x80, 0x7F, 0x80, 0x7F,
    0x08, 0x07, 0x09, 0x06, 0x00, 0x07, 0x84, 0x03, 0x86, 0x01, 0x00, 0x83, 0x40, 0x81, 0x01, 0x80,
    0x04, 0xF8, 0x08, 0xFC, 0x00, 0xFC, 0x05, 0xF8, 0x8C, 0x71, 0x02, 0xF9, 0x2A, 0xD1, 0x18, 0xE3,
    0x00, 0x7F, 0x08, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0xE8, 0x17, 0x01, 0xFE, 0x03, 0xFC, 0x10, 0xEE,
    0x00, 0xC7, 0x48, 0x87, 0x40, 0x87, 0x08, 0x87, 0x00, 0x07, 0x88, 0x07, 0x00, 0x07, 0x08, 0x07,
    0x6C, 0x90, 0x0C, 0xF8, 0x04, 0xF8, 0x04, 0xF8, 0x84, 0x78, 0x04, 0xF8, 0x04, 0xF8, 0x04, 0xF8,
    0x6F, 0x1F, 0x4F, 0x3F, 0x6F, 0x1F, 0x0F, 0x3F, 0x6F, 0x1F, 0x4F, 0x3F, 0x6F, 0x1F, 0x4F, 0x3F,
    0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF,
    0x1F, 0x07, 0x03, 0x0F, 0x0B, 0x07, 0x8F, 0x03, 0x05, 0x03, 0x8D, 0x03, 0x85, 0x03, 0x8D, 0x03,
    0x04, 0x0B, 0x00, 0x0F, 0x01, 0x0E, 0x00, 0x0F, 0x05, 0x0A, 0x00, 0x0F, 0x05, 0x0A, 0x02, 0x0D,
    0x88, 0x70, 0x00, 0xF8, 0x28, 0xD0, 0x00, 0xF8, 0xA8, 0x50, 0x03, 0xF8, 0xA9, 0x50, 0x71, 0x8A,
    0x50, 0x00, 0xA0, 0x00, 0x00, 0x00, 0x01, 0x00, 0x02, 0x01, 0xFC, 0x03, 0xEA, 0x15, 0x54, 0xAB,
    0x0A, 0x75, 0x80, 0x7F, 0xA2, 0x5D, 0x00, 0xFF, 0xAA, 0x55, 0x01, 0xFE, 0xAB, 0x54, 0x04, 0xFA,
    0xC1, 0x00, 0x00, 0x80, 0xC0, 0x00, 0x00, 0x80, 0x00, 0x00, 0x88, 0x00, 0x04, 0x00, 0x08, 0x00,
    0x94, 0x63, 0x09, 0xE6, 0x2B, 0x44, 0xE5, 0x0A, 0x1E, 0x01, 0x30, 0x0F, 0x0A, 0x15, 0x04, 0x3B,
    0x8A, 0x74, 0x02, 0xFC, 0x2C, 0x50, 0xD0, 0x28, 0xE8, 0x10, 0x58, 0xA0, 0xE0, 0x10, 0xD0, 0x20,
    0x00, 0x07, 0x08, 0x07, 0x02, 0x05, 0x00, 0x07, 0x02, 0x05, 0x88, 0x07, 0x02, 0x05, 0x04, 0x03,
    0x8C, 0x70, 0x04, 0xF8, 0x24, 0xD8, 0x00, 0xF8, 0xAC, 0x50, 0x04, 0xF8, 0xAC, 0x50, 0x50, 0xA8,
    0x44, 0x3B, 0x00, 0x7F, 0xD1, 0x2E, 0x80, 0x7F, 0x55, 0xAA, 0x22, 0xDC, 0x58, 0xA0, 0xB0, 0x40,
    0x02, 0x81, 0xC7, 0x01, 0x81, 0x03, 0x07, 0x01, 0x0D, 0x03, 0x09, 0x07, 0x0D, 0x03, 0x19, 0x07,
    0x05, 0x0A, 0x08, 0x07, 0x05, 0x0A, 0x0A, 0x05, 0x05, 0x0A, 0x0A, 0x05, 0x05, 0x0A, 0x0A, 0x05,
    0xE2, 0x11, 0x59, 0xA2, 0xBA, 0x41, 0x51, 0xAA, 0xA9, 0x50, 0x10, 0xE8, 0xA8, 0x50, 0x50, 0xA8,
    0xAA, 0x55, 0x50, 0xAF, 0xAA, 0x55, 0x55, 0xAA, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00,
    0xAC, 0x50, 0x14, 0xE8, 0xB0, 0x40, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0xBC, 0x03,
    0x10, 0x00, 0x18, 0x00, 0x10, 0x00, 0x30, 0x00, 0x70, 0x00, 0xE1, 0x00, 0x81, 0x40, 0x63, 0x80,
    0x6E, 0x11, 0x51, 0x2E, 0x2E, 0x50, 0xD5, 0x2A, 0xAA, 0x55, 0x15, 0xEA, 0xAB, 0x54, 0x55, 0xAA,
    0xA0, 0x40, 0x28, 0xC0, 0x4C, 0x00, 0xD6, 0x08, 0x88, 0x14, 0x32, 0x8C, 0x7A, 0x04, 0x15, 0x2A,
    0x06, 0x01, 0x0C, 0x03, 0x07, 0x00, 0x05, 0x02, 0x07, 0x00, 0x0F, 0x00, 0x05, 0x00, 0x07, 0x00,
    0xB0, 0x40, 0x08, 0xE0, 0xF8, 0x00, 0xD0, 0x28, 0xB8, 0x40, 0x54, 0xA8, 0xEC, 0x10, 0xD0, 0x28,
    0x6F, 0x1F, 0xCF, 0x3F, 0x6F, 0x1F, 0x0F, 0x3F, 0x6F, 0x1F, 0x40, 0x3F, 0x55, 0x00, 0x00, 0x00,
    0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0x00, 0xFF, 0x56, 0x00, 0x00, 0x00,
    0x55, 0xAA, 0xA8, 0x57, 0x55, 0xAA, 0xEA, 0x15, 0x03, 0x00, 0x00, 0x01, 0x00, 0x00, 0x51, 0x00,
    0x50, 0xA8, 0x88, 0x74, 0x56, 0xA8, 0xAB, 0x54, 0x56, 0xA8, 0xAB, 0x54, 0x57, 0xA8, 0xAF, 0x50,
    0x13, 0x0F, 0x1F, 0x07, 0x03, 0x0F, 0x1B, 0x07, 0x0B, 0x07, 0x19, 0x07, 0x0D, 0x03, 0x09, 0x07,
    0x07, 0x00, 0x0D, 0x02, 0x0A, 0x05, 0x0D, 0x02, 0x06, 0x01, 0x0D, 0x02, 0x07, 0x00, 0x0F, 0x00,
    0xF8, 0x00, 0x50, 0xA8, 0xB8, 0x40, 0x58, 0xA0, 0xF8, 0x00, 0x70, 0x88, 0xF8, 0x00, 0xD8, 0x20,
    0x55, 0x00, 0xF5, 0x0A, 0x60, 0x1F, 0x4B, 0x3F, 0x67, 0x1F, 0xCF, 0x3F, 0x67, 0x1F, 0x4F, 0x3F,
    0x78, 0x07, 0x0A, 0xFF, 0x55, 0xFF, 0xBE, 0xFF, 0x7D, 0xFE, 0xFE, 0xFE, 0xFE, 0xFC, 0xF8, 0xFE,
    0x42, 0x81, 0x85, 0x82, 0x86, 0x01, 0x8D, 0x02, 0x06, 0x01, 0x05, 0x0A, 0x1B, 0x04, 0x35, 0x0A,
    0xAF, 0x50, 0x54, 0xAA, 0xB8, 0x44, 0x56, 0xA8, 0xFC, 0x00, 0x50, 0xA8, 0x78, 0x00, 0xD8, 0x20,
    0x6F, 0x10, 0xD7, 0x28, 0xBE, 0x41, 0xD5, 0x2A, 0x7F, 0x00, 0xD7, 0x28, 0x73, 0x04, 0x1D, 0x22,
    0x06, 0x01, 0x8D, 0x02, 0x83, 0x04, 0x05, 0x82, 0xC6, 0x01, 0x65, 0x82, 0xA7, 0x40, 0x45, 0xA2,
    0xEC, 0x10, 0x50, 0xA8, 0xBD, 0x40, 0x5B, 0xA0, 0xFD, 0x00, 0x57, 0xA8, 0xFD, 0x00, 0xDB, 0x20,
    0x00, 0x00, 0x00, 0x00, 0xDF, 0x00, 0x5D, 0xA2, 0xFE, 0x01, 0xD7, 0x28, 0xBD, 0x40, 0xD7, 0x28,
    0x00, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x56, 0xA9, 0xFF, 0x00, 0x77, 0x88, 0xFE, 0x00, 0xDF, 0x20,
    0x07, 0x08, 0x0A, 0x05, 0x0D, 0x02, 0x0A, 0x05, 0x8F, 0x00, 0xCA, 0x05, 0xCF, 0x00, 0xCE, 0x01,
    0xA0, 0x00, 0x71, 0x00, 0xD0, 0x20, 0x40, 0x30, 0xC8, 0x30, 0x08, 0x70, 0xC8, 0x30, 0x50, 0x38,
    0xFE, 0x00, 0xAA, 0x55, 0xFF, 0x00, 0xAA, 0x55, 0xFF, 0x00, 0x3A, 0x45, 0x7F, 0x00, 0x6F, 0x10,
    0x8D, 0x03, 0x81, 0x07, 0x85, 0x03, 0x87, 0x01, 0x82, 0x01, 0xC6, 0x01, 0xC3, 0x00, 0xC0, 0x01,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0xFF,
    0x07, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x80, 0xA0, 0xC0, 0x8F, 0xE3, 0xCF, 0xE7, 0xE3, 0xEF,
    0xF8, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0x77, 0x1F, 0xCF, 0x3F, 0x6F, 0x1F, 0xCF, 0x3F, 0x03, 0x02, 0xF2, 0xFA, 0xFA, 0xF2, 0xF2, 0xFA,
    0xF2, 0xFC, 0xFA, 0xFC, 0xFE, 0xFC, 0xF9, 0xFE, 0x11, 0x00, 0xFF, 0x7F, 0xFF, 0xFF, 0x7F, 0xFF,
    0x1F, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xF0, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0xDD, 0xC2, 0xC8, 0xD7, 0xCA, 0xDF,
    0x3F, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0xBE, 0xBE, 0x3E, 0x3E, 0xBE,
    0xF7, 0x00, 0x82, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF9, 0x03, 0xAB, 0x51, 0x29, 0xFB,
    0xF9, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF7, 0xF0, 0xF2, 0xF5, 0xF2, 0xF7,
    0xF7, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x7F, 0x7F, 0x7F, 0x3F, 0x7F,
    0x76, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF,
    0x8F, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xBE, 0x00, 0xCA, 0x94, 0xCA, 0xDE,
    0xF8, 0x00, 0x40, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xFC, 0x7E, 0xFE, 0x7C, 0xFC, 0xFE,
    0xC0, 0x38, 0x10, 0x7C, 0xC2, 0x3C, 0x92, 0x7C, 0x88, 0x7E, 0xF1, 0xFB, 0x73, 0xF7, 0xE7, 0xEF,
    0x3B, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3B, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xE0, 0x00, 0x41, 0x00, 0x00, 0x00, 0x01, 0x00, 0xA1, 0x00, 0xF8, 0xF3, 0xF8, 0xF9, 0xF8, 0xFD,
    0x7F, 0xFF, 0xFF, 0x7F, 0x7F, 0xFF, 0xFF, 0x7F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xC5, 0xEF, 0xCF, 0xDF, 0xC5, 0xDF, 0xCF, 0xDF, 0xC5, 0xDF, 0xEA, 0xDF, 0xF0, 0xCF, 0xE0, 0xEF,
    0x55, 0xFF, 0xAA, 0xFF, 0x00, 0x80, 0x80, 0xFF, 0x55, 0xFF, 0xEA, 0xFF, 0x40, 0xFF, 0x02, 0xFF,
    0x5A, 0xF2, 0xA2, 0xFA, 0x02, 0x06, 0x67, 0x9F, 0x17, 0xEF, 0xEF, 0xF7, 0x47, 0xF7, 0xA3, 0xFF,
    0x55, 0xFF, 0x2F, 0xFF, 0x15, 0x7F, 0x3F, 0xBF, 0x95, 0xBF, 0xAA, 0xBF, 0x00, 0xBF, 0x02, 0xBF,
    0x55, 0xFF, 0xEF, 0xFF, 0x22, 0xDD, 0x00, 0x80, 0xBF, 0x7F, 0x3F, 0xFF, 0xBF, 0x7F, 0xBF, 0x7F,
    0x15, 0xDF, 0x9F, 0xDF, 0xBF, 0x1F, 0x7F, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0x94, 0x3E, 0x3E, 0xBE, 0x14, 0x7E, 0x3E, 0x7E, 0x14, 0x7E, 0x28, 0x7E, 0x03, 0x7C, 0x22, 0x7D,
    0x51, 0xFB, 0xFB, 0xFB, 0xF9, 0xFB, 0xFB, 0xFB, 0xF1, 0xFB, 0xFA, 0xFB, 0xF0, 0xFB, 0xF6, 0xFB,
    0x45, 0xF7, 0xE7, 0xF7, 0x46, 0xF7, 0xE6, 0xF6, 0x46, 0xF6, 0xB6, 0xEE, 0x1E, 0xEE, 0x3E, 0xEE,
    0x55, 0x7F, 0x7E, 0x7F, 0x54, 0x7C, 0x38, 0xFD, 0x51, 0xFD, 0xA9, 0xFD, 0x01, 0xFD, 0x27, 0xF9,
    0x55, 0xFF, 0xAF, 0xFF, 0x09, 0x07, 0x07, 0xF3, 0xF9, 0xFB, 0xFA, 0xFB, 0xFC, 0xFB, 0xFE, 0xF3,
    0x44, 0xDE, 0xCE, 0xEE, 0x4E, 0xEE, 0xEE, 0xEE, 0x4C, 0xEE, 0x9F, 0xEE, 0x3F, 0xCC, 0x1D, 0xEE,
    0x52, 0xFC, 0xE8, 0xFE, 0x54, 0xFD, 0xF8, 0xFD, 0x51, 0xFD, 0xAB, 0xFD, 0x41, 0xFD, 0x21, 0xFD,
    0xC5, 0xEF, 0xCF, 0xEF, 0xCD, 0xDF, 0xCF, 0xDF, 0xF5, 0xDF, 0xEA, 0xDF, 0xA0, 0xDF, 0xE2, 0x9F,
    0x55, 0xFF, 0xAA, 0xFF, 0x01, 0xC0, 0x2A, 0xBE, 0x3E, 0x3E, 0x7E, 0x7E, 0xFE, 0x7E, 0xFE, 0x7E,
    0x55, 0xFD, 0xFD, 0xFC, 0x55, 0xFC, 0x39, 0xFE, 0xD7, 0x7C, 0x29, 0xFE, 0x00, 0xFD, 0x20, 0xFD,
    0xF6, 0xF1, 0xE0, 0xC0, 0x82, 0xDD, 0xA0, 0x9F, 0xA0, 0x9F, 0x80, 0xBF, 0xA0, 0x9F, 0xBF, 0x80,
    0xEE, 0x11, 0x03, 0x00, 0xAA, 0x55, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0xFF, 0x00,
    0x0B, 0xF7, 0x03, 0xFF, 0x0B, 0xF7, 0x03, 0xF7, 0x17, 0xE7, 0x0F, 0xEF, 0x4F, 0x9F, 0x9F, 0x3F,
    0x80, 0x3F, 0x00, 0xBF, 0xC0, 0x3F, 0x00, 0xBF, 0xA0, 0x9F, 0xC0, 0x9F, 0xD8, 0xC7, 0xF7, 0xE0,
    0x03, 0x7F, 0x7F, 0x80, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0xFF, 0x00,
    0xFF, 0xFF, 0xEB, 0x07, 0x0B, 0xF7, 0x0B, 0xF7, 0x03, 0xF7, 0x03, 0xF7, 0x07, 0xF7, 0xFF, 0x07,
    0x02, 0x7D, 0x01, 0x7E, 0x00, 0x7F, 0x80, 0x7F, 0x40, 0x3F, 0x40, 0xBF, 0x20, 0x9F, 0xAF, 0xC0,
    0x04, 0xF3, 0xFC, 0x03, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0xFF, 0x00,
    0x1E, 0xEE, 0x0E, 0xEE, 0x1F, 0xEC, 0x0F, 0xEC, 0x3D, 0xCC, 0x3F, 0xCC, 0x3D, 0xCC, 0xEE, 0x1C,
    0x07, 0xF9, 0x07, 0xF8, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0xFF, 0x00,
    0xF0, 0xF7, 0xE0, 0x0F, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x03, 0xFC, 0xFD, 0x00,
    0x3E, 0xCD, 0x2F, 0xDC, 0x1D, 0xDC, 0x7F, 0x9C, 0x9C, 0x3D, 0xFE, 0x3D, 0x7C, 0x7D, 0xFF, 0xFC,
    0x01, 0xFD, 0x07, 0xF9, 0x07, 0xF9, 0x03, 0xFB, 0x03, 0xFB, 0x03, 0xFB, 0x03, 0xFB, 0xFB, 0x03,
    0xE0, 0x9F, 0xE0, 0x9F, 0x80, 0xDF, 0xE0, 0xDF, 0xC0, 0xDF, 0xF0, 0xCF, 0xC8, 0xE7, 0xE7, 0xF0,
    0x7F, 0x7E, 0xFF, 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x01, 0xFE, 0x00, 0xFC, 0xFF, 0x00,
    0x01, 0xFD, 0x01, 0xFD, 0x01, 0xDD, 0x53, 0x8B, 0x5B, 0x83, 0x8F, 0x03, 0x01, 0x01, 0x8F, 0x03,
    0xDF, 0x0F, 0xDF, 0x8F, 0xDF, 0xDF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
};

// Map
const unsigned char logo_map[360] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x03, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x06, 0x07, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x00, 0x00, 0x00, 0x00, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x19, 0x1a, 0x1b, 0x1c, 0x24, 0x00, 0x00, 0x00, 0x00, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x22, 0x23, 0x25, 0x26, 0x27, 0x2e, 0x2f, 0x00, 0x00, 0x00, 0x00, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x30, 0x31, 0x3b, 0x3c, 0x3d, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x3f, 0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x3f, 0x4a, 0x4b, 0x4c, 0x4d, 0x00, 0x00, 0x00, 0x4e, 0x4f, 0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x5b, 0x5c, 0x5d, 0x5e, 0x00, 0x00, 0x00, 0x5f, 0x60, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x6f, 0x70, 0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7a, 0x7b, 0x7c, 0x7d, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

void splash() {
  set_bkg_data(0, LOGO_TILE_COUNT, logo_tiles);
  set_bkg_tiles(0, 0, 20, 18, logo_map);
  set_bkg_based_tiles(0, 17, sizeof(version), 1, version, OFFSET_FONT - 32);
  pause(10);
}
