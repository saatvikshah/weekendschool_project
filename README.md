# README

## Setup to run

- Setup [Arduino Makefile](https://github.com/sudar/Arduino-Makefile).
- Ensure that the Cytron Maker sumo library is locally installed. It might need to be copied into ${ARDUINO_DIR}/libraries.
- Set the monitor port name, along with other relevant paths in `Configuration.mk`
- `make example-<example_name>`, for example `make example-DrawL`
- `make project-<project_name>`, for example `make project-alpha`

## Pending

- Check TODOs in `include/Utilities.h`.
- Add solutions to another branch (?).
