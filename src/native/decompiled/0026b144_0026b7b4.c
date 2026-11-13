#include "0026b144_0026b7b4.h"



void fn_0026b7b4(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  uVar1 = fn_00174828(DAT_008977e4);
  uVar2 = fn_00174834(DAT_008977e4);
  fn_001c3ca0();
  fn_0061a2d0(uVar1,uVar2);
  puVar3 = (undefined4 *)fn_00145b00(4,&DAT_00812c8c);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = &DAT_0083f698;
  }
  fn_005df93c(DAT_008977e4,puVar3);
  return;
}



undefined4 fn_0026b74c(void)

{
  undefined4 local_10;
  undefined4 local_c [3];
  
  local_c[0] = 0;
  local_10 = 0xff000000;
  fn_0068869c(DAT_00897808,&local_10,local_c,10);
  return 1;
}



void fn_0026b614(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  short *psVar7;
  undefined4 uVar8;
  bool bVar9;
  char local_2c [4];
  undefined1 local_28 [8];
  
  iVar1 = fn_00174828(DAT_008977e4);
  uVar2 = fn_0017484c(DAT_008977e4);
  local_2c[0] = '\"';
  do {
    psVar7 = (short *)(iVar1 + local_2c[0] * 8 + 0x4180);
    iVar3 = fn_0069ccf8((int)*psVar7);
    if (iVar3 != 0) {
      uVar4 = fn_00313a90(uVar2,local_2c);
      iVar3 = (int)local_2c[0];
      uVar6 = iVar3 - 0x10;
      bVar9 = uVar6 < 4;
      if (!bVar9) {
        uVar6 = iVar3 - 0x18;
      }
      if ((bVar9 || uVar6 < 4) || (iVar3 == 0x20 || iVar3 == 0x22)) {
        uVar8 = 1;
      }
      else {
        uVar8 = 0;
      }
      uVar5 = fn_00190e98(DAT_008977e4);
      uVar8 = fn_00190ec0(uVar5,uVar8);
      local_28[0] = 0x22;
      uVar5 = fn_00182988(DAT_008977e4);
      uVar5 = fn_0026a558(uVar5,local_28);
      iVar3 = (int)local_2c[0];
      uVar6 = iVar3 - 0x10;
      bVar9 = uVar6 < 4;
      if (!bVar9) {
        uVar6 = iVar3 - 0x18;
      }
      if ((bVar9 || uVar6 < 4) || (iVar3 == 0x20 || iVar3 == 0x22)) {
        uVar6 = 1;
      }
      else {
        uVar6 = 0;
      }
      fn_0020492c(uVar4,(int)*psVar7,uVar5,uVar8,uVar6 ^ 1);
    }
    local_2c[0] = local_2c[0] + '\x01';
  } while (local_2c[0] != '$');
  return;
}



void fn_0026b5f8(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  short *psVar7;
  undefined4 uVar8;
  bool bVar9;
  char acStack_2c [4];
  undefined1 auStack_28 [12];
  
  fn_0026b4b8();
  fn_001c2e10();
  iVar1 = fn_00174828(DAT_008977e4);
  uVar2 = fn_0017484c(DAT_008977e4);
  acStack_2c[0] = '\"';
  do {
    psVar7 = (short *)(iVar1 + acStack_2c[0] * 8 + 0x4180);
    iVar3 = fn_0069ccf8((int)*psVar7);
    if (iVar3 != 0) {
      uVar4 = fn_00313a90(uVar2,acStack_2c);
      iVar3 = (int)acStack_2c[0];
      uVar6 = iVar3 - 0x10;
      bVar9 = uVar6 < 4;
      if (!bVar9) {
        uVar6 = iVar3 - 0x18;
      }
      if ((bVar9 || uVar6 < 4) || (iVar3 == 0x20 || iVar3 == 0x22)) {
        uVar8 = 1;
      }
      else {
        uVar8 = 0;
      }
      uVar5 = fn_00190e98(DAT_008977e4);
      uVar8 = fn_00190ec0(uVar5,uVar8);
      auStack_28[0] = 0x22;
      uVar5 = fn_00182988(DAT_008977e4);
      uVar5 = fn_0026a558(uVar5,auStack_28);
      iVar3 = (int)acStack_2c[0];
      uVar6 = iVar3 - 0x10;
      bVar9 = uVar6 < 4;
      if (!bVar9) {
        uVar6 = iVar3 - 0x18;
      }
      if ((bVar9 || uVar6 < 4) || (iVar3 == 0x20 || iVar3 == 0x22)) {
        uVar6 = 1;
      }
      else {
        uVar6 = 0;
      }
      fn_0020492c(uVar4,(int)*psVar7,uVar5,uVar8,uVar6 ^ 1);
    }
    acStack_2c[0] = acStack_2c[0] + '\x01';
  } while (acStack_2c[0] != '$');
  return;
}



