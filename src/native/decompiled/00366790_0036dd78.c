#include "00366790_0036dd78.h"



void fn_0036dd78(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  
  iVar1 = *(int *)(param_1 + 0x98);
  iVar2 = fn_00203ef8((int)*(short *)(iVar1 + 0x55c));
  if (iVar2 == 0) {
    fn_00688a74(*(undefined4 *)(param_1 + 0x9c));
    fn_00688a74(*(undefined4 *)(param_1 + 0xa0));
    fn_00688a74(*(undefined4 *)(param_1 + 0xa4));
    fn_00688a74(*(undefined4 *)(param_1 + 0xa8));
    fn_00688a74(*(undefined4 *)(param_1 + 0xac));
    fn_00688a74(*(undefined4 *)(param_1 + 0xb0));
    fn_00688a74(*(undefined4 *)(param_1 + 0xb4));
    fn_00688a74(*(undefined4 *)(param_1 + 0xb8));
    fn_00688a74(*(undefined4 *)(param_1 + 0xbc));
    fn_00688a74(*(undefined4 *)(param_1 + 0xc0));
    fn_00688a74(*(undefined4 *)(param_1 + 0xc4));
    fn_00688a74(*(undefined4 *)(param_1 + 200));
    return;
  }
  iVar2 = fn_00203f40((int)*(short *)(iVar1 + 0x55c));
  iVar3 = fn_00203f60((int)*(short *)(iVar1 + 0x55c));
  iVar4 = fn_00203fa0((int)*(short *)(iVar1 + 0x55c));
  iVar5 = fn_00203d1c((int)*(short *)(iVar1 + 0x55c));
  iVar6 = fn_00203f80((int)*(short *)(iVar1 + 0x55c));
  iVar1 = fn_00203ed8((int)*(short *)(iVar1 + 0x55c));
  fn_00688c04(*(undefined4 *)(param_1 + 0x9c),iVar2,0);
  fn_00688c04(*(undefined4 *)(param_1 + 0xa0),iVar3,0);
  fn_00688c04(*(undefined4 *)(param_1 + 0xa4),iVar4,0);
  fn_00688c04(*(undefined4 *)(param_1 + 0xa8),iVar5,0);
  fn_00688c04(*(undefined4 *)(param_1 + 0xac),iVar6,0);
  fn_00688c04(*(undefined4 *)(param_1 + 0xb0),iVar1,0);
  uVar9 = fn_00230bcc(1,0);
  puVar8 = (undefined1 *)uVar9;
  puVar7 = (undefined1 *)((ulonglong)uVar9 >> 0x20);
  if (0 < iVar2) {
    puVar7 = puVar8;
  }
  if (iVar2 < 1) {
    puVar7 = &LAB_0036df5c;
  }
  fn_00190d50(*(undefined4 *)(param_1 + 0xb4),puVar7);
  puVar7 = puVar8;
  if (iVar3 < 1) {
    puVar7 = &LAB_0036df5c;
  }
  fn_00190d50(*(undefined4 *)(param_1 + 0xb8),puVar7);
  puVar7 = puVar8;
  if (iVar4 < 1) {
    puVar7 = &LAB_0036df5c;
  }
  fn_00190d50(*(undefined4 *)(param_1 + 0xbc),puVar7);
  puVar7 = puVar8;
  if (iVar5 < 1) {
    puVar7 = &LAB_0036df5c;
  }
  fn_00190d50(*(undefined4 *)(param_1 + 0xc0),puVar7);
  puVar7 = puVar8;
  if (iVar6 < 1) {
    puVar7 = &LAB_0036df5c;
  }
  fn_00190d50(*(undefined4 *)(param_1 + 0xc4),puVar7);
  if (iVar1 < 1) {
    puVar8 = &LAB_0036df5c;
  }
  fn_00190d50(*(undefined4 *)(param_1 + 200),puVar8);
  return;
}



