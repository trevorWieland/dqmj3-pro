#include "003c17f4_003c1f0c.h"



void fn_003c1f0c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = fn_00145b00(8,&DAT_00812c8c);
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    piVar3 = (int *)fn_003f728c();
  }
  piVar4 = *(int **)(param_1 + 0x40);
  if (piVar4 != piVar3) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    *(int **)(param_1 + 0x40) = piVar3;
  }
  iVar2 = fn_00145b00(0x9c,&DAT_00812c8c);
  if (iVar2 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    puVar1 = (undefined4 *)fn_005f62c0();
    puVar1[8] = &DAT_00859420;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    *puVar1 = &DAT_00859b38;
    iVar2 = fn_00119b40(puVar1 + 0x10);
    piVar3 = (int *)(iVar2 + -0x40);
    fn_0066ddbc();
    fn_002fec40(iVar2 + 0x18,s_TaskNetworkConnect_008c6e38);
    *piVar3 = (int)&DAT_00859ed8;
    fn_00675c38(piVar3);
  }
  piVar4 = *(int **)(param_1 + 0x44);
  if (piVar4 != piVar3) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    *(int **)(param_1 + 0x44) = piVar3;
  }
  iVar2 = fn_00145b00(0x9c,&DAT_00812c8c);
  if (iVar2 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    puVar1 = (undefined4 *)fn_005f62c0();
    puVar1[8] = &DAT_00859420;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    *puVar1 = &DAT_00859b38;
    iVar2 = fn_00119b40(puVar1 + 0x10);
    piVar3 = (int *)(iVar2 + -0x40);
    fn_0066ddbc();
    fn_002fec40(iVar2 + 0x18,s_TaskGetHostList_008c6def);
    *piVar3 = (int)&DAT_00859d84;
    fn_00673204(piVar3);
  }
  piVar4 = *(int **)(param_1 + 0x48);
  if (piVar4 != piVar3) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    *(int **)(param_1 + 0x48) = piVar3;
  }
  return;
}



void fn_003c1e5c(int param_1)

{
  if (*(int **)(param_1 + 0x3c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x3c) + 4))();
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x40) + 4))();
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x44) + 4))();
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  if (*(int **)(param_1 + 0x48) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x48) + 4))();
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  *(undefined1 *)(param_1 + 0x38) = 0;
  return;
}



void fn_003c1ca0(void)

{
  int iVar1;
  float in_s0;
  
  if (in_s0 <= 3.0) {
    iVar1 = 4;
  }
  else if (in_s0 <= 3.5) {
    iVar1 = 3;
  }
  else if (in_s0 <= 6.0) {
    iVar1 = 2;
  }
  else {
    iVar1 = 1;
  }
  fn_0022f584(*(undefined4 *)(iVar1 * 4 + 0x89635c),0);
  return;
}



void fn_003c1c68(uint param_1)

{
  int iVar1;
  
  if (param_1 < 0x3c) {
    if (param_1 < 0x2d) {
      if (param_1 < 0x23) {
        iVar1 = 1;
      }
      else {
        iVar1 = 2;
      }
    }
    else {
      iVar1 = 3;
    }
  }
  else {
    iVar1 = 4;
  }
  fn_0022f584(*(undefined4 *)(iVar1 * 4 + 0x89635c),0);
  return;
}



void fn_003c1c08(void)

{
  int iVar1;
  float in_s0;
  
  if (75.0 <= in_s0) {
    iVar1 = 4;
  }
  else if (70.0 <= in_s0) {
    iVar1 = 3;
  }
  else if (60.0 <= in_s0) {
    iVar1 = 2;
  }
  else {
    iVar1 = 1;
  }
  fn_0022f584(*(undefined4 *)(iVar1 * 4 + 0x89635c),0);
  return;
}



void fn_003c1ba8(void)

{
  int iVar1;
  float in_s0;
  
  if (in_s0 <= 1.0) {
    iVar1 = 4;
  }
  else if (in_s0 <= 3.0) {
    iVar1 = 3;
  }
  else if (in_s0 <= 8.0) {
    iVar1 = 2;
  }
  else {
    iVar1 = 1;
  }
  fn_0022f584(*(undefined4 *)(iVar1 * 4 + 0x89635c),0);
  return;
}



void fn_003c1b48(void)

