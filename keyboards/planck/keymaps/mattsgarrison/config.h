#pragma once
#define RGBLIGHT_LAYERS
#define RGBLIGHT_LAYERS_OVERRIDE_RGB_OFF // allow RGB layer lights to override RGB being off
#define RGBLIGHT_SLEEP // disable RGB light when host sleeps

#define COIN_SONG    \
     E__NOTE(_A5  ), \
     HD_NOTE(_E6  ),

#define ONE_UP_SONG \
     Q__NOTE(_E6  ),  \
     Q__NOTE(_G6  ),  \
     Q__NOTE(_E7  ),  \
     Q__NOTE(_C7  ),  \
     Q__NOTE(_D7  ),  \
     Q__NOTE(_G7  ),

#define MARIO_MUSHROOM_SONG \
     S__NOTE(_C5 ), \
     S__NOTE(_G4 ), \
     S__NOTE(_C5 ), \
     S__NOTE(_E5 ), \
     S__NOTE(_G5 ), \
     S__NOTE(_C6 ), \
     S__NOTE(_G5 ), \
     S__NOTE(_GS4), \
     S__NOTE(_C5 ), \
     S__NOTE(_DS5), \
     S__NOTE(_GS5), \
     S__NOTE(_DS5), \
     S__NOTE(_GS5), \
     S__NOTE(_C6 ), \
     S__NOTE(_DS6), \
     S__NOTE(_GS6), \
     S__NOTE(_DS6), \
     S__NOTE(_AS4), \
     S__NOTE(_D5 ), \
     S__NOTE(_F5 ), \
     S__NOTE(_AS5), \
     S__NOTE(_D6 ), \
     S__NOTE(_F6 ), \
     S__NOTE(_AS6), \
     S__NOTE(_F6 )

#ifdef AUDIO_ENABLE
    #define STARTUP_SONG SONG(MARIO_MUSHROOM_SONG)
    //#define STARTUP_SONG SONG(PLANCK_SOUND)
    // #define STARTUP_SONG SONG(NO_SOUND)

    #define DEFAULT_LAYER_SONGS { SONG(QWERTY_SOUND), \
                                  SONG(COLEMAK_SOUND), \
                                  SONG(DVORAK_SOUND) \
                                }
#endif

/*
 * MIDI options
 */

/* Prevent use of disabled MIDI features in the keymap */
//#define MIDI_ENABLE_STRICT 1

/* enable basic MIDI features:
   - MIDI notes can be sent when in Music mode is on
*/

#define MIDI_BASIC

/* enable advanced MIDI features:
   - MIDI notes can be added to the keymap
   - Octave shift and transpose
   - Virtual sustain, portamento, and modulation wheel
   - etc.
*/
#define MIDI_ADVANCED

/* override number of MIDI tone keycodes (each octave adds 12 keycodes and allocates 12 bytes) */
//#define MIDI_TONE_KEYCODE_OCTAVES 2