undefined4 fn_0036cf08(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_5c;
  undefined1 auStack_54 [16];
  undefined4 local_44;
  undefined1 local_3c;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [12];
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  
  puVar4 = *(undefined4 **)(param_1 + 0x18);
  if (puVar4 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar1 == &DAT_00894490) goto LAB_0036cf54;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_0036cf54:
  *(undefined4 **)(param_1 + 0xd0) = puVar4;
  puVar4 = (undefined4 *)fn_001f74d8(param_1,0x45);
  if (puVar4 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar1 == &DAT_008951d8) goto LAB_0036cf98;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_0036cf98:
  *(undefined4 **)(param_1 + 0xd4) = puVar4;
  uVar2 = fn_006b7f9c(*(undefined4 *)(DAT_00897804 + 0x24),1);
  *(undefined4 *)(param_1 + 0xd8) = uVar2;
  fn_00397b18(&local_70);
  local_70 = DAT_008944f0;
  local_6c = DAT_008944f4;
  uVar2 = fn_0022f750((char *)&DAT_0036d14c);
  fn_00147974(auStack_54,uVar2);
  local_68 = 3;
  local_5c = 3;
  local_64 = *(undefined4 *)(*(int *)(param_1 + 0xd0) + 8);
  local_44 = 0;
  local_3c = 0;
  uVar2 = fn_0022f750((char *)&DAT_0036d158);
  fn_00147974(auStack_38,uVar2);
  iVar3 = fn_006b8478(*(undefined4 *)(DAT_00897804 + 0xc));
  fn_0018a618(auStack_20,4,3,&DAT_0036d174,500 - iVar3);
  fn_00147974(auStack_34,auStack_20);
  fn_00397a98(param_1,&local_70);
  fn_0036d17c(param_1);
  fn_00689efc(param_1,0x45,0);
  fn_0031f8fc(*(undefined4 *)(param_1 + 0x74),0,0,0,0xffffffff);
  iVar3 = *(int *)(param_1 + 0x74);
  *(undefined1 *)(iVar3 + 0x81) = 1;
  fn_0031f3f4(iVar3,0);
  uVar2 = fn_006b64b0(*(undefined4 *)(DAT_00897804 + 8));
  *(undefined4 *)(*(int *)(param_1 + 0xd4) + 0x20) = uVar2;
  iVar3 = fn_001588d4(auStack_28);
  iVar3 = fn_001588d4(iVar3 + -4);
  iVar3 = fn_001588d4(iVar3 + -4);
  iVar3 = fn_001588d4(iVar3 + -4);
  iVar3 = fn_001588d4(iVar3 + -4);
  iVar3 = fn_001588d4(iVar3 + -0x10);
  iVar3 = fn_001588d4(iVar3 + -4);
  iVar3 = fn_001588d4(iVar3 + -4);
  fn_001588d4(iVar3 + -4);
  return 1;
}



int fn_0036a4c0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)fn_00338160();
  *puVar1 = &DAT_00827678;
  *(undefined1 *)(puVar1 + 5) = 0;
  *(undefined1 *)((int)puVar1 + 0x15) = 0;
  puVar1[6] = 0xffffffff;
  puVar1[7] = 0xffffffff;
  puVar1[8] = 0xffffffff;
  uVar2 = fn_001b4f84();
  puVar1[9] = uVar2;
  uVar2 = fn_001b93b8(param_2);
  puVar1[10] = uVar2;
  iVar3 = fn_00145b00(0x1c,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar3 != 0) {
    uVar2 = fn_005e7c40();
  }
  puVar1[0xb] = uVar2;
  iVar3 = fn_00145b00(0x1c,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar3 != 0) {
    uVar2 = fn_005e8730();
  }
  puVar1[0xc] = uVar2;
  iVar3 = fn_0036a474(puVar1 + 0xd);
  *(undefined4 *)(iVar3 + 0x38) = 0;
  *(undefined4 *)(iVar3 + 0x3c) = 0;
  *(undefined4 *)(iVar3 + 0x40) = 0;
  *(undefined4 *)(iVar3 + 0x44) = 0;
  *(undefined4 *)(iVar3 + 0x50) = 0xbf800000;
  *(undefined4 *)(iVar3 + 0x54) = 0xbf800000;
  *(undefined4 *)(iVar3 + 0x58) = 0xbf800000;
  *(undefined4 *)(iVar3 + 0x5c) = 0xffffffff;
  return iVar3 + -0x34;
}



void fn_00369238(void)

{
  int iVar1;
  
  iVar1 = fn_006afabc(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(DAT_008977e0 + 0xa8));
  if (iVar1 == 0) {
    return;
  }
  iVar1 = fn_006f7a0c(DAT_008977e0);
  fn_006c3a70(*(undefined4 *)(iVar1 + 0x30));
  return;
}



