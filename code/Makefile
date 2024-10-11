MAKE = make
MAKE_FLAG = -C

all:
	$(MAKE) $(MAKE_FLAG) build.custom
	$(MAKE) $(MAKE_FLAG) test clean
	$(MAKE) $(MAKE_FLAG) test

clean:
	$(MAKE) $(MAKE_FLAG) build.custom clean
	$(MAKE) $(MAKE_FLAG) test clean