{
  int iVar1;
  float in_s0;
  
  if (55.0 <= in_s0) {
    iVar1 = 4;
  }
  else if (50.0 <= in_s0) {
    iVar1 = 3;
  }
  else if (45.0 <= in_s0) {
    iVar1 = 2;
  }
  else {
    iVar1 = 1;
  }
  fn_0022f584(*(undefined4 *)(iVar1 * 4 + 0x89635c),0);
  return;
}



void fn_003c1ae8(void)

{
  int iVar1;
  float in_s0;
  
  if (2.0 <= in_s0) {
    iVar1 = 4;
  }
  else if (1.9 <= in_s0) {
    iVar1 = 3;
  }
  else if (1.5 <= in_s0) {
    iVar1 = 2;
  }
  else {
    iVar1 = 1;
  }
  fn_0022f584(*(undefined4 *)(iVar1 * 4 + 0x89635c),0);
  return;
}



void fn_003c1ab0(uint param_1)

{
  int iVar1;
  
  if (param_1 < 5) {
    if (param_1 < 4) {
      if (param_1 < 3) {
        iVar1 = 1;
      }
      else {
        iVar1 = 2;
      }
    }
    else {
      iVar1 = 3;
    }
  }
  else {
    iVar1 = 4;
  }
  fn_0022f584(*(undefined4 *)(iVar1 * 4 + 0x89635c),0);
  return;
}



void fn_003c17f4(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  puVar5 = (undefined4 *)param_1[6];
  if (puVar5 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar1 == &DAT_00895b30) goto LAB_003c1840;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar5 = (undefined4 *)0x0;
LAB_003c1840:
  iVar2 = param_1[0x1a];
  if (iVar2 == 0) {
    if (param_2 == 0) {
      param_1[0x20] = 0;
      return;
    }
    if (param_2 != 1) {
      return;
    }
    iVar2 = param_1[0x20];
    param_1[0x20] = iVar2 + 1U;
    if (iVar2 + 1U < 5) {
      return;
    }
    iVar2 = puVar5[3];
    if (iVar2 != 0) {
      uVar4 = *(uint *)(iVar2 + 4);
      bVar6 = uVar4 != 0xb;
      if (bVar6) {
        uVar4 = (uint)*(byte *)(puVar5 + 4);
      }
      if (bVar6 && uVar4 != 0) {
        fn_005f3b74(DAT_00898840,*(undefined4 *)(iVar2 + 8));
      }
      *(undefined1 *)(puVar5 + 4) = 1;
    }
    iVar2 = 1;
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 != 2) {
        return;
      }
      if (param_2 == 0) {
        *(undefined1 *)(param_1[0x1f] + 0x30) = 1;
        uVar3 = fn_0022f584((char *)&DAT_003c1a20,0);
        fn_0068974c(param_1,uVar3,0,1);
        uVar3 = fn_0022f584((char *)&DAT_003c1a38,0);
        fn_0036c13c(param_1[0x1f],uVar3);
        return;
      }
      if (param_2 != 1) {
        return;
      }
      if (*(char *)(param_1[0x1f] + 0x31) == '\x01') {
        *(undefined1 *)(puVar5 + 2) = 1;
        puVar5[3] = 0;
        *(undefined1 *)((int)puVar5 + 0x11) = 0;
                    /* WARNING: Could not recover jumptable at 0x003c18b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x28))(param_1,0,0);
        return;
      }
      return;
    }
    if (param_2 == 0) {
      if (*(char *)((int)puVar5 + 0x11) == '\0') {
        fn_001296e8(DAT_00898840);
      }
      uVar3 = fn_0022f584((char *)&DAT_003c19fc,0);
      fn_0068974c(param_1,uVar3,0,1);
      *(undefined1 *)(param_1[0x1f] + 0x51) = 1;
      *(undefined1 *)(param_1[0x1f] + 0x30) = 0;
      return;
    }
    if (param_2 != 1) {
      return;
    }
    if (*(uint *)(param_1[0x1f] + 0x58) < 0x1f) {
      return;
    }
    iVar2 = fn_001296d0(DAT_00898840);
    if ((iVar2 != 0) && (*(char *)((int)puVar5 + 0x11) == '\0')) {
      return;
    }
    iVar2 = 2;
  }
  param_1[0x1c] = iVar2;
  return;
}


