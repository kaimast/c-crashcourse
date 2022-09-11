BINS=p1.bin p2.bin p3.bin p4.bin p5.bin p6.bin

all: $(BINS)

%.bin: %.c
	gcc -g $(@:.bin=.c) -o $(@)

clean:
	rm $(BINS)
