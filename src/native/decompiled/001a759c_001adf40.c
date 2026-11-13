#include "001a759c_001adf40.h"



int fn_001adf40(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  int local_258 [132];
  undefined *local_48;
  uint local_44 [8];
  
  piVar3 = local_258;
  iVar5 = 0;
  iVar1 = fn_001b02c8();
  iVar2 = iVar5;
  if ((iVar1 == 0) && (iVar2 = DAT_008bf5ec, DAT_008bf5ec == 0)) {
    local_44[0] = 0;
    local_44[1] = 0;
    local_44[2] = 0;
    local_44[3] = 0;
    local_44[4] = 0;
    pcVar4 = (char *)&DAT_001ae0d4;
    local_48 = &DAT_0085238c;
    local_44[5] = 0;
    local_44[6] = 0;
    fn_00102388(local_44 + 5);
    while ((iVar2 = fn_0010239a(pcVar4,0x105,local_44 + 5), iVar2 != 0 &&
           (iVar1 = fn_00101ce8(piVar3,pcVar4,iVar2,local_44 + 5), iVar1 != 0))) {
      piVar3 = (int *)((int)piVar3 + 2);
      pcVar4 = pcVar4 + iVar2;
    }
    *(undefined2 *)piVar3 = 0;
    local_44[3] = 0;
    local_44[4] = 0;
    local_44[1] = 0;
    local_44[2] = 0;
    iVar2 = fn_0014d6cc(local_44,local_258,1);
    if (iVar2 < 0) {
      if (iVar2 < 0) {
        fn_0015e590(iVar2,0x1ae098);
      }
    }
    else {
      iVar5 = fn_001560d8(local_44,local_258);
      if (iVar5 < 0) {
        fn_0015e590(iVar5,0x1ae054);
      }
      if ((local_44[0] & 0xfffffffe) != 0) {
        if ((local_44[0] & 1) != 0) {
          fn_00146594();
        }
        fn_0015cf8c(local_44[0] & 0xfffffffe);
        local_44[0] = 0;
      }
      DAT_008bf5ec = local_258[0];
      iVar5 = local_258[0];
    }
    iVar2 = iVar5;
    if ((local_44[0] & 0xfffffffe) != 0) {
      if ((local_44[0] & 1) != 0) {
        fn_00146594();
      }
      fn_0015cf8c(local_44[0] & 0xfffffffe);
    }
  }
  return iVar2;
}



void fn_001ad034(undefined4 param_1)

{
  fn_001287dc(param_1,4);
  return;
}



