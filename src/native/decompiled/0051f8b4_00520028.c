#include "0051f8b4_00520028.h"

static void svc_0x23(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x23 }
#endif
}


undefined1 *
fn_00520028(undefined4 *param_1,uint param_2,uint param_3,undefined4 param_4,int param_5,
            undefined4 param_6)

{
  undefined1 *puVar1;
  undefined4 local_18;
  
  if (DAT_008c0382 != '\0') {
    if (0x5c6 < param_3) {
      return (undefined1 *)0xe10113e9;
    }
    if (param_5 == 0) {
      return &DAT_e10113fd;
    }
    if (param_3 == 0) {
      return (undefined1 *)0x0;
    }
    if (((param_2 & 3) != 0) || (param_2 == 0)) {
      return (undefined1 *)0xe10113f1;
    }
    local_18 = DAT_008c038c;
    puVar1 = (undefined1 *)
             fn_00520b40(&local_18,*param_1,param_4,param_5,param_2,param_3 + 3 >> 2,param_3,
                          param_6);
    if (puVar1 != (undefined1 *)0xc920181a) {
      return puVar1;
    }
  }
  return (undefined1 *)0xe0a113f8;
}



undefined1 * fn_0051fecc(uint *param_1,undefined4 param_2,int param_3,uint param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  bool bVar6;
  undefined4 local_30;
  undefined4 local_2c [2];
  
  fn_00170704(&DAT_008ec46c);
  puVar5 = (undefined1 *)0xe0a113f8;
  if (DAT_008c0382 != '\0') {
    if ((param_4 < 0x646) || (param_3 == 0)) {
      fn_001707b4(&DAT_008ec46c);
      return &DAT_e10113fd;
    }
    uVar2 = *param_1;
    if (uVar2 != 0) {
      iVar4 = 0;
      do {
        puVar1 = &DAT_008ec478 + iVar4 * 3;
        uVar3 = (&DAT_008ec47c)[iVar4 * 3];
        bVar6 = uVar3 == uVar2;
        if (bVar6) {
          uVar3 = (uint)(byte)(&DAT_008ec480)[iVar4 * 0xc];
        }
        if (bVar6 && uVar3 == 0) break;
        if ((&DAT_008ec488)[iVar4 * 3] == uVar2) {
          puVar1 = (undefined4 *)(uint)(byte)(&DAT_008ec48c)[iVar4 * 0xc];
        }
        if ((&DAT_008ec488)[iVar4 * 3] == uVar2 && puVar1 == (undefined4 *)0x0) {
          iVar4 = iVar4 + 1;
          break;
        }
        iVar4 = iVar4 + 2;
      } while (iVar4 < 0x10);
      if (iVar4 < 0x10) {
        local_30 = 0;
        local_2c[0] = DAT_008c038c;
        puVar5 = (undefined1 *)fn_00520af4(local_2c,&local_30,*param_1,param_4,param_3,param_2);
        if ((int)puVar5 < 0) {
          if (puVar5 == (undefined1 *)0xc920181a) {
            fn_0015e590(0xc920181a,0x51fff8);
          }
        }
        else {
          (&DAT_008ec478)[iVar4 * 3] = local_30;
          (&DAT_008ec480)[iVar4 * 0xc] = 1;
        }
      }
    }
  }
  fn_001707b4(&DAT_008ec46c);
  return puVar5;
}



