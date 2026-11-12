#include "00505d00_0050697c.h"



undefined1 * fn_0050697c(int param_1,char *param_2)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  
  if ((param_2 != (char *)0x0) && (*param_2 == '\x01')) {
LAB_00506b80:
    return &DAT_e0a14827;
  }
  if (*(char *)(param_1 + 100) == '\0') {
    if (param_2 != (char *)0x0) {
      fn_004ed050(param_2);
      fn_004ed0e4(param_2,0);
    }
  }
  else {
    pcVar1 = (char *)(uint)*(byte *)(param_1 + 99);
    pcVar3 = param_2;
    if (pcVar1 != &DAT_000000fd) {
      pcVar3 = (char *)(uint)*(byte *)(param_1 + 0x62);
    }
    if (pcVar1 == &DAT_000000fd || pcVar1 == pcVar3) goto LAB_00506b80;
    iVar2 = fn_004f40c0(*(undefined4 *)(param_1 + 0xc),param_2);
    if (iVar2 == 0) {
      iVar2 = fn_006d897c(*(undefined4 *)(param_1 + 0x30));
      if (((iVar2 == 0) ||
          (iVar2 = fn_004fa100(*(undefined4 *)(param_1 + 0x30),param_2), iVar2 == 0)) &&
         (iVar2 = fn_004f3eb4(*(undefined4 *)(param_1 + 0xc),param_2), iVar2 == 0))
      goto LAB_00506b80;
    }
    else {
      fn_004efcf4(*(undefined4 *)(param_1 + 0xc),0);
    }
  }
  return (undefined1 *)0x0;
}



void fn_00506924(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 < 0xc) {
    uVar2 = 1;
    if (param_2 != 0) {
      if ((param_2 & 1) != 0) {
        uVar2 = 2;
      }
      for (param_2 = param_2 >> 1; param_2 != 0; param_2 = param_2 - 1) {
        uVar2 = uVar2 << 2;
      }
    }
    iVar1 = *(int *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | uVar2;
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0x58) = *(uint *)(iVar1 + 0x58) | uVar2;
    }
  }
  return;
}



