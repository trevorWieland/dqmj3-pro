#include "00348e8c_00349aa4.h"



void fn_00349aa4(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined4 local_28 [4];
  
  uVar7 = DAT_00897800;
  cVar2 = *(char *)(*(int *)(param_1 + 0xb0) + 8);
  iVar3 = fn_006b64b0(*(undefined4 *)(DAT_00897804 + 8));
  iVar4 = fn_006b6210(*(undefined4 *)(DAT_00897804 + 8));
  if (cVar2 == '\0') {
    bVar8 = iVar3 == 0;
    iVar1 = iVar3;
    if (0 < iVar3) {
      param_3 = 999999999;
      iVar1 = 999999999 - iVar4;
      bVar8 = iVar4 == 999999999;
    }
    if (bVar8 || iVar1 < 0 != (0 < iVar3 && SBORROW4(param_3,iVar4))) goto LAB_00349b1c;
  }
  else {
    bVar8 = iVar4 == 0;
    iVar1 = iVar4;
    iVar5 = iVar4;
    if (0 < iVar4) {
      iVar5 = 9999999;
      iVar1 = 9999999 - iVar3;
      bVar8 = iVar3 == 9999999;
    }
    if (bVar8 || iVar1 < 0 != (0 < iVar4 && SBORROW4(iVar5,iVar3))) {
LAB_00349b1c:
      uVar9 = DAT_00894420;
      goto LAB_00349b20;
    }
  }
  uVar9 = DAT_00894418;
LAB_00349b20:
  uVar6 = fn_0016ba34(uVar7,L"rom:/data/Message/GoldBankMessage.mes",(char *)&DAT_0086496c,0);
  fn_0031b78c(param_1,0,2,uVar6);
  local_28[0] = uVar9;
  fn_002c37e0(param_1,0,local_28);
  uVar6 = fn_0016ba34(uVar7,L"rom:/data/Message/GoldBankMessage.mes",(char *)&DAT_00864960,0);
  fn_0031b78c(param_1,1,2,uVar6);
  local_28[0] = uVar9;
  fn_002c37e0(param_1,1,local_28);
  uVar7 = fn_0016ba34(uVar7,L"rom:/data/Message/GoldBankMessage.mes",(char *)&DAT_00864954,0);
  fn_0031b78c(param_1,2,2,uVar7);
  local_28[0] = uVar9;
  fn_002c37e0(param_1,2,local_28);
  return;
}



void fn_00349398(int param_1)

{
  undefined4 uVar1;
  undefined1 auStack_24 [24];
  
  uVar1 = fn_006b6210(*(undefined4 *)(DAT_00897804 + 8));
  fn_0018a618(auStack_24,10,9,&DAT_00349414,uVar1);
  fn_00190d50(*(undefined4 *)(param_1 + 0xb8),auStack_24);
  uVar1 = fn_006b64b0(*(undefined4 *)(DAT_00897804 + 8));
  fn_0018a618(auStack_24,10,9,&DAT_00349414,uVar1);
  fn_00190d50(*(undefined4 *)(param_1 + 0xb4),auStack_24);
  return;
}



void fn_003492e4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  *puVar1 = &DAT_00825450;
  *(undefined1 *)(puVar1 + 2) = 0;
  puVar1[4] = 0;
  puVar1[3] = 0xffffffff;
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 6) = 0;
  *(undefined1 *)((int)puVar1 + 0x19) = 0;
  *(undefined1 *)((int)puVar1 + 0x1a) = 1;
  *(undefined1 *)((int)puVar1 + 0x1b) = 1;
  return;
}



void fn_003492d0(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}



undefined1 fn_003492bc(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + 0x19);
  *(undefined1 *)(param_1 + 0x19) = 0;
  return uVar1;
}



undefined1 fn_003492a8(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x18) = 0;
  return uVar1;
}



void fn_00349244(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_00825438;
  uVar1 = param_1[4];
  uVar2 = uVar1;
  if ((uint)param_1[5] < uVar1) {
    do {
      uVar2 = uVar2 + 8;
    } while (uVar2 != param_1[5]);
  }
  fn_001008c4(uVar1,(int)(param_1[6] - uVar1) >> 3,0);
  fn_00395750(param_1);
  fn_002feef8();
  return;
}



undefined4 * fn_003490e0(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint *puVar10;
  uint uVar11;
  undefined4 uVar12;
  uint local_20;
  uint local_1c [3];
  
  iVar1 = fn_00145b00(0x20,&DAT_00812c8c);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)fn_0039571c(iVar1,param_1);
  puVar2[3] = 0;
  *puVar2 = &DAT_00825438;
  puVar2[4] = 0;
  puVar10 = puVar2 + 4;
  puVar2[5] = 0;
  puVar2[6] = 0;
  *(undefined1 *)(puVar2 + 7) = 0;
  *(undefined1 *)((int)puVar2 + 0x1d) = 0;
  local_20 = 8;
  if ((uint)((int)(puVar2[6] - puVar2[4]) >> 3) < 8) {
    uVar11 = (int)(puVar2[5] - puVar2[4]) >> 3;
    local_1c[0] = uVar11 + (uVar11 >> 1) + (uVar11 >> 3);
    if (local_1c[0] < uVar11 + 0x20) {
      local_1c[0] = uVar11 + 0x20;
    }
    puVar7 = local_1c;
    if (local_1c[0] < 9) {
      puVar7 = &local_20;
    }
    uVar11 = *puVar7;
    puVar3 = (undefined4 *)fn_00100fc6(uVar11 << 3,0);
    puVar9 = (undefined4 *)puVar2[5];
    puVar4 = puVar3;
    for (puVar8 = (undefined4 *)*puVar10; puVar8 != puVar9; puVar8 = puVar8 + 2) {
      if (puVar4 != (undefined4 *)0x0) {
        uVar12 = puVar8[1];
        *puVar4 = *puVar8;
        puVar4[1] = uVar12;
      }
      puVar4 = puVar4 + 2;
    }
    uVar5 = *puVar10;
    uVar6 = uVar5;
    if ((uint)puVar2[5] < uVar5) {
      do {
        uVar6 = uVar6 + 8;
      } while (uVar6 != puVar2[5]);
    }
    fn_001008c4(uVar5,(int)(puVar2[6] - uVar5) >> 3,0);
    uVar6 = *puVar10;
    puVar2[4] = puVar3;
    puVar2[5] = (puVar2[5] - uVar6 & 0xfffffff8) + (int)puVar3;
    puVar2[6] = puVar3 + uVar11 * 2;
  }
  return puVar2;
}



