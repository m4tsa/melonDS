#ifndef _INPUT_H
#define _INPUT_H

#include "types.h"

enum TouchMode
{
   Disabled,
   Mouse,
   Touch,
};

struct InputState
{
   bool touching;
   int touch_x, touch_y;
   TouchMode current_touch_mode;

   bool holding_noise_btn;
};

extern InputState input_state;

void update_input(InputState *state);

#endif
