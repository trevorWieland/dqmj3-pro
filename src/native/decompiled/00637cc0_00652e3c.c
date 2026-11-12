#include "00637cc0_00652e3c.h"



void fn_00652e3c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  fn_0064fed4(*param_1,param_2,(int)*(char *)(param_1 + 1),param_3);
  return;
}



void fn_00652830(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = fn_00691efc(param_2);
  if (iVar1 != 0) {
    fn_006f1a78(*param_1,param_2,param_3,(int)*(char *)(param_1 + 1),0,2);
  }
  return;
}



void fn_006523e4(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = fn_00163a00(param_2);
  if (uVar1 == *(byte *)((int)param_1 + 5)) {
    fn_006f1a78(*param_1,param_2,param_3,(int)*(char *)(param_1 + 1),0,2);
  }
  return;
}



void fn_006509b8(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  fn_006f1a78(*param_1,param_2,param_3,(int)*(char *)(param_1 + 1),
               (int)*(short *)((int)param_1 + 6),2);
  return;
}



void fn_0064ff60(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  fn_006f1a78(*param_1,param_2,param_3,(int)*(char *)(param_1 + 1),0,2);
  return;
}



void fn_0064ee8c(undefined4 param_1,uint param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint *puVar2;
  undefined1 uVar3;
  ushort uVar4;
  bool bVar5;
  uint3 uVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  int iVar11;
  char *local_38;
  char *local_34;
  char *local_30;
  char local_2c [8];
  
  fn_0064fbd4();
  if (*(char *)(param_4 + 8) == '\0') {
    puVar2 = (uint *)(param_4 + 4);
    uVar4 = *(ushort *)puVar2;
    local_2c[0] = *(char *)(param_4 + 6);
    uVar6 = *(uint3 *)puVar2;
    uVar3 = *(undefined1 *)(param_4 + 8);
    uVar10 = *puVar2;
    bVar5 = true;
    iVar11 = 0;
    local_38 = (char *)0x0;
    local_34 = (char *)0x0;
    local_30 = (char *)0x0;
    iVar1 = (int)uVar10 >> 0x18;
    if (local_2c[0] < *(char *)(param_4 + 7)) {
      do {
        if ((((uint)uVar4 & 1 << ((int)local_2c[0] - ((int)((uint)uVar6 << 8) >> 0x18) & 0xffU)) !=
             0) && (iVar7 = fn_006f14ec(param_1), iVar7 != 0)) {
          iVar7 = *(int *)(iVar7 + 0x40c);
          if ((bVar5) || (iVar11 < iVar7)) {
            bVar5 = false;
            if (local_38 != local_34) {
              pcVar9 = local_38;
              if (local_34 < local_38) {
                do {
                  pcVar9 = pcVar9 + 1;
                } while (pcVar9 != local_34);
              }
              local_34 = local_38;
            }
            iVar11 = iVar7;
            pcVar9 = local_34;
            if (local_34 != local_30) goto joined_r0x0064efb8;
LAB_0064eff8:
            fn_0079aa0c(&local_38,local_34,local_2c);
          }
          else if (iVar7 == iVar11) {
            pcVar9 = local_34;
            if (local_34 == local_30) goto LAB_0064eff8;
joined_r0x0064efb8:
            local_34 = pcVar9 + 1;
            if (pcVar9 != (char *)0x0) {
              *pcVar9 = local_2c[0];
            }
          }
        }
        local_2c[0] = local_2c[0] + '\x01';
      } while (local_2c[0] < iVar1);
    }
    iVar7 = (int)((uint)uVar6 << 8) >> 0x18;
    for (iVar8 = iVar7; iVar8 < iVar1; iVar8 = (int)(char)((char)iVar8 + '\x01')) {
      pcVar9 = local_38;
      while( true ) {
        if (pcVar9 != local_34) {
          iVar11 = (int)*pcVar9;
        }
        if (pcVar9 == local_34 || iVar11 == iVar8) break;
        pcVar9 = pcVar9 + 1;
      }
      if (pcVar9 == local_34) {
        uVar10 = uVar10 & 0xffff0000 | uVar10 & 0xffff & ~(1 << (iVar8 - iVar7 & 0xffU));
      }
    }
    if ((*(char *)(param_4 + 8) == '\0') && ((uVar10 & 0xffff) != 0)) {
      *(short *)(param_4 + 4) = (short)uVar10;
      *(char *)(param_4 + 6) = (char)(uVar10 >> 0x10);
      *(char *)(param_4 + 7) = (char)(uVar10 >> 0x18);
      bVar5 = true;
      *(undefined1 *)(param_4 + 8) = uVar3;
    }
    else {
      bVar5 = false;
    }
    pcVar9 = local_38;
    if (local_34 < local_38) {
      do {
        pcVar9 = pcVar9 + 1;
      } while (pcVar9 != local_34);
    }
    uVar10 = fn_001008c4(local_38,(int)local_30 - (int)local_38,0);
    if (bVar5) {
      fn_00784690(param_1,param_4,param_1,uVar10 & 0xffff0000 | param_2 & 0xffff);
    }
  }
  return;
}



