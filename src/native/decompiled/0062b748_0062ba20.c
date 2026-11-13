#include "0062b748_0062ba20.h"



void fn_0062ba20(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  short local_108 [2];
  short local_104 [4];
  short local_fc [2];
  short local_f8 [40];
  undefined1 auStack_a7 [99];
  short *local_44;
  short *local_40;
  int local_3c;
  
  psVar6 = local_108;
  psVar5 = local_108;
  sVar2 = *(short *)(param_2 + 0x1c);
  if (param_4 == 0) {
    sVar1 = *(short *)(param_1 + 0x1c);
    sVar2 = fn_00300f74(sVar1 * 10000,(int)*(short *)(param_1 + 0x2c));
    iVar3 = (int)*(short *)(param_2 + 0x2c) * (int)sVar2;
    sVar2 = ((short)(iVar3 / 10000) + (short)(iVar3 >> 0x1f)) -
            (short)((longlong)iVar3 * 0x68db8bad >> 0x3f);
    if (sVar1 < 1) {
      sVar2 = 0;
    }
    else {
      local_f8[0] = sVar2;
      if (0 < sVar2) {
        psVar6 = local_f8;
      }
      local_108[0] = 1;
      local_104[0] = 9999;
      if (9999 < *psVar6) {
        psVar6 = local_104;
      }
      sVar2 = *psVar6;
    }
  }
  *(short *)(param_2 + 0x1c) = sVar2;
  sVar2 = *(short *)(param_2 + 0x1e);
  if (param_5 == 0) {
    sVar1 = *(short *)(param_1 + 0x1e);
    sVar2 = fn_00300f74(sVar1 * 10000,(int)*(short *)(param_1 + 0x2e));
    iVar3 = (int)*(short *)(param_2 + 0x2e) * (int)sVar2;
    sVar2 = ((short)(iVar3 / 10000) + (short)(iVar3 >> 0x1f)) -
            (short)((longlong)iVar3 * 0x68db8bad >> 0x3f);
    if (sVar1 < 1) {
      sVar2 = 0;
    }
    else {
      local_fc[0] = sVar2;
      if (0 < sVar2) {
        psVar5 = local_fc;
      }
      local_108[0] = 1;
      local_104[0] = 9999;
      if (9999 < *psVar5) {
        psVar5 = local_104;
      }
      sVar2 = *psVar5;
    }
  }
  *(short *)(param_2 + 0x1e) = sVar2;
  uVar7 = *(undefined4 *)(param_1 + 0x274);
  *(undefined4 *)(param_2 + 0x270) = *(undefined4 *)(param_1 + 0x270);
  *(undefined4 *)(param_2 + 0x274) = uVar7;
  uVar7 = *(undefined4 *)(param_1 + 0x27c);
  *(undefined4 *)(param_2 + 0x278) = *(undefined4 *)(param_1 + 0x278);
  *(undefined4 *)(param_2 + 0x27c) = uVar7;
  if (param_3 != 0) {
    *(undefined1 *)(param_2 + 0x5a) = *(undefined1 *)(param_1 + 0x5a);
  }
  local_44 = (short *)0x0;
  local_40 = (short *)0x0;
  local_3c = 0;
  fn_00691b10(&local_44);
  psVar6 = local_44;
  if (local_40 != local_44) {
    do {
      iVar3 = fn_006f489c(param_2 + 0x120,(int)*psVar6);
      iVar4 = fn_006f497c(param_1 + 0x120,(int)*psVar6);
      if (-1 < iVar3 && -1 < iVar4) {
        fn_00655bfc(param_2 + 0x120,iVar3);
      }
      psVar6 = psVar6 + 1;
    } while (local_40 != psVar6);
  }
  if (param_3 == 0) {
    if (*(char *)(param_1 + 0x67) == '\0') goto LAB_0062bc34;
  }
  else {
    fn_0061a80c(param_2,param_1);
  }
  iVar3 = 0x61;
  psVar6 = local_108;
  puVar8 = (undefined1 *)(param_1 + 0x5b);
  puVar9 = auStack_a7;
  puVar10 = (undefined1 *)(param_1 + 0xbc);
  do {
    iVar3 = iVar3 + -1;
    *(undefined1 *)psVar6 = *puVar8;
    *puVar9 = *puVar10;
    psVar6 = (short *)((int)psVar6 + 1);
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  } while (iVar3 != 0);
  fn_00301a9c(param_2 + 0x5b,local_108,0xc2);
LAB_0062bc34:
  psVar6 = local_44;
  if (local_40 < local_44) {
    do {
      psVar6 = psVar6 + 1;
    } while (psVar6 != local_40);
  }
  fn_001008c4(local_44,local_3c - (int)local_44 >> 1,0);
  return;
}



