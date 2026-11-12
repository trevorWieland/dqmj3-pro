#include "0050953c_00509e50.h"



void fn_00509e50(int param_1)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined1 local_28 [4];
  int local_24;
  undefined4 uStack_20;
  
  if (*(int *)(param_1 + 0x10c) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x124) - 0x100000U < 0x3ff00000) {
    piVar3 = *(int **)(param_1 + 4);
    uVar4 = piVar3[1];
    if (uVar4 != piVar3[2]) {
      do {
        if (uVar4 < *(uint *)*piVar3) {
          iVar2 = ((uint *)*piVar3)[1] + uVar4 * 0x5ec;
        }
        else {
          iVar2 = 0;
        }
        fn_0050a73c(*(undefined4 *)(param_1 + 0x124),iVar2);
        uVar4 = uVar4 + 1;
        if (*(int *)*piVar3 <= (int)uVar4) {
          uVar4 = 0;
        }
      } while (uVar4 != piVar3[2]);
    }
  }
  if (*(char *)(param_1 + 300) != '\0') {
    if (*(char *)(param_1 + 300) == '\x01') {
      local_28[0] = 1;
      local_24 = param_1 + 0x12d;
      uStack_20 = 0x10;
    }
    piVar3 = *(int **)(param_1 + 4);
    uVar4 = piVar3[1];
    if (uVar4 != piVar3[2]) {
      do {
        puVar1 = (uint *)*piVar3;
        if (uVar4 < *puVar1) {
          iVar2 = puVar1[1] + uVar4 * 0x5ec;
        }
        else {
          iVar2 = 0;
        }
        if (*(int *)(iVar2 + 0x5c0) != 0) {
          if (uVar4 < *puVar1) {
            iVar2 = puVar1[1] + uVar4 * 0x5ec;
          }
          else {
            iVar2 = 0;
          }
          fn_004f05cc(iVar2,local_28);
        }
        uVar4 = uVar4 + 1;
        if (*(int *)*piVar3 <= (int)uVar4) {
          uVar4 = 0;
        }
      } while (uVar4 != piVar3[2]);
    }
  }
  fn_00509204(*(undefined4 *)(param_1 + 8));
  fn_00509218(*(undefined4 *)(param_1 + 4));
  return;
}



void fn_00509dbc(int *param_1,undefined4 param_2)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  undefined1 auStack_28 [4];
  int iStack_24;
  undefined4 uStack_20;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = fn_0050bd40(param_1 + 0x57,param_1[0x5a],param_2);
  param_1[0x5a] = 0;
  if (iVar1 != 0) {
    local_14 = 0xc00000;
    local_18 = 0;
    iVar1 = (**(code **)(*param_1 + 0x14))(param_1,&local_14);
    if ((iVar1 != 0) && (fn_0050a490(param_1), param_1[0x5a] != 0)) {
      fn_0050bd40(param_1 + 0x57);
      param_1[0x5a] = 0;
    }
  }
  if (param_1[0x43] != 0) {
    return;
  }
  if (param_1[0x49] - 0x100000U < 0x3ff00000) {
    piVar3 = (int *)param_1[1];
    uVar4 = piVar3[1];
    if (uVar4 != piVar3[2]) {
      do {
        if (uVar4 < *(uint *)*piVar3) {
          iVar1 = ((uint *)*piVar3)[1] + uVar4 * 0x5ec;
        }
        else {
          iVar1 = 0;
        }
        fn_0050a73c(param_1[0x49],iVar1);
        uVar4 = uVar4 + 1;
        if (*(int *)*piVar3 <= (int)uVar4) {
          uVar4 = 0;
        }
      } while (uVar4 != piVar3[2]);
    }
  }
  if ((char)param_1[0x4b] != '\0') {
    if ((char)param_1[0x4b] == '\x01') {
      auStack_28[0] = 1;
      iStack_24 = (int)param_1 + 0x12d;
      uStack_20 = 0x10;
    }
    piVar3 = (int *)param_1[1];
    uVar4 = piVar3[1];
    if (uVar4 != piVar3[2]) {
      do {
        puVar2 = (uint *)*piVar3;
        if (uVar4 < *puVar2) {
          iVar1 = puVar2[1] + uVar4 * 0x5ec;
        }
        else {
          iVar1 = 0;
        }
        if (*(int *)(iVar1 + 0x5c0) != 0) {
          if (uVar4 < *puVar2) {
            iVar1 = puVar2[1] + uVar4 * 0x5ec;
          }
          else {
            iVar1 = 0;
          }
          fn_004f05cc(iVar1,auStack_28);
        }
        uVar4 = uVar4 + 1;
        if (*(int *)*piVar3 <= (int)uVar4) {
          uVar4 = 0;
        }
      } while (uVar4 != piVar3[2]);
    }
  }
  fn_00509204(param_1[2]);
  fn_00509218(param_1[1]);
  return;
}



