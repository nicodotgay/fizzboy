// ///////////////////////
// //                   //
// //  File Attributes  //
// //                   //
// ///////////////////////

// Filename: fizzboy.png
// Pixel Width: 160px
// Pixel Height: 168px

// /////////////////
// //             //
// //  Constants  //
// //             //
// /////////////////

const int fizzboy_tile_map_size = 0x01A4;
const int fizzboy_tile_map_width = 0x14;
const int fizzboy_tile_map_height = 0x15;

const int fizzboy_tile_data_size = 0x0FF0;
const int fizzboy_tile_count = 0xFF;

// ////////////////
// //            //
// //  Map Data  //
// //            //
// ////////////////

const unsigned char fizzboy_map_data[] ={
  0x00,0x01,0x02,0x03,0x04,0x05,0x05,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,
  0x06,0x06,0x06,0x06,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x05,0x05,
  0x05,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x07,0x07,0x07,0x08,0x07,0x07,0x07,0x07,
  0x09,0x0A,0x07,0x07,0x07,0x05,0x05,0x05,0x05,0x06,0x06,0x06,0x0B,0x0C,0x0D,0x0E,
  0x0F,0x10,0x11,0x12,0x13,0x14,0x15,0x16,0x17,0x18,0x19,0x1A,0x1B,0x1C,0x1D,0x06,
  0x1E,0x1F,0x20,0x21,0x22,0x23,0x24,0x25,0x26,0x27,0x28,0x29,0x2A,0x2B,0x2C,0x2D,
  0x2E,0x2F,0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39,0x3A,0x3B,0x3C,0x3D,
  0x3E,0x3F,0x40,0x41,0x42,0x43,0x44,0x45,0x46,0x47,0x48,0x49,0x4A,0x4B,0x4C,0x4D,
  0x4E,0x4F,0x50,0x51,0x52,0x53,0x54,0x55,0x56,0x57,0x58,0x59,0x5A,0x5B,0x5C,0x5D,
  0x5E,0x5F,0x60,0x61,0x62,0x07,0x07,0x07,0x07,0x63,0x64,0x65,0x66,0x67,0x68,0x69,
  0x47,0x47,0x6A,0x6B,0x6C,0x6D,0x6E,0x6F,0x70,0x71,0x72,0x73,0x74,0x75,0x76,0x77,
  0x78,0x79,0x7A,0x7B,0x5C,0x5C,0x7C,0x7D,0x7E,0x7F,0x07,0x07,0x07,0x07,0x07,0x07,
  0x07,0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8A,0x8B,0x8C,0x07,0x07,
  0x07,0x07,0x07,0x07,0x07,0x8D,0x8E,0x8F,0x90,0x91,0x92,0x93,0x94,0x94,0x94,0x94,
  0x94,0x95,0x96,0x97,0x98,0x99,0x9A,0x9B,0x9C,0x9D,0x9E,0x9F,0xA0,0xA1,0xA2,0xA3,
  0x94,0x94,0x94,0x94,0x94,0x94,0x94,0x94,0x94,0x94,0x94,0xA4,0xA5,0xA6,0xA7,0xA8,
  0xA1,0xA3,0xA3,0xA3,0xA9,0xAA,0xAB,0xAC,0xAD,0x94,0x94,0x94,0xAE,0xAF,0xB0,0xB1,
  0xB2,0xB3,0xB4,0xA1,0xA3,0xA3,0xA3,0xA3,0xB5,0xB6,0xB6,0xB6,0xB7,0xB8,0x94,0x94,
  0xB9,0xBA,0xBB,0xBC,0x69,0x69,0xA1,0xA3,0xA3,0xA3,0xA3,0xA3,0xBD,0xBE,0xBF,0xC0,
  0xC1,0xC2,0xC3,0xC4,0xC5,0xC6,0xC7,0xC8,0x69,0xA1,0xA3,0xA3,0xA3,0xA3,0xA3,0xA3,
  0xC9,0xCA,0xCB,0xCC,0xCD,0xCE,0xCF,0xC5,0xC5,0xD0,0xD1,0x69,0xA1,0xA3,0xA3,0xA3,
  0xA3,0xA3,0xA3,0xA3,0xD2,0xD3,0xD4,0xD5,0xD6,0xCF,0xC5,0xC5,0xC5,0x69,0x69,0xA1,
  0xA3,0xA3,0xA3,0xA3,0xA3,0xA3,0xA3,0xA3,0xD7,0xD8,0xD9,0xDA,0xDB,0xDC,0xDD,0xDE,
  0xDF,0xE0,0xE1,0xE1,0xE1,0xE1,0xE1,0xE1,0xE1,0xE1,0xE1,0xE1,0xE2,0xE3,0xE4,0xE5,
  0xE6,0x07,0xE7,0xE8,0xE9,0xEA,0xE6,0x07,0xEB,0xEC,0xED,0xEE,0xEF,0x07,0xF0,0xF0,
  0xF1,0xF2,0xF3,0xF4,0xF5,0x07,0xF6,0xF7,0xF8,0xF9,0xF5,0x07,0xFA,0xFB,0xFC,0xFD,
  0xFE,0x07,0x69,0x69
};

// /////////////////
// //             //
// //  Tile Data  //
// //             //
// /////////////////