undefined1 * fn_00506138(int param_1,uint *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 auStack_a8 [32];
  undefined2 local_88;
  byte local_86;
  undefined1 local_85;
  undefined1 local_84;
  uint *local_7c;
  undefined1 auStack_78 [84];
  
  iVar1 = fn_004f8aa0();
  if ((((iVar1 != 0) || (*(char *)(param_1 + 0x81) != '\0')) || (DAT_008bf4d4 == 0)) ||
     (0x3fefffff < DAT_008c0674 - 0x100000U)) {
LAB_00506748:
    return &DAT_e0a14827;
  }
  if ((DAT_008bf4dd != '\0') || (*param_2 - 1000 < 0x7149)) {
    if ((*(char *)(param_1 + 0x68) != '\0') &&
       (puVar2 = (undefined1 *)
                 fn_0051b008(*(undefined4 *)(param_1 + 0x58),param_2[9],param_2[10],
                              (int)(char)param_2[0xc],param_2[0xb]), (int)puVar2 < 0)) {
      return puVar2;
    }
    if ((param_2[0xd] == 0) || (param_2[0xd] - 0x100000 < 0x3ff00000)) {
      local_7c = param_2 + 5;
      iVar1 = fn_00101a1c(auStack_78,&LAB_004ee310,0x14,4);
      puVar2 = (undefined1 *)fn_004ee340(DAT_008c0638,iVar1 + -4);
      fn_00100414(auStack_78,&LAB_004ee324,0x14,4);
      if ((int)puVar2 < 0) {
        return puVar2;
      }
      if ((char)param_2[2] == '\0') {
        DAT_008ed969 = 0;
      }
      else {
        if ((*(int **)(param_1 + 0x20) != (int *)0x0) &&
           (iVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x24))(), iVar1 == 0))
        goto LAB_00506748;
        DAT_008ed969 = *(undefined1 *)(param_1 + 0x66);
      }
      *(char *)(param_1 + 0x69) = (char)param_2[2];
      DAT_008eda08 = (undefined2)param_2[8];
      if (param_2[0xd] == 0) {
        local_c8 = 0;
        local_c4 = 0;
        local_c0 = 0;
        local_bc = 0;
        local_b8 = 0;
        local_b4 = 0;
        local_b0 = 0;
        local_ac = 0;
      }
      else {
        fn_00301a9c(&local_c8,param_2[0xd],0x20);
      }
      fn_00301a9c(auStack_a8,param_2[3],0x20);
      local_88 = 0;
      local_86 = *(byte *)(param_2[3] + 0x22);
      if (0x10 < local_86) {
        local_86 = 0x10;
      }
      local_85 = *(undefined1 *)(param_2[3] + 0x23);
      local_84 = 2;
      fn_00519360(DAT_008c0674,&local_c8);
      (**(code **)(**(int **)(param_1 + 0x28) + 8))(*(int **)(param_1 + 0x28),param_2 + 5);
      *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x48) = 15000;
      uVar3 = *param_2;
      iVar1 = *(int *)(param_1 + 0x14);
      *(uint *)(iVar1 + 0x4c) = uVar3 + 5000;
      *(uint *)(iVar1 + 0x48) = uVar3 + 20000;
      *(undefined4 *)(iVar1 + 0x58) = 0x1d4c;
      uVar3 = *param_2;
      if (DAT_008bf4dd == '\0') {
        if (uVar3 < 1000) {
          uVar3 = 1000;
        }
        else if (30000 < uVar3) {
          uVar3 = 30000;
        }
      }
      *(uint *)(*(int *)(param_1 + 0x4c) + 0x24) = uVar3;
      *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x14) = 15000;
      fn_0050bd1c(DAT_008bf4d4,param_2[1]);
      DAT_008ed960 = (undefined2)*param_2;
      DAT_008ed964 = param_2[1];
      fn_004fa374(*(undefined4 *)(param_1 + 0x30));
      if (*(int *)(DAT_008bf4d4 + 100) - 0x100000U < 0x3ff00000) {
        fn_00511ab8();
      }
      fn_0051dcdc(DAT_008bf4d4,0,param_2[4]);
      *(undefined4 *)(param_1 + 0x78) = 0;
      *(undefined4 *)(param_1 + 0x7c) = 0;
      *(undefined1 *)(param_1 + 0x80) = 0;
      fn_004fe974(*(undefined4 *)(param_1 + 0x14));
      if (*(int *)(param_1 + 0x20) - 0x100000U < 0x3ff00000) {
        fn_005026b8();
      }
      *(undefined1 *)(param_1 + 0x65) = 1;
      *(undefined1 *)(param_1 + 0x81) = 1;
      return (undefined1 *)0x0;
    }
  }
  return (undefined1 *)0xe0e14826;
}



void fn_005060e8(int param_1)

{
  if (*(char *)(param_1 + 0x81) != '\0') {
    fn_00503ca8(param_1);
    fn_005044fc(param_1);
    fn_0051dc1c(DAT_008bf4d4);
    fn_004ee29c(DAT_008c0638);
    *(undefined1 *)(param_1 + 0x81) = 0;
  }
  return;
}



longlong fn_00505e04(int param_1,char *param_2)

