#include "00238020_00238c04.h"



void fn_00238c04(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0x98);
  while (piVar1 = *(int **)(param_1 + 0x9c), piVar1 != piVar4) {
    if (*piVar4 != -1) {
      uVar2 = fn_0017481c(DAT_008977e4);
      fn_00254430(uVar2,*piVar4);
      *piVar4 = -1;
      piVar4 = piVar4 + 1;
    }
  }
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 != 0) {
    piVar1 = (int *)(uint)*(byte *)(param_1 + 0x34);
  }
  if (iVar3 != 0 && piVar1 != (int *)0x0) {
    fn_001594e4(DAT_008977e4,iVar3,0);
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 4))();
    *(undefined4 *)(param_1 + 4) = 0;
  }
  uVar2 = fn_0017481c(DAT_008977e4);
  fn_00254430(uVar2,*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}



void fn_00238b4c(int param_1,uint param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint *puVar2;
  uint local_c;
  
  if (param_2 == 0xffffffff) {
    return;
  }
  puVar2 = *(uint **)(param_1 + 0x98);
  while( true ) {
    if (*(uint **)(param_1 + 0x9c) == puVar2) {
      local_c = param_2;
      fn_0079d450(param_1 + 0x98,&local_c,param_2,param_4,param_1);
      iVar1 = fn_0017481c(DAT_008977e4);
      if (((int)local_c < 0) ||
         ((uint)((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0x34) <= local_c)) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(iVar1 + 4) + local_c * 0x34;
      }
      fn_0069eb10(*(undefined4 *)(param_1 + 4),iVar1,0);
      return;
    }
    param_4 = *puVar2;
    if (param_4 == param_2) break;
    puVar2 = puVar2 + 1;
  }
  return;
}



undefined4 fn_00238768(int *param_1,short *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int in_s0;
  uint local_30;
  uint local_2c [2];
  
  iVar1 = fn_0017481c(DAT_008977e4);
  local_30 = (uint)*(byte *)((int)param_1 + 0x35);
  uVar2 = fn_00253a74(iVar1,&local_30,(int)*param_2);
  *(short *)(param_1 + 0x2b) = *param_2;
  local_2c[0] = (uint)*(byte *)((int)param_1 + 0x35);
  uVar3 = fn_00253bfc(iVar1,local_2c);
  uVar3 = fn_00238cb0(param_1,uVar2,uVar3);
  iVar4 = fn_001f84ac(param_3);
  if ((iVar4 != 0) && (iVar4 = fn_002544d0(iVar1,(int)*param_2), iVar4 != -1)) {
    uVar5 = fn_002541e4(iVar1,iVar4,0);
    if (((int)uVar2 < 0) || ((uint)((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0x34) <= uVar2)) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)(*(int *)(iVar1 + 0x10) + uVar2 * 4);
    }
    if (((int)uVar2 < 0) || ((uint)((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0x34) <= uVar2)) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(iVar1 + 4) + uVar2 * 0x34;
    }
    fn_002cd5b0(iVar6,uVar8,uVar5,param_3);
    fn_00254430(iVar1,iVar4);
  }
  fn_002cd59c((int)*(char *)((int)param_2 + 0x59));
  param_1[9] = in_s0;
  param_1[10] = in_s0;
  param_1[0xb] = in_s0;
  uVar5 = fn_0017fde4(param_1[1]);
  fn_002cd6b0(uVar5,(int)*(char *)((int)param_2 + 0x59));
  (**(code **)(*param_1 + 0x18))(param_1,1);
  iVar4 = fn_00145b00(0x10,&DAT_00812c8c);
  iVar1 = 0;
  if (iVar4 != 0) {
    iVar1 = fn_001fa2fc();
  }
  iVar4 = param_1[0x29];
  if (iVar4 != iVar1) {
    if (iVar4 != 0) {
      fn_001fa314(iVar4);
      fn_002feef8();
    }
    param_1[0x29] = iVar1;
  }
  uVar5 = fn_00242bd4((int)*param_2);
  fn_001fa18c(param_1[0x29],uVar5);
  piVar7 = (int *)fn_00242b4c((int)*param_2);
  param_1[0x2a] = *piVar7;
  if ((short)param_1[0x2b] == 0x266) {
    (**(code **)(*param_1 + 0x24))(param_1,&DAT_002389f4,0);
  }
  else if ((short)param_1[0x2b] != 0x267) goto LAB_002389d8;
  (**(code **)(*param_1 + 0x24))(param_1,(char *)&DAT_002389f8,1);
  (**(code **)(*param_1 + 0x24))(param_1,&DAT_00238a00,0);
  (**(code **)(*param_1 + 0x24))(param_1,(char *)&DAT_00238a08,0);