void fn_0026b4b8(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  short *psVar6;
  int iVar7;
  bool bVar8;
  char local_34 [4];
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar1 = fn_00174828(DAT_008977e4);
  local_2c = fn_0017484c(DAT_008977e4);
  local_34[0] = ' ';
  do {
    psVar6 = (short *)(iVar1 + local_34[0] * 8 + 0x4180);
    iVar2 = fn_0069ccf8((int)*psVar6);
    if (iVar2 != 0) {
      local_30 = fn_00313988(local_2c,local_34);
      iVar2 = (int)local_34[0];
      uVar4 = iVar2 - 0x10;
      bVar8 = uVar4 < 4;
      if (!bVar8) {
        uVar4 = iVar2 - 0x18;
      }
      if ((bVar8 || uVar4 < 4) || (iVar2 == 0x20 || iVar2 == 0x22)) {
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
      }
      uVar3 = fn_00190e98(DAT_008977e4);
      uVar5 = fn_0019bab8(uVar3,uVar5);
      uVar3 = fn_00182988(DAT_008977e4);
      uVar3 = fn_0026a558(uVar3,local_34);
      iVar7 = DAT_00897844 + 0x28;
      iVar2 = fn_006ba770();
      if (iVar2 == 0) {
        uVar4 = 0;
      }
      else {
        iVar2 = fn_001010c8(iVar7,uVar3,0x1e);
        if (iVar2 == 0) {
          uVar4 = 1;
        }
        else {
          uVar4 = 0;
        }
      }
      fn_00204e00(local_30,(int)*psVar6,uVar3,uVar5,uVar4 ^ 1);
    }
    local_34[0] = local_34[0] + '\x01';
  } while (local_34[0] != '\"');
  return;
}



void fn_0026b458(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(DAT_00897804 + 0xc);
  iVar1 = fn_00166804(param_1);
  if (iVar1 != 0) {
    fn_0028ad18(uVar2,*param_2);
  }
  iVar1 = fn_001667f0(param_1);
  if (iVar1 == 0) {
    return;
  }
  fn_0028b674(uVar2,*param_2);
  return;
}



