#include "001be790_001bedd4.h"



void fn_001bedd4(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  iVar1 = DAT_008bf51c;
  *(undefined2 *)(DAT_008bf51c + 0xc81e) = param_2;
  puVar4 = (undefined4 *)(DAT_008bf518 + 0x2a10);
  puVar2 = (undefined4 *)(DAT_008bf518 + 0x2a18);
  *puVar4 = 0;
  *puVar2 = 0xffffffff;
  uVar3 = fn_00192124(84000);
  *puVar4 = uVar3;
  fn_001921a8(param_1,iVar1,0xe4c0,0,1,fn_001badac);
  return;
}



int fn_001becc4(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *local_44 [2];
  uint local_3c [3];
  uint local_30;
  uint local_2c;
  undefined4 uStack_28;
  undefined *puStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar3 = *(int *)(param_1 + 0x6c);
  uStack_28 = 0;
  puStack_24 = &DAT_00200080;
  uStack_20 = 0;
  uStack_1c = 0;
  fn_00734b4c(&uStack_28,0x10,1);
  fn_0012bc84(0x202,local_44);
  param_3 = param_3 + ((uint)local_44[0] & 0xfffffffc);
  local_30 = 0xffffffff;
  local_2c = 0xffffffff;
  local_3c[0] = 0xffffffff;
  local_44[0] = local_3c;
  fn_006b3f70(param_2,&DAT_008e9938,*(undefined4 *)(param_1 + 0x68),&local_30,&local_2c);
  iVar1 = 0;
  if (local_30 != 0xffffffff) {
    iVar1 = (local_30 & 0xfffffffc) + param_3;
  }
  if ((local_2c != 0xffffffff) && (1 < *(int *)(param_2 + 0x14))) {
    iVar2 = *(int *)(iVar3 + 0x710);
    *(int *)(iVar3 + 0x710) = iVar2 + 1;
    *(uint *)(iVar3 + iVar2 * 4 + 0x714) = (local_2c & 0xfffffffc) + param_3;
  }
  if (local_3c[0] != 0xffffffff) {
    iVar2 = *(int *)(iVar3 + 0x738);
    *(int *)(iVar3 + 0x738) = iVar2 + 1;
    *(uint *)(iVar3 + iVar2 * 4 + 0x73c) = (local_3c[0] & 0xfffffffc) + param_3;
  }
  return iVar1;
}



void fn_001bec64(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = fn_001851bc();
  if (iVar2 == 0xb) {
    iVar2 = fn_00192114();
    *(undefined4 *)(iVar2 + 200) = 5;
  }
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[3] = 0x19d818;
  *(undefined1 *)(param_1 + 4) = 0;
  while (param_1[9] == 0) {
    param_1[9] = 1;
    iVar2 = fn_00192114();
    *(undefined4 *)(iVar2 + 0xd0) = *(undefined4 *)(iVar2 + 200);
    *(undefined4 *)(iVar2 + 0xd4) = *(undefined4 *)(iVar2 + 0xcc);
    if (*(code **)(*param_1 + 0x14) == (code *)0x0) {
      iVar2 = 3;
    }
    else {
      iVar2 = (**(code **)(*param_1 + 0x14))();
    }
    param_1[1] = iVar2;
    if (iVar2 == 10) {
      return;
    }
  }
  if (param_1[9] != 1) {
    return;
  }
  param_1[9] = 2;
  if (param_1[2] == 0) {
    *(undefined1 *)((int)param_1 + 0x11) = 0;
    iVar2 = fn_00192114();
    param_1[1] = *(int *)(iVar2 + 0xd0);
    param_1[2] = *(int *)(iVar2 + 0xd4);
  }
  iVar2 = param_1[1];
  if (iVar2 == 10) {
    return;
  }
  iVar3 = param_1[2];
  iVar1 = fn_00192114();
  *(undefined1 *)(iVar1 + 0xc0) = 0;
  iVar1 = fn_00192114();
  if (*(int *)(iVar1 + 200) == 0 || *(int *)(iVar1 + 200) == 10) {
    iVar1 = fn_00192114();
    *(int *)(iVar1 + 200) = iVar2;
    iVar2 = fn_00192114();
    *(int *)(iVar2 + 0xcc) = iVar3;
  }
  if ((code *)param_1[10] == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0019d918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_1[10])(param_1,param_1[2]);
  return;
}