void fn_00349084(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  fn_003956e0();
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar1 = *(uint *)(param_1 + 0x14);
  uVar3 = *(uint *)(param_1 + 0x10);
  if (uVar3 != uVar1) {
    uVar2 = uVar3;
    if (uVar1 <= uVar3) {
      do {
        uVar2 = uVar2 + 8;
      } while (uVar2 != uVar1);
    }
    *(uint *)(param_1 + 0x14) = uVar1 - (uVar1 - uVar3 & 0xfffffff8);
  }
  *(undefined1 *)(param_1 + 0x1c) = 0;
  return;
}



void fn_00348e8c(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 uVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  
  puVar11 = (uint *)(param_1 + 0x14);
  puVar1 = (undefined4 *)*puVar11;
  puVar12 = (uint *)(param_1 + 0x10);
  if (puVar1 != *(undefined4 **)(param_1 + 0x18)) {
    *puVar11 = (uint)(puVar1 + 2);
    if (puVar1 != (undefined4 *)0x0) {
      uVar10 = param_2[1];
      *puVar1 = *param_2;
      puVar1[1] = uVar10;
    }
    return;
  }
  uVar4 = (int)((int)puVar1 - *puVar12) >> 3;
  if (uVar4 < (uint)((int)((int)*(undefined4 **)(param_1 + 0x18) - *puVar12) >> 3)) {
    *puVar11 = (uint)(puVar1 + 2);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = puVar1[-2];
      puVar1[1] = puVar1[-1];
    }
    puVar7 = puVar1 + -2;
    puVar8 = puVar1;
    if (puVar1 < puVar7) {
      iVar5 = (int)puVar7 - (int)puVar1;
      if (0 < iVar5) {
        if (iVar5 * 0x10000000 < 0) {
          puVar7 = puVar1 + -4;
          puVar8 = puVar1 + -2;
          *puVar8 = *puVar7;
          puVar1[-1] = puVar1[-3];
        }
        for (iVar5 = iVar5 >> 4; iVar5 != 0; iVar5 = iVar5 + -1) {
          uVar10 = puVar7[-1];
          puVar8[-2] = puVar7[-2];
          puVar8[-1] = uVar10;
          uVar10 = puVar7[-3];
          puVar8[-4] = puVar7[-4];
          puVar8[-3] = uVar10;
          puVar8 = puVar8 + -4;
          puVar7 = puVar7 + -4;
        }
      }
    }
    else {
      while (puVar1 != puVar7) {
        uVar10 = puVar7[-1];
        puVar8[-2] = puVar7[-2];
        puVar8[-1] = uVar10;
        puVar8 = puVar8 + -2;
        puVar7 = puVar7 + -2;
      }
    }
    uVar10 = param_2[1];
    *puVar1 = *param_2;
    puVar1[1] = uVar10;
    return;
  }
  uVar6 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
  uVar13 = uVar4 + 0x20;
  if (uVar4 + 0x20 <= uVar6) {
    uVar13 = uVar6;
  }
  puVar2 = (undefined4 *)fn_00100fc6(uVar13 << 3,0);
  puVar8 = puVar2;
  for (puVar7 = (undefined4 *)*puVar12; puVar7 != puVar1; puVar7 = puVar7 + 2) {
    if (puVar8 != (undefined4 *)0x0) {
      uVar10 = puVar7[1];
      *puVar8 = *puVar7;
      puVar8[1] = uVar10;
    }
    puVar8 = puVar8 + 2;
  }
  puVar7 = (undefined4 *)(((int)puVar1 - *puVar12 & 0xfffffff8) + (int)puVar2);
  if (puVar7 != (undefined4 *)0x0) {
    uVar10 = param_2[1];
    *puVar7 = *param_2;
    puVar7[1] = uVar10;
  }
  puVar8 = (undefined4 *)*puVar11;
  puVar7 = (undefined4 *)(((int)puVar1 - *puVar12 & 0xfffffff8) + (int)puVar2);
  for (; puVar1 != puVar8; puVar1 = puVar1 + 2) {
    puVar3 = puVar7 + 2;
    if (puVar3 != (undefined4 *)0x0) {
      uVar10 = puVar1[1];
      *puVar3 = *puVar1;
      puVar7[3] = uVar10;
    }
    puVar7 = puVar3;
  }
  uVar6 = *puVar12;
  uVar9 = *puVar11;
  uVar4 = uVar6;
  if (uVar9 < uVar6) {
    do {
      uVar4 = uVar4 + 8;
    } while (uVar4 != uVar9);
  }
  fn_001008c4(uVar6,(int)(*(int *)(param_1 + 0x18) - uVar6) >> 3,0);
  *(undefined4 **)(param_1 + 0x18) = puVar2 + uVar13 * 2;
  *puVar11 = (uint)(puVar2 + ((int)(uVar9 - uVar6) >> 3) * 2 + 2);
  *puVar12 = (uint)puVar2;
  return;
}


