#include "003e5aa8_003e5fa0.h"



void fn_003e5fa0(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint local_20;
  
  local_20 = param_4;
  if (param_1[0x21] == 0) {
    iVar2 = param_1[0x22];
    iVar1 = fn_00100b58(iVar2 + 8);
    if (iVar1 != 0) {
      fn_00688634(DAT_00897804,iVar2);
    }
    local_20 = local_20 & 0xffff0000;
    fn_0028b960(*(undefined4 *)(DAT_00897804 + 0x30),&local_20);
    iVar1 = (**(code **)(*param_1 + 8))(param_1);
    fn_0026a494(DAT_00897818,*(undefined4 *)(iVar1 + 0x18),1,local_20);
    return;
  }
  iVar1 = fn_00269b38(DAT_00897818);
  if (iVar1 == 2) {
    fn_0025b2e8(*(undefined4 *)(DAT_00897804 + 8));
    fn_001296e8(DAT_00898840);
    param_1[0x1e] = (int)fn_003e5cd4;
    param_1[0x1f] = 0;
  }
  return;
}



void fn_003e5e28(int *param_1)

{
  int iVar1;
  
  if (param_1[0x21] == 0) {
    iVar1 = (**(code **)(*param_1 + 8))(param_1);
    fn_0026a494(DAT_00897818,*(undefined4 *)(iVar1 + 0x18),1);
    return;
  }
  iVar1 = fn_00269b38(DAT_00897818);
  if (iVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x003e5e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x28))(param_1,0,0);
    return;
  }
  return;
}



void fn_003e5d74(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  if (param_1[0x21] != 0) {
    iVar1 = fn_006896fc();
    if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x003e5db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x28))(param_1,0,0);
      return;
    }
    return;
  }
  puVar2 = (undefined4 *)fn_001f74d8(param_1,0x5f);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_00895b30) goto LAB_003e5dfc;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_003e5dfc:
  uVar4 = fn_006b724c(param_1[0x23]);
  puVar2[3] = uVar4;
  fn_00689818(param_1,0x5f,0);
  return;
}



void fn_003e5cd4(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x84) == 0) {
    uVar1 = fn_0022f584((char *)&DAT_003e5d54,0);
    fn_0068974c(param_1,uVar1,0,1);
    return;
  }
  if (*(char *)(*(int *)(param_1 + 0x5c) + 0x31) != '\0') {
    fn_005f3c30(2);
    fn_001076bc(0xffffffff);
    fn_00694b14(DAT_008977e0);
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  return;
}



undefined4 fn_003e5bf8(int param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)fn_006b8730(*(undefined4 *)(DAT_00897804 + 0x30));
  cVar1 = *pcVar2;
  if (cVar1 != '\0') {
    pcVar2 = (char *)(uint)(byte)pcVar2[1];
  }
  if (cVar1 == '\0' || pcVar2 == (char *)0x0) {
    pcVar2 = (char *)fn_006b8730(*(undefined4 *)(DAT_00897804 + 0x30));
    if ((*pcVar2 == '\0') && (pcVar2[1] != '\0')) {
      *(code **)(param_1 + 0x78) = fn_003e5e9c;
      *(undefined4 *)(param_1 + 0x7c) = 0;
      *(code **)(param_1 + 0x70) = fn_003e5e9c;
      *(undefined4 *)(param_1 + 0x74) = 0;
      *(undefined4 *)(param_1 + 0x84) = 0;
      *(code **)(param_1 + 0x68) = fn_003e5e9c;
      *(undefined4 *)(param_1 + 0x6c) = 0;
    }
    else {
      *(code **)(param_1 + 0x78) = fn_003e63d8;
      *(undefined4 *)(param_1 + 0x7c) = 0;
      *(code **)(param_1 + 0x70) = fn_003e63d8;
      *(undefined4 *)(param_1 + 0x74) = 0;
      *(undefined4 *)(param_1 + 0x84) = 0;
      *(code **)(param_1 + 0x68) = fn_003e63d8;
      *(undefined4 *)(param_1 + 0x6c) = 0;
    }
  }
  else {
    *(code **)(param_1 + 0x78) = fn_003e5f18;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(code **)(param_1 + 0x70) = fn_003e5f18;
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
    *(code **)(param_1 + 0x68) = fn_003e5f18;
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  return 1;
}



void fn_003e5f18(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1[0x21] == 0) {
    uVar2 = fn_0022f584((char *)&DAT_003e5f84,0);
    fn_0068974c(param_1,uVar2,0,1);
    return;
  }
  iVar1 = fn_006f6a6c(param_1);
  if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x003e5f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x28))(param_1,0,0);
    return;
  }
  return;
}



void fn_003e5e9c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x84) == 0) {
    uVar2 = fn_0022f584((char *)&DAT_003e5efc,0);
    fn_0068974c(param_1,uVar2,0,1);
    return;
  }
  iVar1 = fn_006f6a6c(param_1);
  if (iVar1 == 1) {
    *(code **)(param_1 + 0x78) = fn_003e6494;
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  return;
}



