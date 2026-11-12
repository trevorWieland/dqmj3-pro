#include "0029612c_002969c0a.h"



undefined4 fn_00296340(void)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined8 uVar10;
  uint local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  int iStack_24;
  
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  fn_00123d00(&local_28,0x7df,1,5);
  fn_006f5e08(&local_30,DAT_00897850);
  fn_006d3d30(&local_38,&local_30);
  uVar2 = (ulonglong)(local_38 - local_28) * 1000000;
  uVar7 = (local_34 - (iStack_24 + (uint)(local_38 < local_28))) * 1000000 + (int)(uVar2 >> 0x20);
  iVar1 = (int)uVar7 >> 0x1f;
  lVar4 = (ulonglong)uVar7 * 0x48f948e3 +
          CONCAT44(iVar1 * 0x48f948e3,(int)((uVar2 & 0xffffffff) * 0x48f948e3 >> 0x20));
  uVar9 = (uint)((ulonglong)lVar4 >> 0x20);
  lVar3 = (uVar2 & 0xffffffff) * 0x683fff6f;
  uVar5 = (int)((ulonglong)lVar3 >> 0x20) + (uint)CARRY4((uint)lVar3,(uint)lVar4);
  iVar6 = iVar1 * 0x683fff6f + (int)((ulonglong)uVar7 * 0x683fff6f >> 0x20) +
          ((int)uVar5 >> 0x1f) + ((int)uVar9 >> 0x1f) + (uint)CARRY4(uVar5,uVar9) +
          (uint)CARRY4(uVar5 + uVar9,(uint)((ulonglong)uVar7 * 0x683fff6f));
  uVar5 = iVar6 >> 0xd;
  uVar10 = fn_0011c134(uVar5 + -iVar1,(iVar6 >> 0x1f) + (uint)CARRY4(uVar5,-iVar1),7,0);
  uVar8 = 0xc;
  fn_0011c134((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0xc,0);
  return uVar8;
}



void fn_0029630c(undefined4 param_1)

{
  undefined1 auStack_10 [8];
  
  fn_006f5e08(auStack_10,DAT_00897850);
  fn_006d3d30(param_1,auStack_10);
  return;
}



undefined4 fn_002962f0(void)

{
  int iVar1;
  
  iVar1 = fn_0068c7f4(DAT_008977e8);
  return *(undefined4 *)(iVar1 + 4);
}



void fn_00296234(int param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  uVar7 = param_2[1] - *param_2;
  puVar2 = (undefined1 *)fn_001287d4(uVar7,&DAT_00812c8c);
  if (uVar7 != 0) {
    bVar8 = (uVar7 & 1) != 0;
    puVar4 = puVar2 + -1;
    if (bVar8) {
      *puVar2 = *(undefined1 *)*param_2;
      puVar4 = puVar2;
    }
    uVar3 = (uint)bVar8;
    for (uVar6 = uVar7 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
      iVar5 = uVar3 + 1;
      puVar1 = (undefined1 *)(*param_2 + uVar3);
      uVar3 = uVar3 + 2;
      puVar4[1] = *puVar1;
      puVar4 = puVar4 + 2;
      *puVar4 = *(undefined1 *)(*param_2 + iVar5);
    }
  }
  fn_00301a9c(param_1 + 0x3c,puVar2,uVar7);
  fn_002feca8(puVar2);
  return;
}



void fn_0029612c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  uVar1 = fn_0067a1d0(param_2);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  if (*(int *)(param_1 + 0x34) != 0) {
    fn_002feca8(*(int *)(param_1 + 0x34) + -8);
  }
  iVar3 = *(int *)(param_1 + 0x38);
  puVar2 = (undefined4 *)fn_001287d4(iVar3 * 0x128 + 8,&DAT_00812c8c);
  uVar1 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0x128;
    puVar2[1] = iVar3;
    uVar1 = fn_00101a1c(puVar2 + 2,&LAB_0066e074,0x128,iVar3);
  }
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  fn_0067a1a8(param_2,uVar1);
  return;
}


