#include "0019f2a8_0019f4c4.h"

static void svc_0x23(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x23 }
#endif
}

static void svc_0x32(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x32 }
#endif
}


undefined4 fn_0019f4c4(int param_1,undefined4 param_2,int param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  int local_118 [4];
  undefined1 auStack_108 [60];
  undefined1 auStack_cc [36];
  undefined1 auStack_a8 [72];
  undefined1 *local_60 [4];
  undefined1 *local_50;
  int local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  
  uVar7 = 0;
  uVar10 = (ulonglong)param_5;
  iVar5 = *(int *)(param_1 + 0x34);
  iVar8 = iVar5 + (uint)*(ushort *)(param_1 + 0x38) * 0x2c;
  if (iVar5 != iVar8) {
    local_60[3] = auStack_cc;
    local_50 = auStack_a8;
    local_34 = param_1;
    local_30 = param_2;
    local_2c = param_3;
    local_28 = param_4;
    do {
      fn_001a379c(auStack_108);
      local_60[0] = auStack_108;
      local_60[1] = local_60[3];
      local_60[2] = local_50;
      iVar6 = 0;
      local_118[0] = iVar5 + 4;
      local_118[1] = iVar5 + 8;
      local_118[2] = iVar5 + 0xc;
      uVar3 = 0;
      do {
        piVar4 = (int *)local_118[uVar3];
        if ((*piVar4 == 0) && (iVar1 = *(int *)(iVar5 + uVar3 * 4 + 0x1c), iVar1 != 0)) {
          iVar1 = fn_003035b0(iVar1,local_30);
          if (iVar1 == 0) {
            iVar6 = iVar6 + 1;
            *piVar4 = local_2c;
          }
          else {
            uVar7 = 0x80000008;
          }
        }
        iVar1 = *piVar4;
        puVar9 = (undefined1 *)(*(int *)(iVar5 + 0x18) + uVar3 * 0x10);
        puVar2 = local_60[uVar3];
        if (iVar1 != 0) {
          puVar2[8] = *(undefined1 *)(iVar1 + 0x18);
          puVar2[10] = puVar9[1];
          puVar2[9] = puVar9[2];
          puVar2[0xb] = puVar9[3];
          puVar2[0xc] = puVar9[4];
          *(undefined4 *)(puVar2 + 0x10) = *(undefined4 *)(puVar9 + 8);
          puVar2[0x14] = puVar9[5];
          puVar2[0x15] = *(char *)(iVar1 + 0x19) + -1;
          puVar2[0x16] = puVar9[0xc];
          puVar2[0x17] = puVar9[0xd];
          puVar2[0x18] = puVar9[0xe];
          puVar2[0x19] = puVar9[0xf];
          if (uVar3 < 3) {
            puVar2[0x1c] = *puVar9;
          }
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < 3);
      if (iVar6 != 0) {
        iVar6 = *(int *)(iVar5 + 0x18);
        fn_001a3ec4(local_34,iVar5 + 0x10,auStack_108,iVar6,iVar6 + 0x10,iVar6 + 0x20,local_28,
                     (int)uVar10);
      }
      iVar5 = iVar5 + 0x2c;
    } while (iVar5 != iVar8);
  }
  return uVar7;
}



int fn_0019f448(int *param_1,undefined4 *param_2,undefined4 param_3,int param_4,undefined4 param_5,
                int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 uVar6;
  
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar3 + 0x80) = 0xd0082;
  *(int *)(iVar3 + 0x84) = param_4;
  *(int *)(iVar3 + 0x88) = param_6;
  *(undefined4 *)(iVar3 + 0x90) = param_3;
  *(uint *)(iVar3 + 0x8c) = param_4 << 0xe | 0xc02;
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  puVar4 = (uint *)(iVar2 + 0x180);
  uVar5 = *puVar4;
  uVar6 = *(undefined4 *)(iVar2 + 0x184);
  *puVar4 = param_6 << 0xe | 2;
  *(undefined4 *)(iVar2 + 0x184) = param_5;
  iVar1 = *param_1;
  svc_0x32();
  *puVar4 = uVar5;
  *(undefined4 *)(iVar2 + 0x184) = uVar6;
  if (-1 < iVar1) {
    *param_2 = *(undefined4 *)(iVar3 + 0x88);
    iVar1 = *(int *)(iVar3 + 0x84);
  }
  return iVar1;
}



