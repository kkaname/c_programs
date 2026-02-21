# Endianness Detector

A small C program that detects whether the system uses **little-endian** or **big-endian** byte ordering.

## How It Works

The program stores the integer `1` in an `unsigned int` and then inspects the first byte at that address by casting to an `unsigned char *`. If the first byte is `1`, the least significant byte is stored at the lowest address, meaning the system is little-endian. Otherwise, it is big-endian.

## Build & Run

```sh
gcc -o endian main.c
./endian
```

## Example Output

```
Little Endian.
```
