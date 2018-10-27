#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <iostream>
#include <linux/i2c-dev.h>
#include "Adafruit_LSM9DS0.h"

int main(int argc, char *argv[]) {
  int file;

  file = open("/dev/i2c-0", O_RDWR);
  if(file < 0) {
    std::cerr << "Couldn't open i2c bus\n";
  }

  i2c_smbus_read_byte

  close(file);

  return 0;
}
