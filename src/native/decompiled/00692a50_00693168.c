#include "00692a50_00693168.h"



void fn_00693168(int *param_1)

{
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 4))();
    param_1[1] = 0;
  }
  if (*param_1 != 0) {
    fn_002feef8();
    *param_1 = 0;
  }
  if (param_1[3] != 0) {
    fn_0035b2a4();
  }
  if ((int *)param_1[3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 4))();
    param_1[3] = 0;
  }
  if (param_1[2] != 0) {
    fn_002feef8(param_1[2]);
    param_1[2] = 0;
  }
  if (param_1[4] != 0) {
    fn_002a726c();
    fn_002feef8();
    param_1[4] = 0;
  }
  return;
}



undefined4 fn_0069311c(void)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  piVar2 = *(int **)(DAT_008977e0 + 0x40);
  if ((*piVar2 != 0) && (*(char *)(*piVar2 + 4) == '\x03')) {
    iVar4 = piVar2[1];
    cVar1 = '\0';
    if (iVar4 != 0) {
      cVar1 = *(char *)(iVar4 + 0x20);
    }
    if (iVar4 != 0 && cVar1 != '\x01') {
      uVar3 = fn_006b8e04(piVar2[4]);
      return uVar3;
    }
  }
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x00693050) */

void fn_00692fc8(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  cVar1 = *(char *)(param_2 + 4);
  if (cVar1 == '\x01') {
    iVar2 = fn_00145b00(0xc,&DAT_00812c8c);
    piVar3 = (int *)0x0;
    if (iVar2 != 0) {
      piVar3 = (int *)fn_003f5178();
    }
    (**(code **)(*piVar3 + 8))(piVar3,param_2);
    piVar4 = *(int **)(param_1 + 4);
    if (piVar4 != piVar3) {
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))();
      }
      *(int **)(param_1 + 4) = piVar3;
    }
  }
  else {
    if (cVar1 == '\x02') {
      iVar2 = fn_00145b00(0xc,&DAT_00812c8c);
      piVar3 = (int *)0x0;
      if (iVar2 != 0) {
        piVar3 = (int *)fn_003f4f48();
      }
      (**(code **)(*piVar3 + 8))(piVar3,param_2);
      piVar4 = *(int **)(param_1 + 4);
      if (piVar4 != piVar3) {
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 4))();
        }
        *(int **)(param_1 + 4) = piVar3;
      }
      return;
    }
    if (cVar1 == '\x03') {
      iVar2 = fn_00145b00(0x84,&DAT_00812c8c);
      piVar3 = (int *)0x0;
      if (iVar2 != 0) {
        piVar3 = (int *)fn_003d6ce8();
      }
      (**(code **)(*piVar3 + 0x14))(piVar3,param_2,param_3);
      piVar4 = *(int **)(param_1 + 4);
      if (piVar4 != piVar3) {
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 4))();
        }
        *(int **)(param_1 + 4) = piVar3;
      }
    }
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0035ab88) */
/* WARNING: Removing unreachable block (ram,0x0035ab8c) */

void fn_00692fb0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    return;
  }
  if (*(char *)(iVar1 + 8) == '\x04') {
    fn_0035b638(iVar1,0);
    *(undefined1 *)(iVar1 + 10) = 0;
  }
  iVar1 = fn_00178f9c(*(undefined4 *)(iVar1 + 0x14),*(undefined4 *)(iVar1 + 0x1c));
  *(undefined1 *)(*(int *)(iVar1 + 0x10) + 0x44) = 1;
  return;
}



/* WARNING: Removing unreachable block (ram,0x0035ab94) */
/* WARNING: Removing unreachable block (ram,0x0035aba0) */

void fn_00692f98(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    return;
  }
  if (*(char *)(iVar1 + 8) != '\x04') {
    *(undefined1 *)(iVar1 + 10) = 4;
  }
  iVar1 = fn_00178f9c(*(undefined4 *)(iVar1 + 0x14),*(undefined4 *)(iVar1 + 0x1c));
  *(byte *)(*(int *)(iVar1 + 0x10) + 0x44) = *(byte *)(*(int *)(iVar1 + 0x10) + 0x44) & 0xfe;
  return;
}



