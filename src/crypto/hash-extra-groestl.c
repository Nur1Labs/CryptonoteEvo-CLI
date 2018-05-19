#include <stddef.h>
#include <stdint.h>

#include "groestl.h"

void hash_extra_groestl(const void *data, size_t length, unsigned char *hash) {
  groestl(data, length * 8, hash);
}