int fn_0019f340(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)param_1[3];
  if (piVar3 == (int *)0x0) {
    iVar1 = -0x279f8ff8;
  }
  else {
    iVar1 = fn_001a3e8c(piVar3 + 2,param_1 + 0xe,param_1[0xd]);
    if (-1 < iVar1) {
      iVar1 = (**(code **)*param_1)(param_1,piVar3 + 2);
      if (-1 < iVar1) {
        piVar2 = (int *)param_1[3];
        if (piVar2 != (int *)0x0) {
          if ((int *)*piVar2 == piVar2) {
            param_1[3] = 0;
          }
          else {
            param_1[3] = piVar2[1];
            *(int *)piVar2[1] = *piVar2;
            *(int *)(*piVar2 + 4) = piVar2[1];
          }
          piVar2[1] = 0;
          *piVar2 = 0;
        }
        param_1[10] = param_1[10] + -1;
        piVar2 = (int *)param_1[2];
        if (piVar2 == (int *)0x0) {
          piVar3[1] = (int)piVar3;
          *piVar3 = (int)piVar3;
          param_1[2] = piVar3;
        }
        else {
          piVar3[1] = (int)piVar2;
          *(int **)(*piVar2 + 4) = piVar3;
          *piVar3 = *piVar2;
          *piVar2 = (int)piVar3;
        }
        param_1[0xb] = param_1[0xb] + 1;
        return 0;
      }
      if (piVar3[2] != 0) {
        svc_0x23();
        piVar3[2] = 0;
      }
    }
  }
  return iVar1;
}



uint * fn_0019f2d4(uint *param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  
  *(char *)((int)param_1 + 0xd) = (char)param_2;
  if (param_2 != 0) {
    if (param_2 == 1) {
      fn_0019f00c(&DAT_008ef5bc,*param_1 & 0xff);
      *(undefined1 *)(param_1 + 3) = 0;
      uVar3 = *param_1;
      fn_00193374();
      iVar1 = fn_00189e18();
      if (iVar1 == 0) {
        fn_00193380();
        return (uint *)0x0;
      }
      puVar2 = *(uint **)((uRam008f08da & 1) * 0x60 + (uVar3 & 0xff) * 4 + 0x8f0670);
      *puVar2 = *puVar2 | 0x20000000;
      fn_00193380();
      return (uint *)&DAT_00000001;
    }
    if (param_2 == 2) {
      puVar2 = (uint *)fn_0019f00c(&DAT_008ef5bc,*param_1 & 0xff);
      return puVar2;
    }
  }
  return param_1;
}



uint * fn_0019f2a8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 unaff_r4;
  undefined4 in_lr;
  
  *(char *)(param_1 + 4) = (char)param_2;
  if (param_2 == 1) {
    fn_001942ec(*(undefined4 *)(param_1 + 0x68));
  }
  puVar2 = *(uint **)(param_1 + 0x68);
  *(char *)((int)puVar2 + 0xd) = (char)param_2;
  if (param_2 != 0) {
    if (param_2 == 1) {
      fn_0019f00c(&DAT_008ef5bc,*puVar2 & 0xff,param_3,param_4,unaff_r4,in_lr);
      *(undefined1 *)(puVar2 + 3) = 0;
      uVar3 = *puVar2;
      fn_00193374();
      iVar1 = fn_00189e18();
      if (iVar1 == 0) {
        fn_00193380();
        return (uint *)0x0;
      }
      puVar2 = *(uint **)((uRam008f08da & 1) * 0x60 + (uVar3 & 0xff) * 4 + 0x8f0670);
      *puVar2 = *puVar2 | 0x20000000;
      fn_00193380();
      return (uint *)&DAT_00000001;
    }
    if (param_2 == 2) {
      puVar2 = (uint *)fn_0019f00c(&DAT_008ef5bc,*puVar2 & 0xff);
      return puVar2;
    }
  }
  return puVar2;
}


