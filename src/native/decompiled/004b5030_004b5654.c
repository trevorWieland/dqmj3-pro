#include "004b5030_004b5654.h"



int fn_004b5654(int param_1)

{
  int iVar1;
  int local_10 [2];
  
  if (*(int *)(param_1 + 0x24) == 0) {
    fn_0013d0fc(local_10);
    iVar1 = ((local_10[0] - *(int *)(param_1 + 0x10)) - *(int *)(param_1 + 0x18)) +
            *(int *)(param_1 + 0x20);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x20);
  }
  return iVar1;
}



int fn_004b55dc(int param_1,uint param_2)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    fn_0015f0f4(param_1,5);
  }
  uVar1 = *(int *)(param_1 + 0x18) + param_2;
  if (*(uint *)(param_1 + 0x14) <= uVar1) {
    fn_0015f0f4(param_1,(uVar1 * 0xf) / 10);
  }
  if (*(uint *)(param_1 + 0x10) <= param_2) {
    *(uint *)(param_1 + 0x10) = param_2 + 1;
  }
  return *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x18) + param_2;
}



void fn_004b5510(void)

{
  int iVar1;
  
  iVar1 = fn_0014f480();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) == (code *)0x0) {
    fn_0030233c();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004b5530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + -8))();
  return;
}



undefined4 * fn_004b54dc(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)fn_0014f1e0();
  *puVar1 = &DAT_00855a18;
  uVar2 = fn_0014f470();
  fn_0014f440(puVar1,uVar2,0);
  return puVar1;
}



undefined4 * fn_004b5488(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  param_1[1] = 0;
  param_1[1] = 1;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &DAT_00855a18;
  param_1[4] = 0;
  param_1[5] = param_2;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  uVar1 = fn_00170e68(param_1);
  param_1[3] = uVar1;
  *(undefined1 *)((int)param_1 + 0x1d) = 0;
  *(undefined1 *)((int)param_1 + 0x1e) = 0;
  return param_1;
}



undefined4 * fn_004b5404(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  param_1[1] = 0;
  param_1[1] = 1;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &DAT_00855a18;
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  param_1[5] = uVar1;
  *(undefined1 *)(param_1 + 7) = 0;
  uVar1 = fn_00170e68(param_1,uVar1);
  param_1[3] = uVar1;
  param_1[4] = *(undefined4 *)(param_2 + 0x10);
  param_1[6] = 0;
  fn_004b5540(param_1,param_2);
  *(byte *)(param_1 + 7) = *(byte *)(param_2 + 0x1c) & 0xfb;
  *(undefined1 *)((int)param_1 + 0x1d) = *(undefined1 *)(param_2 + 0x1d);
  *(undefined1 *)((int)param_1 + 0x1e) = *(undefined1 *)(param_2 + 0x1e);
  return param_1;
}



int fn_004b5540(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 == param_2) {
    return param_1;
  }
  uVar3 = *(int *)(param_2 + 0x10) + *(int *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(uint *)(param_1 + 0x14) < uVar3) {
    fn_0015f0f4(param_1,uVar3);
  }
  fn_0015ef58(param_1,*(undefined4 *)(param_2 + 0xc),uVar3,0xffffffff);
  iVar1 = *(int *)(param_2 + 0x18);
  iVar2 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x18) = iVar1;
  *(int *)(param_1 + 0x10) = (iVar2 - iVar1) + *(int *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_2 + 0x1c) & 0xfb | *(byte *)(param_1 + 0x1c) & 4;
  *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(param_2 + 0x1d);
  return param_1;
}



char fn_004b5324(int param_1,uint param_2,char param_3)

{
  char *pcVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 local_14;
  
  uVar3 = param_2 >> 2;
  local_14 = 0;
  piVar6 = (int *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x18));
  if (uVar3 != 0) {
    piVar2 = piVar6 + -1;
    if ((uVar3 & 1) != 0) {
      local_14 = *piVar6;
      piVar2 = piVar6;
    }
    iVar5 = 0;
    for (uVar4 = param_2 >> 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      local_14 = piVar2[1] + local_14;
      piVar2 = piVar2 + 2;
      iVar5 = iVar5 + *piVar2;
    }
    piVar6 = piVar6 + uVar3;
    local_14 = local_14 + iVar5;
  }
  if ((param_2 & 3) != 0) {
    piVar2 = (int *)((int)piVar6 + -1);
    if ((param_2 & 1) != 0) {
      param_3 = param_3 + (char)*piVar6;
      piVar2 = piVar6;
    }
    for (uVar3 = (param_2 & 3) >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
      pcVar1 = (char *)((int)piVar2 + 1);
      piVar2 = (int *)((int)piVar2 + 2);
      param_3 = param_3 + *pcVar1 + *(char *)piVar2;
    }
  }
  return (char)local_14 + param_3 + ((unsigned int)(local_14) >> 8) & 0xff + ((unsigned int)(local_14) >> 16) & 0xff + ((unsigned int)(local_14) >> 24) & 0xff;
}



