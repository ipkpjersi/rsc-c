#ifndef _H_VERSION
#define _H_VERSION

#define VERSION_CONFIG 85
#define VERSION_ENTITY 24
#define VERSION_FILTER 2
#define VERSION_FONTS 1
#define VERSION_MAPS 63
// #define VERSION_MEDIA 58
#define VERSION_MEDIA 59
#define VERSION_MODELS 36
#define VERSION_SOUNDS 1
#define VERSION_TEXTURES 17

#define ENTITY_IS_TGA     (VERSION_ENTITY < 9)
#define MEDIA_IS_TGA      (VERSION_MEDIA < 28)

#define HAS_SEPARATE_LAND (VERSION_MAPS > 27)

#define VERSION_STR_HELPER(x) #x
#define VERSION_STR(x) VERSION_STR_HELPER(x)

#endif
