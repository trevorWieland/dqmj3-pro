#include "005977f0_005986f0.h"



void fn_005986f0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_0022f584((char *)&DAT_0059875c,0);
  fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar1,1,0,1,1,0,0,1);
  fn_00689bd0(param_1,0x48,0);
  *(undefined4 *)(param_1 + 0x108) = 1;
  return;
}



void fn_005985b8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_0022f584((char *)&DAT_0059862c,0);
  fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar1,1,1,1,1,0,0,1);
  fn_00689bd0(param_1,0x48,0);
  *(undefined4 *)(param_1 + 0x108) = 2;
  fn_0068ab44(param_1,0x100094b);
  return;
}



void fn_00598524(int param_1,int param_2,int param_3)

{
  if (param_2 == 0) {
    fn_002a3bb0(*(undefined4 *)(param_1 + 0x8c),5);
    fn_00407540(param_1);
    *(undefined1 *)(param_1 + 0x110) = *(undefined1 *)(param_1 + 0x111);
                    /* WARNING: Subroutine does not return */
    fn_0011dda8();
  }
  fn_002a3bb0(*(undefined4 *)(param_1 + 0x8c),param_3 == 0);
  fn_0040790c(param_1);
  *(undefined1 *)(param_1 + 0x110) = 0;
                    /* WARNING: Subroutine does not return */
  fn_0011dda8();
}



void fn_005980b8(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = fn_0022f584((char *)&DAT_0059875c,0);
    fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar1,1,0,1,1,0,0,1);
    fn_00689bd0(param_1,0x48,0);
    *(undefined4 *)(param_1 + 0x108) = 1;
  }
  else if (param_3 != 0) {
    *(int *)(param_1 + 0x10c) = param_2;
    uVar1 = fn_0022f584((char *)&DAT_0059862c,0);
    fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar1,1,1,1,1,0,0,1);
    fn_00689bd0(param_1,0x48,0);
    *(undefined4 *)(param_1 + 0x108) = 2;
    fn_0068ab44(param_1,0x100094b);
    return;
  }
  return;
}



void fn_00597eb4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_428 [1032];
  
  uVar1 = fn_0022f584((char *)&DAT_00598074,0);
  fn_0018a618(auStack_428,0x200,0x1ff,L"%ls\n",uVar1);
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x118)) {
    do {
      iVar6 = param_1 + iVar5 * 4;
      iVar2 = fn_0020de08(iVar6 + 0x11c);
      if (iVar2 != 0) {
        iVar4 = 1;
        iVar2 = fn_001746f4();
        if (1 < iVar2) {
          do {
            iVar2 = fn_00163940(iVar4);
            if (((iVar2 != 0) && (iVar2 = fn_00660e64(iVar4), iVar2 != 0)) &&
               (iVar2 = fn_00660d60(iVar4), iVar2 == *(short *)(iVar6 + 0x11c))) {
              fn_00229a50(*(undefined4 *)(DAT_00897804 + 0x14),iVar4,1);
              uVar1 = fn_0016a82c(iVar4);
              uVar3 = fn_00100b58();
              fn_00231d04(auStack_428,0x200,uVar1,uVar3);
              uVar1 = fn_00100b58(&DAT_005980a4);
              fn_00231d04(auStack_428,0x200,&DAT_005980a4,uVar1);
              break;
            }
            iVar4 = (int)(short)((short)iVar4 + 1);
            iVar2 = fn_001746f4();
          } while (iVar4 < iVar2);
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x118));
  }
  fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),auStack_428,1,0,1,1,0,0,1);
  fn_00689bd0(param_1,0x48,0);
  iVar5 = fn_00178f9c(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x78));
  iVar5 = fn_00688920(*(undefined4 *)(iVar5 + 0x10),(char *)&DAT_005980a8);
  *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xfe;
  fn_0068ab44(param_1,0x100094b);
  return;
}



