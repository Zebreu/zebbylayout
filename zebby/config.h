/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR
#undef TAPPING_TERM
#define TAPPING_TERM 150

#define ONESHOT_TAP_TOGGLE 2

#define PERMISSIVE_HOLD

#define USB_SUSPEND_WAKEUP_DELAY 0
#define FIRMWARE_VERSION u8"xMe00/o4Ged"
#define RGB_MATRIX_STARTUP_SPD 60

#undef COMBO_COUNT
#define COMBO_COUNT 4

#define COMBO_MUST_TAP_PER_COMBO