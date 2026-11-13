#include "00628a30_00628e98.h"



void fn_00628e98(int param_1,int param_2,int param_3,int *param_4)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  bool bVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  int *piVar11;
  uint uVar12;
  undefined1 auStack_38 [16];
  int local_28;
  
  if ((char)param_4[0x1458] != '\0') {
    return;
  }
  iVar5 = param_3 + 0x180388;
  if ((int)*(char *)(param_2 + 5) - 0x10U < 8) {
    bVar10 = 1;
    bVar4 = true;
    iVar9 = 0;
    if (0 < *param_4) {
      do {
        uVar12 = (uint)(short)param_4[iVar9 * 0x68 + 8];
        bVar4 = (bool)(bVar4 & *(char *)((int)param_4 + iVar9 * 0x1a0 + 0x186) != '\0');
        if (0 < (int)(uVar12 - 1)) {
          pbVar6 = (byte *)((int)param_4 + iVar9 * 0x1a0 + 0xf);
          if ((uVar12 & 1) == 0) {
            pbVar6 = (byte *)(param_4 + iVar9 * 0x68 + 4);
            bVar10 = bVar10 & *pbVar6;
          }
          bVar1 = pbVar6[1];
          for (iVar8 = (int)(uVar12 - 1) >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
            bVar10 = bVar10 & bVar1;
            bVar1 = pbVar6[3];
            bVar10 = pbVar6[2] & bVar10;
            pbVar6 = pbVar6 + 2;
          }
        }
        if (-1 < (int)(uVar12 - 1)) {
          bVar10 = bVar10 & *(byte *)((int)param_4 + (uVar12 - 1) + iVar9 * 0x1a0 + 0x10);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < *param_4);
      if (bVar10 == 0) {
        uVar7 = fn_0062a40c(param_1,param_2);
        cVar2 = *(char *)(param_2 + 5);
        iVar9 = fn_001639e4();
        if (iVar9 == 0x33) {
          iVar8 = param_4[1];
          piVar11 = param_4 + iVar8 * 0x68 + 0x822;
          *(undefined1 *)((int)param_4 + iVar8 * 0x1a0 + 0x208a) = 4;
          *(undefined2 *)(param_4 + iVar8 * 0x68 + 0x823) = 0xd;
          *(char *)piVar11 = cVar2;
          *(char *)((int)param_4 + iVar8 * 0x1a0 + 0x2089) = cVar2;
          *(undefined1 *)((int)param_4 + iVar8 * 0x1a0 + 0x208e) = 3;
          *(undefined1 *)((int)param_4 + iVar8 * 0x1a0 + 0x208f) = 8;
          *(undefined2 *)(param_4 + iVar8 * 0x68 + 0x828) = 1;
          iVar9 = fn_0062c4b0(uVar7,(int)cVar2);
          param_4[iVar8 * 0x68 + 0x829] = iVar9;
          fn_0062187c(param_1,piVar11,iVar5);
          fn_0062abdc(param_1,iVar5,piVar11,param_3);
          fn_00654bf4(iVar5,param_4[iVar8 * 0x68 + 0x887]);
          fn_00654c30(iVar5,param_4[iVar8 * 0x68 + 0x888]);
          param_4[1] = param_4[1] + 1;
        }
        local_28 = fn_0062a40c(param_1,param_2);
        cVar2 = *(char *)(param_2 + 5);
        if (local_28 == 0xa5) {
          iVar9 = param_4[1];
          piVar11 = param_4 + iVar9 * 0x68 + 0x822;
          *(undefined1 *)((int)param_4 + iVar9 * 0x1a0 + 0x208a) = 4;
          *(undefined2 *)(param_4 + iVar9 * 0x68 + 0x823) = 0xd;
          *(char *)piVar11 = cVar2;
          *(char *)((int)param_4 + iVar9 * 0x1a0 + 0x2089) = cVar2;
          *(undefined1 *)((int)param_4 + iVar9 * 0x1a0 + 0x208e) = 3;
          *(undefined1 *)((int)param_4 + iVar9 * 0x1a0 + 0x208f) = 8;
          *(undefined2 *)(param_4 + iVar9 * 0x68 + 0x828) = 1;
          fn_00655a88(auStack_38);
          fn_00616c50(local_28,1,0,(int)cVar2,(int)cVar2,iVar5,auStack_38,
                       param_4 + iVar9 * 0x68 + 0x829,0);
          fn_0062187c(param_1,piVar11,iVar5);
          fn_0062abdc(param_1,iVar5,piVar11,param_3);
          fn_00654bf4(iVar5,param_4[iVar9 * 0x68 + 0x887]);
          fn_00654c30(iVar5,param_4[iVar9 * 0x68 + 0x888]);
          param_4[1] = param_4[1] + 1;
        }
        if (!bVar4) {
          fn_00622f0c(param_1,param_2,param_3,param_4);
        }
      }
    }
    iVar9 = fn_0062a40c(param_1,param_2);
    uVar3 = *(undefined1 *)(param_2 + 5);
    if (iVar9 == 0xa6) {
      iVar8 = param_4[1];
      piVar11 = param_4 + iVar8 * 0x68 + 0x822;
      *(undefined1 *)((int)param_4 + iVar8 * 0x1a0 + 0x208a) = 4;
      *(undefined2 *)(param_4 + iVar8 * 0x68 + 0x823) = 0xd;
      *(undefined1 *)piVar11 = uVar3;
      *(undefined1 *)((int)param_4 + iVar8 * 0x1a0 + 0x2089) = uVar3;
      *(undefined1 *)((int)param_4 + iVar8 * 0x1a0 + 0x208e) = 3;
      *(undefined1 *)((int)param_4 + iVar8 * 0x1a0 + 0x208f) = 8;
      *(undefined2 *)(param_4 + iVar8 * 0x68 + 0x828) = 1;
      iVar9 = fn_0062c774((int)*(char *)(param_2 + 5));
      param_4[iVar8 * 0x68 + 0x829] = iVar9;
      fn_0062187c(param_1,piVar11,iVar5);
      fn_0062abdc(param_1,iVar5,piVar11,param_3);
      fn_00654bf4(iVar5,param_4[iVar8 * 0x68 + 0x887]);
      fn_00654c30(iVar5,param_4[iVar8 * 0x68 + 0x888]);
      param_4[1] = param_4[1] + 1;
    }
    uVar7 = fn_0062a40c(param_1,param_2);
    uVar3 = *(undefined1 *)(param_2 + 5);
    iVar9 = fn_001639e4();
    if (iVar9 == 0x38) {
      iVar8 = param_4[1];
      piVar11 = param_4 + iVar8 * 0x68 + 0x822;
      *(undefined1 *)((int)param_4 + iVar8 * 0x1a0 + 0x208a) = 4;
      *(undefined2 *)(param_4 + iVar8 * 0x68 + 0x823) = 0xd;
      *(undefined1 *)piVar11 = uVar3;
      *(undefined1 *)((int)param_4 + iVar8 * 0x1a0 + 0x2089) = uVar3;
      *(undefined1 *)((int)param_4 + iVar8 * 0x1a0 + 0x208e) = 3;
      *(undefined1 *)((int)param_4 + iVar8 * 0x1a0 + 0x208f) = 8;
      *(undefined2 *)(param_4 + iVar8 * 0x68 + 0x828) = 1;
      iVar9 = fn_0062c3fc(uVar7,(int)*(char *)(param_2 + 5));
      param_4[iVar8 * 0x68 + 0x829] = iVar9;
      fn_0062187c(param_1,piVar11,iVar5);
      fn_0062abdc(param_1,iVar5,piVar11,param_3);
      fn_00654bf4(iVar5,param_4[iVar8 * 0x68 + 0x887]);
      fn_00654c30(iVar5,param_4[iVar8 * 0x68 + 0x888]);
      param_4[1] = param_4[1] + 1;
    }
  }
  fn_00626660(param_1,param_4,param_3);
  iVar9 = fn_00626398(param_1,param_3);
  iVar8 = fn_006f4d64(param_1 + 4,1);
  if (iVar8 == 0) {
    iVar8 = fn_006f4d64(param_1 + 4,0);
    bVar4 = false;
    if (iVar8 == 0) goto LAB_00629334;
  }
  bVar4 = true;
LAB_00629334:
  if ((bVar4 || iVar9 != 0) || *(char *)(param_1 + 0x1b) != '\0') {
    return;
  }
  fn_006267fc(param_1,iVar5,param_3,param_4);
  return;
}



