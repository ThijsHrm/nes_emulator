#ifndef CPU_H
#define CPU_H

#include <cstdint>
#include "ram.h"
#include "disassembler.h"

class Cpu {
public:

	// class constructor
    Cpu();
	Ram ram;
	Disassembler disassembler;

private:

	// =================
	//  CPU Memory
	// =================

	// Instantiate 8-bit A, X, Y register
    std::uint_least8_t A, X, Y;
	// Instantiate 8-bit stack pointer
    std::uint_least8_t SP;
	// Instantiate 16-bit program counter
    std::uint_least16_t PC;

};

#endif

