#include "0036e68c_0036ef2c.h"



void fn_0036ef2c(int param_1,undefined4 param_2,undefined4 param_3)

{
  fn_0036ef70(param_1,param_1 + 0x14,param_1 + 4,param_2,param_3);
  return;
}



void fn_0036ef10(int param_1,undefined4 param_2,undefined4 param_3)

{
  fn_0036ef70(param_1,param_1 + 4,param_1 + 0x14,param_2,param_3);
  return;
}



void fn_0036ee94(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  iVar3 = 0;
  iVar2 = 0;
  if (param_2 != 0) {
    fn_0020bbc4(auStack_20);
    fn_006bfe90(auStack_1c);
    uVar4 = fn_001cab7c();
    iVar2 = (int)((ulonglong)uVar4 >> 0x20);
    iVar3 = (int)uVar4 + -1;
  }
  if ((uint)(param_3 + iVar3) < 4) {
    if (0 < iVar3) {
      iVar2 = 0;
    }
    *(int *)(param_1 + param_3 * 4 + 0x14) = param_2;
    if (0 < iVar3) {
      do {
        iVar1 = param_3 + iVar2;
        iVar3 = iVar3 + -1;
        iVar2 = iVar2 + 1;
        *(int *)(param_1 + iVar1 * 4 + 0x18) = param_2;
      } while (iVar3 != 0);
    }
  }
  return;
}



void fn_0036ee14(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_30 [36];
  
  uVar1 = fn_0068897c(param_1,DAT_0089621c);
  if (param_2 == 0) {
    fn_00688a74();
    return;
  }
  uVar2 = fn_006a7ae8(param_2);
  fn_00230fe4(auStack_30,0x10,uVar2,param_2,0);
  fn_00190d50(uVar1,auStack_30);
  return;
}



void fn_0036ec38(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = param_2 / 0x3c;
  uVar2 = uVar1 / 0x3c;
  uVar3 = fn_0068897c(param_1,(char *)&DAT_0036ed9c,uVar1 * -0x77777777);
  uVar4 = fn_0068897c(param_1,(char *)&DAT_0036edac);
  uVar5 = fn_0068897c(param_1,(char *)&DAT_0036edbc);
  fn_00688c04(uVar3,uVar2 / 100,0);
  fn_00688c04(uVar4,(uVar2 % 100) / 10,0);
  fn_00688c04(uVar5,uVar2 % 10,0);
  uVar3 = fn_0068897c(param_1,(char *)&DAT_0036edd4);
  uVar4 = fn_0068897c(param_1,(char *)&DAT_0036ede4);
  fn_00688c04(uVar3,(uVar1 % 0x3c) / 10,0);
  fn_00688c04(uVar4,(uVar1 % 0x3c) % 10,0);
  uVar3 = fn_0068897c(param_1,(char *)&DAT_0036edf4);
  uVar4 = fn_0068897c(param_1,(char *)&DAT_0036ee04);
  fn_00688c04(uVar3,(param_2 % 0x3c) / 10,0);
  fn_00688c04(uVar4,(param_2 % 0x3c) % 10,0);
  return;
}



void fn_0036ec04(int *param_1,int *param_2,undefined4 param_3)

{
  (**(code **)(*param_1 + 0x20))(param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x0036ec34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2,param_3);
  return;
}



void fn_0036eb98(undefined4 param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = fn_00689210(param_1,DAT_00896214);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | param_2;
  iVar1 = fn_00689210(param_1,DAT_00896218);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | param_2;
  return;
}



int * fn_0036eaa8(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                  ,undefined4 param_6)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  
  uVar5 = CONCAT44(param_5,param_6);
  piVar1 = (int *)(**(code **)(*param_1 + 0x2c))(param_1,(&PTR_s_MonStatus_00_00896268)[param_2],1);
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 8))(piVar1);
    do {
      if (puVar2 == &DAT_0089a928) goto LAB_0036eb18;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  piVar1 = (int *)0x0;
LAB_0036eb18:
  iVar3 = fn_00145b00(0x60,&DAT_00812c8c);
  piVar4 = (int *)0x0;
  if (iVar3 != 0) {
    piVar4 = (int *)fn_00306f08(iVar3,param_3,piVar1,1,param_4,(int)((ulonglong)uVar5 >> 0x20),
                                 (int)uVar5,(&PTR_s_MonStatus_00_00896268)[param_2]);
  }
  (**(code **)(*piVar4 + 0x10))(piVar4);
  (**(code **)(*piVar4 + 0x20))(piVar4,0);
  return piVar4;
}



