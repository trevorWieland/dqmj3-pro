#include "003d1238_003ddb0c.h"



void fn_003ddb0c(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 auStack_40 [36];
  
  iVar1 = (**(code **)(*param_1 + 0x138))(param_1);
  uVar2 = *(undefined4 *)(iVar1 + 0x18);
  fn_001028d4(auStack_40,(char *)&DAT_003ddbf4,param_2);
  uVar3 = fn_0025f9d8(DAT_00897800,uVar2,auStack_40);
  fn_0016ba84(DAT_00897800,uVar3);
  puVar4 = (undefined4 *)fn_001f7510(param_1,0x49);
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar5 == &DAT_008942dc) goto LAB_003ddba8;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_003ddba8:
  uVar3 = fn_0022eefc(0x71d,0);
  uVar2 = fn_0025f9d8(DAT_00897800,uVar2,auStack_40);
  fn_00321118(puVar4,uVar2,uVar3);
  fn_00689bd0(param_1,0x49,0);
  return;
}



undefined4 fn_003dd844(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  wchar16 *pwStack_70;
  char *pcStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 *local_54;
  undefined4 *local_50;
  undefined4 *local_4c;
  undefined4 *local_48;
  undefined4 local_44;
  undefined1 local_3e;
  undefined1 auStack_38 [32];
  
  iVar1 = (**(code **)(*param_1 + 0x138))(param_1);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  fn_002c330c(&pwStack_70);
  local_68 = 7;
  uStack_60 = 0;
  local_5c = 7;
  pwStack_70 = L"rom:/data/Layout/common/common_0100.arc";
  pcStack_6c = (char *)&DAT_003dda6c;
  local_58 = 0x40e00000;
  uStack_64 = uVar5;
  uVar5 = fn_0022f750((char *)&DAT_003dda84);
  fn_00147974(&local_54,uVar5);
  fn_00147974(&local_50,&DAT_003ddaa4);
  fn_00147974(&local_4c,&DAT_003ddaa4);
  fn_00147974(&local_48,&DAT_003ddaa4);
  local_3e = 1;
  local_44 = 0;
  uVar5 = fn_002c29a0(param_1,&pwStack_70);
  uVar2 = *(undefined4 *)(iVar1 + 0x18);
  iVar1 = 0;
  do {
    fn_001028d4(auStack_38,(char *)&DAT_003ddaac,iVar1);
    uVar3 = fn_0025f9d8(DAT_00897800,uVar2,auStack_38);
    fn_0031b78c(param_1,iVar1,0,uVar3);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 7);
  if (local_48 != &DAT_008f9cf4) {
    piVar4 = local_48 + -3;
    iVar1 = *piVar4;
    if ((iVar1 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar1 + -1, iVar1 == 0)))) {
      fn_001008c4(local_48 + -3,local_48[-2] + 8,0);
    }
  }
  if (local_4c != &DAT_008f9cf4) {
    piVar4 = local_4c + -3;
    iVar1 = *piVar4;
    if ((iVar1 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar1 + -1, iVar1 == 0)))) {
      fn_001008c4(local_4c + -3,local_4c[-2] + 8,0);
    }
  }
  if (local_50 != &DAT_008f9cf4) {
    piVar4 = local_50 + -3;
    iVar1 = *piVar4;
    if ((iVar1 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar1 + -1, iVar1 == 0)))) {
      fn_001008c4(local_50 + -3,local_50[-2] + 8,0);
    }
  }
  if (local_54 != &DAT_008f9cf4) {
    piVar4 = local_54 + -3;
    iVar1 = *piVar4;
    if ((iVar1 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar1 + -1, iVar1 == 0)))) {
      fn_001008c4(local_54 + -3,local_54[-2] + 8,0);
    }
  }
  return uVar5;
}



