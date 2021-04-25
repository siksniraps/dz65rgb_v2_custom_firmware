#pragma once

#ifdef RGB_MATRIX_ENABLE

    // undefine constants defined in v2/config.h
    #undef RGB_MATRIX_MAXIMUM_BRIGHTNESS 
    #undef RGB_MATRIX_STARTUP_HUE 
    #undef RGB_MATRIX_STARTUP_SAT
    #undef RGB_MATRIX_STARTUP_MODE

    // startup rgb effect defaults
    #define RGB_MATRIX_MAXIMUM_BRIGHTNESS 200
    #define RGB_MATRIX_STARTUP_HUE 150 // Sets the default hue value, if none has been set
    #define RGB_MATRIX_STARTUP_SAT 160 // Sets the default saturation value, if none has been set
    #define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_SOLID_COLOR

#endif