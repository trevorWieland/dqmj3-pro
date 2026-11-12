#include "0013db70_00146594.h"



void fn_00146594(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  
  pcVar1 = DAT_0089a630;
  if (DAT_0089a630 != (code *)0x0) {
    DAT_0089a630 = (code *)0x0;
    (*pcVar1)(0,0,0,0,0,param_2);
  }
  fn_0012d61c(0,0);
  return;
}



void fn_00146590(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  
  pcVar1 = DAT_0089a630;
  if (DAT_0089a630 != (code *)0x0) {
    DAT_0089a630 = (code *)0x0;
    (*pcVar1)(0,0,0,0,0,param_2);
  }
  fn_0012d61c(0,0);
  return;
}



void fn_00145b00(undefined4 param_1)

{
  fn_001287dc(param_1,4);
  return;
}



void fn_00145ac0(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00145acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x38) + 0x10))();
  return;
}



void fn_00145a08(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0016600c(*(undefined4 *)(*(int *)(param_1 + 4) + 0x3c));
  if (iVar1 == 0) {
    return;
  }
  fn_001663f0();
  return;
}



void fn_0014580c(int param_1)

{
  if (*(char *)(param_1 + 8) == '\0') {
    return;
  }
  fn_001666c4(*(undefined4 *)(param_1 + 4));
  return;
}



void fn_0014426c(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = &DAT_00859460;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0xffffffff;
  param_1[5] = 0;
  param_1[0x10] = 0;
  return;
}



void fn_00140e98(int param_1,uint param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  int *local_28;
  
  local_28 = param_4;
  iVar1 = fn_001411dc();
  if (iVar1 == 0) {
    while (iVar1 = fn_001585d4(param_1 + 0xb4,&local_28), iVar1 != 0) {
      *(int *)(param_1 + 0x178) = local_28[2];
      piVar7 = local_28;
      if (local_28 != (int *)0x0) {
        while ((int *)*piVar7 != (int *)0x0) {
          piVar7 = (int *)*piVar7;
        }
        iVar1 = piVar7[3];
        *(int *)(param_1 + 0x188) = iVar1;
        *(undefined1 *)(param_1 + 0x18c) = 0;
        if (*(int *)(param_1 + 0x184) == iVar1) {
          *(undefined4 *)(param_1 + 0x188) = 0;
          *(undefined4 *)(param_1 + 0x184) = 0;
        }
      }
    }
    iVar1 = fn_001411dc(param_1,param_2);
joined_r0x00140f20:
    if (iVar1 == 0) {
      do {
        do {
          if (*(int *)(param_1 + 0x16c) == 0) {
            puVar5 = (undefined4 *)fn_001411dc(param_1,4);
            while (puVar5 == (undefined4 *)0x0) {
              fn_0012d6a4(1000000,0);
              while (iVar1 = fn_001585d4(param_1 + 0xb4,&local_28), iVar1 != 0) {
                *(int *)(param_1 + 0x178) = local_28[2];
                piVar7 = local_28;
                if (local_28 != (int *)0x0) {
                  while ((int *)*piVar7 != (int *)0x0) {
                    piVar7 = (int *)*piVar7;
                  }
                  iVar1 = piVar7[3];
                  *(int *)(param_1 + 0x188) = iVar1;
                  *(undefined1 *)(param_1 + 0x18c) = 0;
                  if (*(int *)(param_1 + 0x184) == iVar1) {
                    *(undefined4 *)(param_1 + 0x188) = 0;
                    *(undefined4 *)(param_1 + 0x184) = 0;
                  }
                }
              }
              puVar5 = (undefined4 *)fn_001411dc(param_1,4);
            }
            puVar5[3] = *(undefined4 *)(param_1 + 0x184);
            *(undefined1 *)(puVar5 + 1) = 0;
            if (*(undefined4 **)(param_1 + 0x170) == (undefined4 *)0x0) {
              *(undefined4 **)(param_1 + 0x16c) = puVar5;
            }
            else {
              **(undefined4 **)(param_1 + 0x170) = puVar5;
            }
            *(undefined4 **)(param_1 + 0x170) = puVar5;
            *puVar5 = 0;
          }
          iVar1 = *(int *)(param_1 + 0x174);
          coproc_moveto_Data_Memory_Barrier(0);
          fn_001675c4(param_1,*(undefined4 *)(param_1 + 0x16c));
          *(int *)(*(int *)(param_1 + 0x16c) + 8) = iVar1;
          *(int *)(param_1 + 0x174) = *(int *)(param_1 + 0x174) + 1;
          *(undefined4 *)(param_1 + 0x16c) = 0;
          *(undefined4 *)(param_1 + 0x170) = 0;
          do {
            piVar2 = (int *)fn_00158690(param_1 + 0xb4);
            *(int *)(param_1 + 0x178) = piVar2[2];
            piVar7 = piVar2;
            if (piVar2 != (int *)0x0) {
              do {
                piVar3 = piVar7;
                piVar7 = (int *)*piVar3;
              } while (piVar7 != (int *)0x0);
              iVar4 = piVar3[3];
              *(int *)(param_1 + 0x188) = iVar4;
              *(undefined1 *)(param_1 + 0x18c) = 0;
              if (*(int *)(param_1 + 0x184) == iVar4) {
                *(undefined4 *)(param_1 + 0x188) = 0;
                *(undefined4 *)(param_1 + 0x184) = 0;
              }
            }
          } while (piVar2[2] != iVar1);
          iVar1 = 0;
        } while (*(char *)(param_1 + 0x18c) != '\0');
        uVar6 = *(uint *)(param_1 + 0x184);
        uVar8 = *(uint *)(param_1 + 0x188);
        if (uVar6 < uVar8) {
          if (uVar8 < uVar6 + param_2) goto joined_r0x00140f20;
LAB_001410bc:
          *(uint *)(param_1 + 0x184) = uVar6 + param_2;
          iVar1 = *(int *)(param_1 + 0x17c) + uVar6 * 4;
        }
        else {
          if (uVar6 + param_2 <= *(uint *)(param_1 + 0x180)) goto LAB_001410bc;
          if (uVar8 < param_2) goto joined_r0x00140f20;
          *(uint *)(param_1 + 0x184) = param_2;
          iVar1 = *(int *)(param_1 + 0x17c);
        }
      } while (iVar1 == 0);
      if (*(int *)(param_1 + 0x184) == *(int *)(param_1 + 0x188)) {
        *(undefined1 *)(param_1 + 0x18c) = 1;
      }
      goto joined_r0x00140f20;
    }
  }
  return;
}



