#include "00307cc4_00308f94a.h"



void fn_00308580(int param_1)

{
  fn_0037fc58();
  if (((uint)*(byte *)(*(int *)(param_1 + 0xac) + 8) == *(uint *)(param_1 + 0xb0)) &&
     ((uint)*(byte *)(*(int *)(param_1 + 0xac) + 9) == *(uint *)(param_1 + 0xb4))) {
    return;
  }
  fn_003083fc(param_1);
  fn_0068ab44(param_1,0x100094f);
  return;
}



void fn_00308550(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xc0,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003085d0(iVar1,param_1);
  return;
}



void fn_003084e8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x94));
  uVar1 = fn_001827b0(uVar1,(char *)&DAT_0030853c);
  uVar2 = fn_0022f584(*(undefined4 *)
                        (&DAT_007c6d14 +
                        (uint)*(byte *)(*(int *)(param_1 + 0xac) + 9) * 4 +
                        (uint)*(byte *)(*(int *)(param_1 + 0xac) + 8) * 0xc),0);
  fn_00190d50(uVar1,uVar2);
  return;
}



void fn_003083fc(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  bool bVar7;
  
  uVar2 = fn_00178f9c(*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x94));
  uVar2 = fn_001827b0(uVar2,(char *)&DAT_0030853c);
  uVar3 = fn_0022f584(*(undefined4 *)
                        (&DAT_007c6d14 +
                        (uint)*(byte *)(*(int *)(param_1 + 0xac) + 9) * 4 +
                        (uint)*(byte *)(*(int *)(param_1 + 0xac) + 8) * 0xc),0);
  fn_00190d50(uVar2,uVar3);
  fn_0037fba4(param_1);
  iVar4 = fn_00178f9c(*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x94));
  piVar6 = *(int **)(iVar4 + 0x10);
  uVar5 = 0;
  bVar1 = *(byte *)(*(int *)(param_1 + 0xac) + 8);
  do {
    iVar4 = (**(code **)(*piVar6 + 0x2c))(piVar6,(&DAT_007c6d1c)[uVar5 * 3],1);
    bVar7 = uVar5 == bVar1;
    uVar5 = uVar5 + 1;
    *(byte *)(iVar4 + 0x44) = bVar7 | *(byte *)(iVar4 + 0x44) & 0xfe;
  } while (uVar5 < 4);
  *(uint *)(param_1 + 0xb0) = (uint)*(byte *)(*(int *)(param_1 + 0xac) + 8);
  *(uint *)(param_1 + 0xb4) = (uint)*(byte *)(*(int *)(param_1 + 0xac) + 9);
  return;
}



void fn_00308330(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x94,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00308390(iVar1,param_1);
  return;
}



void fn_00308390(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = &DAT_00821aec;
  puVar1[0x19] = *(undefined4 *)(param_2 + 8);
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0xffffffff;
  puVar1[0x1d] = 0;
  puVar1[0x1c] = 0xffffffff;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  return;
}



void fn_00307d34(int param_1)

{
  fn_0016a43c(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x70));
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
                    /* WARNING: Subroutine does not return */
  fn_001482f4(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x6c));
}



void fn_00307cc4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0069e7cc();
  puVar1[5] = 0;
  *puVar1 = &DAT_00821abc;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 1;
  puVar1[0xe] = 0;
  puVar1[0xd] = 1;
  puVar1[0xf] = 0;
  *(undefined1 *)(puVar1 + 0x10) = 0;
  *(undefined1 *)((int)puVar1 + 0x41) = 0;
  return;
}