void fn_0062b994(undefined4 param_1,int param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = fn_00691860();
  iVar3 = fn_0069187c(param_1);
  *param_3 = 0;
  *param_4 = 0;
  iVar4 = fn_0069180c(iVar2);
  if (iVar4 != 0) {
    iVar4 = fn_0069180c(iVar2);
    uVar1 = 0;
    if (iVar4 != 0) {
      uVar1 = *(undefined1 *)(param_2 + iVar2 + -1);
    }
    *param_3 = uVar1;
  }
  iVar2 = fn_0069180c(iVar3);
  if (iVar2 != 0) {
    iVar2 = fn_0069180c(iVar3);
    uVar1 = 0;
    if (iVar2 != 0) {
      uVar1 = *(undefined1 *)(param_2 + iVar3 + -1);
    }
    *param_4 = uVar1;
  }
  return;
}



void fn_0062b748(undefined4 param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  short *psVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  
  iVar3 = fn_0062a40c(param_1);
  if (iVar3 == 0x1fe) {
    cVar2 = *(char *)(param_2 + 5);
    iVar3 = (int)cVar2;
    uVar10 = iVar3 - 0x10;
    uVar4 = 0x1fe;
    if (uVar10 >= 4) {
      uVar4 = iVar3 - 0x18;
    }
    if ((uVar10 < 4 || uVar4 < 4) || (iVar3 == 0x20 || iVar3 == 0x22)) {
      uVar4 = 0x10;
    }
    else {
      uVar4 = 0x14;
    }
    iVar5 = fn_0061be08(iVar3);
    if (iVar5 == 0) {
      uVar6 = 0x18;
    }
    else {
      uVar6 = 0x14;
    }
    param_3 = param_3 + 0x180388;
    if (uVar4 < uVar6) {
      do {
        iVar5 = param_3 + uVar4 * 0x418;
        if (0 < *(short *)(iVar5 + -0x4080)) {
          cVar1 = *(char *)(iVar5 + -0x4019);
          bVar11 = cVar1 == '\0';
          if (bVar11) {
            cVar1 = *(char *)(iVar5 + -0x400a);
          }
          bVar12 = bVar11 && cVar1 == '\0';
          if (bVar11 && cVar1 == '\0') {
            bVar12 = *(char *)(iVar5 + -0x4018) == '\0';
          }
          if (bVar12) {
            iVar8 = param_4 + *(int *)(param_4 + 4) * 0x1a0;
            *(undefined2 *)(iVar8 + 0x20a0) = 1;
            *(undefined1 *)(iVar8 + 0x208a) = 4;
            *(undefined2 *)(iVar8 + 0x208c) = 0xc;
            *(char *)(iVar8 + 0x2088) = cVar2;
            *(char *)(iVar8 + 0x2089) = (char)uVar4;
            *(undefined1 *)(iVar8 + 0x208e) = 4;
            *(undefined1 *)(iVar8 + 0x208f) = 8;
            iVar5 = fn_00176e70();
            *(int *)(iVar8 + 0x20a4) = -iVar5;
            *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + 1;
            fn_0062187c(param_1,(char *)(iVar8 + 0x2088),param_3);
            fn_00654bf4(param_3,*(undefined4 *)(iVar8 + 0x221c));
            fn_00654c30(param_3,*(undefined4 *)(iVar8 + 0x2220));
          }
        }
        uVar4 = (uint)(char)((char)uVar4 + '\x01');
        iVar5 = fn_0061be08(iVar3);
        if (iVar5 == 0) {
          uVar6 = 0x18;
        }
        else {
          uVar6 = 0x14;
        }
      } while ((int)uVar4 < (int)uVar6);
    }
    if (uVar10 >= 4) {
      uVar6 = iVar3 - 0x18;
    }
    if ((uVar10 < 4 || uVar6 < 4) || (iVar3 == 0x20 || iVar3 == 0x22)) {
      uVar4 = 0x18;
    }
    else {
      uVar4 = 0x1c;
    }
    iVar5 = fn_0061be08(iVar3);
    if (iVar5 == 0) {
      uVar10 = 0x20;
    }
    else {
      uVar10 = 0x1c;
    }
    if (uVar4 < uVar10) {
      do {
        iVar5 = param_3 + uVar4 * 0x418;
        psVar9 = (short *)(iVar5 + -0x4080);
        if (0 < *psVar9) {
          cVar2 = *(char *)(iVar5 + -0x400a);
          bVar11 = cVar2 == '\0';
          if (bVar11) {
            cVar2 = *(char *)(iVar5 + -0x4018);
          }
          if (bVar11 && cVar2 == '\0') {
            if (*(char *)(iVar5 + -0x4019) == '\0') {
              uVar7 = fn_00176dc0(psVar9);
              fn_00180278(psVar9,uVar7);
            }
            else {
              uVar7 = fn_00176dc0(psVar9);
              fn_00174610(psVar9,uVar7);
            }
            uVar7 = fn_00176e70(psVar9);
            fn_0017455c(psVar9,uVar7);
          }
        }
        uVar4 = (uint)(char)((char)uVar4 + '\x01');
        iVar5 = fn_0061be08(iVar3);
        if (iVar5 == 0) {
          iVar5 = 0x20;
        }
        else {
          iVar5 = 0x1c;
        }
      } while ((int)uVar4 < iVar5);
    }
  }
  return;
}