undefined4 fn_00509b04(int param_1,int param_2,undefined1 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0xe0e14826;
  }
  *(int *)(param_1 + 0xfc) = param_2;
  *(undefined1 *)(param_1 + 0x100) = param_3;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  iVar1 = fn_004ecfe0(0x360);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = fn_0050aad4(iVar1,(char *)&DAT_00509d0c,param_4);
  }
  *(int *)(param_1 + 0x124) = iVar2;
  if (iVar2 - 0x100000U < 0x3ff00000) {
    iVar1 = fn_004ecfe0(0x360);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = fn_0050aad4(iVar1,(char *)&DAT_00509dac,param_4);
    }
    *(int *)(param_1 + 0x128) = iVar2;
    if (iVar2 - 0x100000U < 0x3ff00000) {
      *(undefined1 *)(param_1 + 300) = 0;
      return 0;
    }
    if (*(int *)(param_1 + 0x124) != 0) {
      fn_0050ab4c();
      fn_004ecfd0();
      *(undefined4 *)(param_1 + 0x124) = 0;
    }
    *(undefined4 *)(param_1 + 0x128) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x124) = 0;
  }
  return 0xe0614820;
}



void fn_00509ad0(int *param_1)

{
  param_1[0x46] = -1;
  param_1[0x47] = 0;
  fn_00516cc8(param_1 + 0x37);
                    /* WARNING: Could not recover jumptable at 0x00509b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))(param_1);
  return;
}



void fn_005097d4(int param_1)

{
  undefined4 *puVar1;
  undefined1 auStack_20 [16];
  
  *(undefined4 *)(param_1 + 0x148) = 0;
  fn_004ed714(param_1 + 0x14c);
  *(undefined1 *)(param_1 + 0x13d) = 0xfd;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  if (*(int *)(param_1 + 0x128) != 0) {
    fn_0050ab4c();
    fn_004ecfd0();
    *(undefined4 *)(param_1 + 0x128) = 0;
  }
  if (*(int *)(param_1 + 0x124) != 0) {
    fn_0050ab4c();
    fn_004ecfd0();
    *(undefined4 *)(param_1 + 0x124) = 0;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  puVar1 = (undefined4 *)fn_004ed584(auStack_20);
  *(undefined4 *)(param_1 + 300) = *puVar1;
  *(undefined4 *)(param_1 + 0x130) = puVar1[1];
  *(undefined4 *)(param_1 + 0x134) = puVar1[2];
  *(undefined4 *)(param_1 + 0x138) = puVar1[3];
  *(undefined1 *)(param_1 + 0x13c) = *(undefined1 *)(puVar1 + 4);
  return;
}



int fn_00509758(int param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
                undefined1 param_5)

{
  int iVar1;
  
  iVar1 = fn_0050922c(*(undefined4 *)(param_1 + 4));
  if (iVar1 == 0) {
    return 0;
  }
  fn_004f045c();
  *(undefined1 *)(iVar1 + 0x5bc) = param_2;
  *(undefined4 *)(iVar1 + 0x5c0) = param_3;
  fn_004ed810(iVar1 + 0x5c4,param_4);
  *(undefined1 *)(iVar1 + 0x5d5) = param_5;
  return iVar1;
}



undefined1 * fn_005095c4(int param_1,int param_2,int param_3,int param_4,byte *param_5)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_38 [24];
  
  uVar2 = param_2 - 0x100000;
  bVar6 = uVar2 < 0x3ff00000;
  if (bVar6) {
    uVar2 = param_3 - 0x100000;
  }
  if ((bVar6 && uVar2 < 0x3ff00000) &&
     (((byte *)0x3fefffff < param_5 + -0x100000 || (*param_5 < 2)))) {
    iVar3 = *(int *)(param_1 + 4);
    bVar6 = iVar3 == 0;
    if (bVar6) {
      iVar3 = *(int *)(param_1 + 8);
    }
    if (!bVar6 || iVar3 != 0) {
      return &DAT_e0a14827;
    }
    *(int *)(param_1 + 4) = param_2;
    *(int *)(param_1 + 8) = param_3;
    fn_00517020(param_1 + 0xc,0xfd,0);
    *(undefined4 *)(param_1 + 0x10c) = 0;
    if (param_4 - 0xcU < 0x5ab) {
      if (param_5 + -0x100000 < (byte *)0x3ff00000) {
        *(undefined4 *)(param_1 + 300) = *(undefined4 *)param_5;
        *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_5 + 4);
        *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_5 + 8);
        *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_5 + 0xc);
        bVar1 = param_5[0x10];
      }
      else {
        puVar4 = (undefined4 *)fn_004ed584(auStack_38);
        *(undefined4 *)(param_1 + 300) = *puVar4;
        *(undefined4 *)(param_1 + 0x130) = puVar4[1];
        *(undefined4 *)(param_1 + 0x134) = puVar4[2];
        *(undefined4 *)(param_1 + 0x138) = puVar4[3];
        bVar1 = *(byte *)(puVar4 + 4);
      }
      *(byte *)(param_1 + 0x13c) = bVar1;
      if (*(char *)(param_1 + 300) == '\0') {
        *(int *)(param_1 + 0x108) = param_4;
      }
      else if (*(char *)(param_1 + 300) == '\x01') {
        iVar3 = fn_004f0230(1);
        iVar5 = fn_00169f1c(param_4 + -0xc,iVar3);
        *(int *)(param_1 + 0x108) = iVar5 * iVar3 + 0xc;
      }
      *(int *)(param_1 + 0x104) = *(int *)(param_1 + 0x108) + -0xc;
      fn_0050a9ac(*(undefined4 *)(param_1 + 0x124));
      fn_0050a718(*(undefined4 *)(param_1 + 0x124));
      fn_0050a9ac(*(undefined4 *)(param_1 + 0x128));
      fn_0050a718(*(undefined4 *)(param_1 + 0x128));
      return (undefined1 *)0x0;
    }
  }
  return (undefined1 *)0xe0e14826;
}



int * fn_00509574(int *param_1,uint param_2)

{
  param_1[0x44] = (param_2 << 0x18 | ((param_2 & 0xffff) >> 8) << 0x10) >> 0x10;
  param_1[0x45] = 0xffff;
  (**(code **)(*param_1 + 0x28))(param_1);
  return param_1 + 0x48;
}



int * fn_0050953c(int *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_2;
  param_1[0x44] =
       ((uVar1 >> 0x10) << 0x18 | (uVar1 >> 0x18) << 0x10) >> 0x10 |
       ((uVar1 & 0xff) << 8 | uVar1 >> 8 & 0xff) << 0x10;
  param_1[0x45] = -1;
  (**(code **)(*param_1 + 0x28))(param_1);
  return param_1 + 0x48;
}