void fn_0026b144(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  undefined4 uVar8;
  short *psVar9;
  int iVar10;
  ushort local_5c [4];
  undefined4 local_54;
  ushort local_50 [4];
  undefined1 auStack_48 [4];
  ushort local_44 [2];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  ushort local_38 [8];
  int local_28;
  
  uVar8 = *(undefined4 *)(DAT_00897804 + 0xc);
  local_28 = param_1;
  fn_0028ad24(uVar8);
  fn_0028b680(uVar8);
  iVar1 = fn_006b83e4(*(undefined4 *)(DAT_00897804 + 0xc));
  iVar10 = 0;
  if (0 < iVar1) {
    do {
      puVar2 = (undefined4 *)fn_0028b0a0(*(undefined4 *)(DAT_00897804 + 0xc),iVar10);
      iVar3 = fn_00174828(DAT_008977e4);
      iVar3 = iVar3 + (char)((char)iVar10 + '\x10') * 0x418;
      psVar9 = (short *)(iVar3 + -0x4080);
      iVar4 = 0;
      iVar5 = iVar3;
      if (puVar2 != (undefined4 *)0x0) {
        iVar4 = (int)*psVar9;
        iVar5 = iVar4;
      }
      if ((puVar2 != (undefined4 *)0x0 && iVar5 != 0) && -1 < iVar4) {
        fn_0020bbc4(auStack_40,puVar2);
        iVar5 = fn_00174828(DAT_008977e4);
        local_5c[0] = *(ushort *)(iVar3 + -0x4064);
        local_44[0] = (ushort)(*(char *)(iVar5 + 0xe8) != '\x02');
        iVar5 = fn_006c0028(auStack_3c);
        local_54 = (short *)CONCAT22(((unsigned int)(local_54) >> 16) & 0xffff,(short)iVar5);
        if (iVar5 < (short)local_44[0]) goto code_r0x0026b400;
        if ((int)(short)local_5c[0] < (int)(short)local_44[0]) {
          puVar7 = local_44;
        }
        else {
          puVar7 = local_5c;
        }
        if (iVar5 < (short)*puVar7) {
          puVar7 = (ushort *)&local_54;
        }
        *(ushort *)((int)puVar2 + 0x22) = *puVar7;
        local_5c[0] = *(ushort *)(iVar3 + -0x4062);
        local_54 = (short *)((uint)((unsigned int)(local_54) >> 16) & 0xffff << 0x10);
        iVar5 = fn_006c0114(auStack_3c);
        local_50[0] = (ushort)iVar5;
        if (iVar5 < (short)(ushort)local_54) goto code_r0x0026b400;
        if ((int)(short)local_5c[0] < (int)(short)(ushort)local_54) {
          puVar7 = (ushort *)&local_54;
        }
        else {
          puVar7 = local_5c;
        }
        if (iVar5 < (short)*puVar7) {
          puVar7 = local_50;
        }
        *(ushort *)(puVar2 + 9) = *puVar7;
        *(undefined1 *)((int)puVar2 + 0x2f) = *(undefined1 *)(iVar3 + -0x4026);
        uVar8 = *(undefined4 *)(DAT_00897804 + 0xc);
        local_54 = psVar9;
        iVar5 = fn_00166804(psVar9);
        if (iVar5 != 0) {
          fn_0028ad18(uVar8,*puVar2);
        }
        iVar5 = fn_001667f0(local_54);
        if (iVar5 != 0) {
          fn_0028b674(uVar8,*puVar2);
        }
      }
      iVar10 = (int)(char)((char)iVar10 + '\x01');
    } while (iVar10 < iVar1);
  }
  if (local_28 != 0) {
    iVar1 = fn_006b84b0(*(undefined4 *)(DAT_00897804 + 0xc));
    iVar10 = 0;
    if (0 < iVar1) {
      do {
        iVar3 = fn_0028b348(*(undefined4 *)(DAT_00897804 + 0xc),iVar10);
        iVar6 = fn_00174828(DAT_008977e4);
        iVar6 = iVar6 + (char)((char)iVar10 + '\x18') * 0x418;
        iVar4 = 0;
        iVar5 = iVar6;
        if (iVar3 != 0) {
          iVar4 = (int)*(short *)(iVar6 + -0x4080);
          iVar5 = iVar4;
        }
        if ((iVar3 != 0 && iVar5 != 0) && -1 < iVar4) {
          fn_0020bbc4(auStack_48,iVar3);
          iVar5 = fn_00174828(DAT_008977e4);
          local_5c[0] = *(ushort *)(iVar6 + -0x4064);
          local_38[0] = (ushort)(*(char *)(iVar5 + 0xe8) != '\x02');
          iVar5 = fn_006c0028(local_44);
          local_54 = (short *)CONCAT22(((unsigned int)(local_54) >> 16) & 0xffff,(short)iVar5);
          if (iVar5 < (short)local_38[0]) {
code_r0x0026b400:
                    /* WARNING: Subroutine does not return */
            fn_00146590();
          }
          if ((int)(short)local_5c[0] < (int)(short)local_38[0]) {
            puVar7 = local_38;
          }
          else {
            puVar7 = local_5c;
          }
          if (iVar5 < (short)*puVar7) {
            puVar7 = (ushort *)&local_54;
          }
          *(ushort *)(iVar3 + 0x22) = *puVar7;
          local_5c[0] = *(ushort *)(iVar6 + -0x4062);
          local_54 = (short *)((uint)((unsigned int)(local_54) >> 16) & 0xffff << 0x10);
          iVar5 = fn_006c0114(local_44);
          local_50[0] = (ushort)iVar5;
          if (iVar5 < (short)(ushort)local_54) goto code_r0x0026b400;
          if ((int)(short)local_5c[0] < (int)(short)(ushort)local_54) {
            puVar7 = (ushort *)&local_54;
          }
          else {
            puVar7 = local_5c;
          }
          if (iVar5 < (short)*puVar7) {
            puVar7 = local_50;
          }
          *(ushort *)(iVar3 + 0x24) = *puVar7;
          *(undefined1 *)(iVar3 + 0x2f) = *(undefined1 *)(iVar6 + -0x4026);
        }
        iVar10 = (int)(char)((char)iVar10 + '\x01');
      } while (iVar10 < iVar1);
    }
  }
  return;
}


