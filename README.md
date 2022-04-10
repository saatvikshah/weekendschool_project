# README

- Setup [Arduino Makefile](https://github.com/sudar/Arduino-Makefile).
- Ensure that the Cytron Maker sumo library is locally installed. It might need to be copied into ${ARDUINO_DIR}/libraries.
- Set the monitor port name, along with other relevant paths in `Configuration.mk`
- `make <targetname>`, for example `make musical-led`
