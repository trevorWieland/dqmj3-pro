#ifndef DQMJ3_PLATFORM_INPUT_H
#define DQMJ3_PLATFORM_INPUT_H

/*
 * Input: buttons, touch and motion.
 *
 * The original samples HID once per frame through a shared-memory block and
 * the game reads the resulting state. There is no per-event callback: a frame
 * sees a snapshot, and "just pressed" is computed by comparing this snapshot
 * with the previous one. A port must preserve that model, because the field
 * engine's menu and dialog code is written against it.
 *
 * The snapshot has three parts:
 *
 *   buttons   a bitmask of held buttons plus the derived pressed/released
 *             edges since the previous poll;
 *   touch     an (x, y) in bottom-screen pixels and a pressure value, or
 *             no touch;
 *   motion    circle-pad and C-stick vectors in -1..+1, and accelerometer /
 *             gyroscope readings in the original's units.
 *
 * A backend maps whatever it has (keyboard, gamepad, mouse, touchscreen) onto
 * this snapshot. Keyboard-to-circle-pad mapping is a backend policy; a port
 * must document it and must offer an analog controller mapping. Focus loss
 * clears held buttons and touch and produces release edges, so a window that
 * loses focus cannot leave a button stuck down.
 *
 * Threading: poll and state are main-thread calls. A backend may sample the
 * device on another thread, but the returned snapshot is immutable once
 * poll returns.
 *
 * Timing: poll once at the start of a frame, before any game logic. Polling
 * twice in one frame collapses the intermediate edges; a backend must not
 * advance its edge state more than once per poll. The original's HID sample
 * period is about 1/60 second; a port running at another rate still receives
 * one snapshot per rendered frame.
 */

#include "platform.h"

typedef struct Dqm3Input Dqm3Input;

enum Dqm3Button {
    DQM3_BUTTON_A = 1u << 0,
    DQM3_BUTTON_B = 1u << 1,
    DQM3_BUTTON_X = 1u << 2,
    DQM3_BUTTON_Y = 1u << 3,
    DQM3_BUTTON_L = 1u << 4,
    DQM3_BUTTON_R = 1u << 5,
    DQM3_BUTTON_START = 1u << 6,
    DQM3_BUTTON_SELECT = 1u << 7,
    DQM3_BUTTON_UP = 1u << 8,
    DQM3_BUTTON_DOWN = 1u << 9,
    DQM3_BUTTON_LEFT = 1u << 10,
    DQM3_BUTTON_RIGHT = 1u << 11,
    DQM3_BUTTON_ZL = 1u << 12,
    DQM3_BUTTON_ZR = 1u << 13,
    DQM3_BUTTON_CIRCLE_UP = 1u << 14,
    DQM3_BUTTON_CIRCLE_DOWN = 1u << 15,
    DQM3_BUTTON_CIRCLE_LEFT = 1u << 16,
    DQM3_BUTTON_CIRCLE_RIGHT = 1u << 17
};

typedef struct Dqm3InputState {
    Dqm3U32 held;
    Dqm3U32 pressed;
    Dqm3U32 released;

    Dqm3Bool touch_active;
    unsigned char reserved_0d[3];
    Dqm3U32 touch_x;          /* 0..319, bottom screen pixels                */
    Dqm3U32 touch_y;          /* 0..239                                      */
    Dqm3U32 touch_pressure;   /* 0..255                                      */

    float circle_x;           /* -1.0 left .. +1.0 right                       */
    float circle_y;           /* -1.0 up .. +1.0 down                         */
    float cstick_x;
    float cstick_y;

    float accel_x;            /* original units, about -512..+512            */
    float accel_y;
    float accel_z;
    float gyro_x;             /* degrees per second                          */
    float gyro_y;
    float gyro_z;
} Dqm3InputState;

/* The input device. Valid after dqm3_system_initialize. */
Dqm3Input *dqm3_input_device(void);

/*
 * Sample the device and update the edge state. The first poll of a process
 * reports no pressed/released edges (there is no previous snapshot). On
 * failure the previous snapshot is kept and the result is negative; the game
 * may continue with the stale state.
 */
Dqm3Result dqm3_input_poll(Dqm3Input *input, Dqm3InputState *state);

/* The current snapshot without sampling. */
Dqm3Result dqm3_input_state(Dqm3Input *input, Dqm3InputState *state);

/*
 * Ask the backend to show a software keyboard and return the entered text.
 * The original uses the system's swkbd applet for names and passwords. A
 * backend without one may implement this with its own dialog. text receives
 * UTF-16 code units including the terminator; capacity is in code units.
 * Returns DQM3_ERR_UNSUPPORTED if the port has no text entry; the game then
 * uses its default name.
 */
Dqm3Result dqm3_input_text(Dqm3Input *input, const Dqm3Char16 *initial,
    Dqm3Char16 *text, Dqm3U32 capacity);

/*
 * True when the backend can report motion. A port may return false; game code
 * that uses motion for optional camera movement must then use its fallback.
 */
Dqm3Bool dqm3_input_has_motion(Dqm3Input *input);

#endif
