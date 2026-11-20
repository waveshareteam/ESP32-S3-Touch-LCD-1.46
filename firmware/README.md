# Firmware

[English](README.md) | [简体中文](README_ZH.md)

Ready-to-flash firmware tested on the ESP32-S3-Touch-LCD-1.46 board. Each file is a merged image flashed at `0x0`; the date in the file name is its version. Older versions remain available.

| File | Purpose |
| --- | --- |
| `ESP32-S3-Touch-LCD-1.46_FactoryOnly_20261119.bin` | Factory firmware that restores the out-of-box demonstration |

Flash with esptool:

```bash
python -m pip install esptool
esptool.py --chip esp32s3 --port <PORT> erase_flash
esptool.py --chip esp32s3 --port <PORT> write_flash 0x0 ESP32-S3-Touch-LCD-1.46_FactoryOnly_20261119.bin
```

The factory firmware source is in [`examples/factory`](../examples/factory/).