void fn_003e5bc0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002c8eb4();
  *puVar1 = &PTR_FUN_00832ed0;
  *(undefined1 *)(puVar1 + 0x30) = 0;
  puVar1[0x31] = 0;
  puVar1[0x32] = 0;
  return;
}



void fn_003e5bbc(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (**(code **)(*(int *)param_1[0x27] + 0x90))();
  if (iVar1 < 0) {
    iVar1 = (**(code **)(*(int *)param_1[0x27] + 0xa8))();
    if (iVar1 < 0) {
      iVar1 = (**(code **)(*(int *)param_1[0x27] + 0xb0))();
      if (iVar1 < 0) {
        iVar1 = (**(code **)(*(int *)param_1[0x27] + 0xb8))();
        if (iVar1 < 0) {
          iVar1 = (**(code **)(*(int *)param_1[0x27] + 0xc0))();
          if (-1 < iVar1) {
            (**(code **)(*param_1 + 0x11c))(param_1,iVar1);
          }
        }
        else {
          (**(code **)(*param_1 + 0x118))(param_1,iVar1);
        }
      }
      else {
        (**(code **)(*param_1 + 0x114))(param_1,iVar1);
      }
    }
    else {
      (**(code **)(*param_1 + 0x110))(param_1);
    }
  }
  else {
    (**(code **)(*param_1 + 0x10c))(param_1,iVar1);
  }
  iVar1 = (**(code **)(*(int *)param_1[0x27] + 0x6c))();
  if (-1 < iVar1) {
    if (param_1[0x2b] ==
        (param_1[0x1f] - param_1[0x1e] >> 2) * *(int *)(param_1[0x27] + 0xcc) + iVar1) {
      fn_002b20a4(param_1[0x25],0);
    }
    else {
      fn_0031b3c4(*(undefined4 *)(param_1[0x1e] + iVar1 * 4),1);
    }
  }
  iVar1 = (**(code **)(*(int *)param_1[0x27] + 100))();
  if (-1 < iVar1) {
    (**(code **)(*param_1 + 0x120))(param_1,iVar1);
  }
  iVar1 = (**(code **)(*(int *)param_1[0x27] + 0x34))();
  if ((iVar1 != 0) || (iVar1 = (**(code **)(*(int *)param_1[0x27] + 0x38))(), iVar1 != 0)) {
    (**(code **)(*param_1 + 0x124))(param_1);
    if (param_1[0x24] != 0) {
      if (*(int *)(param_1[0x24] + 0x34) < 2) {
        fn_0068ab44(param_1,0x100094e);
      }
      else {
        fn_0068ab44(param_1,0x100094f);
        *(undefined4 *)(param_1[0x24] + 0x3c) = *(undefined4 *)(param_1[0x27] + 0xcc);
      }
    }
  }
  if ((int *)param_1[0x1d] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1d] + 0x14))();
  }
  iVar1 = param_1[0x1e];
  uVar2 = 0;
  if (param_1[0x1f] - iVar1 >> 2 != 0) {
    do {
      (**(code **)(**(int **)(iVar1 + uVar2 * 4) + 0x14))();
      iVar1 = param_1[0x1e];
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)(param_1[0x1f] - iVar1 >> 2));
  }
  if ((int *)param_1[0x24] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x24] + 0x14))();
  }
  if ((int *)param_1[0x25] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x25] + 0x14))();
  }
  if ((int *)param_1[0x28] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x28] + 0x14))();
  }
  if ((int *)param_1[0x29] == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x002c45c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)param_1[0x29] + 0x14))();
  return;
}



void fn_003e5b40(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = fn_006b64b0(*(undefined4 *)(DAT_00897804 + 8));
  uVar2 = fn_0068897c(*(undefined4 *)(param_1 + 0x70),(char *)&DAT_003e5b10);
  uVar3 = fn_0068897c(*(undefined4 *)(param_1 + 0x70),(char *)&DAT_003e5b18);
  uVar4 = fn_0022f584((char *)&DAT_003e5b24,0);
  fn_00190d50(uVar2,uVar4);
  fn_00688c04(uVar3,uVar1,0);
  return;
}



void fn_003e5ab8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = fn_0068897c(*(undefined4 *)(param_1 + 0x70),(char *)&DAT_003e5b10);
  uVar2 = fn_0068897c(*(undefined4 *)(param_1 + 0x70),(char *)&DAT_003e5b18);
  uVar3 = fn_0022f584((char *)&DAT_003e5b24,0);
  fn_00190d50(uVar1,uVar3);
  fn_00688c04(uVar2,param_2,0);
  return;
}



undefined4 fn_003e5aac(undefined4 param_1)

{
  return param_1;
}



undefined4 fn_003e5aa8(undefined4 param_1)

{
  return param_1;
}


