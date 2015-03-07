#ifndef __select_tiles__
#define __select_tiles__

#define select_data_length 35
const unsigned char select_data[] = {
	255,   0, 255,   0, 255,   0, 255,   0, 255,   0, 255,   0, 255,   0, 255,   0, 
	252,   3, 248,   4, 240,   8, 241,   8, 241,   8, 240,   8, 248,   4, 252,   2, 
	 24, 231,  16,   8,  16,   8, 241,   8, 240,   9, 240,   8, 112,   8,  49,   8, 
	 25, 230,  17,   8,  17,   8, 241,   8,  49, 200,  49,   8,  49,   8, 241,   8, 
	248,   7, 240,   8, 240,   8, 241,   8, 240,   9, 240,   8, 240,   8, 241,   8, 
	 28, 227,  24,   4,  16,   8, 241,   8,  49, 200,  49,   8,  49,   8, 241,   8, 
	 56, 199,  48,   8,  16,   8,  28, 130,  28, 130, 252,   2, 252,   2, 252,   2, 
	 31, 224,  31,   0,  31,   0, 127,   0, 127,   0, 127,   0, 127,   0, 127,   0, 
	243,  12, 227,  16, 225,  18, 224,  17, 224,  17, 224,  16, 224,  18, 224,  18, 
	156,  99,  24, 132,  16, 136,  17,   8,  17,   8,  17,   8,  17, 136,  17, 136, 
	 56, 199,  48,   8,  16,   8,  16, 137,  17, 136,  17, 136,  17, 136,  17, 136, 
	120, 135,  48,  72,  48,   8,  17,   8,  16, 137,  16, 136,  16, 136,  17, 136, 
	 31, 224,  31,   0,  31,   0, 255,   0,  63, 192,  63,   0,  63,   0, 255,   0, 
	254,   1, 255,   0, 248,   7, 240,   8, 240,   8, 255,   0, 255,   0, 255,   0, 
	 17,   8,  17, 136,  16, 137,  16,   8,  48,   8, 255,   0, 255,   0, 255,   0, 
	241,   8, 241,   8,  16, 233,  16,   8,  16,   8, 255,   0, 255,   0, 255,   0, 
	241,   8, 241,   8,  16, 233,  16,   8,  24,   4, 255,   0, 255,   0, 255,   0, 
	156,  98,  28, 130,  28, 130,  28,   2,  60,   2, 255,   0, 255,   0, 255,   0, 
	127,   0, 127,   0, 127,   0, 127,   0, 127,   0, 255,   0, 255,   0, 255,   0, 
	227,  16, 227,  16, 227,  16, 227,  16, 227,  16, 255,   0, 255,   0, 255,   0, 
	 17, 136,  17, 136,  16, 137,  16, 136,  24, 132, 255,   0, 255,   0, 255,   0, 
	 17, 136,  17, 136,  16, 137,  16,   8,  48,   8, 255,   0, 255,   0, 255,   0, 
	 17, 136,  17, 136,  16,   9,  48,   8, 112,   8, 255,   0, 255,   0, 255,   0, 
	255,   0, 255,   0,  31, 224,  31,   0,  31,   0, 255,   0, 255,   0, 255,   0, 
	255,   0, 255,   0,   0, 255, 255,   0,   0, 255,   0, 255,   0, 255, 255, 255, 
	255,   0, 231,   0, 195,   0, 129,   0, 129,   0, 195,   0, 231,   0, 255,   0, 
	255,  31, 224,  32, 192,  64, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 
	255, 255,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	255, 248,  15,   4,   7,   2,   3,   1,   3,   1,   3,   1,   3,   1,   3,   1, 
	128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  3,   1,   3,   1,   3,   1,   3,   1,   3,   1,   3,   1,   3,   1,   3,   1, 
	128, 128, 128, 128, 128, 128, 128, 128, 192, 128, 224,  64, 255,  32, 255,  31, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 255,   0, 255, 255, 
	  3,   1,   3,   1,   3,   1,   3,   1,   3,   1,   7,   2, 255,   4, 255, 248, 
};

#define select_tiles_width 20
#define select_tiles_height 18
#define select_offset 9
const unsigned char select_tiles[] = {
	  9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9, 
	  9,   9,   9,   9,  10,  11,  12,  13,  14,  15,  16,  17,  18,  19,  20,  21,   9,   9,   9,   9, 
	  9,   9,   9,   9,  22,  23,  24,  24,  25,  26,  27,  28,  29,  30,  31,  32,   9,   9,   9,   9, 
	 33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33, 
	 34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34, 
	 34,  34,  34,  34,  34,  35,  36,  36,  36,  36,  36,  36,  36,  36,  37,  34,  34,  34,  34,  34, 
	 34,  34,  34,  34,  34,  38,  39,  39,  39,  39,  39,  39,  39,  39,  40,  34,  34,  34,  34,  34, 
	 34,  34,  34,  34,  34,  41,  42,  42,  42,  42,  42,  42,  42,  42,  43,  34,  34,  34,  34,  34, 
	 34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34, 
	 34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34, 
	 39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39, 
	 39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39, 
	 39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39, 
	 39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39, 
	 39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39, 
	 39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39, 
	 34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34, 
	 34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34, 
};

#endif