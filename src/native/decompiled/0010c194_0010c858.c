#include "0010c194_0010c858.h"

static void svc_0x32(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x32 }
#endif
}


undefined4 * fn_0010c858(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)fn_00117720();
  *puVar1 = &DAT_008589a8;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  puVar1[8] = *param_3;
  puVar1[9] = uVar2;
  puVar1[10] = uVar3;
  puVar1[0xb] = uVar4;
  return puVar1;
}



undefined4 * fn_0010c7e8(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      iVar2 = 0;
      if (0 < piVar1[1]) {
        do {
          fn_0012b6ec(1,*piVar1 + iVar2 * 0x10);
          iVar2 = iVar2 + 1;
        } while (iVar2 < piVar1[1]);
      }
      fn_002feca8(*piVar1);
      *piVar1 = 0;
    }
    fn_002feef8(piVar1);
  }
  return param_1;
}



undefined4 *
fn_0010c67c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_20;
  
  *param_1 = 0;
  local_20 = param_4;
  piVar1 = (int *)fn_00145b00(0xc,&DAT_00812c8c);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
    fn_0012bc84(0x207,&local_20);
    piVar1[1] = 1;
    fn_00117984();
    iVar2 = fn_0011a41c();
    if (*(char *)(iVar2 + 1) != '\0') {
      piVar1[1] = 2;
    }
    iVar4 = piVar1[1];
    iVar3 = fn_001287d4(iVar4 << 4,&DAT_00812c8c);
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = fn_00101a1c(iVar3,&LAB_00117578,0x10,iVar4);
    }
    iVar3 = 0;
    *piVar1 = iVar2;
    if (0 < piVar1[1]) {
      do {
        fn_0012bb50(1,*piVar1 + iVar3 * 0x10);
        fn_0012b2f0(*(undefined4 *)(*piVar1 + iVar3 * 0x10));
        fn_0012b604(param_2,param_3);
        iVar3 = iVar3 + 1;
      } while (iVar3 < piVar1[1]);
    }
    fn_0012b2f0(local_20);
  }
  piVar5 = (int *)*param_1;
  if (piVar5 != piVar1) {
    if (piVar5 != (int *)0x0) {
      if (*piVar5 != 0) {
        iVar2 = 0;
        if (0 < piVar5[1]) {
          do {
            fn_0012b6ec(1,*piVar5 + iVar2 * 0x10);
            iVar2 = iVar2 + 1;
          } while (iVar2 < piVar5[1]);
        }
        fn_002feca8(*piVar5);
        *piVar5 = 0;
      }
      fn_002feef8(piVar5);
    }
    *param_1 = piVar1;
  }
  return param_1;
}



undefined4 * fn_0010c550(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *local_38 [4];
  undefined4 local_28;
  undefined1 *local_24;
  undefined *local_20;
  undefined1 *local_1c;
  
  *param_1 = &DAT_00858920;
  param_1[1] = 0;
  puVar1 = (undefined4 *)fn_00145b00(0x1028,&DAT_00812c8c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    *(undefined1 *)(puVar1 + 0x402) = 1;
    puVar1[0x403] = 0;
    puVar1[0x404] = 0;
    puVar1[0x405] = 0xffffffff;
    puVar1[0x406] = 0;
    puVar1[0x407] = 0;
    puVar1[0x408] = 0;
    fn_0013c500(puVar1 + 0x403);
    local_28 = 4;
    local_24 = &LAB_0011b74c;
    local_20 = &DAT_0011b768;
    local_1c = &LAB_0011b75c;
    local_38[0] = puVar1;
    iVar2 = fn_0014e2f4(puVar1,&local_28,fn_00117274,local_38,puVar1 + 0x402,0xf,0xfffffffe,0);
    if (iVar2 < 0) {
      fn_0015e294();
    }
  }
  if ((undefined4 *)param_1[1] != puVar1) {
    if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
      fn_001173f8();
      fn_002feef8();
    }
    param_1[1] = puVar1;
  }
  return param_1;
}



