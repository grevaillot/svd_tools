GEN_HEADERS=./gen_header.py

VENDOR ?= STMicro
OUT ?= ./headers/
DEVICES ?= $(shell $(GEN_HEADERS) -l | grep $(VENDOR) | cut -d\  -f2)

HEADER_FOLDS = $(addprefix $(OUT)/,$(basename $(DEVICES)))

all: tag

list:
	@echo $(DEVICES)
	echo $(HEADER_FOLDS)

$(HEADER_FOLDS): $(GEN_HEADERS)
	-mkdir -p $(OUT)
	(cd $(OUT) && $(abspath $(GEN_HEADERS)) -d $(notdir $@) -w)
	touch $@

$(OUT)/tags: $(HEADER_FOLDS)
	(cd $(OUT) && ctags -R .)

tag: $(OUT)/tags

clean:
	-rm -rf $(HEADER_FOLDS) tags