undefined1 * fn_00597b88(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined2 local_2c;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  
  uVar8 = *(undefined4 *)(DAT_00897804 + 0xc);
  *(undefined4 *)(param_1 + 0x114) = **(undefined4 **)(*(int *)(param_1 + 0xb4) + 4);
  iVar3 = fn_0028aad0(uVar8);
  sVar1 = *(short *)(iVar3 + 0x1c);
  uVar9 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xb4) + 4) + 4);
  iVar4 = fn_0028aad0(uVar8,uVar9);
  sVar2 = *(short *)(iVar4 + 0x1c);
  fn_0020bbc4(auStack_28,iVar4);
  uVar5 = fn_006c02d4(auStack_24,param_1 + 0x11c,7);
  *(undefined4 *)(param_1 + 0x118) = uVar5;
  local_3c = *(undefined4 *)(iVar3 + 0x72);
  local_38 = *(undefined4 *)(iVar3 + 0x76);
  local_34 = *(undefined4 *)(iVar3 + 0x7a);
  local_30 = *(undefined4 *)(iVar3 + 0x7e);
  local_2c = *(undefined2 *)(iVar3 + 0x82);
  iVar6 = *(int *)(param_1 + 0x10c) + -1;
  iVar7 = *(int *)(*(int *)(param_1 + 0xb4) + 0x10) + *(int *)(param_1 + 0x10c) * 0x104 + iVar6 * 6;
  iVar6 = iVar3 + iVar6 * 6;
  *(undefined1 *)(iVar6 + 0x72) = *(undefined1 *)(iVar7 + 0x82);
  *(undefined1 *)(iVar6 + 0x73) = *(undefined1 *)(iVar7 + 0x83);
  *(undefined2 *)(iVar6 + 0x74) = *(undefined2 *)(iVar7 + 0x84);
  *(undefined2 *)(iVar6 + 0x76) = *(undefined2 *)(iVar7 + 0x86);
  fn_00144834(0x23,1);
  fn_0044523c(*(undefined4 *)(param_1 + 0x68),(int)sVar1,iVar3 + 0x72,(int)sVar1,&local_3c,
               (int)sVar2,iVar4 + 0x72);
  fn_00689efc(param_1,0xd0,1,0);
  fn_0028a68c(uVar8,uVar9,1);
  *(undefined4 *)(param_1 + 0x108) = 4;
  return auStack_28;
}



undefined4 fn_00597ac8(int param_1,int param_2,undefined4 param_3,short param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 auStack_30 [24];
  undefined4 local_18;
  
  fn_00579dbc(auStack_30);
  fn_00579d50(auStack_30,param_3);
  fn_00579d5c(auStack_30,(int)param_4);
  uVar4 = 0;
  iVar1 = fn_006b5df8(*(undefined4 *)(param_1 + 0xb4));
  if (iVar1 != 0) {
    do {
      fn_00579d74(auStack_30,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0xb4) + 4) + uVar4 * 4));
      uVar4 = uVar4 + 1;
      uVar2 = fn_006b5df8(*(undefined4 *)(param_1 + 0xb4));
    } while (uVar4 < uVar2);
  }
  local_18 = fn_00407c7c(param_1);
  if (param_2 == 1) {
    fn_00579d68(auStack_30);
  }
  uVar3 = fn_004065d8(param_1,param_2,auStack_30);
  fn_00579dec(auStack_30);
  return uVar3;
}



undefined4 *
fn_005979b4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 unaff_r4;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  iVar1 = fn_00145b00(0x68,&DAT_00812c8c);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)fn_0068ab5c(iVar1,param_1);
  *puVar2 = &DAT_008457f8;
  puVar2[0x19] = 0;
  iVar1 = fn_00145b00(0x40,&DAT_00812c8c);
  uVar5 = 0;
  if (iVar1 != 0) {
    puVar4 = (undefined4 *)puVar2[1];
    uVar5 = puVar2[0x12];
    if (puVar4 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(**(code **)*puVar4)(puVar4);
      do {
        if (puVar3 == &DAT_00890360) goto LAB_00597a54;
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    puVar4 = (undefined4 *)0x0;
LAB_00597a54:
    uVar5 = fn_005a9ad0(iVar1,puVar4,uVar5,param_4,unaff_r4);
  }
  puVar2[0x19] = uVar5;
  return puVar2;
}



undefined4 fn_00597940(int param_1)

{
  (**(code **)(**(int **)(param_1 + 100) + 0xc))(*(int **)(param_1 + 100),0xffffffff,0);
  (**(code **)(**(int **)(param_1 + 100) + 8))(*(int **)(param_1 + 100),0xffffffff);
  fn_005a99ec(*(undefined4 *)(param_1 + 100));
  fn_003cfd6c(*(undefined4 *)(param_1 + 100));
  (**(code **)(**(int **)(param_1 + 100) + 0x18))(*(int **)(param_1 + 100),0,1);
  return 1;
}



void fn_0059790c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00397a0c();
  puVar1[0x39] = 0;
  *puVar1 = &DAT_008456ac;
  puVar1[0x3a] = 0;
  return;
}



void fn_005977f0(undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)(*(int *)(DAT_00897840 + 0x30) + 0x20) = param_2;
  fn_00689bd0(param_1,0,0);
  return;
}


