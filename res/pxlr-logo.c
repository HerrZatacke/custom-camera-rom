// Tiles
const unsigned char logo_tiles[2048] = {
//  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
//  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE1, 0xE1, 0xC0, 0xC0,
//  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x8F, 0x8F, 0x8F,
//  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0xCF, 0xCC, 0xCC,
//  0xC0, 0xCC, 0xC8, 0xF8, 0xF0, 0xF1, 0xE1, 0xE3, 0xC3, 0xC7, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xFF,
//  0x8F, 0xCF, 0xC1, 0xC1, 0xC0, 0xC0, 0xC0, 0xCC, 0xCC, 0xCC, 0xC0, 0xC0, 0xC0, 0xC1, 0xC1, 0xFF,
//  0xCC, 0xFC, 0x88, 0x88, 0x88, 0x88, 0x88, 0xCC, 0xCC, 0xCC, 0x84, 0x84, 0x84, 0x86, 0x86, 0xFF,
//  0xFF, 0xFF, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0xFF, 0xFF, 0xFF, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0xFF,
//  0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0xC0, 0x80, 0x80, 0x00, 0x1F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F,
//  0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF,
//  0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF,
//  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1E, 0x1E, 0x0E, 0x0E, 0x06, 0xC6, 0x02, 0xE2, 0x00, 0xF0,
//  0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x7F, 0x00, 0x3F, 0x00, 0x3F,
//  0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x1F, 0x0F, 0x0F, 0x0F, 0xCF, 0x07, 0xC7, 0x07, 0xE7, 0x03, 0xE3,
//  0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0xF0, 0xE0, 0xE0, 0xE0, 0xE7, 0xC0, 0xC7, 0xC0, 0xCF, 0x80, 0x8F,
//  0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x01, 0x00, 0x00, 0x00, 0xFC, 0x00, 0xFC, 0x00, 0xF8, 0x00, 0xF8,
//  0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x0F, 0x07, 0x07, 0x07, 0xE7, 0x07, 0xE7, 0x07, 0xE7, 0x07, 0xE7,
//  0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFE, 0xFC, 0xFC, 0xF8, 0xF8, 0xF8, 0xF9, 0xF8, 0xF9, 0xF8, 0xF9,
//  0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x07, 0x00, 0x00, 0x00, 0xF0, 0x00, 0xFE, 0x00, 0xFF, 0x00, 0xFF,
//  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x7F, 0x3F, 0x3F, 0x1F, 0x1F, 0x0F, 0x8F,
//  0x00, 0x3F, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x3F, 0x00, 0x00, 0x3F,
//  0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xE0, 0x00, 0xE0, 0xE7, 0x07, 0x07, 0xE7,
//  0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x07, 0x00, 0x03, 0xF1, 0xF0, 0xF8, 0xF9,
//  0x00, 0xF8, 0xFC, 0x00, 0x00, 0xFE, 0x00, 0xFE, 0x00, 0xFE, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF,
//  0x00, 0x1F, 0x1F, 0x00, 0x00, 0x0F, 0x00, 0x07, 0x20, 0x27, 0x20, 0x23, 0x33, 0x30, 0x30, 0x31,
//  0x03, 0xF3, 0xF1, 0x01, 0x00, 0xF8, 0x00, 0xFC, 0x00, 0xFC, 0x00, 0xFE, 0xFE, 0x00, 0x00, 0xFF,
//  0x80, 0x9F, 0x1F, 0x00, 0x00, 0x3F, 0x00, 0x7F, 0x00, 0x7F, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF,
//  0x01, 0xF1, 0xF3, 0x03, 0x03, 0xE3, 0x07, 0xC7, 0x0F, 0xCF, 0x0F, 0x8F, 0x9F, 0x1F, 0x1F, 0x1F,
//  0x07, 0xE7, 0xE7, 0x07, 0x07, 0xE7, 0x07, 0xE7, 0x07, 0xE7, 0x07, 0xE7, 0xE7, 0x07, 0x07, 0xE7,
//  0xF8, 0xF9, 0xF9, 0xF8, 0xF8, 0xF9, 0xF8, 0xF9, 0xF8, 0xF9, 0xF8, 0xF9, 0xF9, 0xF8, 0xF8, 0xF9,
//  0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF,
//  0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x3F, 0x3F, 0x3F,
//  0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x3F, 0x00, 0x1F, 0x8F, 0x80, 0xC0, 0xCF,
//  0x07, 0xC7, 0xE3, 0x03, 0x03, 0xF3, 0x03, 0xF3, 0x01, 0xF1, 0x01, 0xF9, 0xF9, 0x01, 0x01, 0xF9,
//  0x00, 0x3F, 0x00, 0x3F, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x3F, 0x3F, 0x00, 0x00, 0x3F, 0x3F, 0x00,
//  0x07, 0xE7, 0x07, 0xE7, 0xE0, 0x00, 0x00, 0xE0, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00,
//  0xF8, 0xF9, 0xF0, 0xF1, 0x03, 0x00, 0x00, 0x07, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00,
//  0x00, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFE, 0x00, 0xFE, 0xFE, 0x00, 0x00, 0xFC, 0xF8, 0x00,
//  0x38, 0x38, 0x3C, 0x3C, 0x3C, 0x3C, 0x3E, 0x3E, 0x7E, 0x7E, 0x7F, 0x7F, 0x7F, 0x7F, 0xFE, 0xFE,
//  0x00, 0xFF, 0x00, 0xFF, 0x7F, 0x00, 0x00, 0x7F, 0x00, 0x3F, 0x1F, 0x00, 0x00, 0x1F, 0x3F, 0x00,
//  0x00, 0xFE, 0x00, 0xFE, 0xFC, 0x00, 0x00, 0xFC, 0x00, 0xF8, 0xF1, 0x01, 0x01, 0xF1, 0xF8, 0x00,
//  0x3F, 0x3F, 0x7F, 0x7F, 0x7F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
//  0x07, 0xE7, 0x07, 0xE7, 0xE7, 0x07, 0x07, 0xE7, 0x07, 0xE7, 0xE7, 0x07, 0x07, 0xE7, 0xE7, 0x07,
//  0xF8, 0xF9, 0xF8, 0xF9, 0xF9, 0xF8, 0xF8, 0xF9, 0xF8, 0xF9, 0xF9, 0xF8, 0xF8, 0xF9, 0xF9, 0xF8,
//  0x00, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00,
//  0x3F, 0x3F, 0x3F, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00,
//  0xC0, 0xCF, 0x80, 0x8F, 0x1F, 0x00, 0x00, 0x3F, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00,
//  0x01, 0xF9, 0x01, 0xF9, 0xF9, 0x01, 0x01, 0xF1, 0x03, 0xF3, 0xF3, 0x03, 0x03, 0xE3, 0xC7, 0x07,
//  0x3F, 0x00, 0x00, 0x3F, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00,
//  0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0xE7, 0x07, 0xE7, 0x07,
//  0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF,
//  0xF1, 0x01, 0x03, 0xE3, 0xC7, 0x07, 0x0F, 0x0F, 0x1F, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
//  0xFE, 0xFE, 0xFC, 0xFC, 0xFC, 0xFC, 0xF8, 0xF8, 0xF1, 0xF0, 0xF3, 0xF0, 0xE3, 0xE0, 0xE7, 0xE0,
//  0x7F, 0x00, 0x00, 0x7F, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFE, 0x00, 0xFE, 0x00, 0xFC, 0x00,
//  0xFC, 0x00, 0x00, 0xFC, 0xFE, 0x00, 0xFE, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x7F, 0x00,
//  0xFF, 0xFF, 0x7F, 0x7F, 0x7F, 0x7F, 0x3F, 0x3F, 0x1F, 0x1F, 0x9F, 0x1F, 0x8F, 0x0F, 0xCF, 0x0F,
//  0xE7, 0x07, 0x07, 0xE7, 0xE7, 0x07, 0xE7, 0x07, 0xE7, 0x07, 0xE7, 0x07, 0xE7, 0x07, 0xE0, 0x00,
//  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00,
//  0xF9, 0xF8, 0xF8, 0xF9, 0xF9, 0xF8, 0xF9, 0xF8, 0xF9, 0xF8, 0xF9, 0xF8, 0xF9, 0xF8, 0x19, 0x18,
//  0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00,
//  0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x3F, 0x3F, 0x3F,
//  0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0x00, 0x7F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x1F, 0x00,
//  0x8F, 0x0F, 0x1F, 0x1F, 0x8F, 0x0F, 0xCF, 0x0F, 0xC7, 0x07, 0xE7, 0x07, 0xE3, 0x03, 0xF3, 0x03,
//  0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x1F, 0x00,
//  0xE7, 0x07, 0xE7, 0x07, 0xE7, 0x07, 0xE7, 0x07, 0xE7, 0x07, 0xE7, 0x07, 0xE7, 0x07, 0xE7, 0x07,
//  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE,
//  0xC7, 0xC0, 0x8F, 0x80, 0x9F, 0x80, 0x1F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x7F, 0x00, 0x7F, 0x00,
//  0xFC, 0x00, 0xF8, 0x00, 0xF1, 0x01, 0xF3, 0x03, 0xE3, 0x03, 0xE7, 0x07, 0xC7, 0x07, 0xCF, 0x0F,
//  0x7F, 0x00, 0x3F, 0x00, 0x1F, 0x00, 0x9F, 0x80, 0x8F, 0x80, 0xCF, 0xC0, 0xC7, 0xC0, 0xE7, 0xE0,
//  0xC7, 0x07, 0xE3, 0x03, 0xF3, 0x03, 0xF1, 0x01, 0xF8, 0x00, 0xF8, 0x00, 0xFC, 0x00, 0xFC, 0x00,
//  0xE0, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00,
//  0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00,
//  0x09, 0x08, 0xC1, 0x00, 0xE1, 0x00, 0xE1, 0x00, 0xE1, 0x00, 0xE1, 0x00, 0xE1, 0x00, 0xE0, 0x00,
//  0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00,
//  0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F,
//  0x9F, 0x80, 0x9F, 0x80, 0x9F, 0x80, 0x9F, 0x80, 0x9F, 0x80, 0x9F, 0x80, 0x9F, 0x80, 0x8F, 0x80,
//  0xF3, 0x03, 0xF3, 0x03, 0xF3, 0x03, 0xF3, 0x03, 0xF3, 0x03, 0xF3, 0x03, 0xF3, 0x03, 0xF3, 0x03,
//  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 0xDF, 0xDF, 0xDF, 0x8F, 0xDF,
//  0x80, 0x80, 0xC0, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0xE0, 0xDF, 0xDF, 0xBF, 0xBF, 0x7F, 0x7F,
//  0x07, 0x07, 0x0F, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
//  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0x03, 0xFB, 0xFB, 0xFB, 0xFB, 0xFB, 0xFB,
//  0xFE, 0xFE, 0xFF, 0xFF, 0xE0, 0xE0, 0xDF, 0xDF, 0x9F, 0x9F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F,
//  0x00, 0x00, 0xC0, 0xC0, 0x7F, 0x7F, 0x7F, 0x7F, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
//  0x0F, 0x0F, 0x1F, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0x03, 0xFB, 0xFB, 0xFB, 0xFB, 0xFB, 0xFB,
//  0xE0, 0xE0, 0xF0, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0x81, 0x81, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D,
//  0x00, 0x00, 0x01, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE,
//  0x80, 0x80, 0xC0, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0x03, 0xFB, 0xFB, 0xFB, 0xFB, 0xFB, 0xFB,
//  0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F,
//  0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
//  0x04, 0x04, 0x0E, 0x0E, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x7F, 0x9F, 0x9F, 0xEF, 0xEF, 0xF7, 0xF7,
//  0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x81, 0x81, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D,
//  0x3F, 0x3F, 0x7F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0xF8, 0xE7, 0xE7, 0xDF, 0xDF, 0xDF, 0xDF,
//  0xC0, 0xC0, 0xE0, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
//  0x03, 0x03, 0x07, 0x07, 0xFD, 0xFE, 0xF0, 0xF0, 0x1D, 0x1E, 0xE7, 0xE7, 0xFB, 0xFB, 0xFB, 0xFB,
//  0xDF, 0x8F, 0x57, 0x8F, 0x8D, 0x03, 0x00, 0x00, 0x8D, 0x03, 0x57, 0x8F, 0xDF, 0x8F, 0x8F, 0xDF,
//  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
//  0x6F, 0x7F, 0x7C, 0x7E, 0x35, 0x7D, 0x7E, 0x7E, 0x4B, 0x7F, 0xBF, 0xBF, 0xA5, 0xBF, 0xDA, 0xDF,
//  0x7B, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x1D, 0xFF, 0xFF, 0xFF, 0x29, 0xFF, 0xD6, 0xFF,
//  0xD7, 0xF7, 0x0F, 0x0F, 0xFF, 0xFF, 0x1F, 0x1F, 0x8F, 0xEF, 0xF7, 0xF7, 0x4B, 0xFB, 0xB3, 0xFB,
//  0x7B, 0x7F, 0x1F, 0x1F, 0xCD, 0xDF, 0xDF, 0xDF, 0xD2, 0xDF, 0xDF, 0xDF, 0xC9, 0xDF, 0xD6, 0xDF,
//  0xDE, 0xFF, 0x00, 0x00, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F,
//  0xF7, 0xF7, 0x0F, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
//  0x6D, 0x7D, 0x7D, 0x7D, 0x35, 0x7D, 0x7D, 0x7D, 0x49, 0x7D, 0x7D, 0x7D, 0x25, 0x7D, 0x59, 0x7D,
//  0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE,
//  0xDB, 0xFB, 0xFB, 0xFB, 0x6B, 0xFB, 0xFB, 0xFB, 0x93, 0xFB, 0xFB, 0xFB, 0x4B, 0xFB, 0xB3, 0xFB,
//  0x6F, 0x7F, 0x7C, 0x7C, 0x35, 0x7D, 0x7D, 0x7D, 0x49, 0x7D, 0x7D, 0x7D, 0x25, 0x7D, 0x59, 0x7D,
//  0x7B, 0xFF, 0x03, 0x03, 0xFD, 0xFD, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE,
//  0xD7, 0xF7, 0xFB, 0xFB, 0x6B, 0xFB, 0xFB, 0xFB, 0x93, 0xFB, 0xFB, 0xFB, 0x4B, 0xFB, 0xB3, 0xFB,
//  0xB7, 0xBF, 0xBE, 0xBF, 0x9B, 0xBF, 0xBE, 0xBE, 0xA4, 0xBE, 0xBE, 0xBE, 0x92, 0xBE, 0xAC, 0xBE,
//  0xBD, 0xFF, 0x81, 0x81, 0x7E, 0x7E, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
//  0xED, 0xFD, 0xFD, 0xFD, 0xB5, 0xFD, 0x7D, 0x7D, 0x49, 0x7D, 0x7D, 0x7D, 0x25, 0x7D, 0x59, 0x7D,
//  0xDF, 0xDF, 0xDF, 0xDF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
//  0xE0, 0xE0, 0xFF, 0xFF, 0xC0, 0xC0, 0x80, 0xBF, 0x00, 0x7F, 0x00, 0x7F, 0x00, 0x7F, 0x00, 0x00,
//  0x00, 0x01, 0xFE, 0xFE, 0x00, 0x01, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x00,
//  0x03, 0xFB, 0x03, 0xFB, 0x03, 0xFB, 0x03, 0xFB, 0x07, 0xF7, 0x07, 0xF7, 0x0F, 0xEF, 0x1F, 0x1F,
//  0xC0, 0xDF, 0xC0, 0xDF, 0xC0, 0xDF, 0xC0, 0xDF, 0xE0, 0xEF, 0xE0, 0xEF, 0xF0, 0xF7, 0xF8, 0xF8,
//  0x7F, 0x7F, 0x7F, 0x7F, 0x00, 0x80, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x00,
//  0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0x03, 0x03, 0xFB, 0x03, 0xFB, 0x03, 0xFB, 0x07, 0xF7, 0x0F, 0x0F,
//  0x01, 0x7D, 0x01, 0x7D, 0x00, 0x7E, 0x00, 0x7F, 0x80, 0xBF, 0x80, 0xBF, 0xC0, 0xDF, 0xE0, 0xE0,
//  0xFE, 0xFE, 0xFE, 0xFE, 0x00, 0x01, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x00,
//  0x03, 0xFB, 0x03, 0xFB, 0x03, 0xFB, 0x03, 0xFB, 0x03, 0xFB, 0x03, 0xFB, 0x03, 0xFB, 0x07, 0x07,
//  0x01, 0x7D, 0x01, 0x7D, 0x00, 0x7C, 0x00, 0x7F, 0x00, 0x7F, 0x00, 0x7F, 0x00, 0x7F, 0x80, 0x80,
//  0xFE, 0xFE, 0xFC, 0xFD, 0x00, 0x03, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x00,
//  0x03, 0xFB, 0x03, 0xFB, 0x03, 0xFB, 0x07, 0xF7, 0x07, 0xF7, 0x0F, 0xEF, 0x1F, 0x9F, 0x7F, 0x7F,
//  0x01, 0x7D, 0x01, 0x7D, 0x01, 0x7D, 0x01, 0x7D, 0x01, 0x7D, 0x01, 0x7D, 0x81, 0xBD, 0xC3, 0xC3,
//  0x80, 0xBE, 0x80, 0xBF, 0x80, 0xBF, 0x80, 0xBF, 0xC0, 0xDF, 0xC0, 0xDF, 0xE0, 0xE7, 0xF8, 0xF8,
//  0xFF, 0xFF, 0x7E, 0x7E, 0x00, 0x81, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x00,
//  0x01, 0x7D, 0x01, 0xFD, 0x01, 0xFD, 0x01, 0xFD, 0x03, 0xFB, 0x03, 0xFB, 0x07, 0xE7, 0x1F, 0x1F,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE1, 0xE1, 0xC0, 0xC0,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x8F, 0x8F, 0x8F,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0xCF, 0xCC, 0xCC,
    0xC0, 0xCC, 0xC8, 0xF8, 0xF0, 0xF1, 0xE1, 0xE3, 0xC3, 0xC7, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xFF,
    0x8F, 0xCF, 0xC1, 0xC1, 0xC0, 0xC0, 0xC0, 0xCC, 0xCC, 0xCC, 0xC0, 0xC0, 0xC0, 0xC1, 0xC1, 0xFF,
    0xCC, 0xFC, 0x88, 0x88, 0x88, 0x88, 0x88, 0xCC, 0xCC, 0xCC, 0x84, 0x84, 0x84, 0x86, 0x86, 0xFF,
    0xFF, 0xFF, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0xFF, 0xFF, 0xFF, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0xC0, 0x80, 0x80, 0x1F, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x3F, 0x00,
    0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00,
    0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1E, 0x1E, 0x0E, 0x0E, 0xC6, 0x06, 0x02, 0x02, 0xF0, 0x00,
    0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x3F, 0x00,
    0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x1F, 0x0F, 0x0F, 0xCF, 0x0F, 0xC7, 0x07, 0x07, 0x07, 0xE3, 0x03,
    0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0xF0, 0xE0, 0xE0, 0xE7, 0xE0, 0xC7, 0xC0, 0xC0, 0xC0, 0x8F, 0x80,
    0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x01, 0x00, 0x00, 0xFC, 0x00, 0xFC, 0x00, 0x00, 0x00, 0xF8, 0x00,
    0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x0F, 0x07, 0x07, 0xE7, 0x07, 0xE7, 0x07, 0x07, 0x07, 0xE7, 0x07,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFE, 0xFC, 0xFC, 0xF8, 0xF8, 0xF9, 0xF8, 0xF8, 0xF8, 0xF9, 0xF8,
    0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x07, 0x00, 0x00, 0xF0, 0x00, 0xFE, 0x00, 0x00, 0x00, 0xFF, 0x00,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x7F, 0x3F, 0x3F, 0x1F, 0x1F, 0x8F, 0x0F,
    0x3F, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x00, 0x00,
    0xFF, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0xE7, 0x07, 0x07, 0x07,
    0xFF, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x07, 0x00, 0x03, 0x00, 0xF1, 0xF0, 0xF8, 0xF8,
    0xF8, 0x00, 0xFC, 0x00, 0x00, 0x00, 0xFE, 0x00, 0xFE, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x00, 0x00,
    0x1F, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x07, 0x00, 0x27, 0x20, 0x23, 0x20, 0x33, 0x30, 0x30, 0x30,
    0xF3, 0x03, 0xF1, 0x01, 0x00, 0x00, 0xFC, 0x00, 0xFC, 0x00, 0xFE, 0x00, 0xFE, 0x00, 0x00, 0x00,
    0x9F, 0x80, 0x1F, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x7F, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x00, 0x00,
    0xF1, 0x01, 0xF3, 0x03, 0x03, 0x03, 0xC7, 0x07, 0xCF, 0x0F, 0x8F, 0x0F, 0x9F, 0x1F, 0x1F, 0x1F,
    0xE7, 0x07, 0xE7, 0x07, 0x07, 0x07, 0xE7, 0x07, 0xE7, 0x07, 0xE7, 0x07, 0xE7, 0x07, 0x07, 0x07,
    0xF9, 0xF8, 0xF9, 0xF8, 0xF8, 0xF8, 0xF9, 0xF8, 0xF9, 0xF8, 0xF9, 0xF8, 0xF9, 0xF8, 0xF8, 0xF8,
    0xFF, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x00, 0x00,
    0xFF, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x3F, 0x3F, 0x3F,
    0xFF, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x3F, 0x00, 0x1F, 0x00, 0x8F, 0x80, 0xC0, 0xC0,
    0xC7, 0x07, 0xE3, 0x03, 0x03, 0x03, 0xF3, 0x03, 0xF1, 0x01, 0xF9, 0x01, 0xF9, 0x01, 0x01, 0x01,
    0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F,
    0xE7, 0x07, 0xE7, 0x07, 0xE0, 0x00, 0xE0, 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF,
    0xF9, 0xF8, 0xF1, 0xF0, 0x03, 0x00, 0x07, 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF,
    0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFE, 0x00, 0x00, 0xFE, 0x00, 0xFE, 0x00, 0xFC, 0x00, 0xF8,
    0x38, 0x38, 0x3C, 0x3C, 0x3C, 0x3C, 0x3E, 0x3E, 0x7E, 0x7E, 0x7F, 0x7F, 0x7F, 0x7F, 0xFE, 0xFE,
    0xFF, 0x00, 0xFF, 0x00, 0x7F, 0x00, 0x7F, 0x00, 0x00, 0x3F, 0x00, 0x1F, 0x00, 0x1F, 0x00, 0x3F,
    0xFE, 0x00, 0xFE, 0x00, 0xFC, 0x00, 0xFC, 0x00, 0x00, 0xF8, 0x01, 0xF1, 0x01, 0xF1, 0x00, 0xF8,
    0x3F, 0x3F, 0x7F, 0x7F, 0x7F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xE7, 0x07, 0xE7, 0x07, 0xE7, 0x07, 0xE7, 0x07, 0x07, 0xE7, 0x07, 0xE7, 0x07, 0xE7, 0x07, 0xE7,
    0xF9, 0xF8, 0xF9, 0xF8, 0xF9, 0xF8, 0xF9, 0xF8, 0xF8, 0xF9, 0xF8, 0xF9, 0xF8, 0xF9, 0xF8, 0xF9,
    0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF,
    0x3F, 0x3F, 0x3F, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF,
    0xCF, 0xC0, 0x8F, 0x80, 0x1F, 0x00, 0x3F, 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF,
    0xF9, 0x01, 0xF9, 0x01, 0xF9, 0x01, 0xF1, 0x01, 0x03, 0xF3, 0x03, 0xF3, 0x03, 0xE3, 0x07, 0xC7,
    0x00, 0x3F, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x3F,
    0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xE0, 0xE0, 0x00, 0x07, 0xE7, 0x07, 0xE7,
    0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF,
    0x01, 0xF1, 0xE3, 0x03, 0x07, 0xC7, 0x0F, 0x0F, 0x1F, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFE, 0xFE, 0xFC, 0xFC, 0xFC, 0xFC, 0xF8, 0xF8, 0xF0, 0xF1, 0xF3, 0xF0, 0xE0, 0xE3, 0xE0, 0xE7,
    0x00, 0x7F, 0x7F, 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0xFE, 0x00, 0x00, 0xFE, 0x00, 0xFC,
    0x00, 0xFC, 0xFC, 0x00, 0x00, 0xFE, 0x00, 0xFE, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0x00, 0x7F,
    0xFF, 0xFF, 0x7F, 0x7F, 0x7F, 0x7F, 0x3F, 0x3F, 0x1F, 0x1F, 0x9F, 0x1F, 0x0F, 0x8F, 0x0F, 0xCF,
    0x07, 0xE7, 0xE7, 0x07, 0x07, 0xE7, 0x07, 0xE7, 0x07, 0xE7, 0xE7, 0x07, 0x07, 0xE7, 0x00, 0xE0,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00,
    0xF8, 0xF9, 0xF9, 0xF8, 0xF8, 0xF9, 0xF8, 0xF9, 0xF8, 0xF9, 0xF9, 0xF8, 0xF8, 0xF9, 0x18, 0x19,
    0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0x00, 0xFF,
    0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x3F, 0x3F, 0x3F,
    0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x7F, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x1F,
    0x0F, 0x8F, 0x1F, 0x1F, 0x0F, 0x8F, 0x0F, 0xCF, 0x07, 0xC7, 0xE7, 0x07, 0x03, 0xE3, 0x03, 0xF3,
    0x3F, 0x00, 0x00, 0x3F, 0x3F, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x3F, 0x00, 0x3F, 0x00, 0x1F, 0x00,
    0xE7, 0x07, 0x07, 0xE7, 0xE7, 0x07, 0xE7, 0x07, 0x07, 0xE7, 0xE7, 0x07, 0xE7, 0x07, 0xE7, 0x07,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE,
    0xC7, 0xC0, 0x80, 0x8F, 0x9F, 0x80, 0x1F, 0x00, 0x00, 0x3F, 0x3F, 0x00, 0x7F, 0x00, 0x7F, 0x00,
    0xFC, 0x00, 0x00, 0xF8, 0xF1, 0x01, 0xF3, 0x03, 0x03, 0xE3, 0xE7, 0x07, 0xC7, 0x07, 0xCF, 0x0F,
    0x7F, 0x00, 0x00, 0x3F, 0x1F, 0x00, 0x9F, 0x80, 0x80, 0x8F, 0xCF, 0xC0, 0xC7, 0xC0, 0xE7, 0xE0,
    0xC7, 0x07, 0x03, 0xE3, 0xF3, 0x03, 0xF1, 0x01, 0x00, 0xF8, 0xF8, 0x00, 0xFC, 0x00, 0xFC, 0x00,
    0xE0, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00,
    0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00,
    0x09, 0x08, 0x00, 0xC1, 0xE1, 0x00, 0xE1, 0x00, 0x00, 0xE1, 0xE1, 0x00, 0xE1, 0x00, 0xE0, 0x00,
    0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00,
    0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F,
    0x9F, 0x80, 0x80, 0x9F, 0x9F, 0x80, 0x9F, 0x80, 0x80, 0x9F, 0x9F, 0x80, 0x9F, 0x80, 0x8F, 0x80,
    0xF3, 0x03, 0x03, 0xF3, 0xF3, 0x03, 0xF3, 0x03, 0x03, 0xF3, 0xF3, 0x03, 0xF3, 0x03, 0xF3, 0x03,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 0xDF, 0xDF, 0xDF, 0x8F, 0xDF,
    0x80, 0x80, 0xC0, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0xE0, 0xDF, 0xDF, 0xBF, 0xBF, 0x7F, 0x7F,
    0x07, 0x07, 0x0F, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0x03, 0xFB, 0xFB, 0xFB, 0xFB, 0xFB, 0xFB,
    0xFE, 0xFE, 0xFF, 0xFF, 0xE0, 0xE0, 0xDF, 0xDF, 0x9F, 0x9F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F,
    0x00, 0x00, 0xC0, 0xC0, 0x7F, 0x7F, 0x7F, 0x7F, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0x0F, 0x0F, 0x1F, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0x03, 0xFB, 0xFB, 0xFB, 0xFB, 0xFB, 0xFB,
    0xE0, 0xE0, 0xF0, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0x81, 0x81, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D,
    0x00, 0x00, 0x01, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE,
    0x80, 0x80, 0xC0, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0x03, 0xFB, 0xFB, 0xFB, 0xFB, 0xFB, 0xFB,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0x04, 0x04, 0x0E, 0x0E, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x7F, 0x9F, 0x9F, 0xEF, 0xEF, 0xF7, 0xF7,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x81, 0x81, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D,
    0x3F, 0x3F, 0x7F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0xF8, 0xE7, 0xE7, 0xDF, 0xDF, 0xDF, 0xDF,
    0xC0, 0xC0, 0xE0, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0x03, 0x03, 0x07, 0x07, 0xFD, 0xFE, 0xF0, 0xF0, 0x1D, 0x1E, 0xE7, 0xE7, 0xFB, 0xFB, 0xFB, 0xFB,
    0xDF, 0x8F, 0x57, 0x8F, 0x8D, 0x03, 0x00, 0x00, 0x8D, 0x03, 0x57, 0x8F, 0xDF, 0x8F, 0x8F, 0xDF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0x6F, 0x7F, 0x7C, 0x7E, 0x35, 0x7D, 0x7E, 0x7E, 0x4B, 0x7F, 0xBF, 0xBF, 0xA5, 0xBF, 0xDA, 0xDF,
    0x7B, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x1D, 0xFF, 0xFF, 0xFF, 0x29, 0xFF, 0xD6, 0xFF,
    0xD7, 0xF7, 0x0F, 0x0F, 0xFF, 0xFF, 0x1F, 0x1F, 0x8F, 0xEF, 0xF7, 0xF7, 0x4B, 0xFB, 0xB3, 0xFB,
    0x7B, 0x7F, 0x1F, 0x1F, 0xCD, 0xDF, 0xDF, 0xDF, 0xD2, 0xDF, 0xDF, 0xDF, 0xC9, 0xDF, 0xD6, 0xDF,
    0xDE, 0xFF, 0x00, 0x00, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F,
    0xF7, 0xF7, 0x0F, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0x6D, 0x7D, 0x7D, 0x7D, 0x35, 0x7D, 0x7D, 0x7D, 0x49, 0x7D, 0x7D, 0x7D, 0x25, 0x7D, 0x59, 0x7D,
    0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE,
    0xDB, 0xFB, 0xFB, 0xFB, 0x6B, 0xFB, 0xFB, 0xFB, 0x93, 0xFB, 0xFB, 0xFB, 0x4B, 0xFB, 0xB3, 0xFB,
    0x6F, 0x7F, 0x7C, 0x7C, 0x35, 0x7D, 0x7D, 0x7D, 0x49, 0x7D, 0x7D, 0x7D, 0x25, 0x7D, 0x59, 0x7D,
    0x7B, 0xFF, 0x03, 0x03, 0xFD, 0xFD, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE,
    0xD7, 0xF7, 0xFB, 0xFB, 0x6B, 0xFB, 0xFB, 0xFB, 0x93, 0xFB, 0xFB, 0xFB, 0x4B, 0xFB, 0xB3, 0xFB,
    0xB7, 0xBF, 0xBE, 0xBF, 0x9B, 0xBF, 0xBE, 0xBE, 0xA4, 0xBE, 0xBE, 0xBE, 0x92, 0xBE, 0xAC, 0xBE,
    0xBD, 0xFF, 0x81, 0x81, 0x7E, 0x7E, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xED, 0xFD, 0xFD, 0xFD, 0xB5, 0xFD, 0x7D, 0x7D, 0x49, 0x7D, 0x7D, 0x7D, 0x25, 0x7D, 0x59, 0x7D,
    0xDF, 0xDF, 0xDF, 0xDF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xE0, 0xE0, 0xFF, 0xFF, 0xC0, 0xC0, 0x80, 0xBF, 0x00, 0x7F, 0x00, 0x7F, 0x00, 0x7F, 0x00, 0x00,
    0x00, 0x01, 0xFE, 0xFE, 0x00, 0x01, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x00,
    0x03, 0xFB, 0x03, 0xFB, 0x03, 0xFB, 0x03, 0xFB, 0x07, 0xF7, 0x07, 0xF7, 0x0F, 0xEF, 0x1F, 0x1F,
    0xC0, 0xDF, 0xC0, 0xDF, 0xC0, 0xDF, 0xC0, 0xDF, 0xE0, 0xEF, 0xE0, 0xEF, 0xF0, 0xF7, 0xF8, 0xF8,
    0x7F, 0x7F, 0x7F, 0x7F, 0x00, 0x80, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x00,
    0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0x03, 0x03, 0xFB, 0x03, 0xFB, 0x03, 0xFB, 0x07, 0xF7, 0x0F, 0x0F,
    0x01, 0x7D, 0x01, 0x7D, 0x00, 0x7E, 0x00, 0x7F, 0x80, 0xBF, 0x80, 0xBF, 0xC0, 0xDF, 0xE0, 0xE0,
    0xFE, 0xFE, 0xFE, 0xFE, 0x00, 0x01, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x00,
    0x03, 0xFB, 0x03, 0xFB, 0x03, 0xFB, 0x03, 0xFB, 0x03, 0xFB, 0x03, 0xFB, 0x03, 0xFB, 0x07, 0x07,
    0x01, 0x7D, 0x01, 0x7D, 0x00, 0x7C, 0x00, 0x7F, 0x00, 0x7F, 0x00, 0x7F, 0x00, 0x7F, 0x80, 0x80,
    0xFE, 0xFE, 0xFC, 0xFD, 0x00, 0x03, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x00,
    0x03, 0xFB, 0x03, 0xFB, 0x03, 0xFB, 0x07, 0xF7, 0x07, 0xF7, 0x0F, 0xEF, 0x1F, 0x9F, 0x7F, 0x7F,
    0x01, 0x7D, 0x01, 0x7D, 0x01, 0x7D, 0x01, 0x7D, 0x01, 0x7D, 0x01, 0x7D, 0x81, 0xBD, 0xC3, 0xC3,
    0x80, 0xBE, 0x80, 0xBF, 0x80, 0xBF, 0x80, 0xBF, 0xC0, 0xDF, 0xC0, 0xDF, 0xE0, 0xE7, 0xF8, 0xF8,
    0xFF, 0xFF, 0x7E, 0x7E, 0x00, 0x81, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x00,
    0x01, 0x7D, 0x01, 0xFD, 0x01, 0xFD, 0x01, 0xFD, 0x03, 0xFB, 0x03, 0xFB, 0x07, 0xE7, 0x1F, 0x1F,
};

// Map
const unsigned char logo_map[360] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x01, 0x02, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x04, 0x05, 0x06, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x08, 0x10, 0x00, 0x11, 0x09, 0x09, 0x12, 0x13, 0x00, 0x00,
    0x00, 0x00, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x14, 0x1c, 0x00, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x00, 0x00,
    0x00, 0x00, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x22, 0x2a, 0x00, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x00, 0x00,
    0x00, 0x00, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x30, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x00, 0x00,
    0x00, 0x00, 0x3f, 0x40, 0x00, 0x41, 0x42, 0x43, 0x44, 0x45, 0x3f, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x00,
    0x00, 0x00, 0x4e, 0x4f, 0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x5b, 0x5c, 0x5d, 0x5e, 0x5f,
    0x00, 0x00, 0x60, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 0x6a, 0x6b, 0x66, 0x6c, 0x6d, 0x6e, 0x6f, 0x00,
    0x00, 0x00, 0x70, 0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7a, 0x7b, 0x7c, 0x7d, 0x7e, 0x7f, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};