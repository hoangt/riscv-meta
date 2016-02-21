//
//  riscv-opcodes.h
//

#include "riscv-opcodes.h"

const char* riscv_instructions[] = {
	"unknown",
	"nop",
	"beq",
	"bne",
	"blt",
	"bge",
	"bltu",
	"bgeu",
	"jalr",
	"jal",
	"lui",
	"auipc",
	"addi",
	"slli",
	"slti",
	"sltiu",
	"xori",
	"srli",
	"srai",
	"ori",
	"andi",
	"add",
	"sub",
	"sll",
	"slt",
	"sltu",
	"xor",
	"srl",
	"sra",
	"or",
	"and",
	"addiw",
	"slliw",
	"srliw",
	"sraiw",
	"addw",
	"subw",
	"sllw",
	"srlw",
	"sraw",
	"lb",
	"lh",
	"lw",
	"ld",
	"lbu",
	"lhu",
	"lwu",
	"sb",
	"sh",
	"sw",
	"sd",
	"fence",
	"fence.i",
	"mul",
	"mulh",
	"mulhsu",
	"mulhu",
	"div",
	"divu",
	"rem",
	"remu",
	"mulw",
	"divw",
	"divuw",
	"remw",
	"remuw",
	"amoadd.w",
	"amoxor.w",
	"amoor.w",
	"amoand.w",
	"amomin.w",
	"amomax.w",
	"amominu.w",
	"amomaxu.w",
	"amoswap.w",
	"lr.w",
	"sc.w",
	"amoadd.d",
	"amoxor.d",
	"amoor.d",
	"amoand.d",
	"amomin.d",
	"amomax.d",
	"amominu.d",
	"amomaxu.d",
	"amoswap.d",
	"lr.d",
	"sc.d",
	"scall",
	"sbreak",
	"sret",
	"sfence.vm",
	"wfi",
	"mrth",
	"mrts",
	"hrts",
	"csrrw",
	"csrrs",
	"csrrc",
	"csrrwi",
	"csrrsi",
	"csrrci",
	"fadd.s",
	"fsub.s",
	"fmul.s",
	"fdiv.s",
	"fsgnj.s",
	"fsgnjn.s",
	"fsgnjx.s",
	"fmin.s",
	"fmax.s",
	"fsqrt.s",
	"fadd.d",
	"fsub.d",
	"fmul.d",
	"fdiv.d",
	"fsgnj.d",
	"fsgnjn.d",
	"fsgnjx.d",
	"fmin.d",
	"fmax.d",
	"fcvt.s.d",
	"fcvt.d.s",
	"fsqrt.d",
	"fle.s",
	"flt.s",
	"feq.s",
	"fle.d",
	"flt.d",
	"feq.d",
	"fcvt.w.s",
	"fcvt.wu.s",
	"fcvt.l.s",
	"fcvt.lu.s",
	"fmv.x.s",
	"fclass.s",
	"fcvt.w.d",
	"fcvt.wu.d",
	"fcvt.l.d",
	"fcvt.lu.d",
	"fmv.x.d",
	"fclass.d",
	"fcvt.s.w",
	"fcvt.s.wu",
	"fcvt.s.l",
	"fcvt.s.lu",
	"fmv.s.x",
	"fcvt.d.w",
	"fcvt.d.wu",
	"fcvt.d.l",
	"fcvt.d.lu",
	"fmv.d.x",
	"flw",
	"fld",
	"fsw",
	"fsd",
	"fmadd.s",
	"fmsub.s",
	"fnmsub.s",
	"fnmadd.s",
	"fmadd.d",
	"fmsub.d",
	"fnmsub.d",
	"fnmadd.d",
	"c.nop",
	"c.addi",
	"c.lw",
	"c.mv",
	"c.bnez",
	"c.sw",
	"c.ld",
	"c.swsp",
	"c.lwsp",
	"c.li",
	"c.add",
	"c.srli",
	"c.jr",
	"c.fld",
	"c.sdsp",
	"c.j",
	"c.ldsp",
	"c.andi",
	"c.addiw",
	"c.slli",
	"c.sd",
	"c.beqz",
	"c.and",
	"c.srai",
	"c.jal",
	"c.addi4spn",
	"c.fldsp",
	"c.addi16sp",
	"c.fsd",
	"c.fsdsp",
	"c.addw",
	"c.xor",
	"c.or",
	"c.sub",
	"c.lui",
	"c.jalr",
	"c.subw",
	"c.ebreak",
	"c.flw",
	"c.flwsp",
	"c.fsw",
	"c.fswsp"
};