undefined1 *
fn_0051fd04(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5,
            int param_6)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined2 uVar4;
  undefined2 *puVar5;
  undefined2 *local_80;
  int iStack_7c;
  undefined4 uStack_78;
  undefined2 local_74;
  undefined2 local_72;
  undefined2 local_70;
  undefined2 local_6e;
  undefined1 auStack_6c [40];
  undefined4 local_44;
  undefined1 auStack_40 [8];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  uStack_34 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  iStack_28 = param_4;
  fn_00170704(&DAT_008ec46c);
  if (DAT_008c0382 == '\0') {
    puVar3 = (undefined1 *)0xe0a113f8;
  }
  else {
    if ((param_4 == 0) || (0xd < param_5)) {
      fn_001707b4(&DAT_008ec46c);
      return &DAT_e10113fd;
    }
    uVar4 = 0x421;
    fn_001237bc();
    iVar1 = fn_00453c94();
    if (iVar1 == 0) {
      param_5 = 0;
    }
    fn_0013c674();
    if (DAT_008c0381 != 0) {
      param_5 = (uint)DAT_008c0381;
    }
    if (param_5 != 0) {
      uVar4 = (undefined2)(1 << (param_5 - 1 & 0xff));
    }
    local_72 = 2;
    local_74 = 1;
    local_80 = (undefined2 *)0xffffffff;
    iStack_7c = 0x1f00ffff;
    local_70 = uVar4;
    fn_0019bc50(auStack_40,&local_80);
    fn_0019bc50(auStack_6c,auStack_40);
    if (param_6 == 0) {
      param_6 = 0x6e;
    }
    local_44 = 0;
    local_6e = (undefined2)param_6;
    local_80 = (undefined2 *)0x0;
    uVar2 = fn_00158ef8(&local_80);
    puVar5 = (undefined2 *)0x0;
    if (-1 < (int)uVar2) {
      uVar2 = 0;
      puVar5 = local_80;
    }
    if (((uVar2 & 0x7e00000) != 0x600000) && ((int)uVar2 < 0)) {
      fn_0015e294(uVar2);
    }
    if ((int)uVar2 < 0) {
      puVar3 = (undefined1 *)0xc86113f3;
      if (puVar5 != (undefined2 *)0x0) {
        svc_0x23();
      }
    }
    else {
      local_38 = DAT_008c038c;
      local_80 = &local_74;
      iStack_7c = param_4;
      uStack_78 = param_3;
      puVar3 = (undefined1 *)fn_00520c24(&local_38,puVar5,param_1,local_30);
      if (puVar5 != (undefined2 *)0x0) {
        svc_0x23();
      }
      if (puVar3 == (undefined1 *)0xc920181a) {
        fn_0015e590(0xc920181a,0x51fe94);
      }
    }
  }
  fn_001707b4(&DAT_008ec46c);
  return puVar3;
}



undefined4 fn_0051fa50(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_r5;
  bool bVar3;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 auStack_34 [20];
  undefined1 auStack_20 [8];
  
  iVar1 = (**(code **)(*param_1 + 0x14))(param_1,&DAT_007f36cc,0x15);
  bVar3 = iVar1 == 0;
  if (!bVar3) {
    unaff_r5 = iVar1 + 2;
    bVar3 = unaff_r5 == 0;
  }
  if (!bVar3) {
    local_48 = *(undefined4 *)(unaff_r5 + 0x1f);
    local_44 = *(undefined4 *)(unaff_r5 + 0x23);
    local_40 = *(undefined4 *)(unaff_r5 + 0x27);
    local_3c = *(undefined4 *)(unaff_r5 + 0x2b);
    local_38 = *(undefined4 *)(unaff_r5 + 0x2f);
    *(undefined4 *)(unaff_r5 + 0x1f) = 0;
    *(undefined4 *)(unaff_r5 + 0x23) = 0;
    *(undefined4 *)(unaff_r5 + 0x27) = 0;
    *(undefined4 *)(unaff_r5 + 0x2b) = 0;
    *(undefined4 *)(unaff_r5 + 0x2f) = 0;
    fn_00527164(auStack_34,unaff_r5,*(byte *)(unaff_r5 + 0x33) + 0x34);
    *(undefined4 *)(unaff_r5 + 0x1f) = local_48;
    *(undefined4 *)(unaff_r5 + 0x23) = local_44;
    *(undefined4 *)(unaff_r5 + 0x27) = local_40;
    *(undefined4 *)(unaff_r5 + 0x2b) = local_3c;
    *(undefined4 *)(unaff_r5 + 0x2f) = local_38;
    iVar1 = fn_001010c8(&local_48,auStack_34,0x14);
    if (iVar1 == 0) {
      fn_006d4140(auStack_20,param_1);
      uVar2 = fn_006d4130(param_1);
      fn_0051f718(param_2,unaff_r5,uVar2,auStack_20);
      return 0;
    }
  }
  *(undefined1 *)(param_2 + 2) = 0;
  *param_2 = 0;
  *(undefined2 *)(param_2 + 1) = 0;
  return 0xe1211005;
}



int fn_0051f998(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 local_10;
  
  if (DAT_008c0382 != '\0') {
    if (200 < param_2) {
      return -0x1efeec17;
    }
    local_10 = DAT_008c038c;
    iVar1 = fn_005208f0(&local_10,param_1,param_2);
    if (iVar1 != -0x36dfe7e6) {
      return iVar1;
    }
  }
  return -0x1f5eec08;
}