void fn_001a8854(uint *param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int extraout_r1;
  int extraout_r1_00;
  int iVar4;
  char *pcVar5;
  uint local_40;
  int *local_3c;
  uint local_38;
  int *local_34;
  uint local_30;
  int *local_2c;
  uint local_20;
  int *piStack_1c;
  
  iVar2 = *param_2;
  if (iVar2 != param_3) {
    iVar4 = iVar2 + -0x136;
    if (iVar4 == 0) {
      iVar2 = param_3 + -0x100;
    }
    if (iVar4 != 0 || iVar2 != 2) {
      if (0xff < param_3) {
        if (param_3 == 0x102) {
          pcVar5 = (char *)&DAT_001a8ac4;
        }
        else if (param_3 == 0x103) {
          pcVar5 = (char *)&DAT_001a8ad0;
        }
        else if (param_3 == 0x104) {
          pcVar5 = (char *)&DAT_001a8ae0;
        }
        else if (param_3 == 0x105) {
          pcVar5 = (char *)&DAT_001a8ae8;
        }
        else {
          pcVar5 = (char *)fn_001ab060(param_2 + 4,param_3,iVar4);
        }
        fn_001a8820(param_2,"expected \'%s\'",pcVar5);
        param_3 = extraout_r1;
      }
      fn_001a8820(param_2,"expected \'%c\'",param_3);
      param_3 = extraout_r1_00;
    }
  }
  local_30 = 0x1000001;
  local_2c = (int *)0x0;
  if (param_3 == 0x102) {
    fn_001a93d4(&local_20,param_2[1],param_2[10],0xffffffff);
    piVar3 = local_2c;
    uVar1 = local_30;
    local_30 = local_20;
    local_2c = piStack_1c;
    if ((local_20 & 0x8000000) != 0) {
      piStack_1c[1] = piStack_1c[1] + 1;
    }
    if ((uVar1 & 0x8000000) == 0) goto LAB_001a8a6c;
    iVar2 = piVar3[1] + -1;
    piVar3[1] = iVar2;
joined_r0x001a8978:
    if (iVar2 != 0) goto LAB_001a8a6c;
  }
  else {
    if (param_3 == 0x103) {
      fn_001a93d4(&local_20,param_2[1],param_2[10],param_2[0x12] + -1);
      piVar3 = local_2c;
      uVar1 = local_30;
      local_30 = local_20;
      local_2c = piStack_1c;
      if ((local_20 & 0x8000000) != 0) {
        piStack_1c[1] = piStack_1c[1] + 1;
      }
      if ((uVar1 & 0x8000000) == 0) goto LAB_001a8a6c;
      iVar2 = piVar3[1] + -1;
      piVar3[1] = iVar2;
      goto joined_r0x001a8978;
    }
    if (param_3 == 0x104) {
      local_3c = (int *)param_2[0xb];
      local_40 = 0x5000002;
      fn_0019e864(&local_30,&local_40);
      if ((local_40 & 0x8000000) == 0) goto LAB_001a8a6c;
      iVar2 = local_3c[1] + -1;
      local_3c[1] = iVar2;
      piVar3 = local_3c;
      goto joined_r0x001a8978;
    }
    if (param_3 != 0x105) goto LAB_001a8a6c;
    local_34 = (int *)param_2[0xc];
    local_38 = 0x5000004;
    fn_0019e864(&local_30);
    if (((local_38 & 0x8000000) == 0) ||
       (iVar2 = local_34[1], local_34[1] = iVar2 + -1, iVar2 + -1 != 0)) goto LAB_001a8a6c;
    piVar3 = local_34;
  }
  (**(code **)(*piVar3 + 8))();
LAB_001a8a6c:
  iVar2 = fn_001a9c90(param_2 + 4);
  *param_2 = iVar2;
  if (((local_30 & 0x8000000) != 0) &&
     (iVar2 = local_2c[1], local_2c[1] = iVar2 + -1, iVar2 + -1 == 0)) {
    (**(code **)(*local_2c + 8))();
  }
  *param_1 = local_30;
  param_1[1] = (uint)local_2c;
  return;
}



void fn_001a7998(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined2 *)((int)param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 2) = 0xc;
  *(undefined1 *)((int)param_1 + 9) = 2;
  *(undefined1 *)((int)param_1 + 10) = 2;
  *(undefined1 *)((int)param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 0x15) = 0;
  *(undefined1 *)((int)param_1 + 0x16) = 0;
  *(undefined1 *)((int)param_1 + 0x17) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 0x19) = 0;
  return;
}