undefined4 fn_00628df4(undefined4 param_1,int param_2,int param_3,int param_4,undefined1 *param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_r1;
  int iVar4;
  undefined4 *unaff_r5;
  bool bVar5;
  undefined4 local_18;
  
  iVar4 = 0;
  if (param_2 < param_3) {
    unaff_r5 = &local_18;
  }
  local_18 = 0;
  if (param_2 < param_3) {
    do {
      iVar2 = param_4 + param_2 * 0x418;
      if (0 < *(short *)(iVar2 + -0x4080)) {
        cVar1 = *(char *)(iVar2 + -0x4019);
        bVar5 = cVar1 == '\0';
        if (bVar5) {
          cVar1 = *(char *)(iVar2 + -0x400a);
        }
        if ((bVar5 && cVar1 == '\0') && (*(char *)(iVar2 + -0x4018) == '\0')) {
          *(char *)((int)unaff_r5 + iVar4) = (char)param_2;
          iVar4 = iVar4 + 1;
        }
      }
      param_2 = (int)(char)((char)param_2 + '\x01');
    } while (param_2 < param_3);
    if (iVar4 != 0) {
      uVar3 = fn_0063a5a4();
      fn_00169f1c(uVar3,iVar4);
      *param_5 = *(undefined1 *)((int)unaff_r5 + extraout_r1);
      return 1;
    }
  }
  return 0;
}



