include Configuration.mk
rootdir = $(realpath .)
CXXFLAGS += -I$(rootdir)/include/
CXXFLAGS += -fno-threadsafe-statics # Fix for https://github.com/bblanchon/ArduinoJson/issues/356#issuecomment-249209167
ifdef TURN_CONSTANT
	CXXFLAGS += "-DTURN_CONSTANT=${TURN_CONSTANT}"
endif


example-%:
	$(MAKE) 'CXXFLAGS=$(CXXFLAGS)' -C 'examples/$*' clean
	$(MAKE) 'CXXFLAGS=$(CXXFLAGS)' -C 'examples/$*'
	$(MAKE) 'CXXFLAGS=$(CXXFLAGS)' -C 'examples/$*' upload

project-%:
	$(MAKE) 'CXXFLAGS=$(CXXFLAGS)' -C 'projects/$*' clean
	$(MAKE) 'CXXFLAGS=$(CXXFLAGS)' -C 'projects/$*'
	$(MAKE) 'CXXFLAGS=$(CXXFLAGS)' -C 'projects/$*' upload

TARGETS = examples/MusicalLED examples/DrawL examples/DrawM projects/alpha projects/bravo projects/charlie projects/delta
clean:
	for target in $(TARGETS); do \
		$(MAKE) 'CXXFLAGS=$(CXXFLAGS)' -C $$target clean; \
	done
