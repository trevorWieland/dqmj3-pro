#include "0025ca2c_0025d278.h"



void fn_0025d278(int *param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  bool bVar7;
  uint in_fpscr;
  float fVar8;
  float in_s1;
  
  if (*(char *)(param_1[0x17] + 8) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0025d2a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)param_1[0x27] + 0x18))();
    return;
  }
  if (*(char *)((int)param_1 + 0x1d) == '\0') {
    cVar2 = *(char *)(param_1[0x17] + 0x48);
    uVar3 = fn_006f6a38(param_1);
    if ((((uVar3 & *(uint *)(param_1[0x17] + 100)) != 0) ||
        (uVar3 = fn_006f6a44(param_1),
        (uVar3 & (int)*(char *)(param_1[0x17] + 0x68)) != 0 || cVar2 != '\0')) &&
       (*(char *)(param_1[0x17] + 0x30) != '\0' || cVar2 != '\0')) {
      iVar4 = fn_006c3ba0();
      if (iVar4 != 0) {
        iVar4 = param_1[0x17];
        uVar5 = fn_006f6a38(param_1);
        *(undefined4 *)(iVar4 + 0x34) = uVar5;
        *(undefined1 *)(param_1[0x17] + 0x31) = 1;
                    /* WARNING: Could not recover jumptable at 0x0025d348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x108))(param_1);
        return;
      }
      if (*(int *)(param_1[0x17] + 0x3c) != 0) {
        fn_0068ab44(param_1);
      }
      iVar4 = param_1[0x1e];
      bVar1 = *(byte *)(param_1[0x17] + 10);
      bVar7 = (*(byte *)(iVar4 + 0xd1) & 3) != bVar1;
      *(byte *)(iVar4 + 0xd0) = *(byte *)(iVar4 + 0xd0) | bVar7 << 2;
      if (bVar7) {
        *(byte *)(iVar4 + 0xd1) = bVar1 | *(byte *)(iVar4 + 0xd1) & 0xfc;
      }
      fn_0036c054(param_1[0x17],param_1 + 0x2b);
      fn_00190d50(param_1[0x1e],param_1[0x2b]);
      fn_0025c960(param_1);
      iVar4 = param_1[0x17];
      if (*(char *)(iVar4 + 0x51) != '\0') {
        iVar6 = param_1[0x33];
        fVar8 = (float)param_1[0x32];
        if (3 < *(int *)(iVar4 + 0x2c)) {
          in_s1 = (float)VectorSignedToFloat(*(int *)(iVar4 + 0x2c) + -3,
                                             (byte)(in_fpscr >> 0x16) & 3);
          fVar8 = fVar8 - in_s1 * 8.0;
        }
        bVar7 = *(char *)(iVar4 + 8) == '\0';
        if (bVar7) {
          in_s1 = 16.0;
        }
        iVar4 = param_1[0x20];
        if (bVar7) {
          fVar8 = fVar8 - in_s1;
        }
        *(int *)(iVar4 + 0x1c) = param_1[0x31];
        *(float *)(iVar4 + 0x20) = fVar8;
        *(int *)(iVar4 + 0x24) = iVar6;
        *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xef | 0x10;
        fn_002cc0e0(param_1[0x29],(int)*(char *)(param_1[0x17] + 0x5e));
        return;
      }
    }
  }
  return;
}



void fn_0025d22c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xd4,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0025d744(iVar1,param_1);
  return;
}



undefined4 fn_0025ca2c(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  bool bVar14;
  uint in_fpscr;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined4 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x31) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x5d) = 1;
  local_38 = (undefined4 *)0x1;
  uVar3 = fn_001481c8(*(undefined4 *)(param_1 + 100),DAT_008942f4,&DAT_0025ce18,1);
  *(undefined4 *)(param_1 + 0x68) = uVar3;
  local_30 = *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x4c);
  local_38 = (undefined4 *)0x1;
  local_34 = 1;
  uVar3 = fn_001480d0(*(undefined4 *)(param_1 + 100),uVar3,DAT_008942f8,&DAT_0025ce20);
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  iVar4 = fn_00178f9c(*(undefined4 *)(param_1 + 100),uVar3);
  piVar12 = *(int **)(iVar4 + 0x10);
  piVar5 = (int *)fn_00172c98(iVar4,(char *)&DAT_0025ce24);
  piVar5 = (int *)(**(code **)(*piVar5 + 0x2c))(piVar5,(char *)&DAT_0025ce38,1);
  if (piVar5 != (int *)0x0) {
    puVar6 = (undefined4 *)(**(code **)(*piVar5 + 8))(piVar5);
    do {
      if (puVar6 == &DAT_0089a934) goto LAB_0025cb0c;
      puVar6 = (undefined4 *)*puVar6;
    } while (puVar6 != (undefined4 *)0x0);
  }
  piVar5 = (int *)0x0;
LAB_0025cb0c:
  *(int **)(param_1 + 0x74) = piVar5;
  piVar5 = (int *)(**(code **)(*piVar12 + 0x2c))(piVar12,(char *)&DAT_0025ce50,1);
  if (piVar5 != (int *)0x0) {
    puVar6 = (undefined4 *)(**(code **)(*piVar5 + 8))(piVar5);
    do {
      if (puVar6 == &DAT_0089a930) goto LAB_0025cb5c;
      puVar6 = (undefined4 *)*puVar6;
    } while (puVar6 != (undefined4 *)0x0);
  }
  piVar5 = (int *)0x0;
LAB_0025cb5c:
  *(int **)(param_1 + 0x78) = piVar5;
  piVar5 = (int *)(**(code **)(*piVar12 + 0x2c))(piVar12,(char *)&DAT_0025ce68,1);
  if (piVar5 != (int *)0x0) {
    puVar6 = (undefined4 *)(**(code **)(*piVar5 + 8))(piVar5);
    do {
      if (puVar6 == &DAT_0089a934) goto LAB_0025cbac;
      puVar6 = (undefined4 *)*puVar6;
    } while (puVar6 != (undefined4 *)0x0);
  }
  piVar5 = (int *)0x0;
LAB_0025cbac:
  **(int **)(param_1 + 0x84) = (int)piVar5;
  piVar5 = (int *)(**(code **)(*piVar12 + 0x2c))(piVar12,(char *)&DAT_0025ce78,1);
  if (piVar5 != (int *)0x0) {
    puVar6 = (undefined4 *)(**(code **)(*piVar5 + 8))(piVar5);
    do {
      if (puVar6 == &DAT_0089a934) goto LAB_0025cc00;
      puVar6 = (undefined4 *)*puVar6;
    } while (puVar6 != (undefined4 *)0x0);
  }
  piVar5 = (int *)0x0;
LAB_0025cc00:
  **(int **)(param_1 + 0x90) = (int)piVar5;
  piVar5 = (int *)(**(code **)(*piVar12 + 0x2c))(piVar12,(char *)&DAT_0025ce8c,1);
  if (piVar5 != (int *)0x0) {
    puVar6 = (undefined4 *)(**(code **)(*piVar5 + 8))(piVar5);
    do {
      if (puVar6 == &DAT_0089a934) goto LAB_0025cc54;
      puVar6 = (undefined4 *)*puVar6;
    } while (puVar6 != (undefined4 *)0x0);
  }
  piVar5 = (int *)0x0;
LAB_0025cc54:
  *(int **)(*(int *)(param_1 + 0x84) + 4) = piVar5;
  piVar5 = (int *)(**(code **)(*piVar12 + 0x2c))(piVar12,(char *)&DAT_0025ce9c,1);
  if (piVar5 != (int *)0x0) {
    puVar6 = (undefined4 *)(**(code **)(*piVar5 + 8))(piVar5);
    do {
      if (puVar6 == &DAT_0089a934) goto LAB_0025cca4;
      puVar6 = (undefined4 *)*puVar6;
    } while (puVar6 != (undefined4 *)0x0);
  }
  piVar5 = (int *)0x0;
LAB_0025cca4:
  *(int **)(*(int *)(param_1 + 0x90) + 4) = piVar5;
  iVar7 = fn_00688920(piVar12,(char *)&DAT_0025ceb0);
  *(int *)(param_1 + 0x7c) = iVar7;
  uVar18 = 0x41800000;
  if (*(char *)(*(int *)(param_1 + 0x5c) + 8) == '\0') {
    iVar8 = *(int *)(param_1 + 0x74);
    *(float *)(iVar8 + 0x20) = *(float *)(iVar8 + 0x20) - 16.0;
    *(byte *)(iVar8 + 0x44) = *(byte *)(iVar8 + 0x44) & 0xef | 0x10;
    iVar8 = *(int *)(param_1 + 0x78);
    *(float *)(iVar8 + 0x20) = *(float *)(iVar8 + 0x20) - 16.0;
    *(byte *)(iVar8 + 0x44) = *(byte *)(iVar8 + 0x44) & 0xef | 0x10;
  }
  uVar11 = 0;
  do {
    uVar13 = uVar11 & 0xff;
    iVar8 = fn_0036c584(*(undefined4 *)(param_1 + 0x5c),uVar13);
    if (iVar8 != 0) {
      local_34 = fn_001827b0(iVar4,(&DAT_00894300)[uVar13]);
      local_38 = &DAT_008f9cf4;
      fn_0036c368(*(undefined4 *)(param_1 + 0x5c),&local_38,uVar13);
      fn_00190d50(local_34,local_38);
      if (local_38 != &DAT_008f9cf4) {
        piVar5 = local_38 + -3;
        iVar8 = *piVar5;
        if ((iVar8 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar8 + -1, iVar8 == 0)))) {
          fn_001008c4(local_38 + -3,local_38[-2] + 8,0);
        }
      }
    }
    uVar11 = uVar11 + 1;
  } while ((int)uVar11 < 2);
  *(byte *)(iVar7 + 0x44) =
       *(byte *)(*(int *)(param_1 + 0x5c) + 0x49) | *(byte *)(iVar7 + 0x44) & 0xfe;
  if (*(char *)(*(int *)(param_1 + 0x5c) + 0x50) != '\0') {
    *(undefined1 *)(iVar7 + 0x45) = 0xff;
  }
  *(undefined4 *)(param_1 + 0xc0) = 0;
  iVar4 = fn_00145b00(0xe4,&DAT_00812c8c);
  if (iVar4 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)fn_001caa80(iVar4,*(undefined4 *)(param_1 + 4),0);
  }
  piVar9 = *(int **)(param_1 + 0x9c);
  if (piVar9 != piVar5) {
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 4))();
    }
    *(int **)(param_1 + 0x9c) = piVar5;
  }
  *(int *)(*(int *)(param_1 + 0x9c) + 8) = param_1;
  (**(code **)(**(int **)(param_1 + 0x9c) + 0x24))(*(int **)(param_1 + 0x9c),2,1);
  iVar4 = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x9c) + 0x45) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x9c) + 0x44) = 1;
  *(undefined4 *)(*(int *)(param_1 + 0x9c) + 0x10) = 0x100094e;
  do {
    fn_001c9d44(*(undefined4 *)(param_1 + 0x9c),iVar4,
                 *(undefined4 *)(*(int *)(param_1 + 0x84) + iVar4 * 4),0);
    fVar17 = (float)uVar18;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 2);
  bVar2 = *(byte *)(*(int *)(param_1 + 0x5c) + 8);
  *(byte *)(**(int **)(param_1 + 0x84) + 0x44) =
       *(byte *)(**(int **)(param_1 + 0x84) + 0x44) & 0xfe | bVar2;
  iVar4 = *(int *)(*(int *)(param_1 + 0x84) + 4);
  *(byte *)(iVar4 + 0x44) = bVar2 | *(byte *)(iVar4 + 0x44) & 0xfe;
  if (bVar2 != 0) {
    bVar14 = *(char *)(*(int *)(param_1 + 0x5c) + 9) != '\0';
    *(bool *)(param_1 + 0xa0) = bVar14;
    *(byte *)(**(int **)(param_1 + 0x90) + 0x44) =
         !bVar14 | *(byte *)(**(int **)(param_1 + 0x90) + 0x44) & 0xfe;
    iVar4 = *(int *)(*(int *)(param_1 + 0x90) + 4);
    *(byte *)(iVar4 + 0x44) = bVar14 | *(byte *)(iVar4 + 0x44) & 0xfe;
  }
  iVar4 = *(int *)(param_1 + 0x78);
  bVar2 = *(byte *)(*(int *)(param_1 + 0x5c) + 10);
  bVar14 = (*(byte *)(iVar4 + 0xd1) & 3) != bVar2;
  *(byte *)(iVar4 + 0xd0) = *(byte *)(iVar4 + 0xd0) | bVar14 << 2;
  if (bVar14) {
    *(byte *)(iVar4 + 0xd1) = bVar2 | *(byte *)(iVar4 + 0xd1) & 0xfc;
  }
  fn_0036c054(*(undefined4 *)(param_1 + 0x5c),param_1 + 0xac);
  fn_00190d50(*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0xac));
  fn_0025c960(param_1);
  iVar4 = fn_0026a37c(DAT_00897818);
  if ((iVar4 != 0) || (*(char *)(*(int *)(param_1 + 0x5c) + 0x51) != '\0')) {
    iVar4 = (**(code **)(*piVar12 + 0x2c))(piVar12,(char *)&DAT_0025d218,1);
    *(int *)(param_1 + 0x80) = iVar4;
    uVar10 = *(undefined4 *)(iVar4 + 0x1c);
    uVar3 = *(undefined4 *)(iVar4 + 0x24);
    fVar15 = *(float *)(iVar4 + 0x20);
    *(undefined4 *)(param_1 + 0xc4) = uVar10;
    *(float *)(param_1 + 200) = fVar15;
    *(undefined4 *)(param_1 + 0xcc) = uVar3;
    iVar7 = *(int *)(*(int *)(param_1 + 0x5c) + 0x2c);
    if (3 < iVar7) {
      fVar16 = (float)VectorSignedToFloat(iVar7 + -3,(byte)(in_fpscr >> 0x16) & 3);
      fVar15 = fVar15 - fVar16 * 8.0;
    }
    cVar1 = *(char *)(*(int *)(param_1 + 0x5c) + 8);
    *(undefined4 *)(iVar4 + 0x1c) = uVar10;
    if (cVar1 == '\0') {
      fVar15 = fVar15 - fVar17;
    }
    *(float *)(iVar4 + 0x20) = fVar15;
    *(undefined4 *)(iVar4 + 0x24) = uVar3;
    *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xef | 0x10;
    iVar4 = fn_00145b00(0x48,&DAT_00812c8c);
    piVar5 = (int *)0x0;
    if (iVar4 != 0) {
      piVar5 = (int *)fn_002cc310(iVar4,*(undefined4 *)(param_1 + 4),
                                   *(undefined4 *)(param_1 + 0x80));
    }
    piVar12 = *(int **)(param_1 + 0xa4);
    if (piVar12 != piVar5) {
      if (piVar12 != (int *)0x0) {
        (**(code **)(*piVar12 + 4))(piVar12);
      }
      *(int **)(param_1 + 0xa4) = piVar5;
    }
    iVar7 = *(int *)(param_1 + 0x80);
    iVar4 = *(int *)(param_1 + 0xa4);
    uVar3 = *(undefined4 *)(iVar7 + 0x20);
    uVar10 = *(undefined4 *)(iVar7 + 0x24);
    *(undefined4 *)(iVar4 + 0x34) = *(undefined4 *)(iVar7 + 0x1c);
    *(undefined4 *)(iVar4 + 0x38) = uVar3;
    *(undefined4 *)(iVar4 + 0x3c) = uVar10;
    (**(code **)(**(int **)(param_1 + 0xa4) + 0x10))
              (*(int **)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0x48));
    *(undefined1 *)(param_1 + 0xa8) = 1;
    fn_002cc0e0(*(undefined4 *)(param_1 + 0xa4),(int)*(char *)(*(int *)(param_1 + 0x5c) + 0x5e));
  }
  (**(code **)(**(int **)(param_1 + 0x9c) + 0x2c))
            (*(int **)(param_1 + 0x9c),*(char *)(*(int *)(param_1 + 0x5c) + 9) != '\0',0);
  if (*(int *)(*(int *)(param_1 + 0x5c) + 0x38) != 0) {
    fn_0068ab44(param_1);
  }
  return 1;
}


