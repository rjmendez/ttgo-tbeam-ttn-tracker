#define SATELLITE_IMAGE_WIDTH 16
#define SATELLITE_IMAGE_HEIGHT 15
const uint8_t SATELLITE_IMAGE[] PROGMEM = {
    0x00, 0x08, 0x00, 0x1C, 0x00, 0x0E, 0x20, 0x07, 0x70, 0x02, 0xF8, 0x00,
    0xF0, 0x01, 0xE0, 0x03, 0xC8, 0x01, 0x9C, 0x54, 0x0E, 0x52, 0x07, 0x48,
    0x02, 0x26, 0x00, 0x10, 0x00, 0x0E
};

#define HELIUM_IMAGE_WIDTH 62
#define HELIUM_IMAGE_HEIGHT 48

const uint8_t HELIUM_IMAGE[] PROGMEM = {
   0x00, 0x00, 0x00, 0xfe, 0x2f, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff,
   0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xff, 0xff, 0x03, 0x00, 0x00,
   0x00, 0x00, 0xfc, 0xff, 0xff, 0x0f, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff,
   0xff, 0x1f, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x3f, 0x00, 0x00,
   0x00, 0xc0, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0xe0, 0xff, 0xff,
   0xff, 0xff, 0x00, 0x00, 0x00, 0xf0, 0xff, 0xff, 0xff, 0xff, 0x03, 0x00,
   0x00, 0xf0, 0xff, 0xff, 0xbf, 0xfe, 0x03, 0x00, 0x00, 0xf8, 0xff, 0xff,
   0x1f, 0xf8, 0x07, 0x00, 0x00, 0xfc, 0xff, 0xff, 0x87, 0xf1, 0x07, 0x00,
   0x00, 0xfc, 0xff, 0xff, 0xe7, 0xe7, 0x0f, 0x00, 0x00, 0xfe, 0xff, 0x17,
   0xf4, 0xe7, 0x1f, 0x00, 0x00, 0xfe, 0xff, 0x03, 0xf0, 0xe7, 0x1f, 0x00,
   0x00, 0xff, 0xff, 0x00, 0xf0, 0xe7, 0x1f, 0x00, 0x00, 0xff, 0x7f, 0x00,
   0xf0, 0xe7, 0x3f, 0x00, 0x00, 0xff, 0x3f, 0xf0, 0xfb, 0xe7, 0x3f, 0x00,
   0x80, 0xff, 0x3f, 0xfc, 0xbf, 0xf0, 0x3f, 0x00, 0x80, 0xff, 0x1f, 0xfe,
   0x1f, 0xfc, 0x7f, 0x00, 0x80, 0xff, 0x1f, 0x1e, 0x1e, 0xfe, 0x7f, 0x00,
   0x80, 0xff, 0x0f, 0x07, 0x1c, 0xfe, 0x7f, 0x00, 0x80, 0xff, 0x0f, 0x07,
   0x38, 0xfc, 0x7f, 0x00, 0x80, 0xff, 0x0f, 0x07, 0x38, 0xfe, 0x7f, 0x00,
   0x80, 0xff, 0x0f, 0x07, 0x38, 0xfc, 0x7f, 0x00, 0x80, 0xff, 0x0f, 0x07,
   0x3c, 0xfe, 0x7f, 0x00, 0x80, 0xff, 0x1f, 0x0f, 0x1c, 0xfe, 0x7f, 0x00,
   0x80, 0xff, 0x0f, 0x3e, 0x1f, 0xfe, 0x7f, 0x00, 0x80, 0xff, 0x07, 0xff,
   0x0f, 0xfe, 0x3f, 0x00, 0x80, 0xff, 0xe1, 0xff, 0x07, 0xff, 0x3f, 0x00,
   0x00, 0xff, 0xf9, 0xe3, 0x80, 0xff, 0x3f, 0x00, 0x00, 0xff, 0xfd, 0x03,
   0xc0, 0xff, 0x3f, 0x00, 0x00, 0xff, 0xfc, 0x01, 0xe0, 0xff, 0x1f, 0x00,
   0x00, 0xfe, 0xf8, 0x01, 0xf0, 0xff, 0x1f, 0x00, 0x00, 0xfe, 0xf9, 0x59,
   0xff, 0xff, 0x0f, 0x00, 0x00, 0xfc, 0xf3, 0xf9, 0xff, 0xff, 0x0f, 0x00,
   0x00, 0xfc, 0x03, 0xfc, 0xff, 0xff, 0x07, 0x00, 0x00, 0xf8, 0x0f, 0xff,
   0xff, 0xff, 0x07, 0x00, 0x00, 0xf0, 0xff, 0xff, 0xff, 0xff, 0x03, 0x00,
   0x00, 0xf0, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0xc0, 0xff, 0xff,
   0xff, 0xff, 0x00, 0x00, 0x00, 0xc0, 0xff, 0xff, 0xff, 0x7f, 0x00, 0x00,
   0x00, 0x00, 0xff, 0xff, 0xff, 0x3f, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff,
   0xff, 0x1f, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0x07, 0x00, 0x00,
   0x00, 0x00, 0xf0, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff,
   0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfa, 0x0b, 0x00, 0x00, 0x00,
};
