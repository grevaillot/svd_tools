GEN_HEADERS=../gen_header.py

VENDOR ?= STMicro
DEVICES ?= $(shell $(GEN_HEADERS) -l | grep $(VENDOR) | cut -d\  -f2)

HEADER_FOLDS = $(basename $(DEVICES))

all: tag

list:
	@echo $(DEVICES)
	echo $(HEADER_FOLDS)

$(HEADER_FOLDS): $(GEN_HEADERS)
	$(GEN_HEADERS) -d $@ -w

tag: $(HEADER_FOLDS)
	ctags -R .

clean:
	-rm -rf $(HEADER_FOLDS) tags

