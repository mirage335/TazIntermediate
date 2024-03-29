/*To be noted on a document attached to machine under waterproof enclosure.

MOTORS MUST HOLD WHILE CHANGING TOOL/FILAMENT OR Z-AXIS WILL BE BACKDRIVEN OUT OF ALIGNMENT!

Purple marked objects are intended for frequent user interaction, such as quickchange mount points.

Metalized tape shims are to be used to adjust Z-axis limit switch, and possibly also to adjust slab corner heights.

BAUDRATE		250000

microSteps/mm X/Y	114.29 or 114.79 (thermoplastic shrink compensation)
microsteps/mm Z		400

Motor current 1.7A or less if downgraded.
	Marlin/RAMBO firmware 255 'DIGIPOT_MOTOR_CURRENT' setting.
*/

#define MOTHERBOARD BOARD_RAMBO

//Marlin/RAMBO Known Stepper Driver Microstepping mode table...
#define MICROSTEP1 LOW,LOW
#define MICROSTEP2 HIGH,LOW
#define MICROSTEP4 LOW,HIGH
#define MICROSTEP8 HIGH,HIGH
#define MICROSTEP16 HIGH,HIGH

//Marlin/RAMBO Known Endstop/Direction Configuration
#define INVERT_X_DIR false    // for LulzBot set to false
#define INVERT_Y_DIR true    // for LulzBot set to true
#define INVERT_Z_DIR false     // for LulzBot set to false
#define INVERT_E0_DIR true   // for standard LulzBot hotends set to true
#define INVERT_E1_DIR true    // for standard LulzBot hotends set to true
#define INVERT_E2_DIR true   // for standard LulzBot hotends set to true
#define X_HOME_DIR -1
#define Y_HOME_DIR 1
#define Z_HOME_DIR -1
const bool X_MIN_ENDSTOP_INVERTING = false; // set to true to invert the logic of the endstop.
const bool Y_MIN_ENDSTOP_INVERTING = false; // set to true to invert the logic of the endstop.
const bool Z_MIN_ENDSTOP_INVERTING = true; // set to true to invert the logic of the endstop.
const bool Z_PROBE_ENDSTOP_INVERTING = true; // set to true to invert the logic of the endstop.
const bool X_MAX_ENDSTOP_INVERTING = false; // set to true to invert the logic of the endstop.
const bool Y_MAX_ENDSTOP_INVERTING = false; // set to true to invert the logic of the endstop. USED FOR EMI ATTENUATION!
const bool Z_MAX_ENDSTOP_INVERTING = false; // set to true to invert the logic of the endstop.
#define X_MAX_POS 300
#define X_MIN_POS -20
#define Y_MAX_POS 303
#define Y_MIN_POS -20
#define Z_MAX_POS 270
#define Z_MIN_POS 0

//Do not enable stepper release. Z-axis must hold while changing filament.
#define DEFAULT_STEPPER_DEACTIVE_TIME 60
#define SD_FINISHED_STEPPERRELEASE true


/*----- SAFETY NOTICES -----

DANGER! KEEP HANDS CLEAR
UNUSUAL HAZARDS - HIGH SPEED, HIGH RIGIDITY, HIGH HEAT!

ALWAYS INCLUDE SAFETY MARGINS WITH ENDSTOP AND PROBE!
RIGIDITY AND FORCE SUFFICIENT TO CAUSE PERMANENT DAMAGE!
BEWARE BROKEN GLASS!

AVOID CONTACT WITH HIGH-VOLTAGE OR WET CONTACT WITH LOW-VOLTAGE!

INDUSTRIAL OEM EQUIPMENT!
Distributed WITHOUT ANY WARRANTY, without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE .*/


/*----- Copyright Notices -----
Several authors may have GPL copyright claims, consequently, incorporated source material must be include in any distribution - mirage335, AlephObjects, MarlinFirmware .
"This design incorporates OpenBuilds, LLC design work(s) shared Open Source under the CC BY-SA 4.0 License."
Other third party material may be incorporated as well.
Please see a copy of the relevant source repositories, which should have been included entirely due to the large set of GPL licensed source incorporated.*/


/*----- Remove this line and below if not experimental. -----
Experimental. Items may be swapped. Especially, motors and chasis cooling.*/

