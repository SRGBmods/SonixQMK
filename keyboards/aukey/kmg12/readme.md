# Aukey KM-G12

*A 100% keyboard sold by Aukey*

Original PID 0c45:7040

- MCU: HFD2201KBA (rebrand SN32F248B)
- PCB: GK4105M-RGB-HFD

Keyboard Maintainer: [Luca Mazzilli](https://github.com/Maxill1)
Based on Redragon K556 : [Adam Honse](https://github.com/CalcProgrammer1)

Make example for this keyboard (after setting up your build environment):

    make aukey/kmg12:default

For VIA support compile with:
    
    make aukey/kmg12:via

This keyboard must be flashed with an external [GUI](https://github.com/SonixQMK/sonix-flasher) or [CLI](https://github.com/SonixQMK/SonixFlasherC)


See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 2 ways:

- Physical reset: short the two pins on the underside of the pcb, as indicated below. You need to remove some keycaps and 6 screws to be able to flip the PCB. ![Bootloader mode](https://user-images.githubusercontent.com/367042/148236513-3296e98d-4c1d-43dc-bdb5-565aa1554ddd.jpg)
- Layout (after loading QMK): FN + R


now using keyboard.json

## RGB Matrix
*led matrix is a mess*:
- row 0, row 1, row 3 and row 4 are preatty clean, they have some NO_LED in space between keys
- row 3 have some NO_LED and 1 underglow at position 20 (marked as DL23 on PCB under numpad plus) used as part of right underglow 
- row 5 have some NO_LED and total 7 underglow:
   - 3 led before the spacebar at iindex 3, 4, 5 (marked as DL42-DL41-DL40 on PCB)
   - 3 led after the spacebar at index 7,8,9 (marked as DL39-DL39-DL37 on PCB) 
   - 1 led at index 20 (marked as DL24 on PCB under numpad enter) used as part of right underglow
- row 7 contains exclusively underglow, with led marked as DL1, DL25 to DL36, DL43 to 50 on PCB = 21 leds, used sparse all over the underglow (top, left, bottom, right)
- row 8 contains exclusively underglow, with led marked as DL2 to DL22 on PCB = 21 leds used mostly on top underglow and some on right

### Top underglow:
starts with DL1 (top left under ESC on row 1), goes from DL2, DL3, DL4, DL5, DL6, DL7, DL8, DL9, DL10, DL11, DL12, DL13, DL14, DL15, DL16, DL17, DL18, DL19 and ends with DL20 with just a little offset before the top right angle (inline with - + and enter of number pad)

### Bottom underglow:
starts with DL46 on bottom left, then DL46, DL45, DL44, DL43, DL42, DL41, DL40, DL39, DL38, DL37, DL36, DL35, DL34, DL33, DL32, DL31, DL30, DL29, DL28, DL27 and ends with DL26 on bottom right


### Right underglow:
starts with DL21, then (top to bottom)  DL22, DL23, DL24, DL25 and it ends with DL26 on bottom left

### Left underglow:
starts with DL1 (top left under ESC on row 1), then (top to bottom)  DL50, DL49, DL48, DL47 and ends with DL46 on bottom left