undefined4 fn_00628c58(undefined4 param_1,char *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *local_28;
  undefined4 *local_24;
  int local_20;
  
  uVar6 = 0;
  uVar5 = (int)*param_2 + 1;
  local_28 = (undefined4 *)0x0;
  local_24 = (undefined4 *)0x0;
  local_20 = 0;
  fn_00625f70(param_1,param_2,&local_28,3);
  if ((uVar5 & 1) == 0) {
    fn_00625f70(param_1,param_2,&local_28,0xc);
  }
  if ((uVar5 & 0x80000001) == 1) {
    fn_00625f70(param_1,param_2,&local_28,0xd);
  }
  if ((int)uVar5 % 3 == 0) {
    fn_00625f70(param_1,param_2,&local_28,0xe);
  }
  fn_0062a998(param_1,param_2,&local_28);
  uVar5 = 0;
  iVar4 = (int)local_24 - (int)local_28 >> 0x1f;
  puVar1 = local_28;
  puVar2 = local_24;
  if (((int)local_24 - (int)local_28) / 0x34 + iVar4 != iVar4) {
    do {
      if ((*(char *)(local_28 + uVar5 * 0xd + 1) == '\x02') &&
         (iVar4 = fn_00622b2c(param_1,local_28 + uVar5 * 0xd,param_3,0), iVar4 != 0)) {
        uVar6 = 1;
        puVar1 = local_28;
        puVar2 = local_24;
        break;
      }
      uVar5 = uVar5 + 1;
      puVar1 = local_28;
      puVar2 = local_24;
    } while (uVar5 < (uint)(((int)local_24 - (int)local_28) / 0x34));
  }
  for (; puVar3 = local_24, puVar1 != local_24; puVar1 = puVar1 + 0xd) {
    local_24 = puVar2;
    (**(code **)*puVar1)(puVar1);
    puVar2 = local_24;
    local_24 = puVar3;
  }
  local_24 = puVar2;
  fn_001008c4(local_28,(local_20 - (int)local_28) / 0x34,0);
  return uVar6;
}



