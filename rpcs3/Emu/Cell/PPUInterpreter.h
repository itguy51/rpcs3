#pragma once

#include "PPUOpcodes.h"

class PPUThread;

using ppu_inter_func_t = void(*)(PPUThread& ppu, ppu_opcode_t op);

struct ppu_interpreter
{
	static void TDI(PPUThread&, ppu_opcode_t);
	static void TWI(PPUThread&, ppu_opcode_t);
	static void MFVSCR(PPUThread&, ppu_opcode_t);
	static void MTVSCR(PPUThread&, ppu_opcode_t);
	static void VADDCUW(PPUThread&, ppu_opcode_t);
	static void VADDFP(PPUThread&, ppu_opcode_t);
	static void VADDSBS(PPUThread&, ppu_opcode_t);
	static void VADDSHS(PPUThread&, ppu_opcode_t);
	static void VADDSWS(PPUThread&, ppu_opcode_t);
	static void VADDUBM(PPUThread&, ppu_opcode_t);
	static void VADDUBS(PPUThread&, ppu_opcode_t);
	static void VADDUHM(PPUThread&, ppu_opcode_t);
	static void VADDUHS(PPUThread&, ppu_opcode_t);
	static void VADDUWM(PPUThread&, ppu_opcode_t);
	static void VADDUWS(PPUThread&, ppu_opcode_t);
	static void VAND(PPUThread&, ppu_opcode_t);
	static void VANDC(PPUThread&, ppu_opcode_t);
	static void VAVGSB(PPUThread&, ppu_opcode_t);
	static void VAVGSH(PPUThread&, ppu_opcode_t);
	static void VAVGSW(PPUThread&, ppu_opcode_t);
	static void VAVGUB(PPUThread&, ppu_opcode_t);
	static void VAVGUH(PPUThread&, ppu_opcode_t);
	static void VAVGUW(PPUThread&, ppu_opcode_t);
	static void VCFSX(PPUThread&, ppu_opcode_t);
	static void VCFUX(PPUThread&, ppu_opcode_t);
	static void VCMPBFP(PPUThread&, ppu_opcode_t);
	static void VCMPEQFP(PPUThread&, ppu_opcode_t);
	static void VCMPEQUB(PPUThread&, ppu_opcode_t);
	static void VCMPEQUH(PPUThread&, ppu_opcode_t);
	static void VCMPEQUW(PPUThread&, ppu_opcode_t);
	static void VCMPGEFP(PPUThread&, ppu_opcode_t);
	static void VCMPGTFP(PPUThread&, ppu_opcode_t);
	static void VCMPGTSB(PPUThread&, ppu_opcode_t);
	static void VCMPGTSH(PPUThread&, ppu_opcode_t);
	static void VCMPGTSW(PPUThread&, ppu_opcode_t);
	static void VCMPGTUB(PPUThread&, ppu_opcode_t);
	static void VCMPGTUH(PPUThread&, ppu_opcode_t);
	static void VCMPGTUW(PPUThread&, ppu_opcode_t);
	static void VCTSXS(PPUThread&, ppu_opcode_t);
	static void VCTUXS(PPUThread&, ppu_opcode_t);
	static void VEXPTEFP(PPUThread&, ppu_opcode_t);
	static void VLOGEFP(PPUThread&, ppu_opcode_t);
	static void VMADDFP(PPUThread&, ppu_opcode_t);
	static void VMAXFP(PPUThread&, ppu_opcode_t);
	static void VMAXSB(PPUThread&, ppu_opcode_t);
	static void VMAXSH(PPUThread&, ppu_opcode_t);
	static void VMAXSW(PPUThread&, ppu_opcode_t);
	static void VMAXUB(PPUThread&, ppu_opcode_t);
	static void VMAXUH(PPUThread&, ppu_opcode_t);
	static void VMAXUW(PPUThread&, ppu_opcode_t);
	static void VMHADDSHS(PPUThread&, ppu_opcode_t);
	static void VMHRADDSHS(PPUThread&, ppu_opcode_t);
	static void VMINFP(PPUThread&, ppu_opcode_t);
	static void VMINSB(PPUThread&, ppu_opcode_t);
	static void VMINSH(PPUThread&, ppu_opcode_t);
	static void VMINSW(PPUThread&, ppu_opcode_t);
	static void VMINUB(PPUThread&, ppu_opcode_t);
	static void VMINUH(PPUThread&, ppu_opcode_t);
	static void VMINUW(PPUThread&, ppu_opcode_t);
	static void VMLADDUHM(PPUThread&, ppu_opcode_t);
	static void VMRGHB(PPUThread&, ppu_opcode_t);
	static void VMRGHH(PPUThread&, ppu_opcode_t);
	static void VMRGHW(PPUThread&, ppu_opcode_t);
	static void VMRGLB(PPUThread&, ppu_opcode_t);
	static void VMRGLH(PPUThread&, ppu_opcode_t);
	static void VMRGLW(PPUThread&, ppu_opcode_t);
	static void VMSUMMBM(PPUThread&, ppu_opcode_t);
	static void VMSUMSHM(PPUThread&, ppu_opcode_t);
	static void VMSUMSHS(PPUThread&, ppu_opcode_t);
	static void VMSUMUBM(PPUThread&, ppu_opcode_t);
	static void VMSUMUHM(PPUThread&, ppu_opcode_t);
	static void VMSUMUHS(PPUThread&, ppu_opcode_t);
	static void VMULESB(PPUThread&, ppu_opcode_t);
	static void VMULESH(PPUThread&, ppu_opcode_t);
	static void VMULEUB(PPUThread&, ppu_opcode_t);
	static void VMULEUH(PPUThread&, ppu_opcode_t);
	static void VMULOSB(PPUThread&, ppu_opcode_t);
	static void VMULOSH(PPUThread&, ppu_opcode_t);
	static void VMULOUB(PPUThread&, ppu_opcode_t);
	static void VMULOUH(PPUThread&, ppu_opcode_t);
	static void VNMSUBFP(PPUThread&, ppu_opcode_t);
	static void VNOR(PPUThread&, ppu_opcode_t);
	static void VOR(PPUThread&, ppu_opcode_t);
	static void VPERM(PPUThread&, ppu_opcode_t);
	static void VPKPX(PPUThread&, ppu_opcode_t);
	static void VPKSHSS(PPUThread&, ppu_opcode_t);
	static void VPKSHUS(PPUThread&, ppu_opcode_t);
	static void VPKSWSS(PPUThread&, ppu_opcode_t);
	static void VPKSWUS(PPUThread&, ppu_opcode_t);
	static void VPKUHUM(PPUThread&, ppu_opcode_t);
	static void VPKUHUS(PPUThread&, ppu_opcode_t);
	static void VPKUWUM(PPUThread&, ppu_opcode_t);
	static void VPKUWUS(PPUThread&, ppu_opcode_t);
	static void VREFP(PPUThread&, ppu_opcode_t);
	static void VRFIM(PPUThread&, ppu_opcode_t);
	static void VRFIN(PPUThread&, ppu_opcode_t);
	static void VRFIP(PPUThread&, ppu_opcode_t);
	static void VRFIZ(PPUThread&, ppu_opcode_t);
	static void VRLB(PPUThread&, ppu_opcode_t);
	static void VRLH(PPUThread&, ppu_opcode_t);
	static void VRLW(PPUThread&, ppu_opcode_t);
	static void VRSQRTEFP(PPUThread&, ppu_opcode_t);
	static void VSEL(PPUThread&, ppu_opcode_t);
	static void VSL(PPUThread&, ppu_opcode_t);
	static void VSLB(PPUThread&, ppu_opcode_t);
	static void VSLDOI(PPUThread&, ppu_opcode_t);
	static void VSLH(PPUThread&, ppu_opcode_t);
	static void VSLO(PPUThread&, ppu_opcode_t);
	static void VSLW(PPUThread&, ppu_opcode_t);
	static void VSPLTB(PPUThread&, ppu_opcode_t);
	static void VSPLTH(PPUThread&, ppu_opcode_t);
	static void VSPLTISB(PPUThread&, ppu_opcode_t);
	static void VSPLTISH(PPUThread&, ppu_opcode_t);
	static void VSPLTISW(PPUThread&, ppu_opcode_t);
	static void VSPLTW(PPUThread&, ppu_opcode_t);
	static void VSR(PPUThread&, ppu_opcode_t);
	static void VSRAB(PPUThread&, ppu_opcode_t);
	static void VSRAH(PPUThread&, ppu_opcode_t);
	static void VSRAW(PPUThread&, ppu_opcode_t);
	static void VSRB(PPUThread&, ppu_opcode_t);
	static void VSRH(PPUThread&, ppu_opcode_t);
	static void VSRO(PPUThread&, ppu_opcode_t);
	static void VSRW(PPUThread&, ppu_opcode_t);
	static void VSUBCUW(PPUThread&, ppu_opcode_t);
	static void VSUBFP(PPUThread&, ppu_opcode_t);
	static void VSUBSBS(PPUThread&, ppu_opcode_t);
	static void VSUBSHS(PPUThread&, ppu_opcode_t);
	static void VSUBSWS(PPUThread&, ppu_opcode_t);
	static void VSUBUBM(PPUThread&, ppu_opcode_t);
	static void VSUBUBS(PPUThread&, ppu_opcode_t);
	static void VSUBUHM(PPUThread&, ppu_opcode_t);
	static void VSUBUHS(PPUThread&, ppu_opcode_t);
	static void VSUBUWM(PPUThread&, ppu_opcode_t);
	static void VSUBUWS(PPUThread&, ppu_opcode_t);
	static void VSUMSWS(PPUThread&, ppu_opcode_t);
	static void VSUM2SWS(PPUThread&, ppu_opcode_t);
	static void VSUM4SBS(PPUThread&, ppu_opcode_t);
	static void VSUM4SHS(PPUThread&, ppu_opcode_t);
	static void VSUM4UBS(PPUThread&, ppu_opcode_t);
	static void VUPKHPX(PPUThread&, ppu_opcode_t);
	static void VUPKHSB(PPUThread&, ppu_opcode_t);
	static void VUPKHSH(PPUThread&, ppu_opcode_t);
	static void VUPKLPX(PPUThread&, ppu_opcode_t);
	static void VUPKLSB(PPUThread&, ppu_opcode_t);
	static void VUPKLSH(PPUThread&, ppu_opcode_t);
	static void VXOR(PPUThread&, ppu_opcode_t);
	static void MULLI(PPUThread&, ppu_opcode_t);
	static void SUBFIC(PPUThread&, ppu_opcode_t);
	static void CMPLI(PPUThread&, ppu_opcode_t);
	static void CMPI(PPUThread&, ppu_opcode_t);
	static void ADDIC(PPUThread&, ppu_opcode_t);
	static void ADDI(PPUThread&, ppu_opcode_t);
	static void ADDIS(PPUThread&, ppu_opcode_t);
	static void BC(PPUThread&, ppu_opcode_t);
	static void HACK(PPUThread&, ppu_opcode_t);
	static void SC(PPUThread&, ppu_opcode_t);
	static void B(PPUThread&, ppu_opcode_t);
	static void MCRF(PPUThread&, ppu_opcode_t);
	static void BCLR(PPUThread&, ppu_opcode_t);
	static void CRNOR(PPUThread&, ppu_opcode_t);
	static void CRANDC(PPUThread&, ppu_opcode_t);
	static void ISYNC(PPUThread&, ppu_opcode_t);
	static void CRXOR(PPUThread&, ppu_opcode_t);
	static void CRNAND(PPUThread&, ppu_opcode_t);
	static void CRAND(PPUThread&, ppu_opcode_t);
	static void CREQV(PPUThread&, ppu_opcode_t);
	static void CRORC(PPUThread&, ppu_opcode_t);
	static void CROR(PPUThread&, ppu_opcode_t);
	static void BCCTR(PPUThread&, ppu_opcode_t);
	static void RLWIMI(PPUThread&, ppu_opcode_t);
	static void RLWINM(PPUThread&, ppu_opcode_t);
	static void RLWNM(PPUThread&, ppu_opcode_t);
	static void ORI(PPUThread&, ppu_opcode_t);
	static void ORIS(PPUThread&, ppu_opcode_t);
	static void XORI(PPUThread&, ppu_opcode_t);
	static void XORIS(PPUThread&, ppu_opcode_t);
	static void ANDI(PPUThread&, ppu_opcode_t);
	static void ANDIS(PPUThread&, ppu_opcode_t);
	static void RLDICL(PPUThread&, ppu_opcode_t);
	static void RLDICR(PPUThread&, ppu_opcode_t);
	static void RLDIC(PPUThread&, ppu_opcode_t);
	static void RLDIMI(PPUThread&, ppu_opcode_t);
	static void RLDCL(PPUThread&, ppu_opcode_t);
	static void RLDCR(PPUThread&, ppu_opcode_t);
	static void CMP(PPUThread&, ppu_opcode_t);
	static void TW(PPUThread&, ppu_opcode_t);
	static void LVSL(PPUThread&, ppu_opcode_t);
	static void LVEBX(PPUThread&, ppu_opcode_t);
	static void SUBFC(PPUThread&, ppu_opcode_t);
	static void MULHDU(PPUThread&, ppu_opcode_t);
	static void ADDC(PPUThread&, ppu_opcode_t);
	static void MULHWU(PPUThread&, ppu_opcode_t);
	static void MFOCRF(PPUThread&, ppu_opcode_t);
	static void LWARX(PPUThread&, ppu_opcode_t);
	static void LDX(PPUThread&, ppu_opcode_t);
	static void LWZX(PPUThread&, ppu_opcode_t);
	static void SLW(PPUThread&, ppu_opcode_t);
	static void CNTLZW(PPUThread&, ppu_opcode_t);
	static void SLD(PPUThread&, ppu_opcode_t);
	static void AND(PPUThread&, ppu_opcode_t);
	static void CMPL(PPUThread&, ppu_opcode_t);
	static void LVSR(PPUThread&, ppu_opcode_t);
	static void LVEHX(PPUThread&, ppu_opcode_t);
	static void SUBF(PPUThread&, ppu_opcode_t);
	static void LDUX(PPUThread&, ppu_opcode_t);
	static void DCBST(PPUThread&, ppu_opcode_t);
	static void LWZUX(PPUThread&, ppu_opcode_t);
	static void CNTLZD(PPUThread&, ppu_opcode_t);
	static void ANDC(PPUThread&, ppu_opcode_t);
	static void TD(PPUThread&, ppu_opcode_t);
	static void LVEWX(PPUThread&, ppu_opcode_t);
	static void MULHD(PPUThread&, ppu_opcode_t);
	static void MULHW(PPUThread&, ppu_opcode_t);
	static void LDARX(PPUThread&, ppu_opcode_t);
	static void DCBF(PPUThread&, ppu_opcode_t);
	static void LBZX(PPUThread&, ppu_opcode_t);
	static void LVX(PPUThread&, ppu_opcode_t);
	static void NEG(PPUThread&, ppu_opcode_t);
	static void LBZUX(PPUThread&, ppu_opcode_t);
	static void NOR(PPUThread&, ppu_opcode_t);
	static void STVEBX(PPUThread&, ppu_opcode_t);
	static void SUBFE(PPUThread&, ppu_opcode_t);
	static void ADDE(PPUThread&, ppu_opcode_t);
	static void MTOCRF(PPUThread&, ppu_opcode_t);
	static void STDX(PPUThread&, ppu_opcode_t);
	static void STWCX(PPUThread&, ppu_opcode_t);
	static void STWX(PPUThread&, ppu_opcode_t);
	static void STVEHX(PPUThread&, ppu_opcode_t);
	static void STDUX(PPUThread&, ppu_opcode_t);
	static void STWUX(PPUThread&, ppu_opcode_t);
	static void STVEWX(PPUThread&, ppu_opcode_t);
	static void SUBFZE(PPUThread&, ppu_opcode_t);
	static void ADDZE(PPUThread&, ppu_opcode_t);
	static void STDCX(PPUThread&, ppu_opcode_t);
	static void STBX(PPUThread&, ppu_opcode_t);
	static void STVX(PPUThread&, ppu_opcode_t);
	static void MULLD(PPUThread&, ppu_opcode_t);
	static void SUBFME(PPUThread&, ppu_opcode_t);
	static void ADDME(PPUThread&, ppu_opcode_t);
	static void MULLW(PPUThread&, ppu_opcode_t);
	static void DCBTST(PPUThread&, ppu_opcode_t);
	static void STBUX(PPUThread&, ppu_opcode_t);
	static void ADD(PPUThread&, ppu_opcode_t);
	static void DCBT(PPUThread&, ppu_opcode_t);
	static void LHZX(PPUThread&, ppu_opcode_t);
	static void EQV(PPUThread&, ppu_opcode_t);
	static void ECIWX(PPUThread&, ppu_opcode_t);
	static void LHZUX(PPUThread&, ppu_opcode_t);
	static void XOR(PPUThread&, ppu_opcode_t);
	static void MFSPR(PPUThread&, ppu_opcode_t);
	static void LWAX(PPUThread&, ppu_opcode_t);
	static void DST(PPUThread&, ppu_opcode_t);
	static void LHAX(PPUThread&, ppu_opcode_t);
	static void LVXL(PPUThread&, ppu_opcode_t);
	static void MFTB(PPUThread&, ppu_opcode_t);
	static void LWAUX(PPUThread&, ppu_opcode_t);
	static void DSTST(PPUThread&, ppu_opcode_t);
	static void LHAUX(PPUThread&, ppu_opcode_t);
	static void STHX(PPUThread&, ppu_opcode_t);
	static void ORC(PPUThread&, ppu_opcode_t);
	static void ECOWX(PPUThread&, ppu_opcode_t);
	static void STHUX(PPUThread&, ppu_opcode_t);
	static void OR(PPUThread&, ppu_opcode_t);
	static void DIVDU(PPUThread&, ppu_opcode_t);
	static void DIVWU(PPUThread&, ppu_opcode_t);
	static void MTSPR(PPUThread&, ppu_opcode_t);
	static void DCBI(PPUThread&, ppu_opcode_t);
	static void NAND(PPUThread&, ppu_opcode_t);
	static void STVXL(PPUThread&, ppu_opcode_t);
	static void DIVD(PPUThread&, ppu_opcode_t);
	static void DIVW(PPUThread&, ppu_opcode_t);
	static void LVLX(PPUThread&, ppu_opcode_t);
	static void LDBRX(PPUThread&, ppu_opcode_t);
	static void LSWX(PPUThread&, ppu_opcode_t);
	static void LWBRX(PPUThread&, ppu_opcode_t);
	static void LFSX(PPUThread&, ppu_opcode_t);
	static void SRW(PPUThread&, ppu_opcode_t);
	static void SRD(PPUThread&, ppu_opcode_t);
	static void LVRX(PPUThread&, ppu_opcode_t);
	static void LSWI(PPUThread&, ppu_opcode_t);
	static void LFSUX(PPUThread&, ppu_opcode_t);
	static void SYNC(PPUThread&, ppu_opcode_t);
	static void LFDX(PPUThread&, ppu_opcode_t);
	static void LFDUX(PPUThread&, ppu_opcode_t);
	static void STVLX(PPUThread&, ppu_opcode_t);
	static void STDBRX(PPUThread&, ppu_opcode_t);
	static void STSWX(PPUThread&, ppu_opcode_t);
	static void STWBRX(PPUThread&, ppu_opcode_t);
	static void STFSX(PPUThread&, ppu_opcode_t);
	static void STVRX(PPUThread&, ppu_opcode_t);
	static void STFSUX(PPUThread&, ppu_opcode_t);
	static void STSWI(PPUThread&, ppu_opcode_t);
	static void STFDX(PPUThread&, ppu_opcode_t);
	static void STFDUX(PPUThread&, ppu_opcode_t);
	static void LVLXL(PPUThread&, ppu_opcode_t);
	static void LHBRX(PPUThread&, ppu_opcode_t);
	static void SRAW(PPUThread&, ppu_opcode_t);
	static void SRAD(PPUThread&, ppu_opcode_t);
	static void LVRXL(PPUThread&, ppu_opcode_t);
	static void DSS(PPUThread&, ppu_opcode_t);
	static void SRAWI(PPUThread&, ppu_opcode_t);
	static void SRADI(PPUThread&, ppu_opcode_t);
	static void EIEIO(PPUThread&, ppu_opcode_t);
	static void STVLXL(PPUThread&, ppu_opcode_t);
	static void STHBRX(PPUThread&, ppu_opcode_t);
	static void EXTSH(PPUThread&, ppu_opcode_t);
	static void STVRXL(PPUThread&, ppu_opcode_t);
	static void EXTSB(PPUThread&, ppu_opcode_t);
	static void STFIWX(PPUThread&, ppu_opcode_t);
	static void EXTSW(PPUThread&, ppu_opcode_t);
	static void ICBI(PPUThread&, ppu_opcode_t);
	static void DCBZ(PPUThread&, ppu_opcode_t);
	static void LWZ(PPUThread&, ppu_opcode_t);
	static void LWZU(PPUThread&, ppu_opcode_t);
	static void LBZ(PPUThread&, ppu_opcode_t);
	static void LBZU(PPUThread&, ppu_opcode_t);
	static void STW(PPUThread&, ppu_opcode_t);
	static void STWU(PPUThread&, ppu_opcode_t);
	static void STB(PPUThread&, ppu_opcode_t);
	static void STBU(PPUThread&, ppu_opcode_t);
	static void LHZ(PPUThread&, ppu_opcode_t);
	static void LHZU(PPUThread&, ppu_opcode_t);
	static void LHA(PPUThread&, ppu_opcode_t);
	static void LHAU(PPUThread&, ppu_opcode_t);
	static void STH(PPUThread&, ppu_opcode_t);
	static void STHU(PPUThread&, ppu_opcode_t);
	static void LMW(PPUThread&, ppu_opcode_t);
	static void STMW(PPUThread&, ppu_opcode_t);
	static void LFS(PPUThread&, ppu_opcode_t);
	static void LFSU(PPUThread&, ppu_opcode_t);
	static void LFD(PPUThread&, ppu_opcode_t);
	static void LFDU(PPUThread&, ppu_opcode_t);
	static void STFS(PPUThread&, ppu_opcode_t);
	static void STFSU(PPUThread&, ppu_opcode_t);
	static void STFD(PPUThread&, ppu_opcode_t);
	static void STFDU(PPUThread&, ppu_opcode_t);
	static void LD(PPUThread&, ppu_opcode_t);
	static void LDU(PPUThread&, ppu_opcode_t);
	static void LWA(PPUThread&, ppu_opcode_t);
	static void FDIVS(PPUThread&, ppu_opcode_t);
	static void FSUBS(PPUThread&, ppu_opcode_t);
	static void FADDS(PPUThread&, ppu_opcode_t);
	static void FSQRTS(PPUThread&, ppu_opcode_t);
	static void FRES(PPUThread&, ppu_opcode_t);
	static void FMULS(PPUThread&, ppu_opcode_t);
	static void FMADDS(PPUThread&, ppu_opcode_t);
	static void FMSUBS(PPUThread&, ppu_opcode_t);
	static void FNMSUBS(PPUThread&, ppu_opcode_t);
	static void FNMADDS(PPUThread&, ppu_opcode_t);
	static void STD(PPUThread&, ppu_opcode_t);
	static void STDU(PPUThread&, ppu_opcode_t);
	static void MTFSB1(PPUThread&, ppu_opcode_t);
	static void MCRFS(PPUThread&, ppu_opcode_t);
	static void MTFSB0(PPUThread&, ppu_opcode_t);
	static void MTFSFI(PPUThread&, ppu_opcode_t);
	static void MFFS(PPUThread&, ppu_opcode_t);
	static void MTFSF(PPUThread&, ppu_opcode_t);
	static void FCMPU(PPUThread&, ppu_opcode_t);
	static void FRSP(PPUThread&, ppu_opcode_t);
	static void FCTIW(PPUThread&, ppu_opcode_t);
	static void FCTIWZ(PPUThread&, ppu_opcode_t);
	static void FDIV(PPUThread&, ppu_opcode_t);
	static void FSUB(PPUThread&, ppu_opcode_t);
	static void FADD(PPUThread&, ppu_opcode_t);
	static void FSQRT(PPUThread&, ppu_opcode_t);
	static void FSEL(PPUThread&, ppu_opcode_t);
	static void FMUL(PPUThread&, ppu_opcode_t);
	static void FRSQRTE(PPUThread&, ppu_opcode_t);
	static void FMSUB(PPUThread&, ppu_opcode_t);
	static void FMADD(PPUThread&, ppu_opcode_t);
	static void FNMSUB(PPUThread&, ppu_opcode_t);
	static void FNMADD(PPUThread&, ppu_opcode_t);
	static void FCMPO(PPUThread&, ppu_opcode_t);
	static void FNEG(PPUThread&, ppu_opcode_t);
	static void FMR(PPUThread&, ppu_opcode_t);
	static void FNABS(PPUThread&, ppu_opcode_t);
	static void FABS(PPUThread&, ppu_opcode_t);
	static void FCTID(PPUThread&, ppu_opcode_t);
	static void FCTIDZ(PPUThread&, ppu_opcode_t);
	static void FCFID(PPUThread&, ppu_opcode_t);

	static void UNK(PPUThread&, ppu_opcode_t);
};

struct ppu_interpreter_precise final : ppu_interpreter
{
	// TODO
};

struct ppu_interpreter_fast final : ppu_interpreter
{
	// TODO
};
