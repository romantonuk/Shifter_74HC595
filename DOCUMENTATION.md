# DOCUMENTATION

## struct Shifter_74HC595_settings
###### DESCRIPTION : Simple settings struct for using 74HC595.
###### PLACEMENT : Inside Shifter_74HC595 namespace.

## void setupPins(settings)
###### DESCRIPTION : Function to set up pins.
###### PLACEMENT : Inside Shifter_74HC595 namespace.
###### USAGE : setupPins(my_settings);

## void shiftValue(settings, value)
###### DESCRIPTION : Function for sending value to 8 parallel pins.
###### PLACEMENT : Inside Shifter_74HC595 namespace.
###### USAGE : shiftValue(my_settings, 0b010010101);

### Check this [example] for detailed usage.

[example]: https://github.com/romantonuk/Shifter_74HC595/blob/main/examples/bitCounting/bitCounting.ino
