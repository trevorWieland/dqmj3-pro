#include "single_0070081c_r.h"


extern undefined4 DAT_008eefe8_3;

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_0070081c(void)

{
  bool bVar1;
  float local_20;
  float fStack_1c;
  
  _DAT_008eefd8 = 0x20a0887;
  DAT_008eefdc = 10;
  DAT_008eefe0 = 0xe;
  DAT_008eefe4 = 4;
  _DAT_008eefe8 = CONCAT13(DAT_008eefe8_3,0xa6404);
  _DAT_008eefec = 0x20a0887;
  DAT_008eeff0 = 10;
  DAT_008eeff4 = 0xe;
  DAT_008eeff8 = 4;
  DAT_008eeffc = _DAT_008eefe8;
  DAT_008c07ac = 0;
  DAT_008c07b0 = 1;
  do {
    bVar1 = (bool)hasExclusiveAccess(0x8ef400);
  } while (!bVar1);
  DAT_008ef400 = 0xffffffff;
  DAT_008ef404 = 0xffffffff;
  do {
    bVar1 = (bool)hasExclusiveAccess(0x8ef408);
  } while (!bVar1);
  DAT_008ef408 = 0xffffffff;
  DAT_008ef40c = 0xffffffff;
  do {
    bVar1 = (bool)hasExclusiveAccess(0x8ef410);
  } while (!bVar1);
  DAT_008ef410 = 0xffffffff;
  DAT_008ef418 = 0;
  DAT_008ef41c = 0;
  DAT_008ef420 = 0;
  DAT_008ef424 = 0;
  DAT_008ef425 = 0;
  DAT_008ef428 = 0;
  DAT_008ef42a = 0;
  DAT_008ef42c = 0;
  DAT_008ef42e = 0;
  fn_00101a1c(&DAT_008ef430,&LAB_00527d84,0x18,8);
  DAT_008ef50c = 0;
  DAT_008ef510 = 0;
  DAT_008ef514 = 0;
  DAT_008ef508 = &DAT_00857354;
  DAT_008ef518 = 0;
  DAT_008ef520 = 0;
  DAT_008ef524 = 0;
  DAT_008ef528 = 0;
  DAT_008ef51c = &DAT_00857354;
  DAT_008ef52c = 0;
  DAT_008c07b4 = 0;
  DAT_008c07b8 = 0;
  DAT_008c07c0 = 1000000000;
  DAT_008c07c4 = 0;
  DAT_008c07c8 = 20000000;
  DAT_008c07cc = 0;
  DAT_008c07d0 = 450000000;
  DAT_008c07d4 = 0;
  DAT_008c07d8 = 2000000000;
  DAT_008c07dc = 0;
  DAT_008c07e0 = 100000000;
  DAT_008c07e4 = 0;
  fn_0052534c(&local_20,&fStack_1c,0x100000);
  DAT_008c07a8 = (int)((local_20 / fStack_1c) * 256.0);
  return;
}


