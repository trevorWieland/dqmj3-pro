#include "0021cf38_0021d9e8.h"



void fn_0021d9e8(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  uint uVar6;
  float fVar7;
  int iVar8;
  float local_28;
  float fStack_24;
  
  if (*(int *)(param_1 + 0x238) != 0) {
    fn_002194f4(param_1,&local_28);
    bVar1 = false;
    iVar3 = 0;
    do {
      iVar2 = 0;
      do {
        fVar5 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
        fVar7 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
        uVar6 = (uint)((local_28 + fVar5) - 3.0);
        iVar8 = (int)((fStack_24 + fVar7) - 3.0);
        if ((((uVar6 < 0x20) && (-1 < iVar8)) && (iVar8 < 0x20)) &&
           ((&DAT_007be6c8)[iVar2 + iVar3 * 7] == '\x01')) {
          uVar6 = uVar6 + iVar8 * 0x20;
          iVar4 = *(int *)(param_1 + 0x23c);
          iVar8 = (int)uVar6 >> 5;
          if ((iVar4 == 0) || ((*(uint *)(iVar4 + iVar8 * 4) >> (uVar6 & 0x1f) & 1) == 0)) {
            if (iVar4 != 0) {
              *(uint *)(iVar4 + iVar8 * 4) = *(uint *)(iVar4 + iVar8 * 4) | 1 << (uVar6 & 0x1f);
            }
            bVar1 = true;
          }
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 7);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 7);
    if (bVar1) {
      fn_0021e484(param_1);
    }
  }
  return;
}



void fn_0021d738(void)

{
  return;
}



void fn_0021d51c(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined1 auStack_38 [20];
  
  iVar2 = fn_00178f9c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x10));
  piVar8 = *(int **)(iVar2 + 0x10);
  iVar2 = 0;
  do {
    iVar6 = param_1 + iVar2 * 4;
    iVar3 = fn_00145b00(0x38,&DAT_00812c8c);
    if (iVar3 == 0) {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7 = (int *)fn_0031ae84();
    }
    piVar4 = *(int **)(iVar6 + 0x128);
    if (piVar4 != piVar7) {
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 8))();
      }
      *(int **)(iVar6 + 0x128) = piVar7;
    }
    *(undefined4 *)(*(int *)(iVar6 + 0x128) + 4) = *(undefined4 *)(param_1 + 4);
    fn_0017d96c(auStack_38,0x10,0xf,(char *)&DAT_0021d694,iVar2);
    piVar7 = (int *)(**(code **)(*piVar8 + 0x2c))(piVar8,auStack_38,1);
    if (piVar7 != (int *)0x0) {
      puVar5 = (undefined4 *)(**(code **)(*piVar7 + 8))(piVar7);
      do {
        if (puVar5 == &DAT_0089a928) goto LAB_0021d608;
        puVar5 = (undefined4 *)*puVar5;
      } while (puVar5 != (undefined4 *)0x0);
    }
    piVar7 = (int *)0x0;
LAB_0021d608:
    *(int **)(*(int *)(iVar6 + 0x128) + 8) = piVar7;
    iVar3 = fn_006bc57c(*(undefined4 *)(DAT_00897804 + 0x20),iVar2);
    *(bool *)(*(int *)(iVar6 + 0x128) + 0xd) = iVar3 != 0;
    if (iVar3 != 0) {
      uVar1 = fn_00259f5c(iVar3);
    }
    else {
      uVar1 = 0;
    }
    *(undefined2 *)(*(int *)(iVar6 + 0x128) + 0x10) = uVar1;
    *(bool *)(*(int *)(iVar6 + 0x128) + 0x15) = iVar3 != 0;
    (**(code **)(**(int **)(iVar6 + 0x128) + 0x10))();
    iVar2 = iVar2 + 1;
    if (2 < iVar2) {
      return;
    }
  } while( true );
}