undefined1 * fn_0010c444(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  fn_00113d34();
  uVar2 = fn_00113df4(0x100,0x10,1);
  DAT_0089a4ec = fn_002fecec();
  fn_00113e1c(0x100,0x10,DAT_0089a4ec,uVar2,1);
  if (param_3 != 0) {
    uVar2 = fn_0012336c(0x80,8,1);
    DAT_0089a4f0 = fn_002fecec();
    puVar3 = (undefined1 *)fn_00123070((char *)&DAT_001173e8,0x80,8,DAT_0089a4f0,uVar2,1);
    return puVar3;
  }
  uVar5 = 0;
  uVar6 = 0;
  iVar8 = 0;
  do {
    uVar7 = (uint)(char)(&DAT_001173f0)[iVar8];
    if (uVar7 == 0x3a) goto LAB_00123158;
    uVar1 = uVar5 >> 0x18;
    iVar8 = iVar8 + 1;
    uVar5 = uVar7 | uVar5 << 8;
    uVar6 = uVar1 | uVar6 << 8 | (int)uVar7 >> 0x1f;
  } while (iVar8 < 8);
  uVar5 = 0;
  uVar6 = 0;
LAB_00123158:
  if (uVar5 != 0 || uVar6 != 0) {
    iVar8 = 0;
    do {
      if ((&DAT_008e3474)[iVar8 * 4] == uVar6 && (&DAT_008e3470)[iVar8 * 4] == uVar5) {
        puVar4 = &DAT_008e3470 + iVar8 * 4;
LAB_001231ac:
        if (puVar4 == (undefined4 *)0x0) {
          return &DAT_c8804465;
        }
        puVar3 = (undefined1 *)fn_001233c4((char *)&DAT_001173e8,puVar4[2],(int)*(char *)(puVar4 + 3),1);
        return puVar3;
      }
      if ((&DAT_008e3484)[iVar8 * 4] == uVar6 && (&DAT_008e3480)[iVar8 * 4] == uVar5) {
        puVar4 = &DAT_008e3480 + iVar8 * 4;
        goto LAB_001231ac;
      }
      iVar8 = iVar8 + 2;
    } while (iVar8 < 0x20);
  }
  return &DAT_c8804465;
}



void fn_0010c414(undefined4 *param_1)

{
  *param_1 = &DAT_00858780;
  if (param_1[2] != 0) {
    fn_00116fdc(param_1);
  }
  fn_00117008(param_1);
  return;
}



void fn_0010c3d0(int param_1)

{
  if (*(char *)(param_1 + 0x2c) != '\0') {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined1 *)(param_1 + 0x2c) = 0;
  }
  return;
}



void fn_0010c33c(undefined1 *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  local_24 = 0;
  local_18 = 0;
  iVar2 = fn_00115d78(0x406);
  iVar3 = 0;
  if (iVar2 < 0) {
    iVar3 = -0x375f3004;
  }
  if (iVar2 < 0 && iVar2 != iVar3) {
    fn_00146594();
  }
  fn_00115a44(0x406,param_2,0xf80,DAT_0089a54c);
  local_20 = DAT_0089a558;
  uStack_1c = DAT_0089a55c;
  uVar1 = fn_001152bc(&local_18,param_2,0xf80,&local_24,0);
  *param_1 = uVar1;
  return;
}



int fn_0010c208(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = -0x1f5f3007;
  if (DAT_008bfb14 == '\0') {
    if (DAT_008bfb1c == 0) {
      DAT_008bfb1c = DAT_008bfb18;
    }
    iVar2 = DAT_008bfb1c;
    if (DAT_008bfb30 == 0) {
      uVar1 = fn_002febd8();
      iVar3 = fn_0014fe94(&DAT_008bfb30,iVar2,uVar1,0);
    }
    if (iVar3 < 0) {
      fn_00123b08(iVar3,0x10c324);
    }
    return iVar3;
  }
  if (DAT_008bfb1c == 0) {
    DAT_008bfb1c = DAT_008bfb18;
  }
  iVar2 = DAT_008bfb1c;
  if (DAT_008bfb30 == 0) {
    uVar1 = fn_002febd8();
    iVar2 = fn_0014fe94(&DAT_008bfb30,iVar2,uVar1,0);
  }
  else {
    iVar2 = iVar3;
  }
  if (iVar2 < 0) {
    DAT_008bfb1c = 0;
    fn_001147f8();
    if (DAT_008bfb1c == 0) {
      DAT_008bfb1c = DAT_008bfb18;
    }
    iVar2 = DAT_008bfb1c;
    if (DAT_008bfb30 == 0) {
      uVar1 = fn_002febd8();
      iVar3 = fn_0014fe94(&DAT_008bfb30,iVar2,uVar1,0);
    }
    iVar2 = iVar3;
    if (iVar3 < 0) {
      fn_00123b08(iVar3,0x10c2d0);
    }
  }
  return iVar2;
}



int fn_0010c1d0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x30040;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  svc_0x32();
  iVar1 = DAT_008bfb30;
  if (-1 < DAT_008bfb30) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0010c194(undefined1 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(char **)(iVar2 + 0x80) = "2d";
  *(undefined1 *)(iVar2 + 0x84) = param_1;
  svc_0x32();
  iVar1 = DAT_008bfb30;
  if (-1 < DAT_008bfb30) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}


