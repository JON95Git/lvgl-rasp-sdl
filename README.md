# LVGL application for Raspberry Pi 3

"Demo printer" LVGL application for Raspbery Pi 3 using SDL library.
This project was made from `lvgl-port-linux-frame-buffer`

## Dependencies
- Raspberry Pi 3 (other versions was not tested!)
- HDMI display - MPI3508 (hardware and driver touch screen)
- LVGL (core, drivers and examples)
- ARM Linux GCC (`arm-none-linux-gnueabihf`)
- SDL2 library for ARM Linux

## Cloning repository
```bash
$ git clone https://github.com/JON95Git/lvgl-rasp-sdl.git
```

## Building the application
```bash
$ make -j
```
To clear the build
```bash
$ make -j clean
```
The binary is saved in `build/bin` as `lvgl_app`.

## Runing the application
Send the binary to your Raspberry Pi 3.

Then, type:

```bash
$ ./lvgl_app
```
## Create a similar project from scracth
If you want to create a similar project from scracth, you will need to
- Create a gui application (can use GUI-Guider from NXP)
- Build SDL for ARM Linux
- Add gui files to your project
- Link SDL with your project (statically)
- Install display and touch screen sensor driver

## Install display driver
First of all, you need to identify your display model and install the right driver.

Some helpful links:
https://github.com/goodtft/LCD-show

[in Portuguese] https://www.filipeflop.com/blog/como-conectar-display-lcd-tft-raspberry-pi/


## GUI application
- Create an example project on GUI-Guider
- Copy the following directories to your project directory:
	- custom/
	- generated/
	- import/
  
If you want to add these directories in a GUI-Guider specific directory
you need to change some `makefiles`.

Change from `$(PRJ_DIR)/` to `$(PRJ_DIR)/gui_guider/` in the following `makefiles`:
```bash
- generated.mk
- images.mk
- custom.mk
- guider_fonts.mk
- guider_customer_fonts.mk
```

- Declare a GUI-Guider struct on your code:
```c
lv_ui guider_ui;
```

- Call the following functions on your startup code (after `lv_init()`):
```c
setup_ui(&guider_ui);
events_init(&guider_ui);
custom_init(&guider_ui);
```
### Building SDL library for ARM Linux
Follow the steps in the link: https://forums.raspberrypi.com/viewtopic.php?t=39667

```
Here is short tutorial for someone inexperienced like me. I'm not sure whether it is optimal, but it worked. This tutorial is for Linux host PC.

1. Prepare your Linux host. I created directory raspidev in my HOME
mkdir raspidev
cd raspidev
mkdir SDL_cross

2. Get official cross tools for Raspberry Pi.
git clone git://github.com/raspberrypi/tools.git

3. Download and extract SDL 1.2
wget http://www.libsdl.org/release/SDL-1.2.15.tar.gz
gzip -dc SDL-1.2.15.tar.gz | tar xf -

4. Prepare your environment. Note: perhaps not all the steps below are absolutely necessary, but it works at least.
export ARCH=arm
export CROSS_COMPILE=arm-bcm2708hardfp-linux-gnueabi-
export CC=~/raspidev/tools/arm-bcm2708/arm-bcm2708hardfp-linux-gnueabi/bin/arm-bcm2708hardfp-linux-gnueabi-gcc
export NM=~/raspidev/tools/arm-bcm2708/arm-bcm2708hardfp-linux-gnueabi/bin/arm-bcm2708hardfp-linux-gnueabi-nm
export LD=~/raspidev/tools/arm-bcm2708/arm-bcm2708hardfp-linux-gnueabi/bin/arm-bcm2708hardfp-linux-gnueabi-ld
export CXX=~/raspidev/tools/arm-bcm2708/arm-bcm2708hardfp-linux-gnueabi/bin/arm-bcm2708hardfp-linux-gnueabi-g++
export RANLIB=~/raspidev/tools/arm-bcm2708/arm-bcm2708hardfp-linux-gnueabi/bin/arm-bcm2708hardfp-linux-gnueabi-ranlib
export AR=~/raspidev/tools/arm-bcm2708/arm-bcm2708hardfp-linux-gnueabi/bin/arm-bcm2708hardfp-linux-gnueabi-ar

5. Compilation
cd SDL-1.2.15
./configure --disable-pulseaudio --target=arm-linux --host=arm-linux
make

6. Now you can edit Makefile with your favourite editor, change:
prefix = ~/raspidev/SDL_cross
Save file

7. Final step
make install

Now your ~/raspidev/SDL_cross contains SDL library ready to use.
Have fun
```
Copy `SDL/` directory to your project directory

### Building the application
You need to link SDL (statically) with your application.
Add these lines in your build system/Makefile:

```bash
LDFLAGS := -lSDL2
DFLAGS += -LSDL2/lib
CFLAGS += "-ISDL2/include"
```

### Solving some issues
You can face some preprocessor/build/link issues.

Don't give up. Take one step at a time.

Good luck!
