# AQC111U USB driver for Ubuntu 22.04

## Prepare
* Uninstall and reinstall current linux header source 

This step is very important, you must do the following before you compile the driver, or when you want to load the driver, you would got an error like `insmod: ERROR: could not insert module aqc111.ko: Invalid module format`, if you try `dmesg` command, you will get detailed message like `module: x86/modules: Skipping invalid relocation target, existing value is nonzero for type 1, loc 0000000028f34265, val ffffffffc1679a7b`.
    
    + `apt-get remove --purge linux-headers-$(uname -r)`
    + `apt-get autoremove`
    + `apt-get install linux-headers-$(uname -r)`
* Install flex and bison
```bash
apt-get install flex bison -y
```
## Build from sources:
* Unpack sources to temporary folder (e.g `tar -xf pacific.tar.gz`).
  It will create Linux/ directory 
* Change directory (`cd Linux`)
* Perform `make` 

## Sign your driver
  + Install packages needed to sign your driver
```bash
sudo apt install mokutil
sudo apt install shim-signed
sudo update-secureboot-policy --new-key
```
  + Generate certificates and private key
```bash
openssl req -new -x509 -newkey rsa:2048 -keyout MOK.priv -outform DER -out MOK.der -nodes -days 36500 -subj "/CN=Descriptive name/"
```
Remember the two file names for: `MOD.priv` and `MOK.der`, you will use them soon. And the two files are in the path:`/var/lib/shim-signed/mok/`, you can copy them to the path of your drivers.
  + Import certificates
```bash
sudo mokutil --import /var/lib/shim-signed/mok/MOK.der
```
  + Reboot and install the signed driver to your computer
After booted, on the first page you should choose 'Enroll MOK', and do next steps according to the screen.
  + After booted, login into the system, then execute the following command:
```bash
sudo /usr/src/linux-headers-$(uname -r)/scripts/sign-file sha256 MOK.priv MOK.der aqc111.ko
```
## Load driver:
* `modprobe usbnet`
* `insmod aqc111.ko`

## Unload driver:
* `rmmod aqc111`

## Install driver:
Note: starting from 5.x kernel, driver is built in. Be aware to corrupt original file.
* `cp aqc111.ko /lib/modules/$(uname -r)/kernel/drivers/net/usb/`
* `depmod -a`

## Uninstall driver:
Note: starting from 5.x kernel, driver is built in. Be aware to corrupt original file.
* `rm /lib/modules/$(uname -r)/kernel/drivers/net/usb/aqc111.ko`
* `depmod -a`

## Private flags reference:
### Query supported flags:
```bash
ethtool --show-priv-flags <interface>
```

### Currently supported flags:

| Flag | Default value |
| -----| ------------- |
| Low Power 5G | off |
| Thermal throttling | on |

### Change flag:

**Enable:**
```bash
ethtool --set-priv-flags <interface> "<flag>" on
```

**Disable:**
```bash
ethtool --set-priv-flags <interface> "<flag>" off
```

**E.g**
```bash
ethtool --set-priv-flags enx0017b6123456 "Low Power 5G" on
```