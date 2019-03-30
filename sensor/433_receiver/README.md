# 433Mhz receiver

using RCSwitch to capture the signal
https://github.com/sui77/rc-switch


The RCSwitch library tries to decode the signal, if it cannot switch.available() will never be true.
To see raw signals remove the if (switch.available()).

Arduino + connection pin 2