void fn_0021d268(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int local_30;
  char *pcStack_2c;
  undefined4 uStack_28;
  char *pcStack_24;
  undefined4 uStack_20;
  
  *(byte *)(*(int *)(param_1 + 0x84) + 0x44) =
       *(byte *)(param_1 + 0x68f) | *(byte *)(*(int *)(param_1 + 0x84) + 0x44) & 0xfe;
  iVar1 = fn_006b51cc(*(undefined4 *)(DAT_00897804 + 0x1c));
  if (*(int *)(param_1 + 0x10) != -1 && iVar1 != 0) {
    local_30 = 0;
    pcStack_2c = (char *)&DAT_00860cb4;
    uStack_28 = 0;
    pcStack_24 = "ic_partner_02";
    uStack_20 = 0;
    iVar2 = fn_00178f9c(*(undefined4 *)(param_1 + 4));
    piVar5 = *(int **)(iVar2 + 0x10);
    iVar2 = 0;
    do {
      if ((&local_30)[iVar2] != 0) {
        iVar3 = (**(code **)(*piVar5 + 0x2c))(piVar5,(&local_30)[iVar2],1);
        *(byte *)(iVar3 + 0x44) = iVar2 == iVar1 | *(byte *)(iVar3 + 0x44) & 0xfe;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 5);
  }
  fn_0021d848(param_1,0);
  if (*(int *)(param_1 + 0x28) == -1) {
    uVar4 = fn_001853ec(*(undefined4 *)(param_1 + 4),(char *)&DAT_0021d35c,*(undefined4 *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x28) = uVar4;
  }
  return;
}



void fn_0021d254(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iStack_30;
  char *pcStack_2c;
  undefined4 uStack_28;
  char *pcStack_24;
  undefined4 uStack_20;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x84) * 4);
  *(byte *)(*(int *)(iVar1 + 0x84) + 0x44) =
       *(byte *)(iVar1 + 0x68f) | *(byte *)(*(int *)(iVar1 + 0x84) + 0x44) & 0xfe;
  iVar2 = fn_006b51cc(*(undefined4 *)(DAT_00897804 + 0x1c));
  if (*(int *)(iVar1 + 0x10) != -1 && iVar2 != 0) {
    iStack_30 = 0;
    pcStack_2c = "ic_partner_00";
    uStack_28 = 0;
    pcStack_24 = "ic_partner_02";
    uStack_20 = 0;
    iVar3 = fn_00178f9c(*(undefined4 *)(iVar1 + 4));
    piVar6 = *(int **)(iVar3 + 0x10);
    iVar3 = 0;
    do {
      if ((&iStack_30)[iVar3] != 0) {
        iVar4 = (**(code **)(*piVar6 + 0x2c))(piVar6,(&iStack_30)[iVar3],1);
        *(byte *)(iVar4 + 0x44) = iVar3 == iVar2 | *(byte *)(iVar4 + 0x44) & 0xfe;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 5);
  }
  fn_0021d848(iVar1,0);
  if (*(int *)(iVar1 + 0x28) == -1) {
    uVar5 = fn_001853ec(*(undefined4 *)(iVar1 + 4),"timer",*(undefined4 *)(iVar1 + 0x10));
    *(undefined4 *)(iVar1 + 0x28) = uVar5;
  }
  return;
}



int fn_0021d190(int param_1,undefined4 param_2,undefined4 *param_3,float *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar1 = fn_0021ed50(param_1,4,param_2,0);
  piVar2 = (int *)**(int **)(param_1 + 0x20c);
  while( true ) {
    if (piVar2 == *(int **)(param_1 + 0x20c)) {
      return iVar1;
    }
    if (piVar2[2] == iVar1) break;
    piVar2 = (int *)*piVar2;
  }
  *(byte *)(piVar2[5] + 0x47) = *(byte *)(piVar2[5] + 0x47) & 0xfc | 1;
  iVar3 = piVar2[5];
  fVar4 = param_4[2];
  *(float *)(iVar3 + 0x34) = *param_4 * *(float *)(param_1 + 0x188);
  *(float *)(iVar3 + 0x38) = fVar4;
  *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xef | 0x10;
  iVar3 = piVar2[5];
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  *(undefined4 *)(iVar3 + 0x28) = *param_3;
  *(undefined4 *)(iVar3 + 0x2c) = uVar6;
  *(undefined4 *)(iVar3 + 0x30) = uVar5;
  *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xef | 0x10;
  return iVar1;
}



void fn_0021cf38(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  ulonglong uVar12;
  
  iVar2 = fn_006f7a84(DAT_008977e0);
  fVar10 = *(float *)(iVar2 + 0x28);
  fVar11 = *(float *)(iVar2 + 0x20);
  uVar12 = (ulonglong)*(uint *)(iVar2 + 0x24);
  iVar2 = 0;
  do {
    iVar3 = param_1 + iVar2 * 0x18;
    if (iVar2 == 0) {
      if ((((*(float *)(param_1 + 0x1c0) == fVar11) &&
           (*(float *)(param_1 + 0x1c4) == (float)uVar12)) &&
          (*(float *)(param_1 + 0x1c8) == fVar10)) && (*(int *)(param_1 + 0x138) != 2)) {
        piVar4 = (int *)fn_006f72e0(DAT_008977e0);
        uVar5 = (**(code **)(*piVar4 + 0x3c))();
        bVar9 = uVar5 == 0;
        if (bVar9) {
          uVar5 = (uint)*(byte *)(param_1 + 0x68c);
        }
        if (bVar9 && uVar5 == 0) goto LAB_0021d16c;
      }
LAB_0021d100:
      iVar6 = *(int *)(iVar3 + 0x1dc);
      *(undefined4 *)(iVar3 + 0x1d0) = 0;
LAB_0021d108:
      *(int *)(iVar3 + 0x1d8) = iVar6;
      iVar6 = *(int *)(iVar3 + 0x1d0);
    }
    else {
      if (iVar2 == 1) {
        if (((*(float *)(param_1 + 0x1c0) == fVar11) &&
            (*(float *)(param_1 + 0x1c4) == (float)uVar12)) &&
           ((*(float *)(param_1 + 0x1c8) == fVar10 && (*(int *)(param_1 + 0x138) != 2)))) {
          piVar4 = (int *)fn_006f72e0(DAT_008977e0);
          iVar6 = (**(code **)(*piVar4 + 0x3c))();
          if (iVar6 == 0) {
            fn_006f7a84(DAT_008977e0);
            iVar6 = fn_006aa6e0();
            if (iVar6 == 0) {
              if (*(char *)(param_1 + 0x6b0) != '\0') {
                uVar5 = 0;
                uVar7 = *(int *)(param_1 + 0x1b8) - *(int *)(param_1 + 0x1b4);
                iVar6 = (int)((longlong)(int)uVar7 * -0x72c234f7 + ((ulonglong)uVar7 << 0x20) >>
                             0x20);
                if (iVar6 >> 6 != iVar6 >> 0x1f) {
                  do {
                    if ((*(byte *)(*(int *)(*(int *)(param_1 + 0x1b4) + uVar5 * 0x74) + 0x44) & 1)
                        == 0) {
                      if (uVar5 != 0) goto LAB_0021d100;
                      break;
                    }
                    iVar6 = (int)((longlong)(int)uVar7 * -0x72c234f7 + ((ulonglong)uVar7 << 0x20) >>
                                 0x20);
                    uVar5 = uVar5 + 1;
                  } while (uVar5 < (uint)((iVar6 >> 6) - (iVar6 >> 0x1f)));
                }
              }
              goto LAB_0021d16c;
            }
          }
        }
        goto LAB_0021d100;
      }
LAB_0021d16c:
      if (0 < *(int *)(iVar3 + 0x1d8)) {
        iVar6 = *(int *)(iVar3 + 0x1d8) + -1;
        goto LAB_0021d108;
      }
      iVar6 = *(int *)(iVar3 + 0x1d4);
      *(int *)(iVar3 + 0x1d0) = iVar6;
    }
    iVar8 = *(int *)(iVar3 + 0x1cc);
    if (iVar6 != iVar8) {
      if (iVar6 - iVar8 < 1) {
        iVar8 = iVar8 + -1;
      }
      else {
        iVar8 = iVar8 + 1;
      }
      *(int *)(iVar3 + 0x1cc) = iVar8;
      iVar6 = *(int *)(iVar3 + 0x1e0);
      if (iVar6 != 0) {
        uVar1 = fn_00300f74(iVar8 * 0xff,*(undefined4 *)(iVar3 + 0x1d4));
        *(undefined1 *)(iVar6 + 0x45) = uVar1;
      }
    }
    iVar2 = iVar2 + 1;
    if (1 < iVar2) {
      *(float *)(param_1 + 0x1c8) = fVar10;
      *(float *)(param_1 + 0x1c0) = fVar11;
      *(int *)(param_1 + 0x1c4) = (int)uVar12;
      return;
    }
  } while( true );
}


