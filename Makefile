MUSICAL_LED_DIR=examples/MusicalLED
rootdir = $(realpath .)
CXXFLAGS += -I$(rootdir)/include/

# TODO: Replace these with a make function
musical-led:
	$(MAKE) 'CXXFLAGS=$(CXXFLAGS)' -C $(MUSICAL_LED_DIR) clean
	$(MAKE) 'CXXFLAGS=$(CXXFLAGS)' -C $(MUSICAL_LED_DIR)
	$(MAKE) 'CXXFLAGS=$(CXXFLAGS)' -C $(MUSICAL_LED_DIR) upload

clean:
	$(MAKE) 'CXXFLAGS=$(CXXFLAGS)' -C $(MUSICAL_LED_DIR) clean