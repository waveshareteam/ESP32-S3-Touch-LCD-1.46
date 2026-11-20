# 出厂固件

[English](README.md) | [简体中文](README_ZH.md)

## 功能

这个 ESP-IDF 工程包含开发板的出厂演示固件。

## 硬件需求

使用配备 16 MB Flash 和 8 MB PSRAM 的 ESP32-S3-Touch-LCD-1.46 开发板。

## 怎么运行

安装 `.github/product.json` 中声明的 ESP-IDF 版本，将目标芯片设为 `esp32s3`，然后在本目录运行 `idf.py build`。

## 预期现象

开发板启动后进入出厂演示，演示可使用显示、触摸、音频、传感器、RTC 和存储等外设。

## 常见问题

如果使用其他 ESP-IDF 版本编译失败，请改用 `.github/product.json` 为出厂固件指定的版本。
