#include "breakout_haptic.h"

/***** Constants *****/
// enum buttons
// {
//     BUTTON_A = 0,
//     BUTTON_B,
//     BUTTON_X,
//     BUTTON_Y,
// };


////////////////////////////////////////////////////////////////////////////////////////////////////
// breakout_haptic Module
////////////////////////////////////////////////////////////////////////////////////////////////////

/***** Module Functions *****/
// STATIC MP_DEFINE_CONST_FUN_OBJ_0(breakout_haptic_init_obj, breakout_haptic_init);
// STATIC MP_DEFINE_CONST_FUN_OBJ_0(breakout_haptic_get_width_obj, breakout_haptic_get_width);
// STATIC MP_DEFINE_CONST_FUN_OBJ_0(breakout_haptic_get_height_obj, breakout_haptic_get_height);
// STATIC MP_DEFINE_CONST_FUN_OBJ_0(breakout_haptic_update_obj, breakout_haptic_update);
// STATIC MP_DEFINE_CONST_FUN_OBJ_3(breakout_haptic_set_pixel_obj, breakout_haptic_set_pixel);
// STATIC MP_DEFINE_CONST_FUN_OBJ_0(breakout_haptic_clear_obj, breakout_haptic_clear);
// STATIC MP_DEFINE_CONST_FUN_OBJ_1(breakout_haptic_is_pressed_obj, breakout_haptic_is_pressed);

/***** Globals Table *****/
STATIC const mp_map_elem_t breakout_haptic_globals_table[] = {
    { MP_ROM_QSTR(MP_QSTR___name__), MP_ROM_QSTR(MP_QSTR_breakout_haptic) },
//     { MP_ROM_QSTR(MP_QSTR_init), MP_ROM_PTR(&breakout_haptic_init_obj) },    
//     { MP_ROM_QSTR(MP_QSTR_get_width), MP_ROM_PTR(&breakout_haptic_get_width_obj) },
//     { MP_ROM_QSTR(MP_QSTR_get_height), MP_ROM_PTR(&breakout_haptic_get_height_obj) },
//     { MP_ROM_QSTR(MP_QSTR_update), MP_ROM_PTR(&breakout_haptic_update_obj) },
//     { MP_ROM_QSTR(MP_QSTR_set_pixel), MP_ROM_PTR(&breakout_haptic_set_pixel_obj) },
//     { MP_ROM_QSTR(MP_QSTR_clear), MP_ROM_PTR(&breakout_haptic_clear_obj) },
//     { MP_ROM_QSTR(MP_QSTR_is_pressed), MP_ROM_PTR(&breakout_haptic_is_pressed_obj) },        
//     { MP_ROM_QSTR(MP_QSTR_BUTTON_A), MP_ROM_INT(BUTTON_A) },
//     { MP_ROM_QSTR(MP_QSTR_BUTTON_B), MP_ROM_INT(BUTTON_B) },
//     { MP_ROM_QSTR(MP_QSTR_BUTTON_X), MP_ROM_INT(BUTTON_X) },
//     { MP_ROM_QSTR(MP_QSTR_BUTTON_Y), MP_ROM_INT(BUTTON_Y) },
};
STATIC MP_DEFINE_CONST_DICT(mp_module_breakout_haptic_globals, breakout_haptic_globals_table);

/***** Module Definition *****/
const mp_obj_module_t breakout_haptic_user_cmodule = {
    .base = { &mp_type_module },
    .globals = (mp_obj_dict_t*)&mp_module_breakout_haptic_globals,
};

////////////////////////////////////////////////////////////////////////////////////////////////////
MP_REGISTER_MODULE(MP_QSTR_breakout_haptic, breakout_haptic_user_cmodule, MODULE_BREAKOUT_HAPTIC_ENABLED);
////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////