int * fn_0036e9e4(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x2c))
                            (param_1,(&PTR_s_MonIcon_00_00896258)[param_2],1,
                             *(code **)(*param_1 + 0x2c),param_4);
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 8))(piVar1);
    do {
      if (puVar2 == &DAT_0089a928) goto LAB_0036ea40;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  piVar1 = (int *)0x0;
LAB_0036ea40:
  iVar3 = fn_00145b00(0xd4,&DAT_00812c8c);
  piVar4 = (int *)0x0;
  if (iVar3 != 0) {
    piVar4 = (int *)fn_002b44c0(iVar3,param_3,piVar1,1,param_4);
  }
  (**(code **)(*piVar4 + 0x10))(piVar4);
  (**(code **)(*piVar4 + 0x20))(piVar4,0);
  return piVar4;
}



void fn_0036e8fc(int *param_1,uint param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  byte bVar4;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x2c))(param_1,DAT_0089620c,1);
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 8))(piVar1);
    do {
      if (puVar2 == &DAT_0089a930) goto LAB_0036e95c;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  piVar1 = (int *)0x0;
LAB_0036e95c:
  if (param_2 < 8) {
    fn_0068b03c(piVar1,param_2);
    iVar3 = (**(code **)(*param_1 + 0x2c))(param_1,DAT_00896210,1);
    *(byte *)(piVar1 + 0x11) = *(byte *)(piVar1 + 0x11) & 0xfe | 1;
    bVar4 = *(byte *)(iVar3 + 0x44) & 0xfe;
  }
  else {
    iVar3 = (**(code **)(*param_1 + 0x2c))(param_1,DAT_00896210,1);
    *(byte *)(piVar1 + 0x11) = *(byte *)(piVar1 + 0x11) & 0xfe;
    bVar4 = *(byte *)(iVar3 + 0x44) & 0xfe | 1;
  }
  *(byte *)(iVar3 + 0x44) = bVar4;
  return;
}



undefined1 * fn_0036e68c(int *param_1,int param_2,char param_3,undefined1 param_4,int param_5)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined1 *puVar7;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined4 *local_20;
  
  if (param_2 != 0) {
    fn_0020bbc4(auStack_28);
    fn_006bfda8(auStack_24);
    iVar3 = fn_001a46f4();
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x20))(param_1,1);
      if ((param_5 == 0) &&
         (((iVar3 = fn_00154ac8(0x19), iVar3 == 0 && (iVar3 = fn_006bf34c(auStack_24), iVar3 != 0)
           ) || ((iVar3 = fn_00154ac8(0x463), iVar3 == 0 &&
                 (iVar3 = fn_006bf184(auStack_24), iVar3 != 0)))))) {
        param_4 = 1;
      }
      *(undefined1 *)((int)param_1 + 0x5d) = param_4;
      fn_00231074(&local_20,param_2,0);
      fn_00306990(param_1,local_20);
      uVar1 = fn_006c0108(auStack_24);
      *(undefined1 *)((int)param_1 + 0x59) = uVar1;
      uVar1 = fn_006bf1d4(auStack_24);
      *(undefined1 *)((int)param_1 + 0x5b) = uVar1;
      uVar4 = fn_006bf1d4(auStack_24);
      uVar5 = fn_006bfdec(auStack_24);
      fn_0068b1e4(param_1,uVar5,uVar4);
      uVar1 = fn_006bf184(auStack_24);
      *(undefined1 *)((int)param_1 + 0x5f) = uVar1;
      fn_0030690c(param_1,param_3);
      if (param_3 == '\0') {
        uVar2 = fn_006bf5bc(auStack_24);
        *(undefined2 *)((int)param_1 + 0x4a) = uVar2;
        uVar2 = fn_006c0028(auStack_24);
        *(undefined2 *)((int)param_1 + 0x4e) = uVar2;
        uVar2 = fn_006bf5c8(auStack_24);
        *(undefined2 *)((int)param_1 + 0x52) = uVar2;
        uVar2 = fn_006c0114(auStack_24);
        *(undefined2 *)((int)param_1 + 0x56) = uVar2;
      }
      else if (param_3 == '\x01') {
        uVar4 = fn_006bf0f0(auStack_24);
        fn_003066c4(param_1,uVar4);
      }
      if (local_20 != &DAT_008f9cf4) {
        piVar6 = local_20 + -3;
        iVar3 = *piVar6;
        if ((iVar3 == -1) || ((piVar6 != &DAT_008f9ce8 && (*piVar6 = iVar3 + -1, iVar3 == 0)))) {
          fn_001008c4(local_20 + -3,local_20[-2] + 8,0);
        }
      }
      return auStack_28;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0036e8ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar7 = (undefined1 *)(**(code **)(*param_1 + 0x20))(param_1,0);
  return puVar7;
}


