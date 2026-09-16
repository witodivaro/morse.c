KA_A=ATMega328P
KA_B=arduino
KA_C=/dev/cu.usbserial-210
KA_D=115200

pk.hex: pk.elf
	avr-objcopy \
		-O ihex \
		$< \
		$@

.PHONY: pktmapld
pktmapld: pk.hex
	avrdude \
		-p $(KA_A) \
		-c $(KA_B) \
		-P $(KA_C) \
		-b $(KA_D) \
		-U flash:w:$<:i