undefined4 * fn_003d2580(void)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  
  puVar2 = (undefined4 *)fn_003cfe94();
  *puVar2 = &DAT_008312f4;
  puVar2[0x10] = 0;
  iVar3 = fn_00145b00(0x14,&DAT_00812c8c);
  uVar4 = 0;
  if (iVar3 != 0) {
    uVar4 = fn_002faa10();
  }
  puVar2[0x10] = uVar4;
  uVar6 = fn_00174828(DAT_008977e4);
  iVar3 = fn_006f4868((int)uVar6 + 0xe8,(int)((ulonglong)uVar6 >> 0x20),1,0);
  iVar5 = fn_00174828(DAT_008977e4);
  cVar1 = *(char *)(iVar5 + 6);
  iVar5 = fn_00174828(DAT_008977e4);
  fn_002b0d0c(puVar2[0x10],*(char *)(iVar5 + 7) != '\0' || (cVar1 != '\0' || iVar3 != 0));
  return puVar2;
}



void fn_003d1238(int *param_1,int param_2,char *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  short *psVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  uint in_fpscr;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int *piStack_34;
  int iStack_30;
  char *pcStack_2c;
  int local_28;
  
  param_1[2] = param_2;
  piStack_34 = param_1;
  iStack_30 = param_2;
  pcStack_2c = param_3;
  local_28 = param_4;
  iVar2 = (**(code **)(*param_1 + 8))(param_1);
  uVar10 = *(undefined4 *)(iVar2 + 8);
  if (param_1[0x13] == -1) {
    local_80 = 0;
    iVar2 = fn_001923e0(uVar10,(char *)&DAT_003d15d8,0x14,1);
    param_1[0x13] = iVar2;
    iVar2 = fn_00178f9c(uVar10,iVar2);
    param_1[4] = iVar2;
    piVar3 = *(int **)(iVar2 + 0x10);
    param_1[5] = (int)piVar3;
    DAT_008903a8 = (int *)0x0;
    piVar3 = (int *)(**(code **)(*piVar3 + 0x2c))
                              (piVar3,(&PTR_s_Null_s_size_007bab28)[*(char *)(param_1[2] + 0x4c)],1)
    ;
    DAT_008903a8 = piVar3;
    fn_0018a688(param_1[2],piVar3);
    fn_00309c0c(param_1[2]);
    iVar2 = fn_0017dd54(param_1[4],(char *)&DAT_0085caf0,1);
    param_1[9] = iVar2;
    if ('\x01' < *(char *)(param_1[2] + 0x4c)) {
      fVar14 = (float)piVar3[8];
      iVar2 = param_1[5];
      iVar9 = piVar3[9];
      *(int *)(iVar2 + 0x1c) = piVar3[7];
      *(float *)(iVar2 + 0x20) = -fVar14;
      *(int *)(iVar2 + 0x24) = iVar9;
      *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xef | 0x10;
    }
    piVar3 = (int *)fn_001828f0(param_1[4],(char *)&DAT_0085cae4);
    if (piVar3 != (int *)0x0) {
      puVar4 = (undefined4 *)(**(code **)(*piVar3 + 8))(piVar3);
      do {
        if (puVar4 == &DAT_0089a92c) goto LAB_003d1388;
        puVar4 = (undefined4 *)*puVar4;
      } while (puVar4 != (undefined4 *)0x0);
    }
    piVar3 = (int *)0x0;
LAB_003d1388:
    param_1[6] = (int)piVar3;
    piVar3 = (int *)fn_001828f0(param_1[4],(char *)&DAT_0085cc1c);
    if (piVar3 != (int *)0x0) {
      puVar4 = (undefined4 *)(**(code **)(*piVar3 + 8))(piVar3);
      do {
        if (puVar4 == &DAT_0089a92c) goto LAB_003d13d0;
        puVar4 = (undefined4 *)*puVar4;
      } while (puVar4 != (undefined4 *)0x0);
    }
    piVar3 = (int *)0x0;
LAB_003d13d0:
    param_1[7] = (int)piVar3;
    piVar3 = (int *)fn_001828f0(param_1[4],(char *)&DAT_0085cb78);
    if (piVar3 != (int *)0x0) {
      puVar4 = (undefined4 *)(**(code **)(*piVar3 + 8))(piVar3);
      do {
        if (puVar4 == &DAT_0089a92c) goto LAB_003d1414;
        puVar4 = (undefined4 *)*puVar4;
      } while (puVar4 != (undefined4 *)0x0);
    }
    piVar3 = (int *)0x0;
LAB_003d1414:
    param_1[8] = (int)piVar3;
    local_78 = 0;
    local_74 = 0;
    local_70 = 0;
    local_6c = 0;
    local_68 = 0;
    local_64 = 0;
    local_60 = 0;
    local_5c = 0;
    uVar5 = 0;
    do {
      fn_001028d4(&local_78,(char *)&DAT_0085cb70,uVar5);
      DAT_008903a8 = (int *)0x0;
      piVar3 = (int *)(**(code **)(*(int *)param_1[5] + 0x2c))((int *)param_1[5],&local_78,1);
      DAT_008903a8 = piVar3;
      if (piVar3 != (int *)0x0) {
        puVar4 = (undefined4 *)(**(code **)(*piVar3 + 8))(piVar3);
        do {
          if (puVar4 == &DAT_0089a930) goto LAB_003d14a8;
          puVar4 = (undefined4 *)*puVar4;
        } while (puVar4 != (undefined4 *)0x0);
      }
      piVar3 = (int *)0x0;
LAB_003d14a8:
      uVar11 = uVar5 + 1;
      param_1[uVar5 + 10] = (int)piVar3;
      uVar5 = uVar11;
    } while (uVar11 < 9);
  }
  iVar2 = fn_0028b0a0(*(undefined4 *)(DAT_00897804 + 0xc),(int)(char)(*param_3 + -0x10));
  param_1[0x15] = iVar2;
  iVar2 = fn_00174834(DAT_008977e4);
  iVar2 = iVar2 + *param_3 * 0x418 + 0x17c308;
  param_1[0x14] = iVar2;
  fn_0026b054(iVar2,param_1[0x15]);
  fn_0026b458(param_1[0x14],param_1[0x15]);
  iVar2 = fn_00661570((int)*(short *)(param_1[0x15] + 0x1c));
  param_1[0x22] = iVar2;
  fn_00190d50(param_1[10],param_1[0x15] + 4);
  fn_00190d50(param_1[0xb],&DAT_003d160c);
  local_80 = 0;
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  iVar2 = fn_00246924(param_1[0x15]);
  if (iVar2 == 0) {
    uVar5 = fn_00246824();
    if (*(byte *)(param_1[0x15] + 0x2e) < uVar5) {
      fn_00101a50(&local_80,0x20,&DAT_003d18fc);
      *(byte *)(param_1[7] + 0x44) = *(byte *)(param_1[7] + 0x44) & 0xfe;
    }
    else {
      fn_00101a50(&local_80,0x20,&DAT_003d18fc);
      *(byte *)(param_1[7] + 0x44) = *(byte *)(param_1[7] + 0x44) & 0xfe | 1;
      uVar10 = DAT_008903cc;
      iVar2 = param_1[0xc];
      *(undefined4 *)(iVar2 + 0xac) = DAT_008903cc;
      *(undefined4 *)(iVar2 + 0xb0) = uVar10;
      *(undefined1 *)(param_1 + 0x1f) = 1;
    }
  }
  else {
    fn_002309d8(&local_80,0x20,*(undefined1 *)(param_1[0x15] + 0x2e),1);
    *(byte *)(param_1[7] + 0x44) = *(byte *)(param_1[7] + 0x44) & 0xfe | 1;
    *(undefined1 *)(param_1 + 0x1f) = 1;
  }
  param_1[0x1d] = (uint)*(byte *)(param_1[0x15] + 0x2e);
  fn_00190d50(param_1[0xc],&local_80);
  fVar14 = 80.0;
  *(byte *)(param_1[6] + 0x44) = *(byte *)(param_1[6] + 0x44) & 0xfe;
  *(byte *)(param_1[0xd] + 0x44) = *(byte *)(param_1[0xd] + 0x44) & 0xfe;
  *(byte *)(param_1[0xe] + 0x44) = *(byte *)(param_1[0xe] + 0x44) & 0xfe;
  *(byte *)(param_1[0xf] + 0x44) = *(byte *)(param_1[0xf] + 0x44) & 0xfe;
  *(byte *)(param_1[0x10] + 0x44) = *(byte *)(param_1[0x10] + 0x44) & 0xfe;
  *(byte *)(param_1[0x11] + 0x44) = *(byte *)(param_1[0x11] + 0x44) & 0xfe;
  *(byte *)(param_1[0x12] + 0x44) = *(byte *)(param_1[0x12] + 0x44) & 0xfe;
  psVar6 = (short *)param_1[0x14];
  if (0 < *psVar6) {
    cVar1 = *(char *)((int)psVar6 + 0x67);
    bVar12 = cVar1 == '\0';
    if (bVar12) {
      cVar1 = (char)psVar6[0x3b];
    }
    bVar13 = bVar12 && cVar1 == '\0';
    if (bVar12 && cVar1 == '\0') {
      bVar13 = (char)psVar6[0x34] == '\0';
    }
    if (bVar13) {
      if ((char)param_1[0x1f] == '\0') {
        iVar7 = *(int *)(param_1[0x15] + 0x30);
        param_1[0x20] = iVar7;
        iVar2 = fn_002cd49c((int)(char)((char)param_1[0x1d] + -1),(char)param_1[0x22]);
        iVar9 = fn_002cd49c((int)(char)param_1[0x1d],(char)param_1[0x22]);
        iVar7 = iVar7 - iVar2;
        VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(iVar9 - iVar2,(byte)(in_fpscr >> 0x16) & 3);
        fn_003d10c4(param_1);
        fVar16 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x16) & 3);
        fVar15 = (float)VectorSignedToFloat(iVar9 - iVar2,(byte)(in_fpscr >> 0x16) & 3);
        param_1[0x1c] = (int)((fVar16 * fVar14) / fVar15);
        param_1[0x1a] = local_28;
        uVar10 = fn_0024e350(param_1[0x15]);
        *(int *)(param_1[0x15] + 0x30) = param_1[0x1a] + *(int *)(param_1[0x15] + 0x30);
        iVar2 = fn_00246824(param_1[0x15]);
        iVar9 = param_1[0x15];
        iVar9 = fn_00246d74(*(undefined4 *)(iVar9 + 0x30),(char)param_1[0x22],
                             *(undefined1 *)(iVar9 + 0x3c),(*(ushort *)(iVar9 + 0x40) & 0x7ff) >> 10
                            );
        if (iVar2 == iVar9) {
          uVar8 = fn_002cd49c((int)(char)((char)iVar2 + -1),(char)param_1[0x22]);
          *(undefined4 *)(param_1[0x15] + 0x30) = uVar8;
        }
        fn_0024f108(param_1[0x15],uVar10);
      }
      goto LAB_003d18e0;
    }
  }
  *(undefined1 *)((int)param_1 + 0x7e) = 1;
  param_1[0x20] = *(int *)(param_1[0x15] + 0x30);
  iVar2 = *(int *)(param_1[0x15] + 0x30);
  if ((char)param_1[0x1f] == '\0') {
    iVar9 = fn_002cd49c((int)(char)((char)param_1[0x1d] + -1),(char)param_1[0x22]);
    iVar7 = fn_002cd49c((int)(char)param_1[0x1d],(char)param_1[0x22]);
    iVar2 = iVar2 - iVar9;
    VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(iVar7 - iVar9,(byte)(in_fpscr >> 0x16) & 3);
    fn_003d10c4(param_1);
    fVar16 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
    fVar15 = (float)VectorSignedToFloat(iVar7 - iVar9,(byte)(in_fpscr >> 0x16) & 3);
    param_1[0x1c] = (int)((fVar16 * fVar14) / fVar15);
  }
LAB_003d18e0:
  fn_0018a69c(param_1[3],param_1[5]);
  return;
}


