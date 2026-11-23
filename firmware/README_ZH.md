# 固件

[English](README.md) | [简体中文](README_ZH.md)

这是 ESP32-S3-Touch-LCD-1.46 系列的出厂固件。该镜像同时适用于 ESP32-S3-Touch-LCD-1.46、ESP32-S3-Touch-LCD-1.46B 和 ESP32-S3-Touch-LCD-1.46C，因为这三个子系列使用相同的底板和屏幕兼容方案。

| 文件 | 用途 |
| --- | --- |
| [ESP32-S3-Touch-LCD-1.46_FactoryOnly_20261119.bin](ESP32-S3-Touch-LCD-1.46_FactoryOnly_20261119.bin) | ESP32-S3-Touch-LCD-1.46 系列出厂恢复固件 |

先运行 `python -m pip install esptool` 安装 esptool，擦除 Flash，再从 `0x0` 写入镜像。

```bash
python -m esptool --chip esp32s3 --port <PORT> erase_flash
python -m esptool --chip esp32s3 --port <PORT> write_flash 0x0 ESP32-S3-Touch-LCD-1.46_FactoryOnly_20261119.bin
```
