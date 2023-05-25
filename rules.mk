RGB_MATRIX_ENABLE = yes
RGBLIGHT_ENABLE = no
SPLIT_KEYBOARD = yes
MOUSEKEY_ENABLE = no
OLED_ENABLE = yes
OLED_DRIVER = SSD1306
EXTRAKEY_ENABLE = yes


# Link Time Optimization (Reduces compiled size)
LTO_ENABLE = yes

SRC += ./process_records.c

ifeq ($(OLED_ENABLE),yes)
	SRC += ./oled.c
endif
