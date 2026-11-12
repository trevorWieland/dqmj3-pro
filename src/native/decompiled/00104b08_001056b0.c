#include "00104b08_001056b0.h"



void fn_001056b0(void)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 auStack_10 [8];
  
  iVar1 = *(int *)(DAT_008981a8 + 4);
  if (*(char *)(iVar1 + 1) == '\0') {
    fn_001247b0(iVar1 + 8,&local_20);
    fn_0011b7b0(iVar1,&local_20);
  }
  else {
    fn_00117c9c(iVar1);
  }
  fn_00117bc4(iVar1);
  fn_00114378(iVar1 + 0x198,auStack_10);
  local_20 = 0xffffffff;
  fn_0011443c(iVar1 + 0x198,&local_1c,1,auStack_10);
  *(undefined4 *)(iVar1 + 0x1f0) = local_1c;
  *(undefined4 *)(iVar1 + 500) = local_18;
  *(undefined4 *)(iVar1 + 0x1f8) = local_14;
  return;
}



void fn_0010555c(void)

{
  if (DAT_00898154 != (int *)0x0) {
    (**(code **)(*DAT_00898154 + 4))();
    DAT_00898154 = (int *)0x0;
  }
  fn_0016e9e0((char *)&DAT_001173e8);
  if (DAT_0089a4f0 != 0) {
    fn_0030233c();
    DAT_0089a4f0 = 0;
  }
  if (DAT_0089a4ec != 0) {
    fn_0016e9e0(&DAT_001173f0);
    fn_0030233c(DAT_0089a4ec);
    DAT_0089a4ec = 0;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00101da8) */
/* WARNING: Removing unreachable block (ram,0x00101db4) */

undefined4 fn_00104b08(uint *param_1,uint param_2,ushort *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char extraout_r1;
  char extraout_r1_00;
  uint *puVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  code *pcVar9;
  undefined4 *puVar10;
  undefined *puVar11;
  uint *unaff_r6;
  char *pcVar12;
  bool bVar13;
  undefined8 uVar14;
  int in_stack_ffffffa0;
  char acStack_57 [35];
  uint *puStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  uint uStack_28;
  int iStack_24;
  uint *puStack_20;
  uint uStack_1c;
  ushort *puStack_18;
  
  if (param_2 == 0x6e) {
    puVar4 = *(uint **)param_3;
    uVar5 = *param_1;
    uVar8 = param_1[8];
    if ((int)(uVar5 << 0x15) < 0) {
      *(char *)puVar4 = (char)uVar8;
    }
    else if ((int)(uVar5 << 0x17) < 0) {
      *(short *)puVar4 = (short)uVar8;
    }
    else if ((int)(uVar5 << 0x18) < 0) {
      *puVar4 = uVar8;
      puVar4[1] = (int)uVar8 >> 0x1f;
    }
    else {
      *puVar4 = uVar8;
    }
    return 1;
  }
  if (param_2 == 0x70) {
    uVar3 = *(undefined4 *)param_3;
    *param_1 = *param_1 | 0x20;
    param_1[7] = 8;
    uVar3 = fn_00102b80(param_1,0x70,uVar3,0);
    return uVar3;
  }
  if (((param_2 != 0x66) && (param_2 != 0x65)) && (param_2 != 0x67)) {
    if (param_2 == 0x61) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar8 = *param_1 >> 8;
    if ((bool)((byte)(*param_1 >> 7) & 1)) {
      param_2 = param_2 | 0x80;
    }
    puStack_20 = param_1;
    uStack_1c = param_2;
    puStack_18 = param_3;
    if (((param_2 == 0x69) || (param_2 == 100)) || (param_2 == 0x75)) {
      uVar3 = 0;
      puVar11 = &UNK_001029fc;
      if (param_2 == 0x75) {
        iVar2 = fn_00300c22(*(undefined4 *)param_3,param_1,param_3,uVar8);
      }
      else {
        iVar2 = fn_00300c0c();
        if (iVar2 < 0) {
          iVar2 = -iVar2;
          puVar11 = &DAT_00102a00;
        }
        else if ((int)(*puStack_20 << 0x1e) < 0) {
          puVar11 = &UNK_00102a04;
        }
        else {
          if (-1 < (int)(*puStack_20 << 0x1d)) goto LAB_001029d6;
          puVar11 = &UNK_00102a08;
        }
        uVar3 = 1;
      }
LAB_001029d6:
      puVar4 = puStack_20;
      iVar7 = 0;
      while (iVar2 != 0) {
        iVar2 = fn_00300164();
        *(byte *)((int)puVar4 + iVar7 + 0x24) = extraout_r1 + 0x30;
        iVar7 = iVar7 + 1;
      }
      uVar3 = fn_00300b5c(puStack_20,iVar7,puVar11,uVar3);
      return uVar3;
    }
    if (param_2 == 0x6f) {
      uVar14 = fn_00300c22(*(undefined4 *)param_3,param_1,param_3,uVar8);
      uVar3 = fn_00101c08(param_1,(int)((ulonglong)uVar14 >> 0x20),(int)uVar14,0);
      return uVar3;
    }
    if (param_2 == 0x78) {
      uVar3 = fn_00300c22(*(undefined4 *)param_3,param_1,param_3,uVar8);
      uVar3 = fn_00102b80(param_1,0x78,uVar3,0);
      return uVar3;
    }
    if (((param_2 != 0xe9) && (param_2 != 0xe4)) && (param_2 != 0xf5)) {
      if (param_2 == 0xef) {
        puVar10 = (undefined4 *)((uint)((int)param_3 + 7) & 0xfffffff8);
        uVar3 = fn_00101c08(param_1,puVar10 + 2,*puVar10,puVar10[1]);
        return uVar3;
      }
      if (param_2 == 0xf8) {
        puVar10 = (undefined4 *)((uint)((int)param_3 + 7) & 0xfffffff8);
        uVar3 = fn_00102b80(param_1,0xf8,*puVar10,puVar10[1]);
        return uVar3;
      }
      uVar8 = *param_1 >> 7;
      if ((bool)((byte)(*param_1 >> 6) & 1)) {
        param_2 = param_2 | 0x80;
      }
      if (param_2 == 99) {
        *(byte *)(param_1 + 9) = (byte)*param_3;
        *(byte *)((int)param_1 + 0x25) = 0;
        uVar3 = fn_00102084(param_1,param_1 + 9,1,uVar8);
        return uVar3;
      }
      if (param_2 == 0x73) {
        uVar3 = fn_00102084(param_1,*(undefined4 *)param_3,0xffffffff,uVar8);
        return uVar3;
      }
      if (param_2 == 0xe3) {
        *(ushort *)(param_1 + 9) = *param_3;
        *(ushort *)((int)param_1 + 0x26) = 0;
        uVar3 = fn_001023c8(param_1,param_1 + 9,1);
        return uVar3;
      }
      if (param_2 == 0xf3) {
        uVar3 = fn_001023c8(param_1,*(undefined4 *)param_3,0xffffffff);
        return uVar3;
      }
      return 0;
    }
    uVar3 = 0;
    puVar11 = &UNK_00101bf0;
    piVar6 = (int *)((uint)((int)param_3 + 7) & 0xfffffff8);
    iVar2 = *piVar6;
    iVar7 = piVar6[1];
    if (param_2 != 0xf5) {
      if (iVar7 < 0) {
        bVar13 = iVar2 != 0;
        iVar2 = -iVar2;
        iVar7 = -(uint)bVar13 - iVar7;
        puVar11 = &DAT_00101bf4;
      }
      else if ((int)(*param_1 << 0x1e) < 0) {
        puVar11 = &UNK_00101bf8;
      }
      else {
        if (-1 < (int)(*param_1 << 0x1d)) goto LAB_00101bc6;
        puVar11 = &UNK_00101bfc;
      }
      uVar3 = 1;
    }
LAB_00101bc6:
    uVar14 = CONCAT44(iVar7,iVar2);
    iVar2 = 0;
    while (uVar8 = (uint)uVar14 | (uint)((ulonglong)uVar14 >> 0x20), uVar8 != 0) {
      uVar14 = fn_002ffaf8();
      *(byte *)((int)param_1 + iVar2 + 0x24) = (char)uVar8 + 0x30;
      iVar2 = iVar2 + 1;
    }
    uVar3 = fn_00300b5c(puStack_20,iVar2,puVar11,uVar3);
    return uVar3;
  }
  puVar10 = (undefined4 *)((uint)((int)param_3 + 7) & 0xfffffff8);
  uStack_30 = *puVar10;
  iStack_2c = puVar10[1];
  iVar2 = fn_002ffb90();
  if (iStack_2c < 0) {
    iStack_24 = 0x2d;
  }
  else if ((int)(*param_1 << 0x1e) < 0) {
    iStack_24 = 0x2b;
  }
  else {
    iStack_24 = ((*param_1 & 7) >> 2) << 5;
  }
  if ((iVar2 == 3) || (6 < iVar2)) {
    fn_002ffbd0(param_1,param_2,iVar2,iStack_24);
    return 2;
  }
  if ((int)((uint)(byte)*param_1 << 0x1a) < 0) {
    uVar8 = param_1[7];
  }
  else {
    uVar8 = 6;
  }
  if (param_2 == 0x65) {
    if ((int)uVar8 < 0x11) {
      iVar2 = uVar8 + 1;
    }
    else {
      iVar2 = 0x11;
    }
    fn_002ffd56(&puStack_20,acStack_57 + 3,&uStack_30,iVar2,0);
    param_2 = uVar8 + 1;
    uStack_28 = uStack_1c;
LAB_002ffffc:
    unaff_r6 = (uint *)0x0;
    in_stack_ffffffa0 = 1;
    puStack_34 = puStack_20;
  }
  else {
    if (param_2 == 0x66) {
      puStack_34 = (uint *)0x80000000;
      fn_002ffd56(&puStack_20,acStack_57 + 3,&uStack_30,uVar8,1);
      unaff_r6 = (uint *)0x0;
      uStack_28 = uStack_1c;
      param_2 = uStack_1c;
      if (puStack_18 == (ushort *)0x0) {
        param_2 = (int)puStack_20 + uVar8 + 1;
      }
      iVar2 = uVar8 - param_2;
      if (-1 < iVar2) {
        param_2 = uVar8 + 1;
        unaff_r6 = (uint *)(-1 - iVar2);
      }
      in_stack_ffffffa0 = param_2 - uVar8;
      goto LAB_00300024;
    }
    if (param_2 != 0x67) goto LAB_00300024;
    if ((int)uVar8 < 1) {
      uVar8 = 1;
    }
    if ((int)uVar8 < 0x12) {
      uVar5 = uVar8;
    }
    else {
      uVar5 = 0x11;
    }
    fn_002ffd56(&puStack_20,acStack_57 + 3,&uStack_30,uVar5,0);
    unaff_r6 = (uint *)0x0;
    uStack_28 = uStack_1c;
    param_2 = uVar8;
    if (-1 < (int)((uint)(byte)*param_1 << 0x1c)) {
      if ((int)uStack_1c < (int)uVar8) {
        param_2 = uStack_1c;
      }
      for (; (1 < (int)param_2 && (acStack_57[param_2 + 2] == '0')); param_2 = param_2 - 1) {
      }
    }
    if (((int)uVar8 <= (int)puStack_20) || ((int)puStack_20 < -4)) goto LAB_002ffffc;
    if ((int)puStack_20 < 1) {
      param_2 = param_2 - (int)puStack_20;
      unaff_r6 = puStack_20;
    }
    else if ((int)param_2 < (int)((int)puStack_20 + 1U)) {
      param_2 = (int)puStack_20 + 1U;
    }
    in_stack_ffffffa0 = (int)puStack_20 + (1 - (int)unaff_r6);
    puStack_34 = (uint *)0x80000000;
  }
  uStack_28 = uStack_1c;
LAB_00300024:
  if ((-1 < (int)((uint)(byte)*param_1 << 0x1c)) && ((int)param_2 <= in_stack_ffffffa0)) {
    in_stack_ffffffa0 = -1;
  }
  acStack_57[2] = 0;
  pcVar12 = acStack_57 + 2;
  if (puStack_34 != (uint *)0x80000000) {
    puStack_20 = (uint *)0x2;
    uStack_1c = 0x2b;
    if ((int)puStack_34 < 0) {
      puStack_34 = (uint *)-(int)puStack_34;
      uStack_1c = 0x2d;
    }
    while ((puVar4 = puStack_20, puStack_20 = (uint *)((int)puStack_20 + -1), 0 < (int)puVar4 ||
           (puStack_34 != (uint *)0x0))) {
      puStack_34 = (uint *)fn_00300164(puStack_34);
      pcVar12 = pcVar12 + -1;
      *pcVar12 = extraout_r1_00 + '0';
    }
    pcVar12[-1] = (char)uStack_1c;
    if ((int)((uint)(ushort)*param_1 << 0x14) < 0) {
      cVar1 = 'E';
    }
    else {
      cVar1 = 'e';
    }
    pcVar12 = pcVar12 + -2;
    *pcVar12 = cVar1;
  }
  puStack_34 = (uint *)(acStack_57 + (2 - (int)pcVar12));
  param_1[6] = (param_1[6] -
               (int)(acStack_57 + (2 - (int)pcVar12) +
                    (iStack_24 != 0) + param_2 + (in_stack_ffffffa0 >> 0x1f))) - 1;
  if (-1 < (int)((uint)(byte)*param_1 << 0x1b)) {
    fn_002ff970(param_1);
  }
  if (iStack_24 != 0) {
    (*(code *)param_1[1])(iStack_24,param_1[2]);
    param_1[8] = param_1[8] + 1;
  }
  if ((int)((uint)(byte)*param_1 << 0x1b) < 0) {
    fn_002ff970(param_1);
  }
  while (uVar8 = param_2 - 1, 0 < (int)param_2) {
    if (((int)unaff_r6 < 0) || ((int)uStack_28 <= (int)unaff_r6)) {
      pcVar9 = (code *)param_1[1];
      uVar5 = param_1[2];
      cVar1 = '0';
    }
    else {
      pcVar9 = (code *)param_1[1];
      cVar1 = acStack_57[(int)unaff_r6 + 3];
      uVar5 = param_1[2];
    }
    (*pcVar9)(cVar1,uVar5);
    unaff_r6 = (uint *)((int)unaff_r6 + 1);
    param_1[8] = param_1[8] + 1;
    in_stack_ffffffa0 = in_stack_ffffffa0 + -1;
    param_2 = uVar8;
    if (in_stack_ffffffa0 == 0) {
      iVar2 = fn_00300190();
      (*(code *)param_1[1])
                (*(undefined1 *)((int)*(int **)(iVar2 + 0xc) + **(int **)(iVar2 + 0xc)),param_1[2]);
      param_1[8] = param_1[8] + 1;
    }
  }
  while (puVar4 = puStack_34, puStack_34 = (uint *)((int)puStack_34 + -1), 0 < (int)puVar4) {
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
    (*(code *)param_1[1])(cVar1,param_1[2]);
    param_1[8] = param_1[8] + 1;
  }
  fn_002ff99c(param_1);
  return 2;
}


