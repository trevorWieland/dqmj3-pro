#include "002151c0_00215aec.h"



void fn_00215aec(int param_1,undefined4 param_2)

{
  uint in_fpscr;
  float fVar1;
  
  fVar1 = 0.0;
  if (*(float *)(param_1 + 0xf8) != 0.0) {
    fVar1 = (float)VectorSignedToFloat(param_2,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
    fVar1 = fVar1 * *(float *)(param_1 + 0xf8);
  }
  *(undefined4 *)(param_1 + 0x1b8) = param_2;
  *(int *)(param_1 + 0x1b4) = (int)fVar1;
  *(uint *)(param_1 + 0x138) = *(uint *)(param_1 + 0x138) | 2;
  *(uint *)(param_1 + 0x39c) = *(uint *)(param_1 + 0x39c) & 0xffffff2f | 0x40;
  return;
}



undefined4 fn_002151c0(int *param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  byte bVar9;
  int *piVar10;
  bool bVar11;
  int *local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int *local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if (param_1[2] == 1) {
    if (param_2 != 0) {
      if (param_2 == 3) {
        param_1[0xe7] = param_1[0xe7] | 4;
        fn_006b1130(&local_40,param_1);
        local_50 = local_40;
        local_4c = iStack_3c;
        local_48 = uStack_38;
        local_44 = uStack_34;
        if (iStack_3c == 1) {
          return 1;
        }
LAB_00215334:
        (**(code **)(*param_1 + 0x1e8))(param_1,&local_50);
        return 1;
      }
      if (param_2 == 7) {
        iVar5 = fn_006c39d8(param_1[0x5c]);
        if (iVar5 != 0) {
          uVar7 = fn_006c392c(param_1[0x5c]);
          uVar2 = fn_006c3994(param_1[0x5c]);
          iVar5 = fn_002e0230(param_1[0x5c],uVar7);
          if (iVar5 == 0) {
            (**(code **)(*param_1 + 0x1dc))(param_1,1,uVar7,uVar2);
            return 1;
          }
          return 1;
        }
        iVar5 = (**(code **)(*param_1 + 0x1f0))(param_1);
        (**(code **)(*param_1 + 0x1dc))(param_1,1,0x10,0);
        if ((char)param_1[1] == '\0') {
          param_1[3] = 1;
        }
joined_r0x002153f4:
        if (iVar5 == 0) {
          (**(code **)(*param_1 + 0x44))(param_1,0,4);
        }
        *(undefined1 *)(param_1 + 1) = 1;
        return 1;
      }
      if (param_2 == 6) {
        iVar5 = (**(code **)(*param_1 + 0x1f0))(param_1);
        (**(code **)(*param_1 + 0x1dc))(param_1,1,0x10,0);
        if ((char)param_1[1] == '\0') {
          param_1[3] = 1;
        }
        goto joined_r0x002153f4;
      }
      if (param_2 == 4) {
        param_1[0xe7] = param_1[0xe7] | 4;
        fn_00683320(param_1,3,0);
        return 1;
      }
      if (param_2 == 5) {
        (**(code **)(*param_1 + 0x1dc))(param_1,2,8,0);
        if ((char)param_1[1] == '\0') {
          param_1[3] = 2;
        }
        param_1[100] = 0x3c;
        return 1;
      }
      if (param_2 == 8) {
        uVar6 = fn_00242b6c((int)*(short *)(param_1[0x67] + 4));
        bVar11 = uVar6 != 0;
        if (!bVar11) {
          uVar6 = (uint)*(byte *)((int)param_1 + 0x1e6);
        }
        if (bVar11 || uVar6 != 0) {
          return 1;
        }
        iVar5 = param_1[2];
        bVar11 = iVar5 != 1;
        if (!bVar11) {
          iVar5 = param_1[3];
        }
        if (bVar11 || iVar5 != 1) {
          return 1;
        }
        iVar5 = fn_006b0108(param_1,4,0);
        if (iVar5 == 0) {
          return 1;
        }
        iVar5 = (**(code **)(*param_1 + 0x19c))(param_1);
        if (iVar5 != 0) {
          return 1;
        }
        param_1[0xe7] = param_1[0xe7] | 4;
        (**(code **)(*param_1 + 0x1dc))(param_1,2,0x19,0);
        if ((char)param_1[1] == '\0') {
          param_1[3] = 2;
        }
        param_1[100] = 0x3c;
        iVar5 = param_1[0x7b];
joined_r0x0021559c:
        if (iVar5 == -1) {
          uVar7 = fn_00215b58(param_1,0);
          local_50 = param_1 + 0x7a;
          fn_00214c94(param_1,uVar7,1,1);
        }
        (**(code **)(*param_1 + 0xe4))(param_1,0x1000981,0);
        param_1[0xe7] = param_1[0xe7] & 0xfffffdff;
        return 1;
      }
      if (param_2 == 10) {
        if (param_1[3] != 1) {
          return 1;
        }
        iVar5 = fn_006b0108(param_1,0xb,1);
        if (iVar5 == 0) {
          return 1;
        }
        param_1[0xe7] = param_1[0xe7] | 4;
        fn_00683320(param_1,3,0);
        iVar5 = param_1[0x7b];
        goto joined_r0x0021559c;
      }
      if (param_2 == 0xb) {
        iVar5 = fn_00341260(0xffffffff);
        goto joined_r0x00215668;
      }
      if (param_2 == 9) {
        piVar8 = (int *)fn_006f7508(DAT_008977e0);
        iVar5 = (**(code **)(*piVar8 + 0x78))(piVar8,param_3);
        cVar1 = '\0';
        if (iVar5 != 0) {
          cVar1 = *(char *)(iVar5 + 0x58);
        }
        if (iVar5 == 0 || cVar1 == '\0') {
          return 1;
        }
        iVar4 = fn_002173e0(param_1,iVar5);
        if (iVar4 == 0) {
          return 1;
        }
        fn_0021761c(param_1,iVar5);
        return 1;
      }
      if (param_2 != 0x11) {
        if (param_2 == 0xd) {
          uVar6 = fn_001cab7c((int)*(char *)((int)param_1 + 0x1be));
          uVar3 = fn_001cab7c(1);
          if (uVar3 < uVar6) {
            return 1;
          }
          iVar5 = (**(code **)(*param_1 + 0x70))(param_1,1);
          if (iVar5 == 5) {
            return 1;
          }
          (**(code **)(*param_1 + 0x1dc))(param_1,2,0x1d,0);
          if ((char)param_1[1] == '\0') {
            param_1[3] = 2;
          }
          param_1[100] = 0x3c;
          if (param_1[0x7b] == -1) {
            uVar7 = fn_00215b58(param_1,0);
            local_50 = param_1 + 0x7a;
            fn_00214c94(param_1,uVar7,1,1);
          }
          (**(code **)(*param_1 + 0xe4))(param_1,0x1000981,0);
          param_1[0xe7] = param_1[0xe7] & 0xfffffdff;
          local_44 = 10;
          local_50 = (int *)0x0;
          local_4c = 1;
          local_48 = 0;
          fn_002181ec(param_1,param_1 + 8,0x14,999);
          return 1;
        }
        goto LAB_002158a8;
      }
      piVar8 = (int *)param_1[0xe0];
      iVar5 = param_1[0xe3];
      piVar10 = param_1 + 0xdf;
      if (piVar8 == (int *)0x0) {
        piVar8 = (int *)param_1[0xe1];
        if (piVar8 == (int *)param_1[0xe2]) {
          if (*piVar10 == 0) {
            uVar6 = 0x20;
          }
          else {
            uVar3 = *(uint *)(*piVar10 + 4);
            uVar6 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
            if (uVar6 < uVar3 + 0x20) {
              uVar6 = uVar3 + 0x20;
            }
          }
          piVar8 = (int *)fn_00100fc6(0xc,0);
          iVar4 = fn_00100fc6(uVar6 * 0xc,0);
          piVar8[2] = iVar4;
          *piVar8 = *piVar10;
          piVar8[1] = uVar6;
          *piVar10 = (int)piVar8;
          piVar8 = (int *)piVar8[2];
          param_1[0xe1] = (int)piVar8;
          param_1[0xe2] = (int)(piVar8 + uVar6 * 3);
        }
        param_1[0xe1] = (int)(piVar8 + 3);
      }
      else {
        param_1[0xe0] = *piVar8;
      }
      if (piVar8 + 2 != (int *)0x0) {
        piVar8[2] = param_3;
      }
      *piVar8 = iVar5;
      piVar8[1] = *(int *)(iVar5 + 4);
      **(undefined4 **)(iVar5 + 4) = piVar8;
      *(int **)(iVar5 + 4) = piVar8;
      param_1[0xe4] = param_1[0xe4] + 1;
      goto LAB_0021593c;
    }
    param_1[0xe7] = param_1[0xe7] & 0xfffffffb;
LAB_0021527c:
    if (param_1[0x39] != 0) {
      (**(code **)(*(int *)param_1[0x5c] + 0x8c))();
      (**(code **)(*param_1 + 0x88))(param_1);
      fn_001da640(param_1);
    }
    bVar9 = 0;
    do {
      if (param_1[(char)bVar9 * 4 + 0x7b] != -1) {
        (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
        param_1[(char)bVar9 * 4 + 0x7b] = -1;
        param_1[(char)bVar9 * 4 + 0x7a] = -1;
      }
      bVar9 = bVar9 + 1;
    } while (bVar9 < 7);
    goto LAB_001c7344;
  }
  if (param_1[2] == 2) {
    if (param_2 == 0xb) {
      iVar5 = fn_00341260(0xffffffff);
joined_r0x00215668:
      if (iVar5 == 0) {
        fn_00216530(param_1);
        return 1;
      }
      fn_002177ac(param_1);
      return 1;
    }
    if (param_2 == 0xc) {
      fn_006b1130(&local_40,param_1);
      local_50 = local_40;
      local_4c = iStack_3c;
      local_48 = uStack_38;
      local_44 = uStack_34;
      iVar4 = fn_001010c8(param_1 + 0xd7,&local_50,0x10);
      iVar5 = 0;
      if (iVar4 != 0) {
        iVar5 = local_4c;
      }
      if (iVar4 == 0 || iVar5 == 1) {
        return 1;
      }
      goto LAB_00215334;
    }
  }
LAB_002158a8:
  if (param_2 - 3U < 0xc) {
    return 1;
  }
LAB_0021593c:
  iVar5 = param_1[2];
  if (iVar5 == 2) {
    if (param_2 == 0) {
      if (param_1[0x39] != 0) {
        (**(code **)(*param_1 + 0x88))(param_1);
        fn_001da640(param_1);
      }
      goto LAB_001c7344;
    }
  }
  else if (iVar5 == 1 && param_2 == 0) goto LAB_0021527c;
  if (iVar5 == 0 && param_2 == 0) {
    fn_001c78a8(param_1,0xffffffff,0x13,0);
  }
  if (param_2 != 2) goto LAB_001c7344;
  if ((param_1[0xe7] & 0x2000000U) == 0) {
    param_1[0xe7] = param_1[0xe7] | 0x2000000;
  }
  else {
    iVar5 = param_1[2];
    bVar11 = iVar5 == 1;
    if (bVar11) {
      iVar5 = param_1[3];
    }
    if (bVar11 && iVar5 == 1) {
      iVar5 = param_1[0x5c];
      if (*(int *)(iVar5 + 0x100) == 1) {
        if (*(char *)((int)param_1 + 0x59) == '\0') goto LAB_00215a70;
        if (*(char *)((int)param_1 + 0x5a) == '\0') {
          iVar5 = param_1[99];
          goto joined_r0x00215a48;
        }
      }
      else {
        if (*(char *)(iVar5 + 0x59) == '\0') goto LAB_00215a70;
        if (*(char *)(iVar5 + 0x5a) == '\0') {
          iVar5 = *(int *)(iVar5 + 0x124);
joined_r0x00215a48:
          if (0x461c4000 < iVar5) goto LAB_00215a70;
        }
      }
      iVar5 = fn_006b0a1c();
      if (iVar5 != 0) {
LAB_00215a70:
        fn_005ef16c(param_1[0x39],0);
        return 0;
      }
    }
  }
  uVar6 = param_1[0xe7];
  uVar7 = 0;
  if ((uVar6 & 0x4000000) == 0) {
    bVar11 = (uVar6 & 0x8000000) == 0;
    if (bVar11) {
      uVar6 = param_1[0xe5];
    }
    if (bVar11 && uVar6 == 0) {
      uVar7 = 1;
    }
  }
  else {
    uVar7 = 1;
    param_1[0xe7] = uVar6 & 0xfbffffff;
  }
  fn_005ef16c(param_1[0x39],uVar7);
LAB_001c7344:
  if ((param_1[2] != -1) && (piVar8 = (int *)param_1[param_1[2] * 4 + 0x1a], piVar8 != (int *)0x0))
  {
                    /* WARNING: Could not recover jumptable at 0x001c736c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (**(code **)(*piVar8 + 8))(piVar8,param_2,param_3);
    return uVar7;
  }
  if ((param_2 == 2) && ((char)param_1[1] == '\0')) {
    param_1[3] = param_1[4];
  }
  return 1;
}