{
  uint uVar1;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  undefined8 uVar2;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x69);
  if (uVar1 == 0) {
    if (DAT_008c0630 != 0) {
      uVar1 = 8;
    }
  }
  else if ((*(byte *)(param_1 + 99) == 0xfd) ||
          (uVar1 = (uint)*(byte *)(param_1 + 0x62), *(byte *)(param_1 + 99) != uVar1)) {
    if (DAT_008c0630 != 0) {
      uVar1 = 8;
    }
  }
  else {
    if ((param_2 == (char *)0x0) || (*param_2 != '\x01')) {
      *(undefined1 *)(param_1 + 0x60) = 0;
      if (*(ushort *)(param_1 + 0x5c) < 2) {
        *(undefined1 *)(param_1 + 0x65) = 2;
        fn_00505734(param_1,2,1);
        uVar1 = extraout_r1_00;
        if (*(char *)(param_1 + 0x81) != '\0') {
          fn_00503ca8(param_1);
          fn_005044fc(param_1);
          fn_0051dc1c(DAT_008bf4d4);
          fn_004ee29c(DAT_008c0638);
          *(undefined1 *)(param_1 + 0x81) = 0;
          uVar1 = extraout_r1_01;
        }
        if (param_2 != (char *)0x0) {
          fn_004ed050(param_2);
          fn_004ed0e4(param_2,0);
          uVar1 = extraout_r1_02;
        }
      }
      else {
        uVar2 = fn_0050329c(*(undefined4 *)(param_1 + 0x24),param_2);
        uVar1 = (uint)((ulonglong)uVar2 >> 0x20);
        if ((int)uVar2 != 0) {
          fn_004efcf4(*(undefined4 *)(param_1 + 0x24),0);
          uVar1 = extraout_r1;
        }
      }
      return (ulonglong)uVar1 << 0x20;
    }
    if (DAT_008c0630 != 0) {
      uVar1 = 8;
    }
  }
  return CONCAT44(uVar1,&DAT_e0a14827);
}



void fn_00505d54(void)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  DAT_008ed96a = 0xff;
  DAT_008ed96c = 0xffffffff;
  DAT_008ed970 = 0xffffffff;
  DAT_008ed974 = 0xff;
  iVar4 = 0xb;
  puVar1 = &DAT_008ed978;
  DAT_008ed978 = 0xffffffff;
  do {
    puVar1[1] = 0xffffffff;
    iVar4 = iVar4 + -1;
    puVar1 = puVar1 + 2;
    *puVar1 = 0xffffffff;
  } while (iVar4 != 0);
  iVar4 = 6;
  puVar1 = (undefined4 *)&DAT_008ed9d4;
  DAT_008ed9d4 = 0xff;
  do {
    puVar1[1] = 0xffffffff;
    iVar4 = iVar4 + -1;
    puVar1 = puVar1 + 2;
    *puVar1 = 0xffffffff;
  } while (iVar4 != 0);
  DAT_008eda2c = 0xffffffff;
  DAT_008edb18 = 0xffffffff;
  DAT_008edb1c = 0xffffffff;
  DAT_008edb24 = 0xff;
  uVar2 = 0;
  do {
    (&DAT_008edb38)[uVar2] = 0xffffffff;
    (&DAT_008edb94)[uVar2] = 0xffffffff;
    (&DAT_008edbf0)[uVar2] = 0xffffffff;
    (&DAT_008edc4c)[uVar2] = 0xffffffff;
    (&DAT_008edca8)[uVar2] = 0xffffffff;
    (&DAT_008edd04)[uVar2] = 0xff;
    (&DAT_008edd1b)[uVar2] = 0xff;
    uVar3 = uVar2 + 1;
    (&DAT_008edd32)[uVar2] = 0xff;
    (&DAT_008edd49)[uVar2] = 0xff;
    uVar2 = uVar3;
  } while (uVar3 < 0x17);
  return;
}



void fn_00505d4c(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x82) = param_2;
  return;
}



void fn_00505d00(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = fn_0050b144(DAT_008bf4cc);
  UNRECOVERED_JUMPTABLE = *(code **)*param_2;
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00505d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_2,UNRECOVERED_JUMPTABLE,0,1);
    return;
  }
  (*UNRECOVERED_JUMPTABLE)();
  *(undefined1 *)(iVar1 + 0x20) = 6;
  return;
}


