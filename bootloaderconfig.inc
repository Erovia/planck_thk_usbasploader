# Configuration of device and programmer

# Currently configured for flashing on to USBASP programmer to give it
# self-update capability

F_CPU      = 16000000
DEVICE     = atmega32

PROGRAMMER = -c usbasp

# Uncomment to enable debugging loader as normal program at address 0
#DEBUG_AS_APP = 1

# Automatically set for many devices. Uncomment to override defaults.
# These two must be set correctly, but each chip model potentially
# has different settings.
#BOOTLOADER_ADDRESS = 0x1800
FUSEOPT = -U lfuse:w:0xae:m -U hfuse:w:0x90:m