void fn_00366790(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar4;
  longlong lVar3;
  
  uVar4 = 0;
  if ((char)param_1[0x11] != '\0') {
    fn_006f7a84(DAT_008977e0);
  }
  lVar3 = (ulonglong)uVar4 << 0x20;
  uVar4 = 0;
  iVar1 = param_1[7] - param_1[6] >> 0x1f;
  if ((param_1[7] - param_1[6]) / 0x2c + iVar1 != iVar1) {
    do {
      puVar2 = (undefined4 *)(param_1[6] + uVar4 * 0x2c);
      if (puVar2[2] != 0) {
        if (*(char *)((int)puVar2 + 0x16) < '\x01') {
          *(undefined1 *)((int)puVar2 + 0x16) = 0;
          switch(*(undefined1 *)((int)puVar2 + 0x17)) {
          case 2:
            fn_00364e7c(param_1,puVar2,1);
            *(undefined1 *)((int)puVar2 + 0x17) = 3;
            break;
          case 3:
            iVar1 = fn_006bb66c(puVar2[2]);
            if (iVar1 == 0) {
              if ((puVar2[2] != 0) && (iVar1 = fn_002df704(), iVar1 == 0)) break;
            }
            else {
              do {
                if (puVar2[2] == 0) break;
                iVar1 = fn_002df704();
              } while (iVar1 == 0);
            }
            (**(code **)(*param_1 + 0x50))(param_1,*puVar2,0);
            *(undefined1 *)((int)puVar2 + 0x17) = 4;
            break;
          case 4:
            iVar1 = (**(code **)(*param_1 + 0x6c))(param_1,puVar2);
            if (iVar1 == 0) {
              if ((char)param_1[0x11] == '\0') {
                iVar1 = (**(code **)(*param_1 + 0x98))(param_1,puVar2);
              }
              else {
                iVar1 = (**(code **)(*param_1 + 0x9c))(param_1,puVar2);
              }
              if (iVar1 == 0) {
                if (*(int *)(puVar2[2] + 0xdc) != 4) break;
              }
              else {
                (**(code **)(*param_1 + 100))(param_1,*(undefined4 *)(puVar2[2] + 0xfc),4,0);
              }
            }
            (**(code **)(*param_1 + 0x58))(param_1,*puVar2);
            break;
          case 5:
            fn_002df580(puVar2[2]);
            *(undefined1 *)((int)puVar2 + 0x17) = 2;
            break;
          case 6:
            if (*(char *)((int)puVar2 + 0x19) != '\0') {
              (**(code **)(*(int *)param_1[9] + 0x54))((int *)param_1[9],puVar2);
            }
            (**(code **)(*(int *)puVar2[2] + 0xa4))();
            if ((int *)puVar2[2] != (int *)0x0) {
              (**(code **)(*(int *)puVar2[2] + 4))();
            }
            *puVar2 = 0xffffffff;
            puVar2[2] = 0;
            *(undefined2 *)(puVar2 + 1) = 0xffff;
            puVar2[3] = (int)((ulonglong)lVar3 >> 0x20);
            *(undefined1 *)((int)puVar2 + 0x16) = 0;
            *(undefined1 *)((int)puVar2 + 0x17) = 0;
            *(undefined1 *)(puVar2 + 6) = 0xff;
            *(undefined1 *)((int)puVar2 + 0x19) = 0;
            *(undefined2 *)((int)puVar2 + 6) = 0xffff;
            *(undefined2 *)(puVar2 + 4) = 0xffff;
            *(undefined2 *)((int)puVar2 + 0x12) = 0xffff;
            *(undefined1 *)((int)puVar2 + 0x1b) = 0xff;
            *(undefined1 *)(puVar2 + 7) = 0xff;
            *(undefined1 *)((int)puVar2 + 0x1f) = 0xff;
            puVar2[10] = 0xffffffff;
            *(undefined1 *)((int)puVar2 + 0x1a) = 0xff;
            *(undefined1 *)((int)puVar2 + 0x1d) = 0xff;
            *(undefined1 *)(puVar2 + 8) = 0;
            puVar2[9] = 0;
          }
        }
        else {
          *(char *)((int)puVar2 + 0x16) = *(char *)((int)puVar2 + 0x16) + -1;
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)((param_1[7] - param_1[6]) / 0x2c));
  }
  return;
}


