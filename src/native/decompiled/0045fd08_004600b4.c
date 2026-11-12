#include "0045fd08_004600b4.h"



void fn_004600b4(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint local_28;
  int local_24;
  undefined1 auStack_20 [12];
  
  fn_0013d0fc(&local_28);
  if (param_1[0x30] == 0) {
    iVar1 = fn_004b7748();
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(iVar1 + 0x90);
    }
    if (*(char *)(iVar1 + 0xfe) != '\0') {
      (**(code **)(*param_1 + 0x88))(param_1,3,1);
      return;
    }
    uVar2 = (**(code **)(*param_1 + 0x48))(param_1);
    uVar3 = local_28 - param_1[0x38];
    iVar1 = local_24 - (param_1[0x39] + (uint)(local_28 < (uint)param_1[0x38]));
    if ((int)-(iVar1 + (uint)(uVar2 < uVar3)) < 0 ==
        (SBORROW4(0,iVar1) != SBORROW4(-iVar1,(uint)(uVar2 < uVar3)))) {
      iVar1 = fn_004b61c8(param_1[1],uVar2 - uVar3);
      uVar2 = (**(code **)(*param_1 + 0x44))(param_1);
      local_24 = local_24 - (param_1[0x37] + (uint)(local_28 < (uint)param_1[0x36]));
      bVar4 = uVar2 < local_28 - param_1[0x36];
      if (((int)-(local_24 + (uint)bVar4) < 0 !=
           (SBORROW4(0,local_24) != SBORROW4(-local_24,(uint)bVar4))) &&
         (*(char *)(iVar1 + 0x95) != '\0')) {
        *(short *)(param_1[0x2a] + 0x44) = *(short *)(param_1[0x2a] + 0x44) + 1;
        *(undefined1 *)(param_1[0x2a] + 0x89) = 0;
        iVar1 = (**(code **)(*param_1 + 0x44))(param_1);
        if ((iVar1 != 0) && (iVar1 = (**(code **)(*param_1 + 0x44))(param_1), iVar1 != -1)) {
          param_1[0xa9] = param_1[0xa9] + 1;
          param_1[0xcd] = (uint)*(ushort *)(param_1[0x2a] + 0x44);
          fn_0045fd08(auStack_20,param_1,param_1[0x2a]);
        }
      }
      fn_004722b4(param_1[1] + 0x14,param_1[0x2a]);
      return;
    }
    uVar2 = (**(code **)(*param_1 + 0x2c))(param_1);
    if (((uVar2 & (int)DAT_008b639b) == 0) ||
       (iVar1 = (**(code **)(**(int **)(param_1[1] + 8) + 0x10))(*(int **)(param_1[1] + 8),param_1),
       iVar1 == 0)) {
      *(undefined1 *)((int)param_1 + 0x14a) = 0xb;
      fn_00460e38(param_1,2);
      return;
    }
  }
  else {
    fn_00460e38(param_1);
  }
  return;
}



void fn_0045fd08(undefined4 *param_1,int *param_2,int param_3)

