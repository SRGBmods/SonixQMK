# gravity

![gravity](https://imgur.com/TfBlmHo)

*A short description of the keyboard/project*

* Keyboard Maintainer: [Alex](https://github.com/AlexHtr)
* Hardware Supported: Wired mode, side led enabled
* Hardware Availability: https://hator.gg/keyboards/gravity_tkl/

Make example for this keyboard (after setting up your build environment):

    qmk compile -kb hator/gravity/tkl

Use Sonix Keyboard Flasher to flash your firmware. Offset is 0x00.

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (Escape) and plug in the keyboard
* **Physical reset button**: You can locate the boot bins ander the Spacebar.
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
