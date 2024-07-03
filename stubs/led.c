#include "led.h"

// Stub implementation for led_init
void led_init(LEDData* led_data, float_config* float_conf) {
    // You can ignore initialization for now, or add basic setup 
    // if you later decide to simulate LEDs.
    (void)led_data; // Suppress unused parameter warnings
    (void)float_conf;
}

// Stub implementation for led_update
void led_update(LEDData* led_data, float_config* float_conf, float current_time, float erpm, float abs_duty_cycle, int switch_state, int float_state) {
    // No actual LED updates. You can add logging here if you want to see 
    // when and how the firmware is attempting to update LEDs.
    (void)led_data; 
    (void)float_conf; 
    (void)current_time; 
    (void)erpm; 
    (void)abs_duty_cycle;
    (void)switch_state;
    (void)float_state;
}

// Stub implementation for led_stop
void led_stop(LEDData* led_data) {
    // No LED stop actions necessary in a stub implementation.
    (void)led_data;
}