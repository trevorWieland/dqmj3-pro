#include "001975b0_00197b18.h"



undefined4 fn_00197b18(int param_1,int *param_2,uint *param_3,uint *param_4,int param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  uint uVar8;
  uint local_28;
  int *local_24;
  
  iVar5 = *param_2;
  iVar2 = iVar5 + -0x8000400;
  if (iVar5 == 0x8000400) {
    if (param_5 == 0) {
      uVar4 = fn_001a1dc8(*(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x74),param_3,param_4);
      return uVar4;
    }
    return 0;
  }
  if (iVar5 < 0x8000400) {
    if (iVar5 == 0x8000010) {
      if ((*param_3 & 0x4000000) == 0) {
        if (param_5 == 0) {
          uVar4 = fn_001a1dc8(*(undefined4 *)(*(int *)(param_1 + 0x8c) + 100),param_3,param_4);
          return uVar4;
        }
        return 0;
      }
      if (*param_3 == 0x5000004) {
        uVar3 = (uint)(float)param_3[1];
      }
      else {
        uVar3 = param_3[1];
      }
      uVar8 = 0x8000010;
      if (-1 < (int)uVar3) {
        uVar8 = uVar3;
      }
      iVar2 = *(int *)(param_2[1] + 0x14);
      if (-1 >= (int)uVar3) {
        uVar8 = -uVar3;
      }
      if (iVar2 <= (int)uVar8) {
        return 0;
      }
      if ((int)uVar3 < 0) {
        uVar3 = iVar2 - uVar3;
      }
      cVar1 = *(char *)(param_2[1] + uVar3 + 0x1c);
      if (((*param_4 & 0x8000000) != 0) &&
         (iVar2 = *(int *)(param_4[1] + 4) + -1, *(int *)(param_4[1] + 4) = iVar2, iVar2 == 0)) {
        (**(code **)(*(int *)param_4[1] + 8))();
      }
      *param_4 = 0x5000002;
      param_4[1] = (int)cVar1;
      return 1;
    }
    if (iVar5 < 0x8000010) {
      if ((iVar5 != 0x1000008) && (iVar5 != 0x5000002 && iVar5 != 0x5000004)) {
        return 0;
      }
      if (param_5 == 0) {
        uVar4 = fn_001a1dc8(*(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x6c),param_3,param_4);
        return uVar4;
      }
      return 0;
    }
    if (iVar5 == 0x8000040) {
      if (param_5 == 0) {
        uVar4 = fn_001a1dc8(*(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x5c),param_3,param_4);
        return uVar4;
      }
      return 0;
    }
    if ((iVar5 == 0x8000100 || iVar5 == 0x8000200) && param_5 == 0) {
      uVar4 = fn_001a1dc8(*(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x7c),param_3,param_4);
      return uVar4;
    }
    return 0;
  }
  if (iVar2 != 0x1fffc20) {
    if (iVar2 < 0x1fffc20) {
      if (iVar2 == 0xc00) {
        if (param_5 == 0) {
          uVar4 = fn_001a1dc8(*(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x84),param_3,param_4);
          return uVar4;
        }
        return 0;
      }
      if (iVar2 != 0x3c00) {
        if (iVar2 == 0xfc00 && param_5 == 0) {
          uVar4 = fn_001a1dc8(*(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x9c),param_3,param_4);
          return uVar4;
        }
        return 0;
      }
      iVar5 = param_2[1];
      iVar2 = fn_001a1dc8(*(undefined4 *)(iVar5 + 0x18),param_3,param_4);
      if (iVar2 == 0) {
        return 0;
      }
      piVar6 = (int *)param_4[1];
      if (((uint)piVar6 & 0x2000000) == 0) {
        fn_0019e864(param_4,*(int *)(iVar5 + 0x2c) + ((uint)piVar6 & 0xffffff) * 0x10);
        return 1;
      }
      puVar7 = (uint *)(*(int *)(iVar5 + 0x20) + ((uint)piVar6 & 0xffffff) * 0x10);
      uVar3 = *puVar7;
      uVar8 = puVar7[1];
      if (uVar3 == 0x8010000) {
        uVar3 = *(uint *)(uVar8 + 0xc);
        uVar8 = *(uint *)(uVar8 + 0x10);
      }
      param_4[1] = uVar8;
      uVar8 = *param_4;
      *param_4 = uVar3;
      if ((uVar3 & 0x8000000) != 0) {
        *(int *)(param_4[1] + 4) = *(int *)(param_4[1] + 4) + 1;
      }
      if ((uVar8 & 0x8000000) == 0) {
        return 1;
      }
      iVar2 = piVar6[1];
      piVar6[1] = iVar2 + -1;
      if (iVar2 + -1 == 0) {
        (**(code **)(*piVar6 + 8))(piVar6);
        return 1;
      }
      return 1;
    }
    if (iVar2 != 0x1fffc80) {
      if (iVar2 != 0x2007c00 || param_5 != 0) {
        return 0;
      }
      iVar2 = *(int *)(param_1 + 0x30);
      *(int *)(param_1 + 0x30) = iVar2 + 1;
      fn_0019e864(*(int *)(param_1 + 0x18) + iVar2 * 8,param_2);
      iVar2 = *(int *)(param_1 + 0x30);
      *(int *)(param_1 + 0x30) = iVar2 + 1;
      fn_0019e864(*(int *)(param_1 + 0x18) + iVar2 * 8,param_3);
      iVar2 = fn_0018d4fc(param_1,param_2[1],7,2,param_4);
      if (iVar2 == 0) {
        uVar4 = fn_001a1dc8(*(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x94),param_3,param_4);
        return uVar4;
      }
      return 1;
    }
  }
  piVar6 = *(int **)(param_2[1] + 0x18);
  if (piVar6 == (int *)0x0) {
LAB_00197d94:
    if (*param_2 == 0xa000020 && param_5 == 0) {
      uVar4 = fn_001a1dc8(*(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x54),param_3,param_4);
      return uVar4;
    }
    return 0;
  }
  local_28 = 0xa000020;
  piVar6[1] = piVar6[1] + 1;
  local_24 = piVar6;
  iVar2 = fn_00198578(param_1,&local_28,param_3,param_4,param_5,0);
  if (((local_28 & 0x8000000) != 0) &&
     (iVar5 = local_24[1], local_24[1] = iVar5 + -1, iVar5 + -1 == 0)) {
    (**(code **)(*local_24 + 8))();
  }
  if (iVar2 == 0) {
    if (param_5 != 0) {
      return 0;
    }
    iVar2 = *(int *)(param_1 + 0x30);
    *(int *)(param_1 + 0x30) = iVar2 + 1;
    fn_0019e864(*(int *)(param_1 + 0x18) + iVar2 * 8,param_2);
    iVar2 = *(int *)(param_1 + 0x30);
    *(int *)(param_1 + 0x30) = iVar2 + 1;
    fn_0019e864(*(int *)(param_1 + 0x18) + iVar2 * 8,param_3);
    iVar2 = fn_0018d4fc(param_1,param_2[1],7,2,param_4);
    if (iVar2 == 0) goto LAB_00197d94;
  }
  return 1;
}



