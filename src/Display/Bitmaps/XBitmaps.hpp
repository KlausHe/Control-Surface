#pragma once

#include <AH/Arduino-Wrapper.h>
#include <Settings/SettingsWrapper.hpp>
#include <stdint.h>

BEGIN_CS_NAMESPACE

/**
 * @brief A struct containing X Bitmap width, height and data.
 */
struct XBitmap {
    XBitmap(uint16_t width, uint16_t height, const uint8_t bits[])
        : width(width), height(height), bits(bits) {}
    uint16_t width;
    uint16_t height;
    const uint8_t *bits;
};

/**
 * @brief   A namespace containing XBitmap definitions.
 *
 * @note    Don't edit this file directly, place your XBM image in the 
 *          `XBM` folder, and run the python script in `Scripts`.
 * @see     @ref md_pages_xbm
 */
namespace XBM {

// ========================================================================== //

// Automatically generated file: do not edit

#include "mute_10B.axbm"
/**
 * XBitmap&emsp;<b>mute_10B</b>&emsp;(10px × 10px)
 * <img src="xbm/mute_10B.png" alt="mute_10B" class="xbm" style="width:7.5em;">
 */
const XBitmap mute_10B = {mute_10B_width, mute_10B_height, mute_10B_bits};

#include "mute_14B.axbm"
/**
 * XBitmap&emsp;<b>mute_14B</b>&emsp;(14px × 14px)
 * <img src="xbm/mute_14B.png" alt="mute_14B" class="xbm" style="width:10.5em;">
 */
const XBitmap mute_14B = {mute_14B_width, mute_14B_height, mute_14B_bits};

#include "mute_14K.axbm"
/**
 * XBitmap&emsp;<b>mute_14B</b>&emsp;(14px × 14px)
 * <img src="xbm/mute_14B.png" alt="mute_14B" class="xbm" style="width:10.5em;">
 */
const XBitmap mute_14K = {mute_14K_width, mute_14K_height, mute_14K_bits};

#include "mute_7.axbm"
/**
 * XBitmap&emsp;<b>mute_7</b>&emsp;(7px × 7px)
 * <img src="xbm/mute_7.png" alt="mute_7" class="xbm" style="width:5.25em;">
 */
const XBitmap mute_7 = {mute_7_width, mute_7_height, mute_7_bits};

#include "play_24B.axbm"
/**
 * XBitmap&emsp;<b>play_10x9</b>&emsp;(10px × 9px)
 * <img src="xbm/play_10x9.png" alt="play_10x9" class="xbm" style="width:7.5em;">
 */
const XBitmap play_24B = {play_24B_width, play_24B_height, play_24B_bits};

#include "play_24.axbm"
/**
 * XBitmap&emsp;<b>play_10x9</b>&emsp;(10px × 9px)
 * <img src="xbm/play_10x9.png" alt="play_10x9" class="xbm" style="width:7.5em;">
 */
const XBitmap play_24 = {play_24_width, play_24_height, play_24_bits};

#include "play_12.axbm"
/**
 * XBitmap&emsp;<b>play_10x9</b>&emsp;(10px × 9px)
 * <img src="xbm/play_10x9.png" alt="play_10x9" class="xbm" style="width:7.5em;">
 */
const XBitmap play_12 = {play_12_width, play_12_height, play_12_bits};

#include "play_10x9.axbm"
/**
 * XBitmap&emsp;<b>play_10x9</b>&emsp;(10px × 9px)
 * <img src="xbm/play_10x9.png" alt="play_10x9" class="xbm" style="width:7.5em;">
 */
const XBitmap play_10x9 = {play_10x9_width, play_10x9_height, play_10x9_bits};

#include "play_7.axbm"
/**
 * XBitmap&emsp;<b>play_7</b>&emsp;(7px × 7px)
 * <img src="xbm/play_7.png" alt="play_7" class="xbm" style="width:5.25em;">
 */
const XBitmap play_7 = {play_7_width, play_7_height, play_7_bits};

#include "play_8x7.axbm"
/**
 * XBitmap&emsp;<b>play_8x7</b>&emsp;(8px × 7px)
 * <img src="xbm/play_8x7.png" alt="play_8x7" class="xbm" style="width:6.0em;">
 */
const XBitmap play_8x7 = {play_8x7_width, play_8x7_height, play_8x7_bits};

#include "rec_rdy_10B.axbm"
/**
 * XBitmap&emsp;<b>rec_rdy_10B</b>&emsp;(10px × 10px)
 * <img src="xbm/rec_rdy_10B.png" alt="rec_rdy_10B" class="xbm" style="width:7.5em;">
 */
const XBitmap rec_rdy_10B = {rec_rdy_10B_width, rec_rdy_10B_height,
                             rec_rdy_10B_bits};

#include "rec_rdy_14B.axbm"
/**
 * XBitmap&emsp;<b>rec_rdy_14B</b>&emsp;(14px × 14px)
 * <img src="xbm/rec_rdy_14B.png" alt="rec_rdy_14B" class="xbm" style="width:10.5em;">
 */
const XBitmap rec_rdy_14B = {rec_rdy_14B_width, rec_rdy_14B_height,
                             rec_rdy_14B_bits};

#include "rec_rdy_14K.axbm"
/**
 * XBitmap&emsp;<b>rec_rdy_14B</b>&emsp;(14px × 14px)
 * <img src="xbm/rec_rdy_14B.png" alt="rec_rdy_14B" class="xbm" style="width:10.5em;">
 */
const XBitmap rec_rdy_14K = {rec_rdy_14K_width, rec_rdy_14K_height,
                             rec_rdy_14K_bits};

#include "rec_rdy_7.axbm"
/**
 * XBitmap&emsp;<b>rec_rdy_7</b>&emsp;(7px × 7px)
 * <img src="xbm/rec_rdy_7.png" alt="rec_rdy_7" class="xbm" style="width:5.25em;">
 */
const XBitmap rec_rdy_7 = {rec_rdy_7_width, rec_rdy_7_height, rec_rdy_7_bits};

#include "record_7.axbm"
/**
 * XBitmap&emsp;<b>record_7</b>&emsp;(7px × 7px)
 * <img src="xbm/record_7.png" alt="record_7" class="xbm" style="width:5.25em;">
 */
const XBitmap record_7 = {record_7_width, record_7_height, record_7_bits};

#include "record_9.axbm"
/**
 * XBitmap&emsp;<b>record_9</b>&emsp;(9px × 9px)
 * <img src="xbm/record_9.png" alt="record_9" class="xbm" style="width:6.75em;">
 */
const XBitmap record_9 = {record_9_width, record_9_height, record_9_bits};

#include "record_12.axbm"
/**
 * XBitmap&emsp;<b>record_9</b>&emsp;(9px × 9px)
 * <img src="xbm/record_9.png" alt="record_9" class="xbm" style="width:6.75em;">
 */
const XBitmap record_12 = {record_12_width, record_12_height, record_12_bits};

#include "record_24.axbm"
/**
 * XBitmap&emsp;<b>record_9</b>&emsp;(9px × 9px)
 * <img src="xbm/record_9.png" alt="record_9" class="xbm" style="width:6.75em;">
 */
const XBitmap record_24 = {record_24_width, record_24_height, record_24_bits};

#include "record_24B.axbm"
/**
 * XBitmap&emsp;<b>record_9</b>&emsp;(9px × 9px)
 * <img src="xbm/record_9.png" alt="record_9" class="xbm" style="width:6.75em;">
 */
const XBitmap record_24B = {record_24B_width, record_24B_height,
                            record_24B_bits};

#include "rudeSolo_24.axbm"
/**
 * XBitmap&emsp;<b>solo_14B</b>&emsp;(14px × 14px)
 * <img src="xbm/solo_14B.png" alt="solo_14B" class="xbm" style="width:10.5em;">
 */
const XBitmap rudeSolo_24 = {rudeSolo_24_width, rudeSolo_24_height,
                             rudeSolo_24_bits};
#include "rudeSolo_24B.axbm"
/**
 * XBitmap&emsp;<b>solo_14B</b>&emsp;(14px × 14px)
 * <img src="xbm/solo_14B.png" alt="solo_14B" class="xbm" style="width:10.5em;">
 */
const XBitmap rudeSolo_24B = {rudeSolo_24B_width, rudeSolo_24B_height,
                              rudeSolo_24B_bits};

#include "select_24B.axbm"
/**
 * XBitmap&emsp;<b>solo_14B</b>&emsp;(14px × 14px)
 * <img src="xbm/solo_14B.png" alt="solo_14B" class="xbm" style="width:10.5em;">
 */
const XBitmap select_24B = {select_24B_width, select_24B_height,
                            select_24B_bits};

#include "select_33B.axbm"
/**
 * XBitmap&emsp;<b>solo_14B</b>&emsp;(14px × 14px)
 * <img src="xbm/solo_14B.png" alt="solo_14B" class="xbm" style="width:10.5em;">
 */
const XBitmap select_33B = {select_33B_width, select_33B_height,
                            select_33B_bits};

#include "solo_10B.axbm"
/**
 * XBitmap&emsp;<b>solo_10B</b>&emsp;(10px × 10px)
 * <img src="xbm/solo_10B.png" alt="solo_10B" class="xbm" style="width:7.5em;">
 */
const XBitmap solo_10B = {solo_10B_width, solo_10B_height, solo_10B_bits};

#include "solo_14B.axbm"
/**
 * XBitmap&emsp;<b>solo_14B</b>&emsp;(14px × 14px)
 * <img src="xbm/solo_14B.png" alt="solo_14B" class="xbm" style="width:10.5em;">
 */
const XBitmap solo_14B = {solo_14B_width, solo_14B_height, solo_14B_bits};

#include "solo_14K.axbm"
/**
 * XBitmap&emsp;<b>solo_14B</b>&emsp;(14px × 14px)
 * <img src="xbm/solo_14B.png" alt="solo_14B" class="xbm" style="width:10.5em;">
 */
const XBitmap solo_14K = {solo_14K_width, solo_14K_height, solo_14K_bits};

#include "solo_7.axbm"
/**
 * XBitmap&emsp;<b>solo_7</b>&emsp;(7px × 7px)
 * <img src="xbm/solo_7.png" alt="solo_7" class="xbm" style="width:5.25em;">
 */
const XBitmap solo_7 = {solo_7_width, solo_7_height, solo_7_bits};

} // namespace XBM

END_CS_NAMESPACE