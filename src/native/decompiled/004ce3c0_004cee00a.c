#include "004ce3c0_004cee00a.h"



bool fn_004ceb10(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x6c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x1c))(piVar1,0);
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  return piVar1 != (int *)0x0;
}



uint fn_004ce7b0(int param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [4];
  int local_5c;
  char local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [20];
  int local_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  fn_006db00c(param_2);
  if (*param_2 == 0x10) {
    fn_004c6d54(auStack_60);
    uVar4 = fn_004c6ce4(auStack_60,param_2[1] + 0x14,0x10);
    uVar1 = (uint)uVar4 & 0x80000000;
    if ((int)uVar1 < 0) {
      if (DAT_008c0630 != 0) {
        return DAT_008c0630;
      }
    }
    else {
      uVar1 = 0;
      if (local_5c != 0) {
        fn_0013d5c4(auStack_48,(int)((ulonglong)uVar4 >> 0x20),0x20000,0);
        fn_0050d060(auStack_48,param_2 + 3);
        local_2c = local_5c;
        uVar4 = fn_006d6d58(auStack_40,extraout_r1,0x10000,0);
        uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
        if ((int)uVar4 == 0) {
          if (DAT_008c0630 != 0) {
            uVar3 = 4;
          }
          uVar1 = fn_0050d178(auStack_48,uVar3,1,0);
          return uVar1;
        }
        if (local_58 == '\0') {
          iVar2 = fn_004c6d78(param_1 + 0x84,auStack_48,*(undefined1 *)((int)param_2 + 0x1d));
          if ((iVar2 != 0) && (*(int *)(param_1 + 0x18) != 0)) {
            local_20 = local_50;
            uStack_1c = uStack_4c;
            local_68 = 0;
            fn_004d07ac(param_1,1,auStack_48,&local_20);
          }
        }
        else if (local_58 == '\x01') {
          local_68 = local_50;
          uStack_64 = uStack_4c;
          fn_004c6ebc(param_1 + 0x84,auStack_48,&local_68,*(undefined1 *)((int)param_2 + 0x1d));
          if (*(int *)(param_1 + 0x4c8) == local_5c) {
            fn_004d04cc(param_1);
            *(undefined1 *)(param_1 + 0x4c1) = 0;
            *(undefined1 *)(param_1 + 0x4c2) = 0;
            *(undefined1 *)(param_1 + 0x4c0) = 0;
            *(undefined4 *)(param_1 + 0x4c8) = 0;
          }
        }
        uVar1 = fn_0050d178(auStack_48);
        return uVar1;
      }
    }
  }
  else {
    uVar1 = *param_2;
    if (DAT_008c0630 != 0) {
      uVar1 = DAT_008c0630;
    }
  }
  return uVar1;
}



