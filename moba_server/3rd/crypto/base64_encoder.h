#ifndef __BASE64_ENCODE_H__
#define __BASE64_ENCODE_H__

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

char*
base64_encode(uint8_t* text, int sz, int* encode_sz);

void
base64_encode_free(char* result);

#ifdef __cplusplus
}
#endif

#endif