{
  undefined1 uVar1;
  ushort uVar2;
  undefined2 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined8 in_d8;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 in_d9;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 in_d10;
  undefined4 uVar15;
  int *local_40;
  int iStack_3c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  
  uVar8 = 0;
  uStack_34 = (undefined4)in_d8;
  uStack_30 = (undefined4)((ulonglong)in_d8 >> 0x20);
  uStack_2c = (undefined4)in_d9;
  uStack_28 = (undefined4)((ulonglong)in_d9 >> 0x20);
  uStack_24 = (undefined4)in_d10;
  local_20 = (undefined4)((ulonglong)in_d10 >> 0x20);
  param_2[0xa4] = param_2[0xa4] + 1;
  if (*(int *)(param_3 + 0xd8) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(uint *)(*(int *)(param_3 + 0xd8) + 0x10) & 0xffff;
  }
  param_2[0xad] = uVar6 + param_2[0xad];
  if ((*(ushort *)(param_3 + 0x3c) & 0x200) == 0) {
    if ((*(ushort *)(param_3 + 0x3c) & 0x400) == 0) {
      if ((char)param_2[0x1b] == '\0') {
        fn_0014ea80(param_2 + 2);
      }
      iVar7 = param_2[3];
      uVar10 = *(undefined4 *)(iVar7 + 8);
      uVar11 = *(undefined4 *)(iVar7 + 0xc);
      uVar12 = *(undefined4 *)(iVar7 + 0x10);
      uVar13 = *(undefined4 *)(iVar7 + 0x14);
      uVar14 = *(undefined4 *)(iVar7 + 0x18);
      uVar15 = *(undefined4 *)(iVar7 + 0x1c);
      *(undefined4 *)(param_3 + 0xe0) = *(undefined4 *)(iVar7 + 4);
      *(undefined4 *)(param_3 + 0xe4) = uVar10;
      *(undefined4 *)(param_3 + 0xe8) = uVar11;
      *(undefined4 *)(param_3 + 0xec) = uVar12;
      *(undefined4 *)(param_3 + 0xf0) = uVar13;
      *(undefined4 *)(param_3 + 0xf4) = uVar14;
      *(undefined4 *)(param_3 + 0xf8) = uVar15;
    }
    else {
      uVar10 = *(undefined4 *)(DAT_008b6404 + 0x30);
      uVar11 = *(undefined4 *)(DAT_008b6404 + 0x34);
      uVar12 = *(undefined4 *)(DAT_008b6404 + 0x38);
      uVar13 = *(undefined4 *)(DAT_008b6404 + 0x3c);
      uVar14 = *(undefined4 *)(DAT_008b6404 + 0x40);
      uVar15 = *(undefined4 *)(DAT_008b6404 + 0x44);
      *(undefined4 *)(param_3 + 0xe0) = *(undefined4 *)(DAT_008b6404 + 0x2c);
      *(undefined4 *)(param_3 + 0xe4) = uVar10;
      *(undefined4 *)(param_3 + 0xe8) = uVar11;
      *(undefined4 *)(param_3 + 0xec) = uVar12;
      *(undefined4 *)(param_3 + 0xf0) = uVar13;
      *(undefined4 *)(param_3 + 0xf4) = uVar14;
      *(undefined4 *)(param_3 + 0xf8) = uVar15;
      param_2[0xa8] = param_2[0xa8] + 1;
      if (*(int *)(param_3 + 0xd8) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(uint *)(*(int *)(param_3 + 0xd8) + 0x10) & 0xffff;
      }
      param_2[0xb1] = uVar6 + param_2[0xb1];
    }
  }
  else {
    uVar6 = *(uint *)(DAT_008b6404 + 0xc);
    uVar10 = *(undefined4 *)(DAT_008b6404 + 0x10);
    uVar11 = *(undefined4 *)(DAT_008b6404 + 0x14);
    uVar12 = *(undefined4 *)(DAT_008b6404 + 0x18);
    uVar13 = *(undefined4 *)(DAT_008b6404 + 0x1c);
    uVar14 = *(undefined4 *)(DAT_008b6404 + 0x20);
    uVar15 = *(undefined4 *)(DAT_008b6404 + 0x24);
    if ((char)param_2[0x1b] == '\0') {
      fn_0014ea80(param_2 + 2);
    }
    *(uint *)(param_3 + 0xe0) =
         uVar6 & 0xffff |
         ((uint)(*(ushort *)(param_2[3] + 6) >> 8) << 8 | *(ushort *)(param_2[3] + 6) & 0xff) <<
         0x10;
    *(undefined4 *)(param_3 + 0xe4) = uVar10;
    *(undefined4 *)(param_3 + 0xe8) = uVar11;
    *(undefined4 *)(param_3 + 0xec) = uVar12;
    *(undefined4 *)(param_3 + 0xf0) = uVar13;
    *(undefined4 *)(param_3 + 0xf4) = uVar14;
    *(undefined4 *)(param_3 + 0xf8) = uVar15;
    param_2[0xa7] = param_2[0xa7] + 1;
    if (*(int *)(param_3 + 0xd8) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(uint *)(*(int *)(param_3 + 0xd8) + 0x10) & 0xffff;
    }
    param_2[0xb0] = uVar6 + param_2[0xb0];
  }
  iVar7 = param_2[0x46];
  fn_0017821c(param_3 + 0x28,param_2 + 0x42,iVar7);
  *(int *)(param_3 + 0x38) = iVar7;
  *(undefined1 *)(param_3 + 0x65) = *(undefined1 *)((int)param_2 + 0x149);
  if ((*(ushort *)(param_3 + 0x3c) & 0x20) == 0) {
    param_2[0xa5] = param_2[0xa5] + 1;
    if (*(int *)(param_3 + 0xd8) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(uint *)(*(int *)(param_3 + 0xd8) + 0x10) & 0xffff;
    }
    param_2[0xae] = uVar6 + param_2[0xae];
    uVar2 = *(ushort *)(param_3 + 0x3c);
    bVar9 = (uVar2 & 0x2010) == 0;
    if (bVar9) {
      uVar2 = uVar2 & 0xf;
    }
    if (bVar9 && uVar2 == 2) {
      param_2[0xa6] = param_2[0xa6] + 1;
      if (*(int *)(param_3 + 0xd8) != 0) {
        uVar8 = *(uint *)(*(int *)(param_3 + 0xd8) + 0x10) & 0xffff;
      }
      param_2[0xaf] = param_2[0xaf] + uVar8;
      if ((*(ushort *)(param_3 + 0x3c) & 0x600) == 0) {
        *(short *)(param_3 + 0x44) = (short)param_2[0x3b];
        *(short *)(param_2 + 0x3b) = (short)param_2[0x3b] + 1;
      }
      else {
        *(undefined2 *)(param_3 + 0x44) = *(undefined2 *)(param_2[0x3e] + 4);
        *(short *)(param_2[0x3e] + 4) = *(short *)(param_2[0x3e] + 4) + 1;
      }
      fn_0045c250(param_2 + 0x80,param_3,*(undefined1 *)(param_2[1] + 4),1);
    }
    iVar7 = fn_004b61c8(param_2[1]);
    if (*(char *)(iVar7 + 0x68) != '\0') {
      fn_0013d0fc(&local_40);
      param_2[0x36] = (int)local_40;
      param_2[0x37] = iStack_3c;
    }
    uVar1 = fn_006d0810(param_2 + 2,&DAT_007d9e30,0);
    local_40 = param_2 + 0x88;
    fn_004591b0(param_2[1],*(undefined2 *)((int)param_2 + 0x8e),uVar1,param_3);
  }
  else {
    param_2[0xc0] = param_2[0xc0] + 1;
    if (*(int *)(param_3 + 0xd8) != 0) {
      uVar8 = *(uint *)(*(int *)(param_3 + 0xd8) + 0x10) & 0xffff;
    }
    param_2[0xc1] = param_2[0xc1] + uVar8;
    if (*(short *)(param_3 + 0x120) == 0) {
      param_2[199] = param_2[199] + 1;
      iVar7 = fn_0046ba34(*(undefined4 *)(param_2[0x27] + (uint)*(byte *)(param_3 + 0x84) * 4),
                           param_3,param_2 + 0x80,param_2[1]);
      uVar12 = uStack_28;
      uVar11 = uStack_2c;
      uVar10 = uStack_30;
      if (iVar7 == 0) {
        uStack_30 = uStack_34;
        uStack_2c = uVar10;
        uStack_28 = uVar11;
        uStack_24 = uVar12;
        *param_1 = 0x10001;
        param_1[1] = &DAT_007dba44;
        param_1[2] = 0x7f;
        param_2[200] = param_2[200] + 1;
        *(undefined1 *)((int)param_2 + 0x14a) = 10;
        (**(code **)(*param_2 + 0x88))(param_2,2,1);
        piVar5 = DAT_008b6490;
        if (*(char *)(param_2[1] + 4) != '\n') {
          if (*(char *)(param_2[1] + 4) == '\x01') {
            if (DAT_008b6391 == '\x01') {
              return;
            }
            if (DAT_008b6490 != (int *)0x0) {
              uVar3 = fn_006d0810(param_2 + 2,L"NodeId",0);
              iVar7 = (**(code **)(*piVar5 + 0x30))(piVar5,uVar3);
              if (iVar7 == 0) {
                return;
              }
            }
          }
          *param_1 = 0x8005000d;
          param_1[1] = &DAT_007dba44;
          param_1[2] = 0x71;
          iVar7 = param_2[0x22];
          if (iVar7 != 0) {
            piVar5 = (int *)(iVar7 + 4);
            (**(code **)(*piVar5 + 8))();
            iVar7 = *(int *)(iVar7 + 0x2c);
            (**(code **)(*piVar5 + 0xc))(piVar5);
            if (-1 < iVar7) {
              iVar7 = param_2[0x22];
              uVar10 = *param_1;
              uVar11 = param_1[1];
              uVar12 = param_1[2];
              (**(code **)(*(int *)(iVar7 + 4) + 8))();
              if (-1 < *(int *)(iVar7 + 0x2c)) {
                *(undefined4 *)(iVar7 + 0x2c) = uVar10;
                *(undefined4 *)(iVar7 + 0x30) = uVar11;
                *(undefined4 *)(iVar7 + 0x34) = uVar12;
              }
                    /* WARNING: Could not recover jumptable at 0x004633e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*(int *)(iVar7 + 4) + 0xc))((int *)(iVar7 + 4));
              return;
            }
          }
        }
        return;
      }
    }
    fn_0045c250(param_2 + 0x80,param_3,*(undefined1 *)(param_2[1] + 4),1);
    iVar7 = fn_0046b964(*(undefined4 *)(param_2[0x27] + (uint)*(byte *)(param_3 + 0x84) * 4));
    if (iVar7 != 0) {
      iVar4 = fn_004b61c8(param_2[1]);
      if (*(char *)(iVar4 + 0x68) == '\0') {
        fn_0013d0fc(&local_40);
        param_2[0x36] = (int)local_40;
        param_2[0x37] = iStack_3c;
      }
      fn_00460784(param_2,iVar7);
    }
  }
  *param_1 = 0x10001;
  param_1[1] = &DAT_007dba44;
  param_1[2] = 0x71;
  return;
}


