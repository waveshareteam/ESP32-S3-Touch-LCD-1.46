# Firmware

[English](README.md) | [简体中文](README_ZH.md)

Ready-to-flash factory firmware for the ESP32-S3-Touch-LCD-1.46 series. This image applies to ESP32-S3-Touch-LCD-1.46, ESP32-S3-Touch-LCD-1.46B, and ESP32-S3-Touch-LCD-1.46C because the variants share the same base board and display compatibility.

| File | Purpose |
| --- | --- |
| [ESP32-S3-Touch-LCD-1.46_FactoryOnly_20261119.bin](ESP32-S3-Touch-LCD-1.46_FactoryOnly_20261119.bin) | Factory recovery firmware for the ESP32-S3-Touch-LCD-1.46 series |

Install esptool with `python -m pip install esptool`, erase the flash, then write the image at `0x0`.

```bash
python -m esptool --chip esp32s3 --port <PORT> erase_flash
python -m esptool --chip esp32s3 --port <PORT> write_flash 0x0 ESP32-S3-Touch-LCD-1.46_FactoryOnly_20261119.bin
```