void fn_001a759c(int *param_1,uint *param_2)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  
  uVar7 = param_1[0x19];
  if (((int)uVar7 < 1) || ((char)param_1[0x36] == '\0')) goto LAB_001a78b4;
  bVar1 = (byte)param_2[1];
  piVar3 = (int *)(uVar7 * 8 + -8 + param_1[0x18]);
  if (bVar1 != 0xf) {
    if (bVar1 < 0xf) {
      if (bVar1 == 7) {
        if ((((char)piVar3[1] == '\x01') &&
            (uVar7 = (uint)*(byte *)((int)piVar3 + 5), uVar7 == *param_2)) &&
           (((uint)param_1[2] <= uVar7 || (*(int *)(param_1[1] + uVar7 * 0x14) == 0x1000001)))) {
          *(undefined1 *)(piVar3 + 1) = 8;
          *(undefined1 *)((int)piVar3 + 5) = *(undefined1 *)((int)param_2 + 5);
          *(undefined1 *)((int)piVar3 + 6) = *(undefined1 *)((int)param_2 + 6);
          uVar6 = *(undefined1 *)((int)param_2 + 7);
LAB_001a7804:
          *(undefined1 *)((int)piVar3 + 7) = uVar6;
          return;
        }
      }
      else if (bVar1 < 7) {
        if (bVar1 == 0) {
          if ((char)piVar3[1] == '\0') {
            param_1[0x19] = uVar7 - 1;
            param_1[0x28] = param_1[0x28] + -1;
          }
        }
        else {
          if (bVar1 == 1) {
            uVar7 = (uint)*(byte *)(piVar3 + 1);
          }
          if ((bVar1 == 1 && uVar7 == 1) && ((int)*param_2 < 0x100)) {
            *(undefined1 *)(piVar3 + 1) = 4;
            *(undefined1 *)((int)piVar3 + 6) = *(undefined1 *)((int)param_2 + 5);
            uVar6 = (undefined1)*param_2;
            goto LAB_001a7804;
          }
        }
      }
      else if (bVar1 == 10) {
        cVar2 = (char)piVar3[1];
        if (((cVar2 == '\x0e') || (cVar2 == '\x11' || cVar2 == '\x12')) &&
           ((uint)*(byte *)((int)piVar3 + 5) == *param_2)) {
          *(undefined1 *)((int)piVar3 + 5) = *(undefined1 *)((int)param_2 + 5);
          *(undefined1 *)(param_1 + 0x36) = 0;
          return;
        }
        if (cVar2 == '\n') {
          *(undefined1 *)(piVar3 + 1) = 0x17;
          *(undefined1 *)((int)piVar3 + 6) = *(undefined1 *)((int)param_2 + 5);
          *(char *)((int)piVar3 + 7) = (char)*param_2;
          return;
        }
      }
      else {
        if (bVar1 == 0xe) {
          uVar7 = (uint)*(byte *)(piVar3 + 1);
        }
        if (((bVar1 == 0xe && uVar7 == 1) &&
            (uVar7 = (uint)*(byte *)((int)piVar3 + 5), uVar7 == *(byte *)((int)param_2 + 6))) &&
           (((uint)param_1[2] <= uVar7 || (*(int *)(param_1[1] + uVar7 * 0x14) == 0x1000001)))) {
          *(char *)((int)piVar3 + 6) = (char)*param_2;
          *(undefined1 *)(piVar3 + 1) = 9;
          *(undefined1 *)((int)piVar3 + 5) = *(undefined1 *)((int)param_2 + 5);
          return;
        }
      }
      goto LAB_001a78b4;
    }
    if (bVar1 != 0x10) {
      if (bVar1 != 0x13) {
        if (bVar1 == 0x14) {
          if (((char)piVar3[1] == '\x14') &&
             ((uint)*(byte *)((int)piVar3 + 5) + *piVar3 == (uint)*(byte *)((int)param_2 + 5))) {
            *piVar3 = *piVar3 + 1;
            return;
          }
          goto LAB_001a78b4;
        }
        if (bVar1 == 0x20) {
          uVar7 = (uint)*(byte *)(piVar3 + 1);
        }
        if (((bVar1 != 0x20 || uVar7 != 1) ||
            (uVar7 = (uint)*(byte *)((int)piVar3 + 5), uVar7 != *param_2)) ||
           ((uVar7 < (uint)param_1[2] && (*(int *)(param_1[1] + uVar7 * 0x14) != 0x1000001))))
        goto LAB_001a78b4;
        *(undefined1 *)(piVar3 + 1) = 0x20;
        *(undefined1 *)((int)piVar3 + 5) = *(undefined1 *)((int)param_2 + 5);
        *(undefined1 *)((int)piVar3 + 6) = 0xff;
        goto LAB_001a785c;
      }
      if (((param_1[0x2a] != 0) && (*(char *)((int)param_2 + 5) != -1)) &&
         (((char)piVar3[1] == '\x06' && (*param_1 < (int)(uVar7 - 1))))) {
        *(undefined1 *)(piVar3 + 1) = 5;
      }
      goto LAB_001a78b4;
    }
  }
  if ((((char)piVar3[1] == '\x01') && (uVar7 = (uint)*(byte *)((int)piVar3 + 5), uVar7 == *param_2))
     && (((uint)param_1[2] <= uVar7 || (*(int *)(param_1[1] + uVar7 * 0x14) == 0x1000001)))) {
    *(byte *)(piVar3 + 1) = bVar1;
    *(undefined1 *)((int)piVar3 + 5) = *(undefined1 *)((int)param_2 + 5);
    *(undefined1 *)((int)piVar3 + 6) = *(undefined1 *)((int)param_2 + 6);
LAB_001a785c:
    *(undefined1 *)((int)piVar3 + 7) = 0xff;
    return;
  }
LAB_001a78b4:
  *(undefined1 *)(param_1 + 0x36) = 1;
  if ((uint)param_1[0x1a] <= (uint)param_1[0x19]) {
    iVar8 = param_1[0x19] << 1;
    if (iVar8 == 0) {
      iVar8 = 4;
    }
    iVar4 = fn_0018388c(param_1[0x18],param_1[0x1a] << 3);
    param_1[0x18] = iVar4;
    param_1[0x1a] = iVar8;
  }
  puVar5 = (uint *)(param_1[0x18] + param_1[0x19] * 8);
  param_1[0x19] = param_1[0x19] + 1;
  if (puVar5 != (uint *)0x0) {
    uVar7 = param_2[1];
    *puVar5 = *param_2;
    puVar5[1] = uVar7;
  }
  return;
}