/* WARNING: Removing unreachable block (ram,0x001978e8) */

undefined4
fn_001975b0(int param_1,int *param_2,uint *param_3,uint *param_4,uint *param_5,int param_6,
            undefined4 param_7,undefined4 *param_8)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  uint uVar10;
  uint local_38;
  int *local_34;
  
  iVar1 = *param_2;
  if (iVar1 == 0x8004000) {
    uVar8 = fn_001a178c(param_2[1],param_5);
    if (uVar8 == 0xffffffff) goto LAB_001977a8;
    if ((*param_5 & 0x8000000) == 0) goto LAB_00197798;
    iVar1 = *(int *)(param_5[1] + 4) + -1;
    *(int *)(param_5[1] + 4) = iVar1;
  }
  else if (iVar1 < 0x8004000) {
    if (iVar1 == 0x8000010) {
      uVar8 = fn_001a1eec(param_2[1],param_5);
      if (uVar8 == 0xffffffff) goto LAB_001977a8;
      if ((*param_5 & 0x8000000) == 0) goto LAB_00197798;
      iVar1 = *(int *)(param_5[1] + 4) + -1;
      *(int *)(param_5[1] + 4) = iVar1;
    }
    else {
      if (iVar1 != 0x8000040) {
        if (iVar1 == 0x8000400) {
          if (*(char *)(param_2[1] + 0x74) == '\x02') goto LAB_001977a8;
          if (*(char *)(param_2[1] + 0x74) == '\x01') {
            uVar8 = 0;
            if (*param_5 == 0x5000002) {
              uVar8 = param_5[1] + 1;
            }
            if (((*param_3 & 0x8000000) != 0) &&
               (iVar1 = *(int *)(param_3[1] + 4) + -1, *(int *)(param_3[1] + 4) = iVar1, iVar1 == 0)
               ) {
              (**(code **)(*(int *)param_3[1] + 8))();
            }
            param_3[1] = uVar8;
            *param_3 = 0x5000002;
            if (((*param_5 & 0x8000000) != 0) &&
               (iVar1 = *(int *)(param_5[1] + 4) + -1, *(int *)(param_5[1] + 4) = iVar1, iVar1 == 0)
               ) {
              (**(code **)(*(int *)param_5[1] + 8))();
            }
            param_5[1] = uVar8;
            *param_5 = 0x5000002;
            fn_0019e378(param_2[1],param_1,param_6 + 1);
            *param_8 = 0;
            return 1;
          }
        }
LAB_001979f8:
        uVar4 = fn_00191f20(param_2);
        fn_0019813c(param_1,(char *)&DAT_00197b04,uVar4);
        return 0;
      }
      iVar1 = param_2[1];
      uVar2 = fn_001a2b2c(param_5);
      if (*(uint *)(iVar1 + 0x1c) <= uVar2) {
LAB_001977a8:
        *param_8 = param_7;
        return 1;
      }
      if (((*param_3 & 0x8000000) != 0) &&
         (iVar5 = *(int *)(param_3[1] + 4) + -1, *(int *)(param_3[1] + 4) = iVar5, iVar5 == 0)) {
        (**(code **)(*(int *)param_3[1] + 8))();
      }
      param_3[1] = uVar2;
      *param_3 = 0x5000002;
      puVar6 = (uint *)(*(int *)(iVar1 + 0x18) + uVar2 * 8);
      uVar8 = *puVar6;
      if (uVar8 == 0x8010000) {
        uVar8 = *(uint *)(puVar6[1] + 0xc);
        uVar10 = *(uint *)(puVar6[1] + 0x10);
      }
      else {
        uVar10 = puVar6[1];
      }
      uVar7 = *param_4;
      *param_4 = uVar8;
      piVar3 = (int *)param_4[1];
      param_4[1] = uVar10;
      if ((uVar8 & 0x8000000) != 0) {
        *(int *)(uVar10 + 4) = *(int *)(uVar10 + 4) + 1;
      }
      if (((uVar7 & 0x8000000) != 0) && (iVar1 = piVar3[1], piVar3[1] = iVar1 + -1, iVar1 + -1 == 0)
         ) {
        (**(code **)(*piVar3 + 8))();
      }
      uVar8 = uVar2 + 1;
      if (uVar2 == 0xfffffffe) goto LAB_001977a8;
      if ((*param_5 & 0x8000000) == 0) goto LAB_00197798;
      iVar1 = *(int *)(param_5[1] + 4) + -1;
      *(int *)(param_5[1] + 4) = iVar1;
    }
  }
  else {
    iVar5 = iVar1 + -0xa000020;
    if (iVar5 != 0) {
      bVar9 = iVar5 != 0x60;
      if (bVar9) {
        iVar5 = iVar1 + -0xa007020;
      }
      if (!bVar9 || iVar5 == 0xfe0) {
        if (*(int *)(param_2[1] + 0x18) == 0) {
          return 0;
        }
        local_38 = 0x1000001;
        local_34 = (int *)0x0;
        iVar1 = *(int *)(param_1 + 0x30);
        *(int *)(param_1 + 0x30) = iVar1 + 1;
        fn_0019e864(*(int *)(param_1 + 0x18) + iVar1 * 8,param_2);
        iVar1 = *(int *)(param_1 + 0x30);
        *(int *)(param_1 + 0x30) = iVar1 + 1;
        fn_0019e864(*(int *)(param_1 + 0x18) + iVar1 * 8,param_5);
        iVar1 = fn_0018d4fc(param_1,param_2[1],9,2,&local_38);
        if (iVar1 == 0) {
          fn_0019813c(param_1,(char *)&DAT_00197af4);
          if ((local_38 & 0x8000000) == 0) {
            return 0;
          }
          iVar1 = local_34[1] + -1;
          local_34[1] = iVar1;
        }
        else {
          uVar4 = fn_0019e864(param_3,&local_38);
          fn_0019e864(param_5,uVar4);
          if (local_38 == 0x1000001) {
            *param_8 = param_7;
            return 1;
          }
          iVar1 = fn_00198578(param_1,param_2,&local_38,param_4,0,0);
          if (iVar1 != 0) {
            *param_8 = 1;
            if ((local_38 & 0x8000000) == 0) {
              return 1;
            }
            iVar1 = local_34[1];
            local_34[1] = iVar1 + -1;
            if (iVar1 + -1 == 0) {
              (**(code **)(*local_34 + 8))();
              return 1;
            }
            return 1;
          }
          fn_0019813c(param_1,(char *)&DAT_00197ad4);
          if ((local_38 & 0x8000000) == 0) {
            return 0;
          }
          iVar1 = local_34[1] + -1;
          local_34[1] = iVar1;
        }
        if (iVar1 == 0) {
          (**(code **)(*local_34 + 8))();
          return 0;
        }
        return 0;
      }
      goto LAB_001979f8;
    }
    uVar8 = fn_001a8604(param_2[1],0,param_5,param_3,param_4);
    if (uVar8 == 0xffffffff) goto LAB_001977a8;
    if ((*param_5 & 0x8000000) == 0) goto LAB_00197798;
    iVar1 = *(int *)(param_5[1] + 4) + -1;
    *(int *)(param_5[1] + 4) = iVar1;
  }
  if (iVar1 == 0) {
    (**(code **)(*(int *)param_5[1] + 8))();
  }
LAB_00197798:
  param_5[1] = uVar8;
  *param_5 = 0x5000002;
  *param_8 = 1;
  return 1;
}


