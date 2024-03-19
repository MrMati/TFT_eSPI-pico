#pragma once

#include "String.h"
#include "Common.h"
#include "SPI.h"
#include "Print.h"
#include "wires.h"
#include <math.h>


#define DEBUGSPI(...) do { } while(0)
#define DEBUGCORE(...)  do { } while(0)
//#define DEBUGSPI(fmt, ...) do { DEBUG_RP2040_PORT.printf(fmt, ## __VA_ARGS__); DEBUG_RP2040_PORT.flush(); } while (0)


template <size_t N>
constexpr uint32_t __bitset(const int (&a)[N], size_t i = 0U) {
    return i < N ? (1L << a[i]) | __bitset(a, i + 1) : 0;
}