undefined4 * fn_001beb90(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)fn_00145b00(0x60,&DAT_00812c8c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &DAT_007c11d8;
    puVar2 = (undefined4 *)fn_00171634();
    uVar3 = puVar2[1];
    uVar4 = puVar2[2];
    puVar1[1] = *puVar2;
    puVar1[2] = uVar3;
    puVar1[3] = uVar4;
    puVar2 = (undefined4 *)fn_00171634();
    uVar3 = puVar2[1];
    uVar4 = puVar2[2];
    puVar1[4] = *puVar2;
    puVar1[5] = uVar3;
    puVar1[6] = uVar4;
    puVar1[7] = 0;
    puVar1[8] = 0;
    *(undefined1 *)(puVar1 + 9) = 0;
    *(undefined1 *)((int)puVar1 + 0x25) = 0;
    *(undefined1 *)((int)puVar1 + 0x26) = 0;
    puVar1[10] = 0;
    puVar2 = (undefined4 *)fn_00171634();
    uVar3 = puVar2[1];
    uVar4 = puVar2[2];
    puVar1[0xb] = *puVar2;
    puVar1[0xc] = uVar3;
    puVar1[0xd] = uVar4;
    puVar1[0xe] = 0xbf800000;
    puVar1[0x12] = 0;
    puVar1[0x11] = 0xffffffff;
    fn_006f94d0();
    *(undefined2 *)((int)puVar1 + 0x4e) = 0xe10;
    *(undefined2 *)(puVar1 + 0x14) = 0xe10;
    *(undefined2 *)((int)puVar1 + 0x52) = 0xe10;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0xffffffff;
    *(undefined1 *)(puVar1 + 0x17) = 0;
  }
  return puVar1;
}



undefined4 fn_001be998(byte *param_1,int *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  bool bVar12;
  undefined1 auStack_148 [264];
  undefined1 auStack_40 [24];
  uint local_28;
  
  uVar8 = 2;
  if (DAT_008bf50e == '\0') {
    iVar1 = 0x42504643;
  }
  else {
    iVar1 = 0x4e504643;
  }
  if (*param_2 == iVar1) {
    uVar2 = (uint)*(ushort *)(param_1 + 2);
    uVar3 = uVar2;
    if (uVar2 != param_3) {
      uVar3 = param_3;
    }
    if (uVar2 < param_3) {
      uVar3 = param_3 - 1 & 0xffff;
    }
    if ((uVar2 != param_3) && ((int)uVar3 < (int)(param_1[1] - 1))) {
      uVar8 = 0;
      iVar1 = (int)(param_3 + ((uint)((int)param_3 >> 0x1f) >> 0x1b)) >> 5;
      local_28 = (int)param_3 % 0x20;
      iVar6 = 0;
      *(uint *)(param_1 + iVar1 * 4 + 0x14) =
           *(uint *)(param_1 + iVar1 * 4 + 0x14) & ~(1 << (local_28 & 0xff));
      bVar12 = *(ushort *)(param_1 + 2) != param_3;
      if (*(ushort *)(param_1 + 2) < param_3) {
        param_3 = param_3 - 1 & 0xffff;
      }
      uVar3 = 0;
      if (bVar12) {
        uVar3 = param_3;
      }
      piVar10 = (int *)(((uint)*param_1 * 0x60 + 0x18) * uVar3 + *(int *)(param_1 + 0x24));
      if ((short)param_2[5] != 0) {
        do {
          if ((int)(uint)*param_1 <= iVar6) break;
          if ((param_2[((int)(iVar6 + ((uint)(iVar6 >> 0x1f) >> 0x1b)) >> 5) + 1] &
              1 << (iVar6 % 0x20 & 0xffU)) != 0) {
            piVar9 = piVar10 + iVar6 * 0x18 + 6;
            if (DAT_008bf50e == '\0') {
              fn_001b1e58(piVar9,param_2 + iVar6 * 0x1c + 6);
            }
            else {
              fn_001b1e74();
            }
            iVar4 = fn_001b4c18(0,piVar9,0x60);
            if (iVar4 != 0) goto LAB_001beb7c;
            fn_001b1548(auStack_148,piVar9,1,piVar10 + iVar6 * 0x18 + 0x18);
            iVar4 = fn_001aff7c(auStack_40);
            if (((iVar4 != 0) || (iVar4 = fn_001b00bc(auStack_40), iVar4 != 0)) ||
               (iVar4 = fn_001b1e90(auStack_148,1), iVar4 == 0)) goto LAB_001beb7c;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)(uint)*(ushort *)(param_2 + 5));
      }
      iVar6 = param_2[1];
      iVar4 = param_2[2];
      iVar5 = param_2[3];
      iVar7 = param_2[4];
      iVar11 = param_2[5];
      *piVar10 = *param_2;
      piVar10[1] = iVar6;
      piVar10[2] = iVar4;
      piVar10[3] = iVar5;
      piVar10[4] = iVar7;
      piVar10[5] = iVar11;
      *(uint *)(param_1 + iVar1 * 4 + 4) =
           *(uint *)(param_1 + iVar1 * 4 + 4) | 1 << (local_28 & 0xff);
    }
  }
  else {
LAB_001beb7c:
    uVar8 = 6;
  }
  return uVar8;
}