int fn_0051f8b4(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_34 [20];
  
  puVar1 = (undefined4 *)fn_004c49c0(auStack_34,*(undefined4 *)(param_1 + 4));
  *puVar1 = &DAT_008573a0;
  iVar2 = fn_0051fb70(auStack_34,&DAT_008ec558);
  if (-1 < iVar2) {
    iVar5 = 0;
    do {
      iVar3 = param_2 + iVar5 * 0x28;
      *(undefined2 *)(iVar3 + 0x24) = (&DAT_008ec578)[iVar5 * 0x14];
      uVar4 = (&DAT_008ec564)[iVar5 * 10];
      uVar6 = (&DAT_008ec568)[iVar5 * 10];
      uVar7 = (&DAT_008ec56c)[iVar5 * 10];
      uVar8 = (&DAT_008ec570)[iVar5 * 10];
      uVar9 = (&DAT_008ec574)[iVar5 * 10];
      *(undefined4 *)(iVar3 + 0xc) = (&DAT_008ec560)[iVar5 * 10];
      *(undefined4 *)(iVar3 + 0x10) = uVar4;
      *(undefined4 *)(iVar3 + 0x14) = uVar6;
      *(undefined4 *)(iVar3 + 0x18) = uVar7;
      *(undefined4 *)(iVar3 + 0x1c) = uVar8;
      *(undefined4 *)(iVar3 + 0x20) = uVar9;
      *(undefined2 *)(iVar3 + 0x24) = (&DAT_008ec578)[iVar5 * 0x14];
      fn_005205b0(iVar3,(&DAT_008ec578)[iVar5 * 0x14],(&DAT_008ec558)[iVar5 * 10],
                   (&DAT_008ec55c)[iVar5 * 10],(&DAT_008ec578)[iVar5 * 0x14]);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x10);
  }
  fn_004c4a24(auStack_34);
  return iVar2;
}



int fn_0051fb70(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  int iVar4;
  int unaff_r7;
  bool bVar5;
  undefined8 uVar6;
  undefined4 local_24;
  undefined1 auStack_20 [8];
  
  iVar1 = (**(code **)(*param_1 + 0x14))(param_1,&DAT_007f36cc,0x15);
  bVar5 = iVar1 == 0;
  if (!bVar5) {
    unaff_r7 = iVar1 + 2;
    bVar5 = unaff_r7 == 0;
  }
  if (bVar5) {
    iVar1 = -0x1edeeff8;
  }
  else {
    fn_006d4140(auStack_20,param_1);
    uVar2 = fn_006d4130(param_1);
    fn_0051f718(&DAT_008ec7d8,unaff_r7,uVar2,auStack_20);
    uVar6 = (**(code **)(*param_1 + 0x14))(param_1,&DAT_007f36cc,0x18);
    iVar1 = (int)((ulonglong)uVar6 >> 0x20);
    bVar5 = (int)uVar6 == 0;
    if (!bVar5) {
      iVar1 = (int)uVar6 + 2;
      bVar5 = iVar1 == 0;
    }
    if (!bVar5) {
      fn_00301a9c(&DAT_008ec8e0,iVar1,0xfe);
      uVar6 = (**(code **)(*param_1 + 0x14))(param_1,&DAT_007f36cc,0x19);
      iVar1 = (int)((ulonglong)uVar6 >> 0x20);
      bVar5 = (int)uVar6 == 0;
      if (!bVar5) {
        iVar1 = (int)uVar6 + 2;
        bVar5 = iVar1 == 0;
      }
      if (bVar5) {
        fn_00158f6c(&DAT_008ec9de,0xfe);
      }
      else {
        fn_00301a9c(&DAT_008ec9de,iVar1,0xfe);
      }
      local_24 = DAT_008c038c;
      iVar1 = fn_00520a80(&local_24,param_2,&DAT_008ec7d8,&DAT_008ec8e0,&DAT_008ec9de);
      if (iVar1 == -0x36dfe7e6) {
        fn_0015e590(0xc920181a,0x51fca0);
      }
      iVar4 = 8;
      puVar3 = (undefined2 *)(param_2 + -0xc);
      do {
        iVar4 = iVar4 + -1;
        puVar3[0x14] = 0;
        puVar3 = puVar3 + 0x28;
        *puVar3 = 0;
      } while (iVar4 != 0);
      return iVar1;
    }
    fn_00301f50(param_2,0x280);
    iVar1 = 0;
  }
  return iVar1;
}


