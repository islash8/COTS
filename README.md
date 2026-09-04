# COTS

Driver code for AVR and ARM microcontrollers, written from the datasheets rather
than on top of a vendor HAL.

Collected in 2019 while learning both parts. This is a working directory from that
period, not a library you should drop into a project.

## What is actually here

```
AVR/MCAL/
  DIO     digital I/O for the ATmega32
  EXTI    external interrupts
  MCU     core setup
ARM/RCC_ARM/
          reset and clock control for STM32F10x, as an Eclipse project
```

That is the whole of it. The repository description used to claim rather more.

Each AVR module follows the same three-file split, which is the convention worth
taking away from this:

| File | Holds |
| --- | --- |
| `*_Interface.h` | the public API — what a caller may use |
| `*_Config.h` | build-time configuration for this project |
| `*_Private.h` | register addresses and internal masks |
| `*_Prog.c` | the implementation |

The point of the split is that a caller includes `_Interface.h` and physically
cannot reach the registers.

`STD_Types.h`, `LIB_Bit_Operations.h` and `Lib_Delay.*` are copied into each
module rather than shared, so the modules build standalone.

## Related repositories

The single-driver repositories are archived but still readable, and several of
them are more complete than what is here:

[LED_Driver](https://github.com/islash8/LED_Driver) ·
[SSD_Driver](https://github.com/islash8/SSD_Driver) ·
[Keypad_driver](https://github.com/islash8/Keypad_driver) ·
[Switch_driver](https://github.com/islash8/Switch_driver) ·
[Led_matrix](https://github.com/islash8/Led_matrix) ·
[LCD_Driver](https://github.com/islash8/LCD_Driver) ·
[ARM_DIO](https://github.com/islash8/ARM_DIO)

## Note on the tree

`.metadata/` is an Eclipse workspace directory that was committed by accident. It
is not part of the code.
