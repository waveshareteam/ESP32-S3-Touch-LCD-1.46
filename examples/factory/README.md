# Factory firmware

[English](README.md) | [简体中文](README_ZH.md)

## Function

This ESP-IDF project contains the board's factory demonstration firmware.

## Hardware requirements

Use an ESP32-S3-Touch-LCD-1.46 board with 16 MB Flash and 8 MB PSRAM.

## How to run

Install the ESP-IDF version declared in `.github/product.json`, set the target to `esp32s3`, then run `idf.py build` from this directory.

## Expected result

The board boots into the factory demonstration with the display, touch, audio, sensor, RTC, and storage peripherals available to the demo.

## Common issues

If the project does not build with the selected ESP-IDF release, use the version specified for the factory firmware in `.github/product.json`.
