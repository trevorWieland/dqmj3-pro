#include "single_0068e988_r.h"


extern undefined4 u_rom__data_Race_Null__s_c_null_ra_008c732a;

void fn_0068e988(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_98 [128];
  
  iVar5 = *param_1;
  fn_001cc0f4(*(undefined4 *)(iVar5 + 0x58),0);
  fn_0012d73c(*(undefined4 *)(iVar5 + 0x2cc));
  *(undefined4 *)(iVar5 + 0x2cc) = 0;
  fn_0012148c();
  cVar1 = *(char *)(iVar5 + 0x2a4);
  uVar2 = fn_006adb48(*(undefined4 *)(iVar5 + 0x40),*(undefined4 *)(iVar5 + 0x60));
  fn_00101a50(auStack_98,0x80,u_rom__data_Race_Null__s_c_null_ra_008c732a,uVar2,cVar1 + 0x41);
  uVar2 = fn_001287b4();
  uVar2 = fn_0011c184(auStack_98,uVar2,4,5);
  *(undefined4 *)(iVar5 + 0x2cc) = uVar2;
  fn_00145ac0();
  fn_0024c760();
  fn_001cc13c(*(undefined4 *)(iVar5 + 0x58),1);
  iVar3 = fn_006b6bc4(*(undefined4 *)(*DAT_008977e8 + 0x2c));
  uVar6 = 0;
  if (0 < iVar3) {
    do {
      iVar4 = fn_006b71a8(*(undefined4 *)(*DAT_008977e8 + 0x2c),uVar6 & 0xff);
      uVar2 = fn_00145ac0(*(undefined4 *)(*DAT_008977e8 + 0x2cc));
      fn_002487f4(uVar2,iVar4);
      uVar2 = fn_006a8a34(*(undefined4 *)(iVar5 + 0x58),*(undefined1 *)(iVar4 + 0x104));
      fn_001cc2a8(*(undefined4 *)(iVar5 + 0x58),*(undefined1 *)(iVar4 + 0x104),uVar2);
      fn_006a6980(iVar4);
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar3);
  }
  fn_001cc13c(*(undefined4 *)(iVar5 + 0x58),0);
  fn_0024ab74(*(undefined4 *)(iVar5 + 0x2c));
  uVar2 = fn_00145ac0(*(undefined4 *)(iVar5 + 0x2cc));
  fn_0024a548(*(undefined4 *)(iVar5 + 0x28),*(undefined4 *)(iVar5 + 0x2c),uVar2);
  fn_001cc0e0(*(undefined4 *)(iVar5 + 0x58),0x708);
  fn_001fe9a8(*(undefined4 *)(iVar5 + 0x2f0),1);
  iVar3 = fn_001828f0(*(undefined4 *)(**(int **)(iVar5 + 0x2f0) + 0xa0),s_Null_rank_008c442e);
  *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe | 1;
  return;
}