LAB_002389d8:
  *(undefined1 *)((int)param_1 + 0xae) = 1;
  return uVar3;
}



void fn_00238718(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint in_fpscr;
  
  iVar2 = 0;
  do {
    iVar3 = param_1 + iVar2 * 8;
    if (*(int *)(iVar3 + 0x4c) != -1) {
      uVar1 = fn_006a7b84(DAT_008977e4);
      VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
      fn_0023e554(uVar1,*(undefined4 *)(iVar3 + 0x4c));
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 10);
  return;
}



void fn_0023865c(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar1 = fn_00174828(DAT_008977e4);
    iVar1 = iVar1 + *(char *)(param_1 + 0x35) * 0x418;
    if (((('\0' < *(char *)(iVar1 + -0x401e)) || ('\0' < *(char *)(iVar1 + -0x401d))) ||
        ('\0' < *(char *)(iVar1 + -0x401c))) || ('\0' < *(char *)(iVar1 + -0x3ff9))) {
      return;
    }
  }
  fn_001747e0(param_1);
  return;
}



void fn_002385d8(int param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  undefined4 uVar6;
  
  uVar6 = *(undefined4 *)(param_1 + 4);
  fn_0017fde4(uVar6);
  piVar2 = (int *)fn_005ea4fc();
  fn_0017fde4(uVar6);
  iVar3 = fn_006ebe58();
  if (*(short *)(iVar3 + 0x88) == 0) {
    uVar4 = 0xffff;
  }
  else {
    uVar6 = fn_002febd8(param_2);
    uVar4 = fn_00190fe0(iVar3 + 0x88,param_2,uVar6);
  }
  bVar1 = *(byte *)(*piVar2 + (uVar4 >> 3));
  bVar5 = (byte)(1 << (uVar4 & 7));
  if (param_3 == 0) {
    bVar5 = bVar1 & ~bVar5;
  }
  else {
    bVar5 = bVar5 | bVar1;
  }
  *(byte *)(*piVar2 + (uVar4 >> 3)) = bVar5;
  return;
}



/* WARNING: Type propagation algorithm not settling */

