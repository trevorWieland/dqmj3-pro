#include "006dbbc0_006dc488.h"

static void svc_0x32(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x32 }
#endif
}


int fn_006dc488(int param_1,int param_2,undefined1 *param_3,int param_4,undefined4 *param_5)

{
  int iVar1;
  undefined4 local_24;
  undefined1 local_20 [8];
  
  if (param_2 == 0) {
    iVar1 = -0x271f5ffe;
  }
  else if (*(int *)(param_1 + 4) < 1) {
    iVar1 = -0x275f5f9c;
  }
  else {
    local_24 = 0;
    local_20[0] = 0;
    if (param_3 == (undefined1 *)0x0 || param_4 == 0) {
      param_3 = local_20;
      param_4 = 1;
    }
    iVar1 = fn_002febd8(param_2);
    iVar1 = fn_00524bc4(param_1 + 0xc,*(undefined4 *)(param_1 + 4),param_2,iVar1 + 1,param_3,
                         param_4,&local_24);
    if (-1 < iVar1) {
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = local_24;
      }
      iVar1 = 0;
    }
  }
  return iVar1;
}



void fn_006dc43c(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  if (param_2 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 < 1) {
    return;
  }
  fn_00524f8c(param_1 + 0xc,iVar1,param_2,iVar1,*param_3,param_3[1]);
  return;
}



int fn_006dc404(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == (undefined4 *)0x0) {
    iVar1 = -0x271f5ffe;
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
    if (0 < iVar1) {
      iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(char **)(iVar2 + 0x80) = "2d";
      *(int *)(iVar2 + 0x84) = iVar1;
      iVar1 = *(int *)(param_1 + 0xc);
      svc_0x32();
      if (-1 < iVar1) {
        *param_2 = *(undefined4 *)(iVar2 + 0x88);
        iVar1 = *(int *)(iVar2 + 0x84);
      }
      return iVar1;
    }
    iVar1 = -0x275f5f9c;
  }
  return iVar1;
}



int fn_006dc37c(int param_1,undefined1 *param_2,int param_3,undefined4 *param_4,undefined4 *param_5
                )

{
  int iVar1;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined1 local_18 [4];
  
  if (*(int *)(param_1 + 4) < 1) {
    iVar1 = -0x275f5f9c;
  }
  else {
    local_24 = 0;
    local_18[0] = 0;
    local_20 = *param_4;
    uStack_1c = param_4[1];
    if (param_2 == (undefined1 *)0x0 || param_3 == 0) {
      param_2 = local_18;
      param_3 = 1;
    }
    iVar1 = fn_00524f30(param_1 + 0xc,*(int *)(param_1 + 4),param_2,param_3,&local_24);
    if (-1 < iVar1) {
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = local_24;
      }
      iVar1 = 0;
    }
  }
  return iVar1;
}



int fn_006dc304(int param_1,undefined1 *param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 local_1c;
  undefined1 local_18 [8];
  
  if (*(int *)(param_1 + 4) < 1) {
    iVar1 = -0x275f5f9c;
  }
  else {
    if (param_2 == (undefined1 *)0x0 || param_3 == 0) {
      param_2 = local_18;
      param_3 = 1;
    }
    local_1c = 0;
    local_18[0] = 0;
    iVar1 = fn_00524a58(param_1 + 0xc,*(int *)(param_1 + 4),param_2,param_3,&local_1c);
    if (-1 < iVar1) {
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = local_1c;
      }
      iVar1 = 0;
    }
  }
  return iVar1;
}



int fn_006dc2b0(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == (undefined4 *)0x0) {
    iVar1 = -0x271f5ffe;
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
    if (iVar1 < 1) {
      iVar1 = -0x275f5f9c;
    }
    else {
      if (DAT_008e3674 != '\0') {
        iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
        *(undefined4 *)(iVar2 + 0x80) = 0x2a0040;
        *(int *)(iVar2 + 0x84) = iVar1;
        svc_0x32();
        iVar1 = DAT_008e369c;
        if (-1 < DAT_008e369c) {
          *param_2 = *(undefined4 *)(iVar2 + 0x88);
          iVar1 = *(int *)(iVar2 + 0x84);
        }
        return iVar1;
      }
      iVar1 = -0x275f5c08;
    }
  }
  return iVar1;
}



int fn_006dc254(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == (undefined4 *)0x0 || param_3 == (undefined4 *)0x0) {
    iVar1 = -0x271f5ffe;
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
    if (iVar1 < 1) {
      iVar1 = -0x275f5f9c;
    }
    else {
      if (DAT_008e3674 != '\0') {
        iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
        *(undefined4 *)(iVar2 + 0x80) = 0x60040;
        *(int *)(iVar2 + 0x84) = iVar1;
        svc_0x32();
        iVar1 = DAT_008e369c;
        if (-1 < DAT_008e369c) {
          *param_2 = *(undefined4 *)(iVar2 + 0x88);
          *param_3 = *(undefined4 *)(iVar2 + 0x8c);
          iVar1 = *(int *)(iVar2 + 0x84);
        }
        return iVar1;
      }
      iVar1 = -0x275f5c08;
    }
  }
  return iVar1;
}



undefined1 fn_006dc220(int param_1,undefined4 param_2,uint param_3)

