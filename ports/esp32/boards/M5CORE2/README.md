# Board files for M5Stack Core2

To use, follow the instructions in the [root README](../../../../README.md) for this repository as well as in the [README for the ESP32 port](../../README.md) to prepare the prerequisites. Then to compile, go to the `ports/esp32` directory and execute

```text
export PORT=<your serial port>
export BOARD=M5CORE2
make erase && \
make submodules && \
make -j $(nproc) && \
make deploy
```

You should now see a very simple example application with just one button that does change color when it's being pressed but does nothing else.
