/*To be noted on a document attached to tool under waterproof enclosure.

MOTORS MAY NEED TO HOLD WHILE CHANGING TOOL/FILAMENT OR Z-AXIS WILL BE BACKDRIVEN OUT OF ALIGNMENT!

Purple marked objects are intended for frequent user interaction, such as quickchange mount points.*/



//Filament Diameter (typical) 	2.85mm
//microSteps/mm E		836 (typical, 1/16 microstep, 200 steps/rev, 1.8deg steps)

Marlin/RAMBO Known Mechanical Settings
//#define EXTRUTION_AREA (0.25 * D_FILAMENT * D_FILAMENT * 3.14159)
//#define STEPS_PER_CUBIC_MM_E (axis_steps_per_unit[E_AXIS]/ EXTRUTION_AREA)

Marlin/RAMBO Known Heater Settings
// 5 is 100K thermistor - ATC Semitec 104GT-2 ... (4.7k pullup)
#define TEMP_SENSOR_0 5
#define HEATER_0_MAXTEMP 305
#define BANG_MAX 255
#define PID_MAX BANG_MAX
#define DEFAULT_Kp 28.79
#define DEFAULT_Ki 1.91
#define DEFAULT_Kd 108.51