void fn_00238020(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  if (*(char *)(param_1 + 0xaf) == '\0') {
    return;
  }
  iVar2 = fn_00174828(DAT_008977e4);
  uVar10 = 0;
  iVar2 = iVar2 + *(char *)(param_1 + 0x35) * 0x418;
switchD_00238078_caseD_0:
  cVar1 = *(char *)(iVar2 + -0x401b);
joined_r0x002380b0:
  if (cVar1 < '\x01') {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
switchD_00238078_default:
  uVar3 = uVar3 & (int)*(char *)(param_1 + 0x34);
  if ((int)*(char *)(param_1 + uVar10 * 8 + 0x48) != uVar3) {
    if (uVar3 == 0) {
      iVar4 = param_1 + (uVar10 & 0xff) * 8;
      *(undefined1 *)(iVar4 + 0x48) = 0;
      if (-1 < *(int *)(iVar4 + 0x4c)) {
        piVar8 = (int *)fn_006a7b84(DAT_008977e4);
        (**(code **)(*piVar8 + 0xc))(piVar8,*(undefined4 *)(iVar4 + 0x4c));
      }
      *(undefined1 *)(iVar4 + 0x48) = 0;
      *(undefined4 *)(iVar4 + 0x4c) = 0xffffffff;
    }
    else {
      uVar3 = uVar10 & 0xff;
      iVar11 = param_1 + uVar3 * 8;
      *(undefined1 *)(iVar11 + 0x48) = 1;
      iVar4 = fn_001c2a7c(uVar3);
      if (iVar4 != 0) {
        uVar5 = fn_006a7b84(DAT_008977e4);
        uVar6 = fn_001c2a7c(uVar3);
        iVar4 = fn_00175978(uVar5,uVar6);
        if (iVar4 != -1) {
          uVar6 = fn_0017fde4(*(undefined4 *)(param_1 + 4));
          uVar7 = fn_001c2a7c(uVar3);
          uVar5 = fn_0016a9b0(uVar5,uVar7,uVar6,iVar4,uVar5,uVar6);
          *(undefined4 *)(iVar11 + 0x4c) = uVar5;
        }
      }
    }
  }
  uVar10 = uVar10 + 1;
  if (9 < (int)uVar10) {
    if (*(int *)(param_1 + 0x30) != 0) {
      return;
    }
    iVar2 = fn_00174828(DAT_008977e4);
    iVar2 = iVar2 + *(char *)(param_1 + 0x35) * 0x418;
    if ((((*(char *)(iVar2 + -0x401e) < '\x01') && (*(char *)(iVar2 + -0x401d) < '\x01')) &&
        (*(char *)(iVar2 + -0x401c) < '\x01')) && (*(char *)(iVar2 + -0x3ff9) < '\x01')) {
      return;
    }
    fn_001747e0(param_1);
    return;
  }
  uVar3 = 0;
  switch(uVar10) {
  case 0:
    goto switchD_00238078_caseD_0;
  case 1:
    goto switchD_00238078_caseD_1;
  case 2:
    cVar1 = *(char *)(iVar2 + -0x401e);
    goto joined_r0x002380b0;
  case 3:
    cVar1 = *(char *)(iVar2 + -0x401f);
    goto joined_r0x002380b0;
  case 4:
    cVar1 = *(char *)(iVar2 + -0x401c);
    goto joined_r0x002380b0;
  case 5:
    cVar1 = *(char *)(iVar2 + -0x401a);
    goto joined_r0x002380b0;
  case 6:
    uVar3 = (uint)((((((((((((((((('\0' < *(char *)(iVar2 + -0x4023) ||
                                  '\0' < *(char *)(iVar2 + -0x4022)) ||
                                 '\0' < *(char *)(iVar2 + -0x4020)) ||
                                '\0' < *(char *)(iVar2 + -0x4021)) ||
                               '\0' < *(char *)(iVar2 + -0x4015)) ||
                              '\0' < *(char *)(iVar2 + -0x4014)) ||
                             '\0' < *(char *)(iVar2 + -0x4013)) || '\0' < *(char *)(iVar2 + -0x4011)
                            ) || '\0' < *(char *)(iVar2 + -0x400e)) ||
                          '\0' < *(char *)(iVar2 + -0x4008)) || '\0' < *(char *)(iVar2 + -0x4007))
                        || '\0' < *(char *)(iVar2 + -0x4006)) || '\0' < *(char *)(iVar2 + -0x4005))
                      || '\0' < *(char *)(iVar2 + -0x4004)) || '\0' < *(char *)(iVar2 + -0x4003)) ||
                    '\0' < *(char *)(iVar2 + -0x4002)) || '\0' < *(char *)(iVar2 + -0x4001)) ||
                  '\0' < *(char *)(iVar2 + -0x3ff8));
    if ('\0' < *(char *)(iVar2 + -0x3fd2)) goto LAB_00238284;
LAB_00238464:
    uVar9 = 0;
    break;
  case 7:
    uVar3 = (uint)(int)(char)(*(byte *)(iVar2 + -0x4023) | *(byte *)(iVar2 + -0x4022) |
                              *(byte *)(iVar2 + -0x4020) | *(byte *)(iVar2 + -0x4021) |
                              *(byte *)(iVar2 + -0x4015) | *(byte *)(iVar2 + -0x4014) |
                              *(byte *)(iVar2 + -0x4013) | *(byte *)(iVar2 + -0x4011)) >> 0x1f |
            (uint)('\0' < *(char *)(iVar2 + -0x400d)) | (uint)('\0' < *(char *)(iVar2 + -0x3fd5)) |
            (uint)('\0' < *(char *)(iVar2 + -0x3fd4)) | (uint)('\0' < *(char *)(iVar2 + -0x3fd3)) |
            (uint)('\0' < *(char *)(iVar2 + -0x3fd1)) | (uint)('\0' < *(char *)(iVar2 + -0x3fd0)) |
            (uint)('\0' < *(char *)(iVar2 + -0x3fcf)) | (uint)('\0' < *(char *)(iVar2 + -0x3fce)) |
            (uint)('\0' < *(char *)(iVar2 + -0x3fcd)) | (uint)('\0' < *(char *)(iVar2 + -0x3fcc)) |
            (uint)('\0' < *(char *)(iVar2 + -0x3fcb)) | (uint)('\0' < *(char *)(iVar2 + -0x3fca));
    if (*(char *)(iVar2 + -0x3fc6) < '\x01') goto LAB_00238464;
LAB_00238284:
    uVar9 = 1;
    break;
  case 8:
    iVar4 = fn_00166804(iVar2 + -0x4080);
    if (iVar4 == 0) {
      iVar4 = fn_001667f0(iVar2 + -0x4080);
      uVar3 = 0;
      if (iVar4 != 0) goto LAB_00238494;
    }
    else {
LAB_00238494:
      uVar3 = 1;
    }
    uVar3 = uVar3 & *(char *)(iVar2 + -0x3c6c) == '\0';
    goto switchD_00238078_default;
  case 9:
    uVar3 = (uint)(*(char *)(iVar2 + -0x4019) < '\x01') & (int)*(char *)(iVar2 + -0x3c6c);
  default:
    goto switchD_00238078_default;
  }
  uVar3 = uVar3 | uVar9;
  goto switchD_00238078_default;
switchD_00238078_caseD_1:
  cVar1 = *(char *)(iVar2 + -0x401d);
  goto joined_r0x002380b0;
}


