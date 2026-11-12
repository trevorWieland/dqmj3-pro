#include "005962dc_00596c38.h"



undefined4 * fn_00596c38(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint *puVar10;
  uint uVar11;
  uint local_20;
  uint local_1c [3];
  
  iVar1 = fn_00145b00(0x18,&DAT_00812c8c);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)fn_0028e264(iVar1,param_1);
  puVar10 = puVar2 + 2;
  *puVar2 = &DAT_00845698;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *(undefined1 *)(puVar2 + 5) = 0;
  *(undefined1 *)((int)puVar2 + 0x15) = 0;
  *(undefined1 *)((int)puVar2 + 0x16) = 0;
  local_20 = 6;
  if ((uint)((int)(puVar2[4] - puVar2[2]) >> 2) < 6) {
    uVar11 = (int)(puVar2[3] - puVar2[2]) >> 2;
    local_1c[0] = uVar11 + (uVar11 >> 1) + (uVar11 >> 3);
    if (local_1c[0] < uVar11 + 0x20) {
      local_1c[0] = uVar11 + 0x20;
    }
    puVar7 = local_1c;
    if (local_1c[0] < 7) {
      puVar7 = &local_20;
    }
    uVar11 = *puVar7;
    puVar3 = (undefined4 *)fn_00100fc6(uVar11 << 2,0);
    puVar9 = (undefined4 *)puVar2[3];
    puVar4 = puVar3;
    for (puVar8 = (undefined4 *)*puVar10; puVar8 != puVar9; puVar8 = puVar8 + 1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *puVar8;
      }
      puVar4 = puVar4 + 1;
    }
    uVar5 = *puVar10;
    uVar6 = uVar5;
    if ((uint)puVar2[3] < uVar5) {
      do {
        uVar6 = uVar6 + 4;
      } while (uVar6 != puVar2[3]);
    }
    fn_001008c4(uVar5,(int)(puVar2[4] - uVar5) >> 2,0);
    uVar6 = *puVar10;
    puVar2[2] = puVar3;
    puVar2[3] = (puVar2[3] - uVar6 & 0xfffffffc) + (int)puVar3;
    puVar2[4] = puVar3 + uVar11;
  }
  return puVar2;
}



void fn_00596bf8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_005fc914();
  *puVar1 = &PTR_LAB_0084548c;
  puVar1[0x54] = 0;
  puVar1[0x55] = 3;
  puVar1[0x56] = 0;
  puVar1[0x57] = 0;
  return;
}