undefined4 fn_004ce3c0(int param_1,uint *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  code *pcVar7;
  undefined4 *puVar8;
  bool bVar9;
  bool bVar10;
  undefined1 auStack_60 [8];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [8];
  undefined1 local_40;
  
  cVar1 = *(char *)(param_1 + 0x4c0);
  bVar9 = cVar1 == '\0';
  if (bVar9) {
    cVar1 = *(char *)(param_1 + 0x4c1);
  }
  bVar10 = bVar9 && cVar1 == '\0';
  if (bVar9 && cVar1 == '\0') {
    bVar10 = *(char *)(param_1 + 0x4c2) == '\0';
  }
  if (((!bVar10) &&
      (*(uint *)(param_1 + 0x4bc) <= param_2[1] &&
       (uint)(*param_2 <= *(uint *)(param_1 + 0x4b8)) <= *(uint *)(param_1 + 0x4bc) - param_2[1]))
     && (*(char *)(param_1 + 0x4c2) != '\0')) {
    puVar8 = (undefined4 *)(param_1 + 0x4c8);
    iVar2 = fn_004c6fb8(param_1 + 0x84,*(undefined4 *)(param_1 + 0x4c8),
                         *(uint *)(param_1 + 0x4b8) - *param_2);
    piVar3 = (int *)fn_004d0490(param_1,*puVar8);
    *puVar8 = 0;
    *(undefined1 *)(param_1 + 0x4c2) = 0;
    if (*(char *)(param_1 + 0x4c1) != '\0') {
      iVar2 = fn_004c6fb8(param_1 + 0x84,0);
      piVar3 = (int *)fn_004d0490(param_1,*puVar8);
      *puVar8 = 0;
      *(undefined1 *)(param_1 + 0x4c1) = 0;
    }
    if (*(char *)(param_1 + 0x70) == '\x01') {
      fn_004cf878(param_1);
    }
    if (iVar2 != 0) {
      pcVar7 = *(code **)(*(int *)(iVar2 + 4) + 0x14);
      (*pcVar7)(iVar2 + 4,pcVar7,0x8000,0);
      fn_004f0ce8();
      local_58 = 0;
      local_54 = 0;
      fn_004f01f4(&local_58);
      *(undefined4 *)(iVar2 + 0x38) = local_58;
      *(undefined4 *)(iVar2 + 0x3c) = local_54;
    }
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3,*(code **)(*piVar3 + 8),0x8000,0);
      if (piVar3[0x24] != 0) {
        fn_004ed098(piVar3[0x24],0xd8a148f2);
      }
      (**(code **)*piVar3)(piVar3);
      fn_004f0c1c(param_1 + 0xf0,piVar3 + -2);
      fn_004f0ab4(param_1 + 0x100,param_1 + 0x104,*(int *)(param_1 + 0x110) + (int)(piVar3 + -2));
    }
    *(undefined1 *)(param_1 + 0x4c0) = 0;
  }
  cVar1 = *(char *)(param_1 + 0x70);
  iVar2 = param_1 + 0x4cc;
  if (((cVar1 == '\x02' || cVar1 == '\x03') || cVar1 == '\x04') && (*(int *)(param_1 + 0x74) < 0)) {
    iVar4 = fn_004d0490(param_1,*(undefined4 *)(param_1 + 0x4e8));
    if (iVar4 != 0) {
      if (*(int *)(iVar4 + 0x90) != 0) {
        fn_004ed098(*(int *)(iVar4 + 0x90),0xd8a148c1);
      }
      fn_004d04cc(param_1,*(undefined4 *)(param_1 + 0x4e8));
    }
    iVar4 = fn_004c6fb8(param_1 + 0x84,*(undefined4 *)(param_1 + 0x4e8));
    if (iVar4 != 0) {
      fn_004f0ce8();
      local_50 = 0;
      uStack_4c = 0;
      fn_004f01f4(&local_50);
      *(undefined4 *)(iVar4 + 0x38) = local_50;
      *(undefined4 *)(iVar4 + 0x3c) = uStack_4c;
    }
    uVar5 = fn_0013d5c4(auStack_48);
    fn_0050d1a0(iVar2,uVar5);
    fn_0050d178(auStack_48);
    fn_004ed13c(param_1 + 0x70);
  }
  else if (((cVar1 == '\x02' || cVar1 == '\x03') || cVar1 == '\x04') &&
          (-1 < *(int *)(param_1 + 0x74))) {
    if (*(char *)(param_1 + 0x4c3) != '\0') {
      iVar4 = fn_004cef10(param_1,iVar2);
      if (iVar4 != 0) {
        fn_0050d0fc(auStack_60,iVar2);
        local_54 = CONCAT22(((unsigned int)(local_54) >> 16) & 0xffff,(short)iVar4);
        local_40 = 3;
        fn_004ced00(param_1,auStack_60,4,5);
        fn_0050d178(auStack_60);
      }
      *(undefined1 *)(param_1 + 0x4c3) = 0;
      uVar6 = fn_004c9170(*(undefined4 *)(DAT_008bf4f4 + 0x20),iVar2);
      if (uVar6 < 0x17) {
        (&DAT_008edd49)[uVar6] = iVar4 != 0;
      }
      if (*(char *)(param_1 + 0x4c4) != '\0') {
        *(undefined1 *)(param_1 + 0x4c4) = 0;
        uVar5 = fn_0013d5c4(auStack_60);
        fn_0050d1a0(iVar2,uVar5);
        fn_0050d178(auStack_60);
        fn_004ed13c(param_1 + 0x70);
        *(undefined4 *)(param_1 + 0x4b0) = 0;
        *(undefined4 *)(param_1 + 0x4b4) = 0;
        return 0;
      }
    }
    fn_004ed13c(param_1 + 0x70);
  }
  do {
    iVar2 = fn_004cf590(param_1);
  } while (iVar2 != 0);
  if (*(char *)(param_1 + 0x70) != '\x01') {
    fn_004cddcc(param_1);
  }
  return 0;
}


