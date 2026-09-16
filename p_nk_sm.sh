A=atmega328p
B=pk.elf

simavr \
	-m ${A} \
	-g \
	${B}