undefined4 fn_004b5298(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  
  uVar1 = fn_0015efdc(*(undefined4 *)(param_1 + 0x14),
                       param_2 + *(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x18));
  if (*(uint *)(param_1 + 0x14) < uVar1) {
    iVar3 = fn_00170e68(param_1,uVar1);
    uVar2 = 0;
    if (iVar3 != 0) {
      fn_00301a9c(iVar3,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
      if (*(int *)(param_1 + 0xc) != 0) {
        pcVar4 = *(code **)(*(int *)(param_1 + 0xc) + -8);
        if (pcVar4 == (code *)0x0) {
          fn_0030233c();
        }
        else {
          (*pcVar4)();
        }
      }
      *(int *)(param_1 + 0xc) = iVar3;
      uVar2 = 1;
      *(uint *)(param_1 + 0x14) = uVar1;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



int * fn_004b51c4(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)param_1[4];
  if (piVar3 != (int *)0x0) {
    piVar1 = (int *)*piVar3;
    while (piVar1 != piVar3) {
      piVar2 = (int *)param_1[4];
      if (piVar1 != (int *)param_1[4]) {
        piVar2 = (int *)*piVar1;
        *(int **)piVar1[1] = piVar2;
        *(int *)(*piVar1 + 4) = piVar1[1];
        param_1[5] = param_1[5] + -1;
        (**(code **)piVar1[2])(piVar1 + 2);
        *piVar1 = param_1[1];
        param_1[1] = (int)piVar1;
      }
      piVar1 = piVar2;
    }
    piVar3 = (int *)param_1[4];
    *piVar3 = param_1[1];
    param_1[1] = (int)piVar3;
    piVar3 = (int *)*param_1;
    while (piVar3 != (int *)0x0) {
      *param_1 = *piVar3;
      fn_0014f1bc(piVar3[2]);
      fn_0014f1bc(piVar3);
      piVar3 = (int *)*param_1;
    }
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return param_1;
}



undefined4 * fn_004b5170(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  fn_00786da0(param_1,1);
  iVar1 = param_1[2];
  param_1[4] = iVar1;
  param_1[2] = iVar1 + 0x78;
  *(int *)iVar1 = iVar1;
  *(undefined4 *)(param_1[4] + 4) = param_1[4];
  return param_1;
}



int * fn_004b5030(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  fn_00786da0();
  iVar1 = param_1[2];
  param_1[4] = iVar1;
  param_1[2] = iVar1 + 0x78;
  *(int *)iVar1 = iVar1;
  *(int *)(param_1[4] + 4) = param_1[4];
  piVar7 = *(int **)(param_2 + 0x10);
  iVar1 = *(int *)param_1[4];
  for (piVar6 = (int *)*piVar7; piVar6 != piVar7; piVar6 = (int *)*piVar6) {
    piVar4 = (int *)param_1[1];
    if (piVar4 == (int *)0x0) {
      if (param_1[2] == param_1[3]) {
        if (*param_1 == 0) {
          uVar5 = 0x20;
        }
        else {
          uVar2 = *(uint *)(*param_1 + 4);
          uVar5 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
          if (uVar5 < uVar2 + 0x20) {
            uVar5 = uVar2 + 0x20;
          }
        }
        piVar4 = (int *)fn_0015ece0(0xc);
        iVar3 = fn_0015ece0(uVar5 * 0x78);
        piVar4[2] = iVar3;
        *piVar4 = *param_1;
        piVar4[1] = uVar5;
        *param_1 = (int)piVar4;
        iVar3 = piVar4[2];
        param_1[2] = iVar3;
        param_1[3] = iVar3 + uVar5 * 0x78;
      }
      piVar4 = (int *)param_1[2];
      param_1[2] = (int)(piVar4 + 0x1e);
    }
    else {
      param_1[1] = *piVar4;
    }
    if (piVar4 + 2 != (int *)0x0) {
      fn_0048c758(piVar4 + 2,piVar6 + 2);
    }
    *piVar4 = iVar1;
    piVar4[1] = *(int *)(iVar1 + 4);
    **(undefined4 **)(iVar1 + 4) = piVar4;
    *(int **)(iVar1 + 4) = piVar4;
    param_1[5] = param_1[5] + 1;
  }
  return param_1;
}