void fn_0064ded8(undefined4 param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  
  bVar2 = 0;
  iVar4 = 0x1a;
  pbVar3 = (byte *)(param_2 + 0x3a4);
  do {
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 1;
    if (bVar2 < bVar1) {
      bVar2 = bVar1;
    }
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}



void fn_0064d4d4(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = fn_00176e70(param_2);
  fn_00300f74(*(short *)(param_2 + 0x1e) * 100,uVar1);
  return;
}



void fn_0064d4a8(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = fn_00176dc0(param_2);
  fn_00300f74(*(short *)(param_2 + 0x1c) * 100,uVar1);
  return;
}



int fn_0064d364(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = fn_001639e4(param_2);
  if (iVar1 != 0x20) {
    if (iVar1 < 0x21) {
      if (iVar1 == 1) {
        uVar3 = fn_006f1be0(param_1,param_2,param_3,param_4,1,0);
        iVar1 = fn_0061fc90(param_2,param_4,uVar3,*(undefined4 *)(param_1 + 8),1);
        return -iVar1;
      }
      if (iVar1 != 0x14) {
        if (iVar1 != 0x1a) {
          return 0;
        }
        iVar1 = fn_006919b0(param_2,0x2f);
        if (iVar1 == 0) {
          return 0;
        }
        iVar1 = fn_006f14a4(param_1,param_4);
        if (iVar1 == 0) {
          return 0;
        }
        iVar2 = fn_00691f8c(param_2,0x2f);
        iVar1 = fn_00620dec(param_4,*(undefined4 *)(param_1 + 8),*(char *)(iVar1 + 0x8a) + iVar2,0)
        ;
        goto LAB_0064d440;
      }
    }
    else if (iVar1 != 0x26 && iVar1 != 0x27) {
      return 0;
    }
  }
  iVar1 = fn_006f1be0(param_1,param_2,param_3,param_4,1,0);
LAB_0064d440:
  return -iVar1;
}



void fn_00637cc0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_3 + param_1 * 0x418 + -0x4080;
  iVar1 = fn_006f4520(iVar3);
  iVar2 = fn_006f2fa8(param_3 + param_2 * 0x418 + -0x4080);
  iVar3 = fn_006f44fc(iVar3,0x1b7);
  if (iVar3 != 0) {
    iVar2 = iVar2 / 2;
  }
  iVar2 = (iVar1 - iVar2 / 2) / 2;
  if (iVar2 < 1) {
    fn_0063a510(0,1,param_4);
  }
  else {
    iVar1 = (int)(iVar1 + ((uint)(iVar1 >> 0x1f) >> 0x1c)) >> 4;
    if (iVar1 < iVar2) {
      fn_0063a510((int)(-iVar2 + ((uint)(-iVar2 >> 0x1f) >> 0x1c)) >> 4,
                   (int)(iVar2 + ((uint)(iVar2 >> 0x1f) >> 0x1c)) >> 4,param_4);
      fn_0063a510(0xffffffff,1,param_4);
    }
    else {
      fn_0063a510(0,iVar1,param_4);
    }
  }
  return;
}


