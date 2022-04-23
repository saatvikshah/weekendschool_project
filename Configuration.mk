CONFIG_SOURCE=saatvik

ifeq ($(CONFIG_SOURCE), saatvik)
	MONITOR_PORT  = /dev/cu.usbserial-1430
	ARDUINO_DIR   = /Applications/Arduino.app/Contents/Java
	ARDMK_DIR     = /usr/local/opt/arduino-mk/
	ARDUINO_LIBS = Cytron_Maker_Sumo_Library EEPROM Servo
	BOARD_TAG    = uno
	TURN_CONSTANT = 6
else ifeq ($(CONFIG_SOURCE), antony)
	ARDUINO_DIR   = /home/frozenjesuscola/Desktop/arduino-1.8.19
	ARDMK_DIR     = /usr/share/arduino/
	ARDUINO_LIBS = Cytron_Maker_Sumo_Library EEPROM Servo
	BOARD_TAG    = uno
	TURN_CONSTANT = 5.5
else
$(error "Bad CONFIG_SOURCE, must be one of {saatvik, antony}, found ${CONFIG_SOURCE}")
endif