void fn_001be988(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  fn_0030233c();
  return;
}



undefined4 fn_001be790(int param_1,int *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  byte *pbVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  fn_00158f6c(&DAT_008d0454,0x604);
  fn_00301a9c(&DAT_008d0854,&DAT_008d0b60,0x200);
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar8 = 0;
    while( true ) {
      pbVar3 = (byte *)(param_1 + iVar8);
      uVar6 = (uint)*pbVar3;
      if (uVar6 == 0 || uVar6 == 0xe3) break;
      iVar9 = 1;
      puVar4 = &DAT_008d0454 + DAT_008d0a54;
      if (uVar6 == 0xe0) {
        iVar9 = 2;
        *puVar4 = *(ushort *)(&DAT_007d29c4 + (pbVar3[1] + 0xe6) * 2);
      }
      else if (uVar6 == 0xe1) {
        iVar9 = 2;
        *puVar4 = *(ushort *)(&DAT_007d29c4 + (pbVar3[1] + 0x118) * 2);
      }
      else if (uVar6 == 0xe2) {
        iVar9 = 2;
        *puVar4 = *(ushort *)(&DAT_007d29c4 + (pbVar3[1] + 0x185) * 2);
      }
      else {
        if (uVar6 == 0xe4) {
          iVar9 = 3;
          uVar1 = CONCAT11(pbVar3[1],pbVar3[2]);
        }
        else {
          uVar1 = *(ushort *)(&DAT_007d29c4 + (uVar6 - 1 & 0xffff) * 2);
        }
        *puVar4 = uVar1;
      }
      if (DAT_008d0a56 != '\0') {
        uVar1 = *puVar4;
        if (uVar1 - 0x61 < 0x1a) {
          uVar1 = uVar1 - 0x20;
        }
        else {
          iVar7 = 0;
          do {
            if ((uint)(ushort)(&DAT_007d46b8)[iVar7 * 2] == (uint)uVar1) {
              uVar1 = (&DAT_007d46ba)[iVar7 * 2];
              break;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < 0x17);
        }
        *puVar4 = uVar1;
        DAT_008d0a56 = '\0';
      }
      iVar8 = iVar8 + iVar9;
      DAT_008d0a54 = DAT_008d0a54 + 1;
    }
    uVar6 = 0;
    do {
      if ((&DAT_008d0454)[uVar6] == 0) {
        uVar5 = uVar6;
        break;
      }
      uVar6 = uVar6 + 1 & 0xffff;
      uVar5 = 0;
    } while (uVar6 < 0x200);
    iVar8 = uVar5 * 2 + 2;
    uVar2 = fn_0072a52c(iVar8,1);
    fn_00301a9c(uVar2,&DAT_008d0454,iVar8);
    if (param_2 != (int *)0x0) {
      *param_2 = iVar8;
    }
  }
  return uVar2;
}