undefined4 fn_00692f44(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = fn_001759e8(*(undefined4 *)(DAT_00897804 + 8),0x32);
  iVar2 = fn_001759e8(*(undefined4 *)(DAT_00897804 + 8),0);
  if (((iVar2 == 0x32) && (5 < uVar1)) && (uVar1 < 10)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



undefined4 fn_00692c1c(void)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  int iVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar2 = DAT_0089245c;
  uVar10 = fn_006c143c(DAT_0089245c,1);
  uVar11 = fn_006c140c(uVar2,1);
  fn_002559d4((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
               (int)((ulonglong)uVar10 >> 0x20));
  uVar10 = fn_006c143c(uVar2,2);
  uVar11 = fn_006c140c(uVar2,2);
  fn_0020abd0((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
               (int)((ulonglong)uVar10 >> 0x20));
  uVar10 = fn_006c143c(uVar2,9);
  uVar11 = fn_006c140c(uVar2,9);
  fn_0020ad04((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
               (int)((ulonglong)uVar10 >> 0x20));
  uVar10 = fn_006c143c(uVar2,6);
  uVar11 = fn_006c140c(uVar2,6);
  fn_00239744((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
               (int)((ulonglong)uVar10 >> 0x20));
  uVar10 = fn_006c143c(uVar2,0);
  uVar11 = fn_006c140c(uVar2,0);
  fn_0020ae38((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
               (int)((ulonglong)uVar10 >> 0x20));
  uVar10 = fn_006c143c(uVar2,8);
  uVar11 = fn_006c140c(uVar2,8);
  fn_0035a0ec((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
               (int)((ulonglong)uVar10 >> 0x20));
  uVar10 = fn_006c143c(uVar2,10);
  uVar11 = fn_006c140c(uVar2,10);
  fn_002394e8((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
               (int)((ulonglong)uVar10 >> 0x20));
  uVar10 = fn_006c143c(uVar2,0xb);
  uVar11 = fn_006c140c(uVar2,0xb);
  fn_003d2780((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
               (int)((ulonglong)uVar10 >> 0x20));
  uVar10 = fn_006c143c(uVar2,0xc);
  uVar11 = fn_006c140c(uVar2,0xc);
  fn_00339e4c((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
               (int)((ulonglong)uVar10 >> 0x20));
  uVar10 = fn_006c143c(uVar2,0xd);
  uVar11 = fn_006c140c(uVar2,0xd);
  fn_00405900((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
               (int)((ulonglong)uVar10 >> 0x20));
  uVar10 = fn_006c143c(uVar2,0xe);
  uVar11 = fn_006c140c(uVar2,0xe);
  fn_002d6bd8((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
               (int)((ulonglong)uVar10 >> 0x20));
  uVar10 = fn_006c143c(uVar2,0x13);
  uVar11 = fn_006c140c(uVar2,0x13);
  fn_0031598c((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
               (int)((ulonglong)uVar10 >> 0x20));
  uVar10 = fn_006c143c(uVar2,0x14);
  uVar11 = fn_006c140c(uVar2,0x14);
  fn_002d6a94((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
               (int)((ulonglong)uVar10 >> 0x20));
  uVar10 = fn_006c143c(uVar2,0xf);
  iVar7 = (int)((ulonglong)uVar10 >> 0x20);
  uVar6 = (uint)uVar10;
  iVar5 = fn_006c140c(uVar2,0xf);
  iVar8 = 0;
  if (((iVar5 == 0) || (iVar7 < (int)(uint)(uVar6 == 0))) ||
     (iVar3 = fn_00147e6c(iVar5,&DAT_00255bbc,4,iVar7,unaff_r4,unaff_r5,unaff_r6), iVar3 != 0)) {
    iVar5 = 0;
  }
  else {
    iVar5 = iVar5 + 4;
  }
  if ((uVar6 - 4 & 7) != 0) {
    iVar5 = 0;
  }
  DAT_00892464 = iVar5;
  if ((int)-(iVar7 + (uint)(4 < uVar6)) < 0 ==
      (SBORROW4(0,iVar7) != SBORROW4(-iVar7,(uint)(4 < uVar6)))) {
    DAT_00892468 = 0;
  }
  else {
    DAT_00892468 = fn_0011c134(uVar6 - 4,iVar7 - (uint)(uVar6 < 4),8,0);
  }
  uVar6 = 0;
  do {
    uVar4 = uVar6 & 0xff;
    if (uVar4 != 0) {
      bVar1 = *(byte *)(iVar5 + (uVar4 - 1) * 8 + 2);
      bVar9 = 0xfe < bVar1;
      if (bVar1 != 0xff) {
        bVar9 = (uint)(int)(short)DAT_00892468 <= uVar4 - 1;
      }
      if (!bVar9) {
        iVar8 = iVar8 + 1;
      }
    }
    uVar6 = uVar6 + 1;
  } while ((int)uVar6 < 0xd6);
  DAT_0089246c = iVar8;
  return 1;
}



void fn_00692bb4(undefined4 *param_1)

{
  *param_1 = &DAT_00851234;
  if ((int *)param_1[3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 4))();
  }
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 4))();
  }
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 4))();
  }
  fn_002feef8(param_1);
  return;
}



void fn_00692a50(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  fn_0069ee40(param_2,param_3,0);
  fn_0017fde4(param_2);
  iVar1 = fn_00183654();
  iVar5 = 0;
  if (0 < iVar1) {
    do {
      uVar2 = fn_0017fde4(param_2);
      iVar3 = fn_005ea5ec(uVar2,iVar5);
      if (iVar3 != 0) {
        uVar2 = fn_0017fde4(param_2);
        fn_005ea69c(uVar2,iVar5);
      }
      uVar2 = fn_0017fde4(param_2);
      uVar2 = fn_005ea654(uVar2,iVar5);
      fn_005e7d48(uVar2,0x10);
      uVar2 = fn_006eba70(uVar2);
      fn_005e7a74(uVar2,1,1,0xff,1,0xff,0,0,2);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  uVar6 = 0;
  iVar1 = fn_006eb368(param_3);
  if (iVar1 != 0) {
    do {
      fn_0017fd38(param_2,uVar6);
      uVar6 = uVar6 + 1;
      uVar4 = fn_006eb368(param_3);
    } while (uVar6 < uVar4);
  }
  fn_0017894c(DAT_008977e4,param_2,1);
  return;
}


