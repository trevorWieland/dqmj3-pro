#include "00657430_00657ce8bb.h"

static void svc_0x23(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x23 }
#endif
}

static void svc_0x24(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x24 }
#endif
}


int fn_00657ce8(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  
  iVar1 = (**(code **)(*param_1 + 0x40))(param_1);
  if (iVar1 != 0) {
    piVar5 = (int *)0x0;
    if ((param_1[0x1b] & 1U) != 0) {
      fn_00656bb8();
      piVar5 = param_1 + 0x14;
    }
    for (iVar1 = param_1[0x22]; iVar1 = iVar1 - param_1[0x24],
        iVar1 != (int)param_1 + (0x84 - param_1[0x24]); iVar1 = *(int *)(iVar1 + param_1[0x24] + 4))
    {
      if (*(int *)(iVar1 + 0xc) + 0x10 + iVar1 == param_2) {
        uVar4 = *(int *)(iVar1 + 8) - param_3;
        if (uVar4 < 0x10) {
          iVar2 = *(int *)(iVar1 + 0xc);
        }
        else {
          *(int *)(iVar1 + 8) = param_3;
          puVar3 = (undefined4 *)(*(int *)(iVar1 + 0xc) + 0x10 + iVar1 + param_3);
          if (puVar3 != (undefined4 *)0x0) {
            *puVar3 = 0;
            puVar3[1] = 0;
            puVar3[2] = 0;
            puVar3[3] = 0;
          }
          puVar3[2] = uVar4 - 0x10;
          fn_0065830c(param_1);
          iVar2 = *(int *)(iVar1 + 0xc);
        }
        if (piVar5 != (int *)0x0) {
          fn_00656ca4(piVar5);
        }
        return iVar1 + iVar2 + 0x10;
      }
    }
    if (piVar5 != (int *)0x0) {
      fn_00656ca4(piVar5);
    }
  }
  return 0;
}



undefined4 * fn_00657b88(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  *param_1 = &DAT_0085992c;
  iVar1 = DAT_008c06e0;
  if (DAT_008c06e0 != 0) {
    if (*(undefined4 **)(DAT_008c06e0 + 0x20) != param_1) {
      if (param_1[0x18] != 0) {
        param_1[0x18] = 0;
        fn_00658e3c();
        *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + -1;
      }
      iVar1 = param_1[0x1d];
      if (iVar1 == 1) {
        fn_006576f8(param_1,0);
      }
      else if ((iVar1 == 2 || iVar1 == 3) && (iVar1 != 0 && iVar1 != 4)) {
        piVar4 = (int *)param_1[0x1e];
        svc_0x24();
        if (*piVar4 < 0) {
          fn_0015e294();
        }
        *(undefined1 *)(piVar4 + 1) = 1;
        param_1[0x1d] = 4;
      }
      piVar4 = (int *)param_1[0x1e];
      fn_0015e304(piVar4);
      if (*piVar4 != 0) {
        svc_0x23();
        *piVar4 = 0;
      }
      piVar4 = (int *)param_1[0x1e];
      if (piVar4 != (int *)0x0) {
        fn_0015e304(piVar4);
        if (*piVar4 != 0) {
          svc_0x23();
          *piVar4 = 0;
        }
        fn_00656b7c(piVar4);
      }
      iVar1 = param_1[0x1f];
      if (iVar1 != 0) {
        fn_00656b0c(iVar1);
        fn_00656b7c(iVar1);
      }
    }
    fn_00656774(param_1 + 6);
  }
  iVar1 = fn_00656870(param_1 + 6);
  puVar2 = (undefined4 *)(iVar1 + -0x18);
  *puVar2 = &DAT_00859a08;
  iVar3 = *(int *)(iVar1 + -0x14);
  if (iVar3 != DAT_008c3634) {
    if (iVar3 != 0) {
      fn_00656f08(iVar3,puVar2);
    }
    *(int *)(iVar1 + -0x14) = DAT_008c3634;
  }
  return puVar2;
}



int fn_00657904(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 0x74);
  if (iVar1 != 0 && iVar1 != 4) {
    piVar2 = *(int **)(param_1 + 0x78);
    svc_0x24();
    if (*piVar2 < 0) {
      fn_0015e294();
    }
    *(undefined1 *)(piVar2 + 1) = 1;
    *(undefined4 *)(param_1 + 0x74) = 4;
    iVar1 = *(int *)(param_1 + 0x74);
  }
  return iVar1;
}


