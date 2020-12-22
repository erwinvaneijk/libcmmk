/*
 * This file is part of libcmmk.
 *
 * libcmmk is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 *
 * libcmmk is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with libcmmk.  If not, see <http://www.gnu.org/licenses/>.
 */

static keyboard_layout layout_ansi_mk730 = {
	/*
	ESC   F1    F2    F3    F4    XXX   F5    F6    F7   F8    XXX   F9    F10   F11   F12   PRN   SCL   PAU   MUT PLA REW FWD */
	{7,  28,   35,    42,   49,   -1,   63,  70,  77,    84,   -1,   91,   98,   105,   112,   119,  126,  133,  -1,  -1, -1, -1},

	/*
	`     1     2      3     4     5     6     7     8     9     0     -     =     XXX   BCK   INS   HOM   PUP  */
	{8,   22,    29,  36,    43,   50,   57,   64,   71,  78,   85,   92,   99,   -1,   113,   120,   127,   134,  -1,  -1, -1, -1},

	/*
	TAB   Q     W     E     R     T     Y     U     I     O     P     [     ]     XXX    \     DEL   END   PDN   */
	{9,   23,   30,   37,   44,   51,   58,   65,   72,   79,   86,   93,   100,  -1,  114,    121,   128,   135,  -1,  -1, -1, -1},

	/*
	CAP   A     S     D     F     G     H     J     K     L     ;     '   XXX  XXX   ENT   XXX   XXX   XXX    */
	{10,   24,   31,   38,   45,   52,   59,   66,   73,   80,   87,   94,   -1,  -1, 115,   -1,   -1,   -1 ,  -1,  -1, -1, -1},

	/*
	LSHFT  XXX Z     X     C     V     B     N     M     ,     .     /    XXX   XXX   XXX RSHFT XXX   UP    */
	{11,   -1, 25,   32,   39,   46,   53,   60,   67,   74,   81,   88,   -1,   -1,   -1, 116,   -1,   130,  -1,  -1, -1, -1},

	/*
	LCTRL LWIN  LALT  XXX   XXX   XXX   SPACE XXX   XXX   XXX   RALT  RWIN  FN    XXX   RCTRL LEFT  DOWN  RIGHT */
	{12,  19,   26,   -1,   -1,   -1,   54,   -1,   -1,   -1,   82,   89,   96,   -1,   117,   124,   131,   138,   -1,  -1, -1, -1},

	/* Bottom row does not exist */
	{-1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1},
};