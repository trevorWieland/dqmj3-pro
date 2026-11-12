#include "002e19b4_002e2250.h"



void fn_002e2250(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    if (*(int *)(param_1 + 0x34) != -1) {
      fn_00159f34(*(undefined4 *)(param_1 + 0x28));
    }
    uVar1 = fn_0010887c(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                         DAT_00892380,*(undefined4 *)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x34) = uVar1;
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  if (*(int *)(param_1 + 0x3c) <= *(int *)(param_1 + 0x40)) {
    *(code **)(param_1 + 0x18) = fn_002e22cc;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  return;
}



void fn_002e2204(int param_1)

{
  int iVar1;
  
  iVar1 = fn_001c8d94(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
  *(char *)(param_1 + 0x38) = (char)iVar1;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}



void fn_002e21b0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x30) == -1) {
    uVar1 = fn_001480d0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                         DAT_00892370,&DAT_002e21fc,0,1,6);
    *(undefined4 *)(param_1 + 0x30) = uVar1;
  }
  return;
}



void fn_002e2130(int param_1)

{
  if (*(int *)(param_1 + 0x48) != -1) {
    (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
    *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x34) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x30) != -1) {
    fn_0016a43c(*(undefined4 *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



bool fn_002e1f98(float *param_1,undefined4 param_2,float *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_188 [8];
  float local_180 [90];
  
  fn_00101a1c(auStack_188,&DAT_005f4c78,0x48,5);
  piVar1 = (int *)fn_006f7388(DAT_008977e0);
  iVar2 = (**(code **)(*piVar1 + 0x14))(piVar1,3,auStack_188,5,param_1,param_2,0);
  if (iVar2 == 0) {
    piVar1 = (int *)fn_006f7388(DAT_008977e0);
    iVar2 = (**(code **)(*piVar1 + 8))(piVar1,3,auStack_188,5,param_2);
  }
  fVar5 = 10000.0;
  fn_001a4a80();
  iVar3 = -1;
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      fVar6 = (*param_1 - local_180[iVar4 * 0x12]) * (*param_1 - local_180[iVar4 * 0x12]) +
              (param_1[1] - local_180[iVar4 * 0x12 + 1]) *
              (param_1[1] - local_180[iVar4 * 0x12 + 1]) +
              (param_1[2] - local_180[iVar4 * 0x12 + 2]) *
              (param_1[2] - local_180[iVar4 * 0x12 + 2]);
      if (fVar6 < fVar5) {
        iVar3 = iVar4;
        fVar5 = fVar6;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  if (param_3 != (float *)0x0 && iVar3 != -1) {
    fVar6 = param_1[1];
    fVar8 = local_180[iVar3 * 0x12 + 1];
    fVar5 = param_1[2];
    fVar7 = local_180[iVar3 * 0x12 + 2];
    *param_3 = local_180[iVar3 * 0x12] + (*param_1 - local_180[iVar3 * 0x12]) * 0.5;
    param_3[1] = fVar8 + (fVar6 - fVar8) * 0.5;
    param_3[2] = fVar7 + (fVar5 - fVar7) * 0.5;
  }
  return 0 < iVar2;
}



void fn_002e1f10(undefined4 *param_1)

{
  *param_1 = &DAT_008208c4;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}



void fn_002e19b4(int param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  undefined1 *local_38;
  undefined4 local_34;
  uint local_30;
  undefined2 local_2c;
  undefined2 local_2a;
  uint *local_28;
  
  iVar8 = -1;
  pcVar2 = (char *)fn_006afe90(*(undefined4 *)(DAT_008977e0 + 0x1c),
                                *(undefined4 *)(DAT_008977e0 + 0xa8));
  iVar6 = 0;
  pcVar3 = &DAT_00891f38;
  iVar12 = 4;
  do {
    pcVar1 = pcVar3 + 0xc;
    pcVar3 = pcVar3 + 0x18;
    if (*pcVar1 == *pcVar2) {
      iVar8 = iVar6;
    }
    if (*pcVar3 == *pcVar2) {
      iVar8 = iVar6 + 1;
    }
    iVar12 = iVar12 + -1;
    iVar6 = iVar6 + 2;
  } while (iVar12 != 0);
  if (iVar8 == -1) {
    iVar8 = 0;
    do {
      local_34 = 0;
      local_38 = (undefined1 *)(uint)*(ushort *)(&DAT_007c100c + iVar8 * 2);
      fn_00158f40(&local_34,2,1);
      fn_00158f40((int)&local_34 + 2,2,1);
      uVar4 = *(uint *)(param_1 + 8);
      puVar10 = (uint *)(param_1 + 4);
      if (uVar4 == *(uint *)(param_1 + 0xc)) {
        uVar5 = (int)(uVar4 - *puVar10) >> 3;
        if (uVar5 < (uint)((int)(*(uint *)(param_1 + 0xc) - *puVar10) >> 3)) {
          *(uint *)(param_1 + 8) = uVar4 + 8;
          if (uVar4 != 0) {
            fn_00166824(uVar4,uVar4 - 8);
          }
          uVar11 = uVar4 - 8;
          uVar5 = uVar4;
          if (uVar4 < uVar11) {
            iVar6 = uVar11 - uVar4;
            if (0 < iVar6) {
              uVar7 = uVar11;
              if (iVar6 * 0x10000000 < 0) {
                uVar7 = uVar4 - 0x10;
                fn_00166824(uVar11,uVar7);
                uVar5 = uVar11;
              }
              for (iVar6 = iVar6 >> 4; iVar6 != 0; iVar6 = iVar6 + -1) {
                fn_00166824(uVar5 - 8,uVar7 - 8);
                uVar5 = uVar5 - 0x10;
                uVar7 = uVar7 - 0x10;
                fn_00166824();
              }
            }
          }
          else {
            while (uVar4 != uVar11) {
              uVar11 = uVar11 - 8;
              fn_00166824(uVar5 - 8,uVar11);
              uVar5 = uVar5 - 8;
            }
          }
          goto LAB_002e1bf0;
        }
        local_30 = uVar5 + (uVar5 >> 1) + (uVar5 >> 3);
        if (local_30 < uVar5 + 0x20) {
          local_30 = uVar5 + 0x20;
        }
        uVar7 = fn_00100fc6(local_30 << 3,0);
        uVar11 = uVar7;
        for (uVar5 = *puVar10; uVar5 != uVar4; uVar5 = uVar5 + 8) {
          if (uVar11 != 0) {
            fn_00166824(uVar11,uVar5);
          }
          uVar11 = uVar11 + 8;
        }
        iVar6 = (uVar4 - *puVar10 & 0xfffffff8) + uVar7;
        if (iVar6 != 0) {
          fn_00166824(iVar6,&local_38);
        }
        uVar5 = *(uint *)(param_1 + 8);
        iVar6 = (uVar4 - *puVar10 & 0xfffffff8) + uVar7;
        for (; uVar4 != uVar5; uVar4 = uVar4 + 8) {
          iVar6 = iVar6 + 8;
          if (iVar6 != 0) {
            fn_00166824(iVar6,uVar4);
          }
        }
        uVar5 = *puVar10;
        uVar11 = *(uint *)(param_1 + 8);
        uVar4 = uVar5;
        if (uVar11 < uVar5) {
          do {
            uVar4 = uVar4 + 8;
          } while (uVar4 != uVar11);
        }
        fn_001008c4(uVar5,(int)(*(int *)(param_1 + 0xc) - uVar5) >> 3,0);
        *(uint *)(param_1 + 0xc) = uVar7 + local_30 * 8;
        *(uint *)(param_1 + 8) = uVar7 + ((int)(uVar11 - uVar5) >> 3) * 8 + 8;
        *puVar10 = uVar7;
      }
      else {
        *(uint *)(param_1 + 8) = uVar4 + 8;
        if (uVar4 != 0) {
LAB_002e1bf0:
          fn_00166824(uVar4,&local_38);
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 4);
  }
  else {
    iVar6 = 0;
    local_38 = &DAT_00891f44 + iVar8 * 0xc;
    iVar8 = *(int *)(iVar8 * 0xc + 0x891f4c);
    if (0 < iVar8) {
      do {
        local_2c = 0;
        local_2a = 0;
        puVar10 = &local_30;
        local_30 = (uint)*(ushort *)(*(int *)(local_38 + 4) + iVar6 * 2);
        fn_00158f40(&local_2c,2,1);
        fn_00158f40(&local_2a,2,1);
        puVar9 = (uint *)(param_1 + 4);
        uVar4 = *(uint *)(param_1 + 8);
        if (uVar4 == *(uint *)(param_1 + 0xc)) {
          local_28 = &local_30;
          uVar5 = (int)(uVar4 - *puVar9) >> 3;
          if (uVar5 < (uint)((int)(*(uint *)(param_1 + 0xc) - *puVar9) >> 3)) {
            *(uint *)(param_1 + 8) = uVar4 + 8;
            if (uVar4 != 0) {
              fn_00166824(uVar4,uVar4 - 8);
            }
            uVar11 = uVar4 - 8;
            uVar5 = uVar4;
            if (uVar4 < uVar11) {
              iVar12 = uVar11 - uVar4;
              if (0 < iVar12) {
                uVar7 = uVar11;
                if (iVar12 * 0x10000000 < 0) {
                  uVar7 = uVar4 - 0x10;
                  fn_00166824(uVar11,uVar7);
                  uVar5 = uVar11;
                }
                for (iVar12 = iVar12 >> 4; iVar12 != 0; iVar12 = iVar12 + -1) {
                  fn_00166824(uVar5 - 8,uVar7 - 8);
                  uVar5 = uVar5 - 0x10;
                  uVar7 = uVar7 - 0x10;
                  fn_00166824();
                }
              }
            }
            else {
              while (uVar4 != uVar11) {
                uVar11 = uVar11 - 8;
                fn_00166824(uVar5 - 8,uVar11);
                uVar5 = uVar5 - 8;
              }
            }
            puVar10 = local_28;
            goto LAB_002e1ddc;
          }
          local_34 = uVar5 + (uVar5 >> 1) + (uVar5 >> 3);
          if (local_34 < uVar5 + 0x20) {
            local_34 = uVar5 + 0x20;
          }
          uVar7 = fn_00100fc6(local_34 << 3,0);
          uVar11 = uVar7;
          for (uVar5 = *puVar9; uVar5 != uVar4; uVar5 = uVar5 + 8) {
            if (uVar11 != 0) {
              fn_00166824(uVar11,uVar5);
            }
            uVar11 = uVar11 + 8;
          }
          iVar12 = (uVar4 - *puVar9 & 0xfffffff8) + uVar7;
          if (iVar12 != 0) {
            fn_00166824(iVar12,local_28);
          }
          uVar5 = *(uint *)(param_1 + 8);
          iVar12 = (uVar4 - *puVar9 & 0xfffffff8) + uVar7;
          for (; uVar4 != uVar5; uVar4 = uVar4 + 8) {
            iVar12 = iVar12 + 8;
            if (iVar12 != 0) {
              fn_00166824(iVar12,uVar4);
            }
          }
          uVar5 = *(uint *)(param_1 + 8);
          uVar11 = *puVar9;
          uVar4 = uVar11;
          if (uVar5 <= uVar11) {
            for (; uVar4 != uVar5; uVar4 = uVar4 + 8) {
            }
          }
          fn_001008c4(uVar11,(int)(*(int *)(param_1 + 0xc) - uVar11) >> 3,0);
          *(uint *)(param_1 + 0xc) = uVar7 + local_34 * 8;
          *(uint *)(param_1 + 8) = uVar7 + ((int)(uVar5 - uVar11) >> 3) * 8 + 8;
          *puVar9 = uVar7;
        }
        else {
          *(uint *)(param_1 + 8) = uVar4 + 8;
          if (uVar4 != 0) {
LAB_002e1ddc:
            fn_00166824(uVar4,puVar10);
          }
        }
        iVar6 = iVar6 + 1;
        if (iVar8 <= iVar6) {
          return;
        }
      } while( true );
    }
  }
  return;
}