void fn_00628b98(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uStack_1c0;
  char local_1bf;
  
  fn_0017821c(&uStack_1c0,param_3,0x1a0);
  param_2 = param_2 + local_1bf * 0x418;
  if (0 < *(char *)(param_2 + -0x401e)) {
    uVar2 = 0;
    while( true ) {
      uVar3 = (&DAT_007f09a0)[uVar2 * 5];
      uVar4 = (&DAT_007f09a4)[uVar2 * 5];
      if ((&DAT_007f0994)[uVar2 * 5] == (int)*(char *)(param_2 + -0x401e)) break;
      uVar2 = uVar2 + 1;
      if (3 < uVar2) {
        return;
      }
    }
    if (param_4 == 0) {
      uVar4 = (&DAT_007f099c)[uVar2 * 5];
      uVar3 = (&DAT_007f0998)[uVar2 * 5];
    }
    iVar1 = fn_00655488(uVar3,uVar4);
    if (iVar1 != 0) {
      *(undefined1 *)(param_2 + -0x401e) = 0;
      *(undefined1 *)(param_2 + -0x3fbd) = 0;
      *(undefined1 *)(param_3 + 0x121) = 1;
    }
  }
  return;
}



undefined4 fn_00628a30(undefined4 param_1,undefined4 param_2,int param_3,undefined1 *param_4)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  undefined8 uVar11;
  
  uVar5 = 0;
  uVar11 = fn_0062a40c();
  uVar4 = (uint)((ulonglong)uVar11 >> 0x20);
  if ((int)uVar11 == 0x299) {
    iVar8 = 100;
    iVar6 = 0x10;
    *param_4 = 0;
    do {
      cVar1 = (char)iVar6;
      if (*(char *)(param_3 + 0xfb) != '\0') {
        uVar3 = iVar6 - 0x10;
        if (uVar3 >= 8) {
          uVar4 = iVar6 - 0x18;
        }
        if (uVar3 < 8 || uVar4 < 8) {
          bVar9 = uVar3 < 4;
          if (!bVar9) {
            uVar3 = iVar6 - 0x18;
          }
          if ((bVar9 || uVar3 < 4) || (iVar6 == 0x20 || iVar6 == 0x22)) {
            cVar2 = cVar1 + '\x04';
          }
          else {
            cVar2 = cVar1 + -4;
          }
          iVar6 = (int)cVar2;
        }
        else if (iVar6 - 0x20U < 2) {
          if (iVar6 == 0x20 || iVar6 == 0x22) {
            iVar6 = 0x21;
          }
          else {
            iVar6 = 0x20;
          }
        }
        else if (iVar6 - 0x22U < 2) {
          if (iVar6 == 0x20 || iVar6 == 0x22) {
            iVar6 = 0x23;
          }
          else {
            iVar6 = 0x22;
          }
        }
        else {
          iVar6 = 0;
        }
      }
      uVar4 = iVar6 * 3;
      iVar7 = param_3 + iVar6 * 0x418;
      if (0 < *(short *)(iVar7 + -0x4080)) {
        cVar2 = *(char *)(iVar7 + -0x4019);
        bVar9 = cVar2 == '\0';
        if (bVar9) {
          cVar2 = *(char *)(iVar7 + -0x400a);
        }
        bVar10 = bVar9 && cVar2 == '\0';
        if (bVar9 && cVar2 == '\0') {
          bVar10 = *(char *)(iVar7 + -0x4018) == '\0';
        }
        if (bVar10) {
          uVar5 = fn_00176dc0((short *)(iVar7 + -0x4080));
          uVar11 = fn_00300f74(*(short *)(iVar7 + -0x4064) * 100,uVar5);
          uVar4 = (uint)((ulonglong)uVar11 >> 0x20);
          if ((int)uVar11 <= iVar8) {
            *param_4 = (char)iVar6;
            iVar8 = (int)uVar11;
          }
        }
      }
      iVar6 = (int)(char)(cVar1 + '\x01');
    } while (iVar6 < 0x18);
    uVar5 = 1;
  }
  return uVar5;
}