const unsigned char fizzboy_tile_data[] ={
  0xFF,0xFF,0x86,0x86,0xBF,0xBF,0x8E,0x8E,0xBE,0xBE,0xBE,0xBE,0xBE,0xBE,0xFF,0xFF,
  0xFF,0xFF,0xC1,0xC1,0xFB,0xFB,0xF7,0xF7,0xEF,0xEF,0xDF,0xDF,0x83,0x83,0xFF,0xFF,
  0xFF,0xFF,0x83,0x83,0xF7,0xF7,0xEF,0xEF,0xDF,0xDF,0xBF,0xBF,0x07,0x07,0xFF,0xFF,
  0xFF,0xFF,0x1C,0x1C,0x6B,0x6B,0x0B,0x0B,0x6B,0x6B,0x6B,0x6B,0x1C,0x1C,0xFF,0xFF,
  0xFE,0xFE,0xDA,0xDA,0x6A,0x6A,0x76,0x76,0x76,0x76,0x6E,0x6E,0xDE,0xDE,0xFE,0xFE,
  0x08,0x00,0x20,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x08,0x00,0x20,0x00,0x80,0x00,0x01,0x00,0x00,0x00,0x10,0x00,0x42,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3C,0x00,0x4F,0x30,
  0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x00,0x03,0x0C,0x26,0x08,0x06,0x39,0xA2,0x5C,
  0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x00,0xA0,0x00,0xF0,0x00,0x78,0x00,0xEC,0x10,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF2,0x00,0x7F,0x00,
  0x00,0x00,0x00,0x00,0x00,0x0E,0x00,0x1F,0x00,0x3F,0xBD,0x41,0xAA,0x54,0x83,0x78,
  0x38,0x07,0x6F,0x10,0xBE,0x00,0x2F,0x80,0xDF,0x20,0xFA,0x80,0xFC,0x43,0xAA,0x55,
  0x41,0xFC,0xA0,0x5F,0x48,0xB7,0xC7,0x38,0xD3,0x0C,0xFB,0x07,0xF5,0x02,0xEE,0x01,
  0xE0,0x00,0x78,0x00,0x1C,0xC0,0x27,0x50,0x85,0x68,0xE7,0x18,0x04,0xFA,0x39,0xCF,
  0x02,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0xE0,0x00,0xF8,0x00,0xBE,0x00,0x6E,0x80,
  0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x01,0x8E,0x00,
  0x81,0x00,0x00,0x00,0x03,0x00,0x03,0x00,0x6F,0x10,0x8E,0x21,0x9E,0x00,0xB2,0x4D,
  0x61,0x9E,0xF9,0x06,0xAB,0x74,0xAE,0x15,0x27,0xDD,0x4A,0x3D,0xFB,0x08,0x6F,0x10,
  0xB8,0x46,0x99,0x26,0xFA,0x00,0x7F,0x80,0x77,0x80,0x35,0xC0,0x0C,0xF1,0x37,0xC8,
  0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x80,0xC4,0x18,0x5E,0x28,0xF3,0x04,0x13,0xAE,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x1C,0x02,0x31,0x00,0x2A,0x10,0x63,0x8C,
  0x00,0x00,0x00,0x00,0x06,0x10,0x19,0x64,0xED,0x12,0x7D,0x80,0x77,0x00,0x4F,0x00,
  0x20,0x00,0xFC,0x00,0xE7,0x10,0xF3,0x08,0xFF,0x00,0xFF,0x00,0xDB,0x20,0xFE,0x00,
  0x00,0x00,0x04,0x00,0xBE,0x00,0xBF,0x00,0xFF,0x00,0xBB,0x04,0xEB,0x00,0x69,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0xF3,0x04,0xFE,0x01,0xFD,0x00,0xD7,0x20,
  0x04,0x00,0x10,0x00,0x00,0x00,0x80,0x00,0xE0,0x00,0xE0,0x10,0xD4,0x08,0x74,0x02,
  0x7F,0x80,0xFF,0x00,0xFE,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xEF,0x10,
  0xE1,0x1E,0xFC,0x03,0xFE,0x00,0xFF,0x00,0x7B,0x80,0x7F,0x80,0xFF,0x00,0xD7,0x28,
  0x6A,0xA0,0x2F,0xD0,0x53,0xB8,0x83,0x6C,0x52,0x2F,0xED,0x13,0xE6,0x19,0xFB,0x0C,
  0x3E,0x81,0xF5,0x00,0x5B,0x00,0xDD,0x20,0xEF,0x10,0x2E,0xC0,0xD7,0x68,0x2B,0xF4,
  0x5E,0xFF,0xC2,0x7F,0xB1,0x0F,0xDC,0x23,0xD7,0x00,0xFF,0x00,0xCF,0x10,0xFD,0x02,
  0x57,0xE0,0x87,0xF8,0x60,0xFF,0xFC,0x7E,0x88,0x7F,0xE7,0x1F,0xD9,0x07,0xB9,0x56,
  0xFF,0x00,0xFB,0x00,0xAE,0x00,0xFF,0x00,0x7F,0x80,0x7F,0x80,0xBE,0xE0,0x6F,0xF0,
  0x9C,0x63,0xB9,0x00,0xD7,0x28,0xE7,0x10,0xFD,0x02,0xEF,0x10,0xFE,0x01,0xFD,0x00,
  0x2B,0xD4,0x8E,0x70,0xD3,0x2C,0xE8,0x03,0xFE,0x01,0xFA,0x01,0xCF,0x20,0xDA,0x04,
  0xFD,0x00,0x51,0xAC,0x77,0x00,0x7F,0x80,0x78,0x86,0x13,0xF4,0xEB,0x10,0xFB,0x04,
  0xD7,0x20,0xF7,0x08,0xE9,0x16,0x63,0x1C,0xD9,0x26,0x05,0xFA,0xA6,0x19,0xEB,0x14,
  0xC0,0x00,0xA3,0x40,0x75,0x0A,0xBE,0x41,0xDD,0x20,0xFF,0x00,0x67,0x18,0xE3,0x08,
  0x36,0x08,0xF7,0x00,0xD9,0x26,0xBF,0x40,0x2E,0xD4,0xA9,0x54,0xC3,0x1C,0xFC,0x07,
  0x35,0xC2,0x52,0x88,0xFD,0x80,0x99,0x60,0x97,0x60,0x87,0x68,0x6B,0x1C,0x43,0x3E,
  0x9E,0x01,0xD4,0x00,0x2A,0x15,0x3B,0xC0,0x23,0xD5,0xF4,0x4B,0xF9,0x1E,0x02,0xFD,
  0xD9,0x20,0x86,0x40,0x1D,0xE0,0x7B,0x84,0x02,0xFD,0x46,0xF8,0x08,0xF4,0x03,0xF8,
  0xB4,0x00,0xB4,0x00,0xBD,0x00,0x27,0x78,0x1A,0x44,0x66,0x31,0x5B,0xFC,0x6D,0x03,
  0xAF,0x10,0xF6,0x08,0xF8,0x22,0xCF,0x20,0xDF,0x04,0x7F,0x02,0xFB,0x0C,0x37,0x48,
  0xDA,0x01,0xDD,0x00,0xEF,0x00,0xDA,0x01,0xEE,0x00,0xFB,0x04,0xEF,0x80,0xFE,0x81,
  0x80,0x00,0x41,0x80,0x48,0x71,0xB6,0x29,0x67,0x98,0xAB,0x54,0x38,0xC7,0xD1,0x2F,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFD,0x02,
  0xCF,0x30,0xFF,0x00,0xFD,0x06,0xFA,0x07,0xFE,0x01,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFC,0x07,0xD2,0x0F,0xFD,0x03,0x07,0xF9,0x4E,0xF1,0x8D,0xF6,0xEF,0x50,0xC1,0x3E,
  0x6D,0x92,0xD8,0xA7,0x1F,0xF0,0xCF,0xFF,0xE6,0xFF,0x8F,0x7F,0xDE,0x3B,0xFD,0x06,
  0x6F,0x80,0x07,0xF0,0xEB,0x14,0x51,0xAF,0x2F,0xF7,0xF9,0xFF,0x73,0x9D,0x89,0x7F,
  0xFF,0x01,0xEF,0x10,0xBF,0x40,0xBB,0xC4,0xBE,0xC1,0x8E,0xF1,0xD3,0xFC,0x70,0xFF,
  0x7B,0xFC,0xF1,0x3E,0xFF,0x0E,0xFF,0x07,0xFF,0x03,0x3F,0xC0,0x56,0xE9,0xAF,0x50,
  0xFB,0x00,0xFB,0x04,0xFF,0x00,0x3C,0xCB,0x5B,0xE4,0xC7,0xBA,0xB7,0x48,0xEC,0x13,
  0xFF,0x00,0xD3,0x08,0xF3,0x0C,0xD9,0x2E,0xDB,0x07,0xFF,0x00,0xFF,0x00,0x17,0xE8,
  0xD2,0x0F,0xFD,0x02,0xFF,0x00,0x7F,0x84,0x7E,0x81,0xD7,0x2A,0xB3,0x48,0x6F,0xB0,
  0xFD,0x02,0xFB,0x00,0xFF,0x00,0xF6,0x00,0x7F,0x00,0xFF,0x00,0xB9,0x06,0xFF,0x02,
  0xFF,0x00,0xBF,0x00,0xFF,0x00,0xBF,0x40,0xDF,0x60,0x63,0x9C,0xF9,0x06,0x7C,0x83,
  0xFE,0x09,0xF9,0x06,0xF8,0x07,0xFF,0x03,0xDE,0x23,0xF7,0x09,0xFB,0x05,0xAF,0x50,
  0x76,0xCB,0x2F,0xC0,0x47,0xB8,0xA3,0x5C,0x7C,0x82,0x3F,0xC2,0xD8,0xAF,0x8D,0xF2,
  0x05,0xFA,0x18,0xE7,0x0C,0x77,0xA8,0x07,0xB9,0x06,0xEC,0x12,0x5F,0xE0,0xF7,0x58,
  0x63,0x84,0x73,0x8C,0x45,0xA2,0x55,0xAB,0xAF,0x51,0xF2,0x0D,0xF6,0x18,0xFF,0x38,
  0xBF,0x41,0x9F,0x44,0xAD,0x03,0x7C,0x00,0xF7,0x00,0x6D,0xA2,0x3D,0xE2,0x7E,0x19,
  0xBB,0xD4,0x7B,0x9C,0x4D,0xFE,0x15,0x3E,0xFB,0x06,0xBF,0x00,0xF7,0x00,0x65,0x08,
  0x5D,0x20,0xFF,0x00,0xAB,0x08,0x08,0xF5,0xD3,0x0C,0xC8,0x36,0xFF,0x01,0xF7,0x08,
  0xB8,0x47,0x97,0x28,0xEE,0x31,0xDF,0x38,0xFB,0x0C,0xFD,0x0A,0x38,0xC7,0xFA,0x07,
  0xDF,0x21,0x95,0x6A,0xE2,0x3D,0x28,0xDF,0xDD,0x3E,0x5C,0xEF,0x2D,0xFA,0xC8,0x7F,
  0xBF,0x40,0x95,0xEA,0x37,0xC8,0xD1,0xEE,0x45,0xFA,0xA8,0x57,0x65,0xBF,0xA7,0x5F,
  0xF9,0x07,0x7F,0x80,0x93,0x6E,0xB2,0x5D,0x5A,0xA5,0xEF,0x30,0xF2,0xCD,0xA3,0xFE,
  0xBB,0x45,0xF6,0x09,0xDF,0x20,0xAA,0x55,0x7F,0x88,0xFF,0x04,0xCD,0x72,0xCE,0x7D,
  0x26,0xD9,0xFC,0x03,0xCA,0x37,0xDA,0xA5,0xFD,0x02,0xFF,0x00,0xEE,0x11,0xBE,0x41,
  0xBC,0xFF,0x75,0x9F,0x7B,0xDF,0xBE,0xEF,0xDA,0x27,0xF8,0x07,0xFE,0x01,0x6F,0x90,
  0xF3,0xAC,0xEF,0x13,0xC7,0xF8,0x81,0xFE,0xF2,0xEF,0x40,0xFF,0x25,0xFF,0xFC,0x7F,
  0xFB,0x04,0x7F,0x80,0x3F,0xC0,0xEF,0x10,0xFE,0x01,0xFC,0x07,0x97,0x68,0xBB,0xC4,
  0xEF,0x10,0xFB,0x04,0xFF,0x00,0x06,0xB9,0x7F,0x03,0xFF,0x44,0x65,0x9A,0xF8,0x47,
  0xC7,0x38,0xBF,0x40,0xFB,0x04,0xDD,0x22,0xFF,0x00,0x7B,0x84,0xFF,0x7F,0x80,0x80,
  0xFF,0x00,0xF9,0x06,0xFD,0x02,0xFF,0x00,0xCC,0x33,0xFA,0x07,0xFF,0xFF,0x00,0x00,
  0xFF,0x08,0xFF,0x06,0xF8,0x07,0xFF,0x01,0xAD,0x52,0xCE,0x31,0xFF,0xFF,0x00,0x00,
  0xFB,0x04,0xEF,0x10,0x7F,0x80,0x5F,0xA0,0xBB,0xC4,0xFD,0x02,0xFF,0xFF,0x00,0x00,
  0xFF,0x78,0x3E,0xFB,0xEB,0x3D,0xDE,0x2F,0xFF,0x00,0x9E,0x61,0xFF,0x00,0xFF,0x80,
  0xA5,0x7E,0x8D,0xF7,0xB9,0xF6,0xDE,0xE4,0xFB,0xE4,0xEC,0x37,0xDB,0x27,0xFC,0x07,
  0x2F,0xB0,0x74,0x3F,0x42,0xFE,0xCD,0x32,0x36,0x85,0x72,0x83,0x7E,0x81,0x3A,0xC5,
  0xD9,0x06,0x78,0x05,0x74,0xAB,0xDF,0xF0,0xDF,0xF8,0x90,0xFF,0x38,0xE7,0xF9,0x06,
  0xFF,0x00,0x63,0x8C,0x43,0x7C,0x67,0xF8,0xF9,0xE6,0x8D,0xF6,0x7D,0x8E,0x57,0xA8,
  0xEE,0x10,0xDA,0x3D,0xF8,0x47,0xD3,0x2C,0xE3,0x18,0xEA,0x1C,0xFF,0x00,0xEF,0x10,
  0x7E,0x85,0xB9,0x07,0xFF,0x00,0xDF,0x20,0x27,0x99,0xFF,0x00,0x7F,0x00,0xFF,0x00,
  0x08,0xF7,0x56,0xE9,0x38,0xC7,0xBE,0x51,0x41,0xBF,0x3D,0xC2,0xDF,0x28,0x73,0xCD,
  0xB1,0x7F,0x49,0xFE,0x3D,0xDF,0x94,0xEF,0x16,0xEB,0xF1,0x0E,0x68,0x97,0xF5,0x0A,
  0xAF,0xFD,0x69,0xFF,0x17,0xFB,0xDE,0xEF,0xC6,0x3F,0xD2,0x6D,0xBD,0x42,0xF1,0x0E,
  0xE8,0xBF,0x92,0xFF,0x81,0xFC,0x01,0xFE,0x93,0xEC,0x09,0xF6,0x67,0xF8,0xBF,0x40,
  0x5F,0x80,0x26,0xB9,0x6B,0xD6,0x42,0xBD,0xBF,0x40,0xFE,0x01,0xDB,0x24,0xFB,0x04,
  0xFB,0x04,0xFF,0x00,0xDC,0x23,0xFC,0x03,0xF0,0x0F,0xF3,0x0C,0x4E,0xF1,0x15,0xEA,
  0xEE,0x13,0x6B,0x9C,0xBC,0x43,0xAC,0x53,0x1F,0xE8,0xF8,0x07,0xD5,0x2A,0xFF,0x00,
  0xF6,0xF9,0xFA,0x7D,0xF6,0x2B,0xDF,0x20,0x29,0xD6,0x8F,0x71,0x9B,0xFC,0xA0,0x5F,
  0x73,0xFF,0x59,0xFF,0xD1,0xFF,0xCF,0x31,0xE3,0x3D,0xD1,0xEF,0x3F,0xC5,0x33,0xDF,
  0x7F,0x40,0x7F,0x40,0x7B,0x44,0x7F,0x40,0x6B,0x7C,0x7D,0x7E,0x65,0x5F,0x73,0x5C,
  0xF6,0x0F,0xE2,0x0F,0xB3,0x5E,0xAA,0x5D,0xDD,0xE2,0xD8,0xE7,0xFE,0x45,0x5E,0xA1,
  0x2F,0xF8,0xFF,0xC0,0xB2,0x0D,0xEF,0x11,0xBB,0x44,0xA3,0x58,0xBE,0x01,0x35,0xC0,
  0xB4,0x7B,0x71,0xFE,0xE0,0x7F,0xDB,0x3F,0xE7,0x1C,0x87,0x7A,0x9B,0x64,0xCF,0x70,
  0xF9,0x06,0x71,0xCB,0x7C,0xC3,0xFE,0x85,0xF2,0x0F,0xFD,0x07,0xEB,0x14,0xDF,0x20,
  0xCF,0x20,0xDF,0x00,0xFD,0x02,0x7F,0x80,0x1F,0xE0,0xEF,0x10,0xC7,0x38,0xF7,0x0C,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xDA,0x27,0xFA,0x05,0xB5,0x6A,0xFF,0x00,0x06,0xF9,0xFF,0x00,0xFA,0x45,0xBE,0x41,
  0x5D,0xA2,0xBF,0xC0,0xF5,0x0A,0xF2,0x0D,0xBF,0x42,0xF2,0x0D,0xDC,0x23,0xFA,0x05,
  0xD0,0x2F,0x97,0x68,0xEA,0x15,0xF7,0x08,0x7F,0x80,0xDF,0x64,0x7D,0x82,0xDF,0x20,
  0xF3,0x0C,0xFD,0x22,0xFE,0x01,0x6F,0x90,0xFB,0x04,0xF5,0x0A,0xFD,0x06,0x69,0x97,
  0x5F,0xA0,0x62,0x9D,0x1B,0xE5,0x7C,0x83,0xA7,0x58,0x10,0xEF,0xFF,0xFF,0x00,0x00,
  0xD1,0x2F,0x64,0x9B,0x09,0xF6,0x84,0x7B,0x79,0x86,0x97,0x68,0xFF,0xFF,0x00,0x00,
  0x65,0xBF,0xFE,0x35,0xA6,0xDD,0xAC,0x53,0x5B,0xE4,0xEE,0x11,0xFF,0xFF,0x00,0x00,
  0x80,0x80,0xFF,0x7F,0xFF,0x00,0xF1,0x0E,0xF8,0x07,0xEF,0x10,0xFF,0xFF,0x00,0x00,
  0x00,0x00,0xFF,0xFF,0xFF,0x00,0xF1,0x0E,0xF8,0x07,0xEF,0x10,0xFF,0xFF,0x00,0x00,
  0x00,0x00,0xFF,0xFF,0xF6,0x09,0x2A,0xD5,0x2D,0xD2,0xD6,0x29,0xFF,0xFF,0x00,0x00,
  0x00,0x00,0xFF,0xFF,0xDB,0x24,0x0F,0xF0,0xAB,0x54,0xF3,0x0C,0xFF,0xFF,0x00,0x00,
  0xF4,0x8F,0xFD,0x06,0xFF,0x03,0xFE,0x01,0xFA,0x05,0xFD,0x02,0xED,0x12,0xF7,0x89,
  0xFE,0x40,0xEF,0x50,0xAE,0xD1,0xD7,0xAD,0xBE,0x61,0xFF,0x00,0xFF,0x00,0xFF,0x80,
  0xFF,0x00,0xFD,0x02,0xDF,0x20,0xDB,0x24,0x78,0x8F,0x81,0x3E,0xE2,0x1F,0xF0,0x0E,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xBF,0xC0,0x57,0xA8,0xBD,0x42,0xBF,0x4C,0x94,0x7F,
  0xE7,0x18,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFD,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xDF,0x20,0xFF,0x00,0xFF,0x00,0xF7,0x00,0xFF,0x00,0xFF,0x00,0xDF,0x00,0xFC,0x03,
  0xFF,0x00,0xDF,0x20,0xFB,0x04,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x80,
  0xEF,0x10,0xDD,0xE7,0x33,0xCF,0x26,0xDD,0xDE,0x2F,0xFC,0x97,0xE5,0x5B,0x97,0xE8,
  0x5D,0xA2,0xC1,0xFE,0xD7,0xEA,0x7F,0xE0,0xB4,0x5B,0xD9,0x66,0xB6,0xF9,0xCB,0xF4,
  0x6F,0x90,0x75,0x8A,0xA1,0x7E,0x47,0xB9,0xF2,0x6D,0x1D,0xFE,0x8A,0x7F,0x67,0x9F,
  0xDE,0x22,0x76,0x8A,0x9E,0x62,0x52,0xAE,0x56,0xAA,0x9E,0x6E,0x9E,0x62,0x0A,0xF6,
  0x71,0x4F,0x7E,0x41,0x6E,0x51,0x7F,0x40,0x5F,0x60,0x6F,0x53,0x7D,0x42,0x7C,0x43,
  0xDF,0xE0,0xFF,0xF0,0x42,0xFD,0xFD,0x1A,0x7F,0x80,0xDF,0x78,0xD5,0x29,0xFB,0x05,
  0xAF,0x50,0xBF,0x40,0xED,0x13,0xF6,0x0F,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xBF,0x40,0xFF,0x00,0xFF,0x00,0xBF,0x40,0xEF,0x50,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFE,0x01,0x7F,0x80,0xBF,0x00,0xDD,0x00,
  0xFD,0x02,0xFF,0x09,0xA3,0x5F,0xBA,0x0F,0xF4,0x0F,0x7F,0x83,0xFF,0x00,0xFF,0x00,
  0xAF,0xD0,0x37,0xFC,0x98,0xF7,0x89,0xFF,0xBA,0xCF,0x54,0xBB,0xBF,0x40,0xEF,0x10,
  0xD7,0x7E,0x34,0xFF,0x8B,0x7D,0x6F,0xF7,0x63,0x9F,0x69,0xB6,0xDE,0x21,0xF8,0x07,
  0xD7,0xFE,0xB4,0xFF,0x8B,0xFD,0x6F,0xF7,0x63,0x9F,0x69,0xB6,0xDE,0x21,0xF8,0x07,
  0xA0,0xFF,0x95,0xEA,0xAD,0xDA,0x72,0xAD,0x57,0xE8,0x4A,0xB5,0xEF,0x10,0xF5,0x4A,
  0x77,0x8A,0x0D,0xF6,0xE4,0x1B,0xB7,0x48,0x5A,0xA5,0xE9,0x17,0x54,0xAB,0xB4,0x4B,
  0xB6,0x4F,0x6C,0x93,0x9F,0x60,0x25,0xDA,0xEB,0x35,0xB1,0x4F,0x15,0xEA,0x39,0xC7,
  0xB6,0x4A,0x76,0x8A,0x7A,0xF6,0xAE,0x52,0x62,0xFE,0xBA,0xFE,0x86,0xFA,0x22,0xFE,
  0x73,0x6C,0x7C,0x63,0x55,0x68,0x63,0x7C,0x5A,0x75,0x7B,0x46,0x7B,0x54,0x7E,0x40,
  0xDE,0x23,0x33,0xC8,0xF6,0x09,0x7A,0x87,0xDD,0xF3,0xD9,0x2E,0xEF,0x10,0xFF,0x00,
  0x6F,0x98,0x8F,0x78,0xEE,0x7F,0xB7,0xFF,0xBE,0xFF,0x36,0xFF,0xBF,0x7E,0xE9,0x16,
  0xFF,0x00,0xFF,0x00,0x7F,0x80,0xFF,0x80,0xB7,0x48,0xFF,0x00,0xBF,0x40,0xEF,0x10,
  0x7D,0x02,0xFF,0x00,0xFF,0x00,0xCF,0x32,0xDF,0x20,0xFF,0x43,0xB7,0x4F,0xEF,0x0C,
  0x7F,0x00,0x7F,0x00,0xFF,0x00,0xFF,0x00,0xFE,0x00,0xFF,0x80,0xBE,0x40,0xFF,0x00,
  0xFB,0x04,0x6F,0x10,0xAE,0x5B,0xFF,0x06,0xFF,0x00,0xD2,0x08,0xF7,0x00,0xBA,0x00,
  0xD5,0x2A,0xAE,0x51,0xB5,0x4A,0xD8,0x27,0x0B,0xF4,0xF6,0x09,0x2B,0xD4,0x48,0xB7,
  0xFE,0x7E,0x7E,0xFE,0x3E,0xFE,0xB5,0x7B,0x0A,0xF5,0xA1,0x5E,0x09,0xF6,0x82,0x7D,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x06,0xFF,0x14,0xEB,0xD5,0x2A,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x94,0x6B,0x95,0xEA,0x55,0xAA,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x93,0x6C,0x25,0xDA,0x96,0xE9,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xD5,0x2A,0x7B,0xC4,0x57,0xA8,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xDD,0x22,0x77,0x88,0xDB,0x24,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xDF,0x20,0x7B,0x84,0xDC,0x23,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x7A,0x85,0xFD,0x02,0xEF,0x10,
  0x7B,0x44,0x7B,0x44,0x79,0x46,0xFF,0x80,0xDC,0x23,0x57,0xA8,0xDB,0x24,0xDE,0x21,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFD,0x02,0xB7,0x78,
  0xFF,0x00,0xFF,0x00,0xEF,0x10,0xFF,0x00,0xFF,0x00,0xEF,0x10,0xFB,0x00,0xFE,0x01,
  0xBF,0x40,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFA,0x05,0xEE,0x10,0xB7,0x48,
  0xBF,0x40,0x3F,0xC0,0xBE,0x40,0xFD,0x00,0xF7,0x00,0xFD,0x00,0xAF,0x00,0xFD,0x00,
  0xFE,0x00,0xFB,0x00,0xD5,0x00,0x7E,0x00,0xA5,0x00,0x7E,0x00,0xAB,0x00,0xF4,0x00,
  0xD5,0x00,0xAE,0x00,0xB5,0x00,0xD8,0x00,0x0B,0x00,0xF6,0x00,0x2B,0x00,0x48,0x00,
  0xB4,0x5B,0x5A,0xA5,0xED,0x72,0xB3,0x4C,0xFF,0x00,0x8F,0x70,0x48,0xA7,0xF5,0x0A,
  0x39,0xC6,0x7F,0x80,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x7F,0x80,0xFF,0x00,0xFF,0x08,
  0x7F,0x80,0xBE,0x41,0xFF,0x00,0xFF,0x00,0xFB,0x00,0xFF,0x00,0xED,0x00,0xFF,0x00,
  0xEF,0xF0,0xFE,0x01,0xFF,0x01,0xBB,0x42,0xFF,0x00,0xBB,0x04,0xFB,0x04,0xFF,0x08,
  0xFF,0x00,0xFC,0x1B,0x7B,0x9E,0xFF,0x00,0xFF,0x00,0xF7,0x08,0xFF,0x00,0x5F,0xE0,
  0x4E,0xFD,0x4D,0xB6,0xA5,0xFA,0x82,0xFD,0xC3,0xFE,0x16,0xFD,0x65,0xFA,0xE8,0xF7,
  0xAA,0x55,0x63,0x9C,0x88,0x77,0x56,0xA9,0xC2,0xBD,0xB5,0x4A,0xC0,0x7F,0x91,0x7F,
  0xDA,0x25,0x26,0xD9,0x11,0xEE,0x2A,0xD5,0x8B,0x74,0x85,0xFB,0x40,0xFF,0x04,0xFB,
  0x5B,0xAC,0xA6,0x5B,0x2E,0xD7,0xB2,0x5F,0x48,0xBF,0x2B,0xD7,0x27,0xFF,0x2F,0xFF,
  0x65,0x9A,0x92,0x6D,0x50,0xAF,0xA9,0x56,0xB5,0xFA,0x7A,0xFD,0x4A,0xFD,0xED,0xFE,
  0x83,0xFF,0x4D,0xFF,0x8B,0x7F,0x0D,0xFF,0x9F,0x7F,0x4E,0xBF,0x51,0xAE,0x42,0xBD,
  0x80,0xFF,0xDA,0xFF,0xFD,0xF6,0xDE,0xFF,0x1F,0xFE,0x9F,0x70,0x0E,0xF1,0xBA,0x47,
  0xA7,0xD8,0x9F,0xF0,0x1F,0xF0,0x3F,0xC0,0xFF,0x00,0x8F,0x70,0xC3,0xFC,0x9E,0x67,
  0xF5,0x0E,0x81,0x3E,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xCE,0x31,0xA0,0xFF,0x50,0xAF,
  0xFF,0x00,0xFF,0x00,0x7F,0x80,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x9F,0xE0,
  0xDE,0x00,0xFF,0x00,0xFF,0x00,0xFA,0x01,0xEF,0x00,0xBE,0x01,0xFE,0x00,0xFF,0x00,
  0xFF,0x11,0xED,0x32,0xBF,0x40,0xFF,0x60,0x3F,0xC0,0x7F,0x80,0xFF,0x00,0xFF,0x00,
  0xE3,0x7F,0xAF,0xFF,0x72,0xBF,0xBD,0x7F,0x7C,0xBF,0x0E,0xFF,0x16,0xFF,0x97,0xFF,
  0x32,0xFD,0x30,0xFF,0x0F,0xFF,0xCA,0xFF,0xE6,0xFF,0xDF,0xFF,0x7F,0xFF,0x7F,0xFF,
  0x61,0xFE,0x76,0xFF,0xBD,0xFE,0xDF,0xFF,0x8C,0xF7,0xEC,0xFF,0xFA,0xED,0x10,0xEF,
  0x4A,0xB5,0x35,0xCA,0x40,0xBF,0x00,0xFF,0x02,0xFF,0x82,0x7D,0x21,0xFF,0x07,0xFF,
  0xBA,0x45,0x4B,0xB4,0xA9,0x56,0x57,0xB8,0x27,0xF9,0x27,0xD0,0x7F,0x00,0xFD,0x02,
  0xFD,0x0A,0xC0,0x3F,0x80,0x7F,0xEA,0x7C,0x3F,0x80,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xF7,0x0C,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFB,0x04,0xEF,0x10,0xFF,0x00,
  0xDF,0x20,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFE,0xDF,0xDB,0xFF,0xF3,0xFF,0xFF,0xFF,0x77,0xFF,0xDF,0xFF,0xFD,0xFF,0xF7,0xFF,
  0xE7,0xFF,0x87,0xFF,0xCF,0xFF,0xCB,0xFF,0x9F,0xFF,0x1F,0xFF,0x1B,0xFF,0x99,0xEF,
  0xFC,0xFF,0xFF,0xFF,0xEF,0xFF,0xEF,0xFF,0x65,0xFE,0x94,0xEB,0x43,0xFD,0xE4,0xFB,
  0x3B,0xFD,0xDA,0xFF,0xE0,0xFF,0xA2,0xDF,0x60,0xFF,0x28,0xFF,0x3B,0xFE,0x7F,0x80,
  0x08,0xF7,0x90,0xEF,0x80,0xFF,0xF0,0xFF,0xCC,0xFB,0xFF,0xF8,0xFE,0x01,0xFF,0x00,
  0x79,0xBF,0x14,0xFF,0x00,0xFF,0x67,0xF8,0xBF,0x40,0xFF,0x00,0xBF,0x40,0xFF,0x00,
  0xA4,0xDB,0x15,0xE8,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFB,0x04,0xFF,0x00,
  0x7F,0x00,0xFF,0x00,0xFD,0x02,0xEF,0x10,0x7E,0x81,0xF7,0x08,0xBD,0x42,0xF7,0x08,
  0xF7,0x08,0xBF,0x40,0xFD,0x02,0xD7,0x28,0xFF,0x00,0xFB,0x04,0xAF,0x50,0xFD,0x02,
  0xFF,0x00,0xBF,0x40,0xFE,0x01,0xFB,0x04,0x7F,0x80,0xEF,0x10,0x7F,0x80,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFE,0x01,0xFB,0x04,0xFF,0x00,0xFF,0x00,0xEF,0x10,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xDF,0x20,0x7F,0x80,0xFF,0x00,
  0x49,0xF7,0x00,0xFF,0x29,0xDE,0x47,0xF8,0xFF,0x00,0xAB,0x55,0xDD,0x22,0x77,0x88,
  0x00,0xFF,0x29,0xD6,0x5F,0xE0,0x6D,0x92,0xFD,0x22,0x57,0xA8,0xDA,0x25,0x77,0x88,
  0xEF,0xF0,0xBB,0x44,0x6E,0x91,0xD7,0x28,0x2D,0xD2,0xBB,0x44,0xEE,0x11,0x75,0x8A,
  0xFA,0x05,0xEF,0x10,0xBD,0x42,0xEF,0x10,0x7A,0x85,0xAF,0x50,0xF6,0x09,0xBB,0x44,
  0xAF,0x50,0xFF,0x00,0x57,0xA8,0xFD,0x02,0xBF,0x40,0xEF,0x10,0xDF,0x20,0xFB,0x04,
  0xFE,0x00,0xFF,0x00,0xFB,0x00,0xFE,0x00,0xFB,0x00,0xFE,0x00,0xFB,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0x7E,0x01,0xF7,0x08,0xFB,0x04,0xD9,0x26,0xFD,0x0E,0xB6,0x49,
  0xEF,0x10,0xBF,0x40,0xFF,0x00,0x7F,0x80,0xFF,0x00,0xDF,0x20,0xFF,0x00,0x7F,0x80,
  0x7E,0x81,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFA,0x00,0xFF,0x00,0xFF,0x00,
  0xAD,0x52,0xF6,0x09,0xAD,0x52,0xBB,0x44,0xA6,0x59,0x9B,0x64,0xED,0x12,0x56,0xA9,
  0xAD,0x52,0xF6,0x09,0xAD,0x52,0x77,0x88,0xDA,0x25,0x6F,0x90,0xB5,0x4A,0xDE,0x21,
  0xAF,0x50,0xFB,0x04,0xAD,0x52,0x77,0x88,0xDA,0x25,0xB7,0x48,0xDB,0x24,0xB7,0x48,
  0x6F,0x90,0xDB,0x24,0x7E,0x81,0xAB,0x54,0xFF,0x00,0xAB,0x54,0x7D,0x82,0xD7,0x28,
  0x6F,0x90,0xFF,0x00,0xFF,0x00,0xDB,0x24,0xFF,0x00,0x6F,0x90,0xFF,0x00,0xDF,0x20,
  0x00,0x00,0x0C,0x0C,0x12,0x12,0x12,0x12,0x12,0x12,0x12,0x12,0x0C,0x0C,0x00,0x00,
  0x00,0x00,0x02,0x02,0x06,0x06,0x0A,0x0A,0x02,0x02,0x02,0x02,0x02,0x02,0x00,0x00,
  0x00,0x00,0x0C,0x0C,0x12,0x12,0x02,0x02,0x04,0x04,0x08,0x08,0x1E,0x1E,0x00,0x00,
  0x00,0x00,0x0C,0x0C,0x12,0x12,0x02,0x02,0x0C,0x0C,0x02,0x02,0x1C,0x1C,0x00,0x00,
  0x00,0x00,0x04,0x04,0x08,0x08,0x10,0x10,0x24,0x24,0x3E,0x3E,0x04,0x04,0x00,0x00,
  0x00,0x00,0x1E,0x1E,0x10,0x10,0x1C,0x1C,0x02,0x02,0x02,0x02,0x1C,0x1C,0x00,0x00,
  0x00,0x00,0x0C,0x0C,0x10,0x10,0x10,0x10,0x1C,0x1C,0x12,0x12,0x0C,0x0C,0x00,0x00,
  0x00,0x00,0x1E,0x1E,0x02,0x02,0x04,0x04,0x04,0x04,0x08,0x08,0x08,0x08,0x00,0x00,
  0x00,0x00,0x1C,0x1C,0x22,0x22,0x1C,0x1C,0x22,0x22,0x22,0x22,0x1C,0x1C,0x00,0x00,
  0x00,0x00,0x1C,0x1C,0x22,0x22,0x1E,0x1E,0x02,0x02,0x04,0x04,0x18,0x18,0x00,0x00,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,
  0x00,0x00,0x07,0x07,0x07,0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x1F,0x1F,0x1F,0x1F,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x03,0x03,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0xF8,0xF8,0xF8,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0x7F,0x7F,0x7F,
  0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0xFE,0xFF,0xFF,0xE3,0xE3,0xE3,0xE3,0xE3,0xE3,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x9C,0x9C,0x9C,0x9C,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x71,0x71,0x71,0x71,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0xFC,0xFC,0xFC,
  0xFC,0xFC,0xFC,0xFC,0xC0,0xC0,0xC0,0xC0,0xFC,0xFC,0xFC,0xFC,0xC0,0xC0,0xDF,0xDF,
  0x00,0x00,0x18,0x18,0x18,0x18,0x00,0x00,0x38,0x38,0x18,0x18,0x18,0x18,0x18,0x18,
  0x00,0x00,0x00,0x00,0x00,0x00,0x7E,0x7E,0x06,0x06,0x0C,0x0C,0x18,0x18,0x30,0x30,
  0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x3F,0x03,0x03,0x06,0x06,0x0C,0x0C,0x18,0x18,
  0x00,0x00,0x03,0x03,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0xE0,0xE0,0xFF,0xFF,0xFF,0xFF,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,
  0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x1F,0x1F,0x1F,0x1F,
  0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x03,0x03,0xE3,0xE3,0xE3,0xE3,
  0x38,0x38,0x70,0x70,0xF0,0xF0,0xE0,0xE0,0xC0,0xC0,0x80,0x80,0xF8,0xF8,0xF8,0xF8,
  0x07,0x07,0x0E,0x0E,0x1E,0x1E,0x3C,0x3C,0x38,0x38,0x70,0x70,0x7F,0x7F,0x7F,0x7F,
  0xFF,0xFF,0xFF,0xFF,0xE3,0xE3,0xE3,0xE3,0xE3,0xE3,0xE3,0xE3,0xFF,0xFF,0xFE,0xFE,
  0x1C,0x1C,0x1C,0x1C,0x9C,0x9C,0xDC,0xDC,0xDC,0xDC,0x9C,0x9C,0x8F,0x8F,0x0F,0x0F,
  0x70,0x70,0x70,0x70,0x70,0x70,0x70,0x70,0x70,0x70,0xF1,0xF1,0xF1,0xF1,0x71,0x71,
  0x1C,0x1C,0x38,0x38,0x78,0x78,0xF0,0xF0,0xE0,0xE0,0xC0,0xC0,0xFC,0xFC,0xFC,0xFC,
  0xD9,0xD9,0xD9,0xD9,0x1F,0x1F,0x1F,0x1F,0x19,0x19,0x19,0x19,0x19,0x19,0x1F,0x1F,
  0x98,0x98,0x98,0x98,0x18,0x18,0x18,0x18,0x98,0x98,0x98,0x98,0x99,0x99,0x0E,0x0E,
  0x60,0x60,0xFF,0xFF,0xC0,0xC0,0xC1,0xC1,0xC3,0xC3,0xC6,0xC6,0xCC,0xCC,0xCF,0xCF,
  0x30,0x30,0xFF,0xFF,0xC0,0xC0,0x80,0x80,0x01,0x01,0x03,0x03,0x06,0x06,0xC7,0xC7,
  0x07,0x07,0xE7,0xE7,0x66,0x66,0xC0,0xC0,0x80,0x80,0x03,0x03,0x07,0x07,0xE6,0xE6
};
