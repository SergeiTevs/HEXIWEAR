/**
 * HTU-related info
 * Project HEXIWEAR, 2015
 */

#ifndef HG_HTU_INFO
#define HG_HTU_INFO

#define HTU_I2C_ADDRESS  (0x40)
#define HTU_I2C_BAUDRATE (100)

#define HTU21D_TRIGGER_TEMP_HOLD   0xE3
#define HTU21D_TRIGGER_HUMD_HOLD   0xE5
#define HTU21D_TRIGGER_TEMP_NOHOLD 0xF3
#define HTU21D_TRIGGER_HUMD_NOHOLD 0xF5
#define HTU21D_WRITE_USER_REG      0xE6
#define HTU21D_READ_USER_REG       0xE7
#define HTU21D_SOFT_RESET          0xFE

#define HTU21D_END_OF_BATTERY_SHIFT 6
#define HTU21D_ENABLE_HEATER_SHIFT  2
#define HTU21D_DISABLE_OTP_RELOAD   1
#define HTU21D_RESERVED_MASK        0x31

#define HTU21D_STARTUP_DELAY 15000
#define HTU21D_TEMP_MAX_DELAY 50000

#endif