{
  undefined1 uVar1;
  
  if (param_3 < *(byte *)(param_1 + 0x3f)) {
    uVar1 = 0;
  }
  else {
    fn_001694e4(param_2,param_1 + 0x40,(uint)*(byte *)(param_1 + 0x3f));
    uVar1 = *(undefined1 *)(param_1 + 0x3f);
  }
  return uVar1;
}



longlong fn_006dbecc(int param_1,undefined1 *param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  
  uVar3 = 0x3ff00000;
  if ((undefined1 *)0x3fefffff < param_2 + -0x100000) {
    if (DAT_008c0630 != 0) {
      uVar3 = 8;
    }
    uVar1 = 0xe0e14826;
LAB_006dbf60:
    return CONCAT44(uVar3,uVar1);
  }
  if (*(undefined1 **)(param_1 + 0x84) == &DAT_e0a14827) {
    if (DAT_008c0630 != 0) {
      uVar3 = 8;
    }
    return CONCAT44(uVar3,&DAT_e0a14827);
  }
  if (*(undefined1 **)(param_1 + 0x84) == (undefined1 *)0xd0a14830) {
    if (DAT_008c0630 != 0) {
      uVar3 = 2;
    }
    return CONCAT44(uVar3,0xd0a14830);
  }
  puVar2 = (uint *)fn_0013d4ec();
  uVar3 = *puVar2;
  if ((param_3 == uVar3) && (param_4 == (uint *)puVar2[1])) {
    *param_2 = 0xfd;
    return (ulonglong)uVar3 << 0x20;
  }
  puVar2 = (uint *)fn_004c4af8();
  uVar3 = *puVar2;
  if (param_3 == uVar3) {
    puVar2 = (uint *)puVar2[1];
  }
  if (param_3 == uVar3 && param_4 == puVar2) {
    *param_2 = 0xfe;
    return (ulonglong)uVar3 << 0x20;
  }
  puVar2 = (uint *)fn_004c4aa8();
  uVar3 = *puVar2;
  if (param_3 == uVar3) {
    puVar2 = (uint *)puVar2[1];
  }
  if (param_3 == uVar3 && param_4 == puVar2) {
    *param_2 = 0xff;
    return (ulonglong)uVar3 << 0x20;
  }
  if (*(char *)(param_1 + 0x80) == '\0') {
    *param_2 = (char)param_3;
  }
  else {
    local_38 = 0;
    local_34 = 0;
    uVar1 = fn_006d9cd0(*(undefined4 *)(param_1 + 0x7c),&local_38,param_3,param_4);
    uVar3 = uVar1 & 0x80000000;
    if ((int)uVar3 < 0) goto LAB_006dbf60;
    *param_2 = local_30;
  }
  return (ulonglong)uVar3 << 0x20;
}



longlong fn_006dbbc0(int param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint local_28;
  uint local_24;
  
  puVar3 = &DAT_008c0630;
  if ((uint *)0x3fefffff < param_2 + -0x40000) {
    if (DAT_008c0630 != 0) {
      puVar3 = (undefined4 *)0x8;
    }
    uVar1 = 0xe0e14826;
LAB_006dbc4c:
    return CONCAT44(puVar3,uVar1);
  }
  puVar4 = *(undefined1 **)(param_1 + 0x84);
  puVar5 = &DAT_e0a14827;
  if (puVar4 == &DAT_e0a14827) {
    if (DAT_008c0630 != 0) {
      puVar4 = (undefined1 *)0x8;
    }
  }
  else {
    puVar5 = (undefined1 *)0xd0a14830;
    if (puVar4 != (undefined1 *)0xd0a14830) {
      if (param_3 == 0xfd) {
        puVar2 = (uint *)fn_0013d4ec();
        uVar1 = *puVar2;
        *param_2 = uVar1;
        param_2[1] = puVar2[1];
        return (ulonglong)uVar1 << 0x20;
      }
      if (param_3 == 0xfe) {
        puVar2 = (uint *)fn_004c4af8();
        uVar1 = *puVar2;
        *param_2 = uVar1;
        param_2[1] = puVar2[1];
        return (ulonglong)uVar1 << 0x20;
      }
      if (param_3 == 0xff) {
        puVar2 = (uint *)fn_004c4aa8();
        uVar1 = *puVar2;
        *param_2 = uVar1;
        param_2[1] = puVar2[1];
        return (ulonglong)uVar1 << 0x20;
      }
      if (*(char *)(param_1 + 0x80) == '\0') {
        param_2[1] = 0;
        *param_2 = param_3;
        return 0;
      }
      local_28 = 0;
      local_24 = 0;
      uVar1 = fn_006d9c6c(*(undefined4 *)(param_1 + 0x7c),&local_28);
      puVar3 = (undefined4 *)(uVar1 & 0x80000000);
      if (-1 < (int)puVar3) {
        *param_2 = local_28;
        param_2[1] = local_24;
        return ZEXT48(puVar3) << 0x20;
      }
      goto LAB_006dbc4c;
    }
    if (DAT_008c0630 != 0) {
      puVar4 = (undefined1 *)0x2;
    }
  }
  return CONCAT44(puVar4,puVar5);
}


