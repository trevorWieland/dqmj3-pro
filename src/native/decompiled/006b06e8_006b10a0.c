#include "006b06e8_006b10a0.h"



undefined4 fn_006b10a0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_0013add0((int)*(short *)(*(int *)(param_1 + 0x19c) + 8));
  if (iVar1 != 0) {
    iVar1 = fn_002e9978((int)*(short *)(*(int *)(param_1 + 0x19c) + 8));
    iVar2 = 0;
    do {
      if ((char)(&DAT_00891404)[iVar2 * 0xc] == iVar1) {
        return *(undefined4 *)(&DAT_00891404 + iVar2 * 0xc + param_2 * 4 + 4);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0xe);
  }
  return 0;
}



int fn_006b0d10(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)fn_006f7508(DAT_008977e0);
  iVar2 = (**(code **)(*piVar1 + 0x78))(piVar1,*(undefined4 *)(param_1 + 0x1cc));
  if ((iVar2 == 0) || ((param_2 != 0 && (*(int *)(iVar2 + 0x1cc) != *(int *)(param_1 + 0x13c))))) {
    iVar2 = 0;
  }
  return iVar2;
}



undefined4 fn_006b0ba4(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  bool bVar4;
  
  uVar3 = 0;
  iVar1 = fn_006f7358(DAT_008977e0);
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = fn_00242b6c((int)*(short *)((int)param_1 + 0x16a));
  if (iVar1 == 0) {
    iVar1 = fn_006a9938(param_1);
    if ((iVar1 != 0) || (iVar1 = (**(code **)(*param_1 + 0x160))(param_1), iVar1 != 0))
    goto LAB_006b0c88;
  }
  else if (iVar1 == 1) {
    uVar2 = fn_006a99b0(param_1);
    bVar4 = uVar2 == 0;
    if (bVar4) {
      uVar2 = param_1[0xe7];
    }
    if (bVar4 && (uVar2 & 0x100) == 0) {
      iVar1 = (**(code **)(*param_1 + 0x68))(param_1);
joined_r0x006b0c80:
      if (iVar1 == 0) goto LAB_006b0c88;
    }
  }
  else {
    if (iVar1 != 2) goto LAB_006b0c88;
    iVar1 = (**(code **)(*param_1 + 0x178))(param_1);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*param_1 + 0x68))(param_1);
      goto joined_r0x006b0c80;
    }
  }
  uVar3 = 1;
LAB_006b0c88:
  if ((((**(int **)(DAT_008977e0 + 0x40) != 0) && (iVar1 = fn_006f6fc4(), iVar1 != 0)) &&
      (iVar1 = fn_006c89fc(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 4)), iVar1 == 2)) &&
     ((iVar1 = (**(code **)(*param_1 + 0x68))(param_1), iVar1 != 0 &&
      (iVar1 = (**(code **)(*param_1 + 0x160))(param_1), iVar1 != 0)))) {
    uVar3 = 0;
  }
  return uVar3;
}