void fn_005969d4(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = param_1[0x17];
  cVar1 = *(char *)(iVar2 + 0x31);
  if (cVar1 != '\0') {
    switch(param_1[0x52]) {
    default:
      fn_00763a8c(param_1);
      return;
    case 1:
    case 6:
    case 8:
    case 0xf:
      break;
    case 9:
      if (cVar1 == '\x03') {
        uVar3 = fn_0022f584((char *)&DAT_00596b70,0);
        fn_007491f0(param_1,uVar3);
        fn_005fbc24(param_1,1);
        param_1[0x52] = 10;
        iVar2 = param_1[0x17];
        goto LAB_00596b14;
      }
      if (cVar1 == '\x02') {
                    /* WARNING: Could not recover jumptable at 0x00596adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x1fc))(param_1);
        return;
      }
      break;
    case 0xb:
                    /* WARNING: Could not recover jumptable at 0x00596b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x200))(param_1);
      return;
    case 0xc:
      fn_00749218(param_1,DAT_00898214,(char *)&DAT_00596b4c);
      iVar2 = fn_006c41e4(*(undefined4 *)(*(int *)(param_1[0x48] + 0x3c) + 8));
      if (iVar2 == 2) {
        fn_00689efc(param_1,0x3a,0);
      }
      else {
        fn_00689efc(param_1,0x39,0);
      }
      fn_0066ec10(DAT_00897850);
      param_1[0x52] = 1;
      *(undefined1 *)(param_1[0x17] + 0x31) = 0;
      return;
    case 0xe:
      if (cVar1 == '\x03') {
        fn_00749218(param_1,DAT_00898214,(char *)&DAT_00596b4c);
        param_1[0x52] = 0xf;
        *(undefined1 *)(param_1[0x17] + 0x31) = 0;
        return;
      }
      if (cVar1 == '\x02') {
        fn_00749218(param_1,DAT_00898214,(char *)&DAT_00596b4c);
        param_1[0x52] = 1;
        *(undefined1 *)(param_1[0x17] + 0x31) = 0;
      }
      break;
    case 0x11:
      param_1[0x41] = 0;
      param_1[0x52] = 0;
LAB_00596b14:
      *(undefined1 *)(iVar2 + 0x31) = 0;
      return;
    }
  }
  return;
}



void fn_00596894(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  iVar1 = fn_0066e158(DAT_00898840);
  bVar3 = iVar1 == 0;
  if (bVar3) {
    iVar1 = *(int *)(param_1 + 0x104);
  }
  if (bVar3 && iVar1 == 0) {
    if (*(int *)(param_1 + 0x154) == 2 || *(int *)(param_1 + 0x154) == 3) {
      fn_007492a8(param_1);
      fn_002d6808(*(undefined4 *)(*(int *)(param_1 + 0x110) + 0x10));
      uVar2 = 0xe;
    }
    else {
      uVar2 = 0xd;
    }
    *(undefined4 *)(param_1 + 0x104) = uVar2;
    *(undefined4 *)(*(int *)(param_1 + 0x110) + 0xc) = 0;
  }
  return;
}



void fn_00596778(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int local_1c;
  int iStack_18;
  int local_14 [2];
  
  iVar1 = param_1[0x51];
  if (iVar1 == 4 || iVar1 == 5) {
    *(char *)(param_1 + 0x53) = (char)param_3;
    param_1[0x51] = 5;
    return;
  }
  if ((iVar1 != 1 && iVar1 != 2) && iVar1 != 3) {
    (**(code **)(*param_1 + 0x1f8))(param_1,param_3,local_14,&local_1c,&iStack_18);
    *param_2 = param_1[0x56];
    param_2[0x43] = local_14[0];
    param_2[0x48] = local_1c;
    param_2[0x4c] = iStack_18;
    *(byte *)(param_2 + 0x47) = *(byte *)(param_2 + 0x47) | 1;
    *(undefined4 *)(DAT_00898840 + 0x38) = 2;
  }
  return;
}



void fn_00596468(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  fn_002cd348(param_1[0x4b]);
  iVar1 = fn_002cc950(param_1[0x4b]);
  if (iVar1 != 0) {
    uVar2 = fn_002cc950();
    fn_00749130(param_1,DAT_00898214,uVar2,0,1,1,0);
    fn_002ccba8(param_1[0x4b]);
    return;
  }
  iVar1 = fn_002cd334(param_1[0x4b]);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x1c0))(param_1);
    param_1[0x41] = 8;
  }
  return;
}



undefined4 fn_005962dc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x148);
  if (iVar1 == 0xf) {
    iVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x120) + 0x48) + 0x14))();
    if (iVar1 != 0) {
      return 0;
    }
    fn_005fc41c(param_1,1);
    uVar2 = 0x10;
  }
  else {
    if (0xf < iVar1) {
      if (iVar1 != 0x10) {
        if (iVar1 == 0x11) {
          *(undefined4 *)(param_1 + 0x104) = 0;
          *(undefined4 *)(param_1 + 0x148) = 0;
          *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x31) = 0;
          return 0;
        }
        if (iVar1 != 0x12) goto LAB_00596338;
      }
      fn_00596504(param_1,0x10,0x12,0x11,"MenuMessageWiFiBattle0011",0x708,0);
      return 0;
    }
    if (iVar1 != 1) {
      if (iVar1 == 2 || iVar1 == 3) {
        fn_00596504(param_1,2,3,0xe,"MenuMessageWiFiBattle0010",900,1);
        return 0;
      }
      if (iVar1 == 0xe) {
        return 0;
      }
LAB_00596338:
      uVar2 = fn_005fbe00(param_1);
      return uVar2;
    }
    iVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x120) + 0x48) + 0x14))();
    if (iVar1 != 0) {
      return 0;
    }
    fn_005fc41c(param_1,0);
    uVar2 = 2;
  }
  *(undefined4 *)(param_1 + 0x148) = uVar2;
  return 0;
}



void fn_00596504(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 int param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_50 [7];
  int iStack_34;
  int local_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
  if (*(int *)(param_1 + 0x144) == 1) {
    iStack_34 = param_1;
    local_30 = param_2;
    iStack_2c = param_3;
    uStack_28 = param_4;
    local_50[0] = (**(code **)(**(int **)(*(int *)(param_1 + 0x120) + 0x44) + 0x14))();
    if (*(int *)(*(int *)(*(int *)(param_1 + 0x120) + 0x44) + 0x44) == 0) {
      iVar1 = fn_0076222c(param_1);
      if ((iVar1 != 0) && (*(char *)(param_1 + 0x14e) == '\0')) {
        *(undefined1 *)(param_1 + 0x14e) = 1;
        fn_00749218(param_1,DAT_00898214,(char *)&DAT_00596738);
      }
      if (*(char *)(param_1 + 0x14e) == '\x01') {
        iVar1 = fn_0066e4e8(DAT_00898840);
        if (((iVar1 != 0) && (iVar1 = fn_0066e58c(DAT_00898840), iVar1 == 0)) ||
           (iVar1 = fn_0066e58c(DAT_00898840), iVar1 != 0)) {
          *(undefined1 *)(param_1 + 0x14e) = 0;
          *(undefined4 *)(param_1 + 0x140) = 0;
          fn_005fbae8(param_1);
          *(undefined4 *)(param_1 + 0x148) = 4;
          return;
        }
      }
      else {
        iVar2 = *(int *)(param_1 + 0x148);
        iVar1 = local_30;
        if (iVar2 == local_30) {
          iVar1 = local_50[0];
        }
        if (iVar2 == local_30 && iVar1 == 0) {
          *(int *)(param_1 + 0x148) = param_3;
        }
        else {
          if ((iVar2 == param_3) && (iVar1 = fn_0066e224(DAT_00897850), iVar1 != 0)) {
            local_50[0] = 0;
            local_50[1] = 0;
            local_50[2] = 0;
            local_50[3] = 0;
            local_50[4] = 0;
            local_50[5] = 0;
            fn_0066e368(DAT_00898840,(int)*(char *)(DAT_00898840 + 0x4d),local_50);
            fn_0015b0dc(local_50);
            fn_00749218(param_1,DAT_00898214,(char *)&DAT_0059675c);
            fn_0066eb90(DAT_00897850);
            uVar3 = fn_0066e3bc(DAT_00897850);
            fn_0066e6f0(DAT_00897850,1,uVar3);
            *(undefined4 *)(param_1 + 0x144) = 2;
            *(undefined4 *)(param_1 + 0x148) = 6;
            return;
          }
          if (param_6 < *(int *)(param_1 + 0x140)) {
            local_50[0] = 1;
            local_50[2] = 0;
            local_50[1] = 1;
            fn_00749130(param_1,DAT_00898214,param_5,param_7);
            *(undefined4 *)(param_1 + 0x140) = 0;
            fn_005fbae8(param_1);
            *(undefined4 *)(param_1 + 0x148) = param_4;
            return;
          }
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x104) = 0xc;
      *(undefined4 *)(param_1 + 0x148) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x31) = 0;
    }
  }
  return;
}


