# 固件

[English](README.md) | [简体中文](README_ZH.md)

这是在 ESP32-S3-Touch-LCD-1.46 开发板上完成实测、可直接烧录的固件。每个文件都是从 `0x0` 开始烧录的合并镜像，文件名中的日期即版本，历史版本会保留。

| 文件 | 用途 |
| --- | --- |
| `ESP32-S3-Touch-LCD-1.46_FactoryOnly_20261119.bin` | 恢复开箱演示的出厂固件 |

使用 esptool 烧录：

```bash
python -m pip install esptool
esptool.py --chip esp32s3 --port <PORT> erase_flash
esptool.py --chip esp32s3 --port <PORT> write_flash 0x0 ESP32-S3-Touch-LCD-1.46_FactoryOnly_20261119.bin
```

出厂固件源码在 [`examples/factory`](../examples/factory/) 目录。