undefined4 fn_006b0a1c(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  if (((param_1[0xe7] & 0x100000U) == 0) &&
     ((iVar2 = fn_00242b6c((int)*(short *)((int)param_1 + 0x16a)), iVar2 != 1 ||
      (iVar2 = (**(code **)(*param_1 + 0x68))(param_1), iVar2 == 0)))) {
    puVar6 = (undefined4 *)(int)*(short *)((int)param_1 + 0x16a);
    puVar1 = DAT_008913f4;
    if (DAT_008913f4 != puVar6) {
      puVar1 = DAT_008913f8;
    }
    if (DAT_008913f4 != puVar6 && puVar1 != puVar6) {
      puVar1 = &DAT_008913f4;
      if (DAT_008913fc != puVar6) {
        puVar1 = DAT_00891400;
      }
      if (DAT_008913fc != puVar6 && puVar1 != puVar6) {
        piVar3 = (int *)fn_006f72e0(DAT_008977e0);
        iVar2 = (**(code **)(*piVar3 + 0x68))();
        if (iVar2 == 0) {
          fn_006f7a84(DAT_008977e0);
          iVar2 = fn_006aa6e0();
        }
        else {
          piVar3 = (int *)fn_006f72e0();
          piVar3 = (int *)(**(code **)(*piVar3 + 0x78))();
          iVar2 = (**(code **)(*piVar3 + 0x1c))();
        }
        if (iVar2 == 0) {
          iVar2 = fn_00242b6c((int)*(short *)((int)param_1 + 0x16a));
          if ((iVar2 == 1) && (iVar2 = fn_006a99b0(param_1), iVar2 == 0)) {
            uVar4 = fn_006a9938(param_1);
            bVar7 = uVar4 == 0;
            if (bVar7) {
              uVar4 = param_1[0xe7];
            }
            if (bVar7 && (uVar4 & 0x100) == 0) {
              iVar2 = 0;
              do {
                iVar5 = fn_003b4d6c((int)*(short *)(param_1[0x67] + iVar2 * 8 + 0x6c));
                if (iVar5 == 0x2b) {
                  return 0;
                }
                iVar2 = iVar2 + 1;
              } while (iVar2 < 2);
              return 1;
            }
          }
        }
        else {
          iVar2 = fn_00242b6c((int)*(short *)((int)param_1 + 0x16a));
          if ((iVar2 != 1) && (iVar2 = fn_006a99b0(param_1), iVar2 == 0)) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



int fn_006b09bc(int param_1)

{
  char cVar1;
  int iVar2;
  
  if (((*(char *)(param_1 + 0x16d) != '\0') ||
      (iVar2 = fn_0013ad98((int)*(short *)(*(int *)(param_1 + 0x19c) + 2)), iVar2 == 0)) &&
     (cVar1 = *(char *)(param_1 + 0x36c), cVar1 != '\0')) {
    if (cVar1 == '\x01') {
      return (int)*(short *)(*(int *)(param_1 + 0x19c) + 6);
    }
    if (cVar1 == '\x02') {
      return (int)*(short *)(*(int *)(param_1 + 0x19c) + 8);
    }
  }
  return (int)*(short *)(*(int *)(param_1 + 0x19c) + 2);
}



void fn_006b0964(int *param_1,int param_2)

{
  fn_002cd59c((int)*(char *)((int)param_1 + 0x1be));
  if (param_2 != 0) {
    (**(code **)(*param_1 + 0x1cc))(param_1);
  }
  return;
}



undefined4 fn_006b08b8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uint in_fpscr;
  float in_s0;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  
  fVar7 = 1.0;
  fn_006a9984();
  in_s0 = in_s0 + fVar7;
  fn_006fa358();
  fVar5 = (float)(int)in_s0;
  fVar6 = fVar5;
  fn_006a9da0(param_1);
  fVar6 = fVar6 * 0.5;
  fn_006fa358();
  uVar8 = fn_00300f74(fVar5,(int)fVar6);
  iVar2 = (int)uVar8;
  if ((int)((ulonglong)uVar8 >> 0x20) != 0) {
    iVar3 = (int)*(char *)(param_1 + 0x1bf);
    bVar4 = SCARRY4(iVar3,1);
    iVar1 = iVar3 + 1;
    if (iVar3 != -1) {
      iVar2 = iVar2 * (int)fVar6;
      bVar4 = SBORROW4(iVar2,(int)fVar5);
      iVar1 = iVar2 - (int)fVar5;
    }
    if (iVar1 < 0 == bVar4) {
      return 0;
    }
    fVar6 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
    fVar5 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
    if (fVar5 <= fVar6 + fVar7) {
      return 0;
    }
  }
  return 1;
}



/* WARNING: Removing unreachable block (ram,0x006b1044) */

undefined4 fn_006b0814(int param_1,int param_2)

{
  int iVar1;
  float *pfVar2;
  undefined4 uVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_40;
  float local_3c;
  float fStack_38;
  float local_34;
  float local_30;
  float local_2c;
  
  fn_006f7a84(DAT_008977e0);
  iVar1 = fn_001e6e78();
  if (iVar1 == 0) {
    iVar1 = fn_006f7984(DAT_008977e0);
    if (iVar1 != 0) {
      fn_006f7984(DAT_008977e0);
      iVar1 = fn_006ccf88();
      if (iVar1 != 0) {
        return 0;
      }
    }
    fn_006f7a84(DAT_008977e0);
    iVar1 = fn_006aaa00();
    if ((iVar1 == 0) || (2 < *(byte *)(param_1 + 0x1be))) {
      fVar4 = 0.0;
      if (param_2 == 0) {
        fn_006f7a84(DAT_008977e0);
        fVar5 = fVar4;
        iVar1 = fn_006f7a84(DAT_008977e0);
        pfVar2 = *(float **)(iVar1 + 0x100);
        fVar4 = *pfVar2;
        fVar6 = pfVar2[1];
        fVar7 = pfVar2[2];
      }
      else {
        fn_006f751c();
        iVar1 = fn_00341920();
        fVar6 = (float)VectorSignedToFloat(*(undefined4 *)(iVar1 + 0x80),
                                           (byte)(in_fpscr >> 0x16) & 3);
        fVar7 = fVar4;
        fVar5 = fVar4;
      }
      iVar1 = fn_006f7a84(DAT_008977e0);
      local_34 = *(float *)(iVar1 + 0x20) + fVar4;
      local_30 = *(float *)(iVar1 + 0x24) + fVar6;
      local_2c = *(float *)(iVar1 + 0x28) + fVar7;
      if ((((byte)DAT_008c62fc & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c62fc), iVar1 != 0)) {
        DAT_008f9e2c = fVar5;
        DAT_008f9e30 = fVar5;
        DAT_008f9e34 = fVar5;
      }
      local_40 = DAT_008f9e2c;
      local_3c = DAT_008f9e30;
      fStack_38 = DAT_008f9e34;
      iVar1 = fn_006a99b0(param_1);
      if (iVar1 != 0) {
        local_3c = *(float *)(param_1 + 0x10c) * 0.5;
      }
      iVar1 = fn_002aad7c(param_1);
      if (iVar1 == 4) {
        fn_002cd59c();
      }
      uVar3 = fn_006b0514(param_1,&local_34,&local_40);
      return uVar3;
    }
  }
  return 0;
}



uint fn_006b06e8(int *param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int local_20;
  int local_1c;
  
  if (((param_1[0xe7] & 0x800U) == 0) && (iVar2 = param_1[2], iVar2 != -1)) {
    uVar1 = (**(code **)(*param_1 + 0x70))(param_1,iVar2);
    if (iVar2 != 0) {
      if (iVar2 == 1) {
        bVar3 = uVar1 == 0xe;
        if (bVar3) {
          uVar1 = (uint)*(byte *)((int)param_1 + 0x59);
        }
        if (bVar3 && uVar1 == 0) {
          return uVar1;
        }
      }
      else {
        if (iVar2 != 2) {
          return 1;
        }
        if (uVar1 != 0x16) {
          if (0x16 < (int)uVar1) {
            if (uVar1 == 0x18 || uVar1 == 0x1a) {
              return 0;
            }
            if (uVar1 == 0x20 || uVar1 == 0x21) {
              return 0;
            }
            return 1;
          }
          if (uVar1 == 7 || uVar1 == 8) {
            return 0;
          }
          if (uVar1 != 0x14 && uVar1 != 0x15) {
            return 1;
          }
        }
        fn_006b1130(&local_20,param_1);
        if ((((local_20 == 3) && (0x1e < local_1c)) && (local_1c < 0x23)) &&
           (iVar2 = (**(code **)(*param_1 + 0x178))(param_1), iVar2 == 0)) {
          return 0;
        }
      }
      return 1;
    }
    if ((uVar1 != 3 && uVar1 != 4) && uVar1 != 5) {
      return 1;
    }
  }
  return 0;
}


