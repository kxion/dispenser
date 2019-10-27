#include "lvgl.h"

/*******************************************************************************
 * Size: 18 px
 * Bpp: 4
 * Opts: --bpp 4 --size 18 --lcd --font ./support/icons.ttf --range 0xE000,0xE001,0xE002 --format lvgl --no-compress --force-fast-kern-format -o ./src/fonts/my_font_icons_18.c
 ******************************************************************************/

#ifndef MY_FONT_ICONS_18
#define MY_FONT_ICONS_18 1
#endif

#if MY_FONT_ICONS_18

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+E000 "" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x1, 0x47, 0xab, 0xb9, 0x74, 0x10, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x3, 0x7c, 0xff, 0xff,
    0xff, 0xff, 0xc7, 0x20, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x4, 0x9d, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xd9, 0x30, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x4, 0x9e, 0xff, 0xff,
    0xeb, 0x52, 0x26, 0xbe, 0xff, 0xff, 0xd9, 0x40,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x4, 0x9e, 0xff, 0xff, 0xe9, 0x41, 0x0, 0x0,
    0x14, 0x9e, 0xff, 0xff, 0xd9, 0x30, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x2, 0x8d, 0xff, 0xff,
    0xe9, 0x40, 0x0, 0x0, 0x0, 0x0, 0x4, 0xae,
    0xff, 0xff, 0xc7, 0x20, 0x0, 0x0, 0x0, 0x0,
    0x1, 0x6b, 0xff, 0xff, 0xfb, 0x61, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x16, 0xbf, 0xff, 0xff,
    0xa5, 0x0, 0x0, 0x0, 0x0, 0x27, 0xdf, 0xff,
    0xfe, 0x93, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x49, 0xef, 0xff, 0xfc, 0x61, 0x0,
    0x0, 0x2, 0x7c, 0xff, 0xff, 0xd8, 0x30, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3,
    0x8e, 0xff, 0xff, 0xc6, 0x10, 0x0, 0x6, 0xbf,
    0xff, 0xfe, 0x94, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x4a, 0xff, 0xff,
    0xfa, 0x50, 0x0, 0x27, 0xdf, 0xff, 0xfc, 0x71,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x13, 0x79,
    0x74, 0x10, 0x27, 0xdf, 0xff, 0xfc, 0x71, 0x0,
    0x17, 0xcf, 0xff, 0xfc, 0x61, 0x0, 0x0, 0x0,
    0x0, 0x1, 0x36, 0xae, 0xff, 0xfa, 0x40, 0x27,
    0xdf, 0xff, 0xfb, 0x60, 0x0, 0x3, 0x9e, 0xff,
    0xff, 0xb5, 0x10, 0x0, 0x2, 0x7c, 0xff, 0xff,
    0xff, 0xfc, 0x83, 0x1, 0x5b, 0xff, 0xff, 0xd8,
    0x20, 0x0, 0x0, 0x28, 0xdf, 0xff, 0xfe, 0x94,
    0x0, 0x0, 0x35, 0x78, 0x76, 0x53, 0x10, 0x1,
    0x49, 0xdf, 0xff, 0xfc, 0x72, 0x0, 0x0, 0x0,
    0x0, 0x38, 0xdf, 0xff, 0xff, 0xda, 0x75, 0x43,
    0x22, 0x22, 0x34, 0x68, 0xbd, 0xff, 0xff, 0xfc,
    0x73, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x14,
    0x8c, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xfe, 0xb7, 0x31, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, 0x46,
    0x89, 0xaa, 0xbb, 0xbb, 0xa9, 0x97, 0x63, 0x10,
    0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+E001 "" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, 0x6c,
    0xff, 0xeb, 0x73, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x1, 0x6b, 0xef, 0xff,
    0xfe, 0xc7, 0x30, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x12, 0x23, 0x34, 0x6a, 0xef, 0xff, 0xff,
    0xec, 0x73, 0x0, 0x0, 0x0, 0x0, 0x12, 0x21,
    0x10, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x25, 0x9b, 0xef, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xc7, 0x20, 0x1, 0x5b, 0xff, 0xff, 0xff, 0xec,
    0x96, 0x31, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x1, 0x6b, 0xef, 0xff, 0xff, 0xfe, 0xed, 0xdd,
    0xde, 0xff, 0xff, 0xff, 0xff, 0xeb, 0x72, 0x0,
    0x0, 0x37, 0xbd, 0xef, 0xff, 0xff, 0xff, 0xfd,
    0x94, 0x10, 0x0, 0x0, 0x0, 0x0, 0x5a, 0xff,
    0xff, 0xfd, 0x84, 0x10, 0x0, 0x3, 0x7c, 0xff,
    0xff, 0xfe, 0xb7, 0x20, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x13, 0x6a, 0xdf, 0xff, 0xfe, 0x94,
    0x0, 0x0, 0x0, 0x5, 0xaf, 0xff, 0xfd, 0x72,
    0x0, 0x0, 0x2, 0x8d, 0xff, 0xff, 0xeb, 0x72,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x38, 0xdf, 0xff, 0xfa, 0x40, 0x0,
    0x0, 0x16, 0xcf, 0xff, 0xfa, 0x40, 0x0, 0x0,
    0x0, 0x37, 0xab, 0x96, 0x20, 0x0, 0x0, 0x0,
    0x0, 0x2, 0x69, 0xba, 0x73, 0x0, 0x0, 0x0,
    0x5, 0xaf, 0xff, 0xfb, 0x61, 0x0, 0x0, 0x4,
    0xaf, 0xff, 0xfd, 0x83, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x27, 0xbe,
    0xff, 0xff, 0xd8, 0x20, 0x0, 0x0, 0x28, 0xdf,
    0xff, 0xfa, 0x50, 0x0, 0x0, 0x0, 0x49, 0xef,
    0xff, 0xfe, 0xb6, 0x31, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x2, 0x7b, 0xef, 0xff, 0xfe, 0xc7,
    0x30, 0x0, 0x1, 0x48, 0xdf, 0xff, 0xff, 0xa5,
    0x0, 0x0, 0x0, 0x0, 0x1, 0x49, 0xdf, 0xff,
    0xff, 0xff, 0xfe, 0xdb, 0x73, 0x0, 0x0, 0x27,
    0xbe, 0xff, 0xff, 0xff, 0xff, 0xed, 0xdd, 0xde,
    0xef, 0xff, 0xff, 0xfe, 0xb6, 0x10, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x13, 0x7a, 0xce, 0xff,
    0xff, 0xff, 0xb5, 0x10, 0x2, 0x7c, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe,
    0xc9, 0x52, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x22, 0x21,
    0x0, 0x0, 0x0, 0x0, 0x37, 0xce, 0xff, 0xff,
    0xfd, 0xa6, 0x33, 0x32, 0x21, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x3, 0x7c, 0xef, 0xff, 0xfe,
    0xb5, 0x10, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x37, 0xbe, 0xff, 0xc6, 0x20,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+E002 "" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x13, 0x68, 0xab, 0xbc, 0xb9, 0x51, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x15, 0xae, 0xff, 0xff,
    0xff, 0xfd, 0x84, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x49, 0xef, 0xff, 0xff, 0xfe, 0xa5, 0x10, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x38, 0xdf, 0xff, 0xff,
    0xff, 0xb6, 0x10, 0x0, 0x0, 0x15, 0xad, 0xea,
    0x50, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x3, 0x8d, 0xff, 0xff, 0xff, 0xfe, 0xb8, 0x66,
    0x78, 0xbd, 0xff, 0xff, 0xb6, 0x10, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x5, 0xaf, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xd8, 0x20, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x2, 0x6b, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xfd, 0x94, 0x10, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x2, 0x6b, 0xef, 0xff, 0xff,
    0xff, 0xdb, 0x9a, 0xbc, 0xdd, 0xdc, 0xb9, 0x63,
    0x10, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, 0x6a,
    0xef, 0xff, 0xff, 0xff, 0xd9, 0x51, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x13, 0x68, 0xab, 0xcc,
    0xcb, 0xa9, 0x9b, 0xef, 0xff, 0xff, 0xff, 0xd9,
    0x51, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x14,
    0xae, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xd9, 0x41, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x38, 0xdf, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x83, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x17,
    0xcf, 0xff, 0xfd, 0xb9, 0x77, 0x8a, 0xdf, 0xff,
    0xff, 0xff, 0xfb, 0x60, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x1, 0x5a, 0xed, 0x94, 0x10,
    0x0, 0x0, 0x27, 0xdf, 0xff, 0xff, 0xff, 0xb6,
    0x10, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x27, 0xcf,
    0xff, 0xff, 0xff, 0xd7, 0x20, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x15, 0xbe, 0xff, 0xff, 0xff, 0xfd, 0x83,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x2, 0x6a, 0xcc,
    0xbb, 0x97, 0x52, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 204, .box_w = 42, .box_h = 17, .ofs_x = -1, .ofs_y = -4},
    {.bitmap_index = 357, .adv_w = 288, .box_w = 60, .box_h = 17, .ofs_x = -1, .ofs_y = -4},
    {.bitmap_index = 867, .adv_w = 271, .box_w = 57, .box_h = 17, .ofs_x = -1, .ofs_y = -4}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 57344, .range_length = 3, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

/*Store all the custom data of the font*/
static lv_font_fmt_txt_dsc_t font_dsc = {
    .glyph_bitmap = gylph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 4,
    .kern_classes = 0,
    .bitmap_format = 0
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
lv_font_t my_font_icons_18 = {
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 17,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
    .subpx = LV_FONT_SUBPX_HOR,
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};

#endif /*#if MY_FONT_ICONS_18*/
