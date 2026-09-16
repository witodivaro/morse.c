KMPL_A =$(wildcard *.c)
KMPL_A+=$(wildcard pwf/*/*.c)
KMPL_A+=$(wildcard pwf/*/*/*.c)
KMPL_A+=$(wildcard pwf/*/*/*/*.c)
KMPL_A+=$(wildcard pwf/*/*/*/*/*.c)
KMPL_A+=$(wildcard pwf/*/*/*/*/*/*.c)
KMPL_A+=$(wildcard pwf/*/*/*/*/*/*/*.c)

KMPL_B=ATMega328P
KKML_C=16000000

pk.elf: $(KMPL_A)
	avr-gcc \
		-mmcu=$(KMPL_B) \
		-O3 \
		-DF_CPU=$(KKML_C) \
		-g \
		$^ \
		-o $@