int fn_0014020c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 auStack_240 [264];
  undefined4 local_30;
  undefined4 local_2c;
  
  puVar3 = auStack_240;
  puVar4 = auStack_240;
  *(char *)(param_1 + 0x1c) = (char)param_3;
  if (param_3 != 0) {
    local_30 = 0;
    local_2c = 0;
    fn_00102388(&local_30);
    while ((iVar1 = fn_0010239a(param_2,0x105,&local_30), iVar1 != 0 &&
           (iVar2 = fn_00101ce8(puVar3,param_2,iVar1,&local_30), iVar2 != 0))) {
      puVar3 = puVar3 + 1;
      param_2 = param_2 + iVar1;
    }
    *puVar3 = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    iVar1 = fn_0014d6cc(param_1 + 4,auStack_240,1);
    *(int *)(param_1 + 0x18) = iVar1;
    return (iVar1 >> 0x1f) + 1;
  }
  local_30 = 0;
  local_2c = 0;
  fn_00102388(&local_30);
  while ((iVar1 = fn_0010239a(param_2,0x105,&local_30), iVar1 != 0 &&
         (iVar2 = fn_00101ce8(puVar4,param_2,iVar1,&local_30), iVar2 != 0))) {
    puVar4 = puVar4 + 1;
    param_2 = param_2 + iVar1;
  }
  *puVar4 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar1 = fn_0014d6cc(param_1 + 4,auStack_240,1);
  if ((iVar1 < 0) && (iVar1 < 0)) {
    fn_0015e590(iVar1,0x140358);
  }
  return 1;
}



void fn_0013f7ec(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  return;
}



void fn_0013e67c(void)

{
  fn_0013c3d8(&DAT_008bfb0c);
  return;
}



void fn_0013e374(void)

{
  fn_0015def0(&DAT_008bfb0c);
  return;
}



uint fn_0013db70(void)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  if (DAT_008c0370 == '\0') {
    DAT_008ec120 = 0;
    fn_0013c500();
    DAT_008ec12c = 0;
    DAT_008ec130 = 0;
    DAT_008ec134 = 1;
    DAT_008ec138 = 0;
    DAT_008ec13c = 0;
    fn_0013c500(&DAT_008ec13c);
    DAT_008c0370 = '\x01';
  }
  fn_00170704();
  if (0 < DAT_008c0374) {
    DAT_008c0374 = DAT_008c0374 + 1;
    fn_001707b4(&DAT_008ec120);
    return 0x82067f9;
  }
  while( true ) {
    uVar1 = fn_0011c0d0(&DAT_008c0378,&DAT_007e4334);
    uVar2 = uVar1 >> 0x1b;
    if ((uVar1 & 0x80000000) != 0) {
      uVar2 = uVar2 - 0x20;
    }
    if (uVar2 != 0xfffffffb) break;
    uVar2 = (uVar1 & 0x7e00000) >> 0x15;
    bVar3 = uVar2 == 4;
    if (bVar3) {
      uVar2 = uVar1 & 0x3ff;
    }
    if (!bVar3 || uVar2 != 0x3fa) break;
    fn_0012d6a4(500000,0);
  }
  if (-1 < (int)uVar1) {
    uVar1 = fn_00106b64();
    DAT_008c0374 = DAT_008c0374 + 1;
  }
  fn_001707b4(&DAT_008ec120);
  return uVar1;
}


