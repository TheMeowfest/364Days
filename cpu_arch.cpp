#include "stdafx.h"
#include "cstdint"

unsigned char Current_Instruction = 0b000000;

//pidata.bin
const uint32_t PIF_ROM_START          = 0x1fc00000;
const uint32_t PIF_ROM_LENGTH         = 0x000007c0;
const uint32_t PIF_ROM_END            = PIF_ROM_START + PIF_ROM_LENGTH - 1;

const uint32_t PIF_RAM_START          = 0x1fc007c0;
const uint32_t PIF_RAM_LENGTH         = 0x00000040;
const uint32_t PIF_RAM_END            = PIF_RAM_START + PIF_RAM_LENGTH - 1;

//rom.n64
const uint32_t CART_DOM1_ADDR2_START  = 0x100000000;
const uint32_t CART_DOM1_ADDR2_LENGTH = 0x0fc00000;
const uint32_t CART_DOM1_ADDR2_END    = CART_DOM1_ADDR2_START + CART_DOM1_ADDR2_LENGTH - 1;

const uint32_t SP_DMEM_START          = 0x04001000;
const uint32_t SP_DMEM_LENGTH         = 0x00001000;
const uint32_t SP_DMEM_END            = SP_DMEM_START + SP_DMEM_LENGTH - 1;

const uint32_t SP_IMEM_START          = 0x04001000;
const uint32_t SP_IMEM_LENGTH         = 0x00001000;
const uint32_t SP_IMEM_END            = SP_IMEM_START + SP_IMEM_LENGTH - 1;

const uint32_t SP_BASE_REG            = 0x04040000;
const uint32_t SP_STATUS_REG          = 0x04040010;
const uint32_t SP_DMA_BUSY_REG        = 0x04040018;

const uint32_t DPC_BASE_REG           = 0x04100000;
const uint32_t DPC_STATUS_REG         = 0x0410000c;

const uint32_t AI_BASE_REG            = 0x04500000;
const uint32_t AI_DRAM_ARRD_REG       = 0x04500000;
const uint32_t AI_LEN_REG             = 0x04500004;

const uint32_t VI_BASE_REG            = 0x04400000;
const uint32_t VI_INTR_REG            = 0x0440000c;
const uint32_t VI_CURRENT_REG         = 0x04400010;
const uint32_t VI_H_START_REG         = 0x04400024;

const uint32_t PI_BASE_REG            = 0x04600000;
const uint32_t PI_STATUS_REG          = 0x04600010;
const uint32_t PI_BSD_DOM1_LAT_REG    = 0x04600014;
const uint32_t PI_BSD_DOM1_PWD_REG    = 0x04600018;
const uint32_t PI_BSD_DOM1_PGS_REG    = 0x0460001c;
const uint32_t PI_BSD_DOM1_RLS_REG    = 0x04600020;

const uint32_t SI_BASE_REG            = 0x04800000;
const uint32_t SI_STATUS_REG          = 0x04800018;

void Opcode(unsigned char Current_Instruction){
  unsigned char Special     = 0b000000;
  unsigned char RegImm      = 0b000001;
  unsigned char j           = 0b000010;
  unsigned char Jal         = 0b000011;
  unsigned char Beq         = 0b000100;
  unsigned char Bne         = 0b000101;
  unsigned char Blez        = 0b000110;
  unsigned char Bgtz        = 0b000111;
  unsigned char Addi        = 0b001000;
  unsigned char Addiu       = 0b001001;
  unsigned char Slti        = 0b001010;
  unsigned char Sltiu       = 0b001011;
  unsigned char Andi        = 0b001100;
  unsigned char Ori         = 0b001101;
  unsigned char Xori        = 0b001110;
  unsigned char Lui         = 0b001111;
  unsigned char Mtc0        = 0b010000;
  unsigned char Beql        = 0b010100;
  unsigned char Bnel        = 0b010101;
  unsigned char Blezl       = 0b010110;
  unsigned char Bgtzl       = 0b010111;
  unsigned char Daddi       = 0b011000;
  unsigned char Daddiu      = 0b011001;
  unsigned char Lb          = 0b100000;
  unsigned char Lwl         = 0b100010;
  unsigned char Lw          = 0b100011;
  unsigned char Lbu         = 0b100100;
  unsigned char Lwr         = 0b100110;
  unsigned char Lwu         = 0b100111;
  unsigned char Sb          = 0b101000;
  unsigned char Sh          = 0b101001;
  unsigned char Swl         = 0b101010;
  unsigned char Sw          = 0b101011;
  unsigned char Sdl         = 0b101100;
  unsigned char Sdr         = 0b101101;
  unsigned char Swr         = 0b101110;
  unsigned char Pref        = 0b110011;
  unsigned char Ldc1        = 0b110101;
  unsigned char Ld          = 0b110111;
  unsigned char Sc          = 0b111000;
  unsigned char Scd         = 0b111100;
  unsigned char Sd          = 0b111111;
}

//void CoOpcode(unsigned char Current_instruction){ //signed var by nintendo..
//  Cop0        = 0b010000;
//  Cop1        = 0b010001;
//  Cop2        = 0b010010;
//  Cop3        = 0b010011;
//}

struct Cpu {
	uint64_t GPR[32];
	uint64_t FPR[32];
	uint64_t PC;
	uint64_t HI;
	uint64_t LO;
	uint32_t FCR0;
	uint32_t FCR31;
	bool LLBit;
	struct Cp0;
}

struct Cp0 {
	uint64_t Index;
	uint64_t Random;
	uint64_t EntryLo0;
	uint64_t EntryLo1;
	uint64_t Context;
	uint64_t PageMask;
	uint64_t Wired;
	uint64_t BadVAddr;
	uint64_t Count;
	uint64_t EntryHi;
	uint64_t Compare;
	uint64_t Status;
	uint64_t Cause;
	uint64_t Epc;
	uint64_t PRId;
	uint64_t Config;
	uint64_t LLAddr;
	uint64_t WatchLo;
	uint64_t WatchHi;
	uint64_t XContext;
	uint64_t Parity_Error;
	uint64_t Cache_Error;
	uint64_t TagLo;
	uint64_t TagHi;
	uint64_t ErrorEPC;
}

uint64_t imm = (uint16_t)RegImm

int main()
{
printf(imm)
}
