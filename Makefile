MUSICAL_LED_DIR=examples/MusicalLED
DRAW_L_DIR=examples/DrawL
DRAW_M_DIR=examples/DrawM
PROJECT_ALPHA_DIR=projects/alpha
PROJECT_BRAVO_DIR=projects/bravo
rootdir = $(realpath .)
CXXFLAGS += -I$(rootdir)/include/
CXXFLAGS += -fno-threadsafe-statics # Fix for https://github.com/bblanchon/ArduinoJson/issues/356#issuecomment-249209167

# TODO: Replace these with a make function
musical-led:
	$(MAKE) 'CXXFLAGS=$(CXXFLAGS)' -C $(MUSICAL_LED_DIR) clean
	$(MAKE) 'CXXFLAGS=$(CXXFLAGS)' -C $(MUSICAL_LED_DIR)
	$(MAKE) 'CXXFLAGS=$(CXXFLAGS)' -C $(MUSICAL_LED_DIR) upload

draw-l:
	$(MAKE) 'CXXFLAGS=$(CXXFLAGS)' -C $(DRAW_L_DIR) clean
	$(MAKE) 'CXXFLAGS=$(CXXFLAGS)' -C $(DRAW_L_DIR)
	$(MAKE) 'CXXFLAGS=$(CXXFLAGS)' -C $(DRAW_L_DIR) upload

draw-m:
	$(MAKE) 'CXXFLAGS=$(CXXFLAGS)' -C $(DRAW_M_DIR) clean
	$(MAKE) 'CXXFLAGS=$(CXXFLAGS)' -C $(DRAW_M_DIR)
	$(MAKE) 'CXXFLAGS=$(CXXFLAGS)' -C $(DRAW_M_DIR) upload

project-%:
	$(MAKE) 'CXXFLAGS=$(CXXFLAGS)' -C 'projects/$*' clean
	$(MAKE) 'CXXFLAGS=$(CXXFLAGS)' -C 'projects/$*'
	$(MAKE) 'CXXFLAGS=$(CXXFLAGS)' -C 'projects/$*' upload

clean:
	$(MAKE) 'CXXFLAGS=$(CXXFLAGS)' -C $(MUSICAL_LED_DIR) clean
	$(MAKE) 'CXXFLAGS=$(CXXFLAGS)' -C $(DRAW_L_DIR) clean
	$(MAKE) 'CXXFLAGS=$(CXXFLAGS)' -C $(DRAW_M_DIR) clean
	$(MAKE) 'CXXFLAGS=$(CXXFLAGS)' -C $(PROJECT_ALPHA_DIR) clean
	$(MAKE) 'CXXFLAGS=$(CXXFLAGS)' -C $(PROJECT_BRAVO_DIR) clean
