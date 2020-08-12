Copyright (C) 2020- mirage335
See the end of the file for license conditions.
See license.txt for TazIntermediate license conditions.


A 3D printer system prioritizing cost-effectiveness and familiarity for industrial users accustomed to LulzBot Taz printers. Designed to balance similar or only slightly higher capital cost for for higher throughput, higher quality, and substantially lower maintence.

# Usage

Step-by-step assembly and maintenance instructions are provided, derived from the detailed design files.

Please read "_doc/TazIntermediate_serviceManual.pdf" .


# Distribution

Consider providing end-users an entire copy of this repository with all submodules, in addition to PDF documents. Physical USB flash devices may be suitable for the repository, printed hardcopy may be suitable for the PDF documents.


# Design

Inspired by the LulzBot Taz5 printer. Substantially similar to TazStiff, TazUp, Taz_Mega. TazIntermediate mostly serves to reduce new assembly time and wiring complexity.

Existing TazStiff printers should continue to offer similar performance and maintenance characteristics to TazIntermediate printers.


# Redistribution and Preservation

Entire 'recursive' clones of this repository with all submodules may be appropriate for redistribution and preservation.


# Safety

INTENDED FOR INDUSTRIAL USERS.
Internal wiring layout differs significantly from typical consumer 3D printers. In particular, contrary to typical RAMBo motherboard expectations, Vsys directly from PSU is used for Hotend power, and may be unfused. Reverse connection may present unfused (all RAMBo motherboard fuses bypassed) short-circuit load exceeding 20A, severely overloading MOSFET, wiring, and connectors.


Consider adding fiberglass or silica high-temperature sleeving to wiring near hotend.


Use external balancer with LiPo batteries. Cheaply available from HobbyKing among other places.

Not Ethernet compatible, will destroy network hardware.

Do not unplug powered steppers.

Beware common grounding and other wiring issues.

ClassIV lasers are extraordinarily hazardous. Backscatter from the projected spot alone is sufficient to slice a retina. Avoid exposure, and wear eye protection.


Ground-referenced voltage (ie. wall current) applied to Vsys/Vee is NOT guaranteed to remain isolated from other circuits. Spark gap surge protectors specifically, among other faults, are expected to allow sustained connection of high-voltage ground-referenced current to all other circuits.


Testing all essential high current circuits to 30% above requirements is recommended. Such testing has not necessarily been performed. Any particular circuit may not have been designed to accommodate any significant current carrying capacity. Oil immersion may increase useful ampacity, though the risk of dissolution or fire must be considered carefully. Design goals are made on a best effort basis only, suggested but not guaranteed for further development, particularly for short narrow traces.
GenericRap and derivative PCBs - Typically 5A power. Between XT60 Connectors, 40A power.
Solderless Breadboard - Typically 3A per contact. Typically >6A total to gold, tin, lead or similarly plated square pin header 'power feeder' as used by GenericRap.
Wrapping Wire 30AWG "Kynar" Insulated - Typically 6A per wire.

Fire suppression or low flammability products may be mentioned for consideration of further development only. None are specifically recommended for any situation, none may have been tested in any relevant application, and no claim of effectiveness is made.

No claim of liability is made by anyone. Your accident is your accident. Use common sense, and follow all regulations. If you don't understand the safety features and limitations, don't use this circuitry or anything similar.


# FutureWork


# Reference

https://en.wikipedia.org/wiki/Point-to-point_construction


https://www.mcmaster.com/high-temperature-sleeving/

https://www.mcmaster.com/high-temperature-sleeving/fiberglass-high-temperature-sleeving/

https://www.mcmaster.com/high-temperature-sleeving/expandable-electrical-insulating-tube-sleeving/

https://e3d-online.com/products/fibreglass-sleeving-for-insulating-thermistors-100mm

https://www.mcmaster.com/high-temperature-sleeving/silica-high-temperature-sleeving/


# Directory Specification

Consider keeping a copy of this specification alongside relevant projects for reference.

Please regard as a loose specification intended to offer unallocated regions for expansion and subordinate to any improvements that may be found in actual implementations.


Projects which may be assembled into larger projects, if sufficiently well-developed, should include their own appropriate directories, rather than referencing files shared within larger projects. That is to say, a sort of 'static linking' approach is strongly recommended.



Numbered directories with '[z]-' in their prefix and a '/' may substitute the '/' for either a '-' or separate directories.

Numbered directories of top-directories may be placed alongside top-directories if desired. Numbering scheme is intended to minimize conflicts.

Templates should populate only the most usual directories. Not all directories need be populated for a project.


```

_lib	- software, records, etc, typically uniquely needed by specific CAD model

00[00]-RESERVED (do NOT use)


01[00]-Bundle
	0110-Frames
	0150-Actuators
	0151[z]-Thruster/Driver
		Components only used for these?
		Screws used within these?
	0160-Tools
		Nozzle
		Hot-End
		Cold-End
		Extension (Bowden Tube)
	0162-Supplementary
		Filament Storage
	0165-Slab (workpiece mounting surface)
	0170-Tray (surface to mount electronics and similar)
	0172-Rack (enclosure for electronics and similar, and/or junction box)
	0175-Cabinet (arbitrary storage)



11[00]-Structural (Passive, Cut To Size)
	1110[z]-Extrusions/Timbers
		_resized
	1112[z]-Sheets/Panels/Plates (for frames only)
		_rescaled (PreDrilled only)
	1115-Backing (Table)



30[00]-Conveyance
	3030[z]-Shaft/Piston
	3032-LeadScrew
	3033[z]-Belts
	3035- to 3038- RESERVED (do NOT use)

35[00]-Couplings (including flexible, u-joints, etc)
	3530-LeadScrew_to_Motor



50[00]-Effectors
	5050[z]-Motors/Steppers/Servos
	5051[z]-RotaryBearings/RotaryShims
	
	5052[z]-NutBlocks/PlatesEffectors/BracketsEffectors (typically belt tie-down points), etc.
	5053-RESERVED
	
	5054[z]-Guides (Wheels/Bushings/LinearBearings)
	
	5055-Pulleys
	5056-Gears
	
	5058-Limit Switch

55[00]-RESERVED (do NOT use)

(6000 RESERVED)

(7000 RESERVED)



80[00]-Endpoints
	8080-Plug
		RJ45
		misc
	8081-Jack
		RJ45
		misc
	8082-RESERVED (do NOT use)
	8083-RESERVED (do NOT use)

85[00]-Dissipator
	8580-Fans
	8581-Pump
	8582-Heatsink
	8585-Radiator

9000-Miscellaneous
	9090z-Screws/Bolts
	9095-frequent (most frequently used)
	9099-Misc
		zMisc (unsortred, typically uniquely needed by specific CAD model)

9100-KEEPOUT (solid objects used to mark regions reserved for future use)

94[00]
to
98[00]
	RESERVED for future use

99[00]-import
	RESERVED for future use

```



# Third-Party Copyright Notices

Third-Party copyrights are noted within text files alongside directories containing the original files, and/or within text files alongside directories containing the modified files, and/or within version control commit history.

Some copyright licenses have specific requirements, and some authors have specific requests, to prominently display copyright notices - these are included here.

However, the manner some or all of these third-party files are used may in fact be fair use, in which case the third-party licenses would not in fact have any effect on the license requirements for the otherwise possibly derivative project.


"
This design incorporates OpenBuilds, LLC design work(s) shared Open Source under the CC BY-SA 4.0 License.
"







# Copyright

This file is part of TazIntermediate.

TazIntermediate is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

TazIntermediate is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with TazIntermediate.  If not, see <http://www.gnu.org/licenses/>.








