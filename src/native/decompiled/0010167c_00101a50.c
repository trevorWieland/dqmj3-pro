#include "0010167c_00101a50.h"



uint fn_00101a50(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int local_28;
  int local_24;
  undefined4 uStack_4;
  
  local_24 = param_1;
  if (param_2 != 0) {
    local_24 = param_2 * 2 + param_1 + -2;
  }
  local_28 = param_1;
  uStack_4 = param_4;
  uVar1 = fn_0030091a(param_3,&local_28,&uStack_4,0x300941);
  if (param_2 != 0) {
    local_24 = local_24 + 2;
    fn_00300940(0,&local_28);
  }
  if (param_2 <= uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



int fn_00101a3e(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}



int fn_0010167c(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  int local_58;
  int local_54;
  int local_50;
  undefined4 *local_4c;
  uint local_48 [8];
  int local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 *puStack_18;
  
  local_28 = 0;
  local_20 = 1;
  iVar10 = 0;
  local_4c = param_2 + 3;
  local_1c = param_1;
  puStack_18 = param_2;
LAB_00101692:
  while( true ) {
    iVar1 = (*(code *)param_2[5])(local_4c,1);
    if (iVar1 == 0) {
      return local_28;
    }
    if (iVar1 == 0x25) break;
    iVar2 = (*(code *)param_2[8])();
    if (iVar2 == 0) {
      iVar2 = (*(code *)param_2[6])(local_1c);
      if (iVar2 != iVar1) {
        (*(code *)param_2[7])(local_1c);
        goto joined_r0x001016f4;
      }
LAB_001016e8:
      iVar10 = iVar10 + 1;
    }
    else {
      do {
        (*(code *)param_2[5])(local_4c,1);
        iVar1 = (*(code *)param_2[8])();
      } while (iVar1 != 0);
      (*(code *)param_2[5])(local_4c,0xffffffff);
      while( true ) {
        (*(code *)param_2[6])(local_1c);
        iVar1 = (*(code *)param_2[8])();
        if (iVar1 == 0) break;
        iVar10 = iVar10 + 1;
      }
      (*(code *)param_2[7])(local_1c);
    }
  }
  iVar2 = 0;
  uVar9 = 0;
  iVar1 = (*(code *)param_2[5])(local_4c,0);
  if (iVar1 == 0x2a) {
    (*(code *)param_2[5])(local_4c,1);
    uVar9 = 1;
  }
  while (iVar1 = (*(code *)param_2[5])(local_4c,1), iVar1 - 0x30U < 10) {
    if (0xccccccc < iVar2) {
      return local_28;
    }
    iVar2 = iVar2 * 10 + iVar1 + -0x30;
    if (iVar2 < 0) {
      return local_28;
    }
    uVar9 = uVar9 | 0x10;
  }
  if (-1 < (int)(uVar9 << 0x1b)) {
    iVar2 = 0x7fffffff;
  }
  if (iVar1 == 0x6c) {
    iVar1 = (*(code *)param_2[5])(local_4c,1);
    if (iVar1 == 0x6c) {
LAB_001017b4:
      uVar3 = 2;
      goto LAB_00101772;
    }
    uVar3 = 4;
LAB_001017aa:
    uVar9 = uVar9 | uVar3;
  }
  else {
    if (iVar1 == 0x4c) {
      uVar3 = 0x20;
LAB_00101772:
      uVar9 = uVar9 | uVar3;
    }
    else {
      if (iVar1 == 0x68) {
        iVar1 = (*(code *)param_2[5])(local_4c,1);
        if (iVar1 != 0x68) {
          uVar3 = 8;
          goto LAB_001017aa;
        }
        uVar3 = 0x800;
        goto LAB_00101772;
      }
      if (iVar1 == 0x6a) goto LAB_001017b4;
      if ((iVar1 != 0x74) && (iVar1 != 0x7a)) goto LAB_0010177c;
    }
    iVar1 = (*(code *)param_2[5])(local_4c,1);
  }
LAB_0010177c:
  param_2[2] = iVar2;
  param_2[1] = uVar9;
  if (iVar1 == 0x65) goto LAB_00101828;
  if (iVar1 < 0x66) {
    if (iVar1 == 0x58) {
LAB_001018b0:
      param_2[1] = uVar9 | 0x40;
      if ((int)(uVar9 << 0x1e) < 0) {
        uVar7 = 0x10;
        goto LAB_001018c0;
      }
LAB_001018cc:
      uVar7 = 0x10;
LAB_001018d0:
      iVar1 = fn_0010091c(0xfffffffe,local_1c,uVar7,param_2);
    }
    else if (iVar1 < 0x59) {
      if (iVar1 != 0x45) {
        if (iVar1 < 0x46) {
          if (iVar1 == 0x25) {
            iVar2 = (*(code *)param_2[6])(local_1c);
            if (iVar2 != 0x25) {
              (*(code *)param_2[7])(local_1c);
joined_r0x001016f4:
              if (iVar2 != -1) {
                return local_28;
              }
              if (local_28 == 0) {
                return -1;
              }
              return local_28;
            }
            goto LAB_001016e8;
          }
          if (iVar1 != 0x41) {
            return local_28;
          }
        }
        else if ((iVar1 != 0x46) && (iVar1 != 0x47)) {
          return local_28;
        }
      }
LAB_00101828:
      iVar1 = fn_0030079c(0xfffffffe,local_1c,&local_58,param_2);
    }
    else {
      if (iVar1 != 0x5b) {
        if (iVar1 == 0x61) goto LAB_00101828;
        if (iVar1 != 99) {
          if (iVar1 != 100) {
            return local_28;
          }
LAB_001018a0:
          param_2[1] = uVar9 | 0x40;
          if (-1 < (int)(uVar9 << 0x1e)) {
            uVar7 = 10;
            goto LAB_001018d0;
          }
          uVar7 = 10;
          goto LAB_001018c0;
        }
      }
LAB_001018dc:
      puVar8 = (uint *)0x0;
      local_54 = 0;
      local_58 = 0;
      local_50 = 0;
      local_24 = 0;
      if (iVar1 == 99) {
        if (-1 < (int)(uVar9 << 0x1b)) {
          param_2[2] = 1;
        }
        local_58 = 1;
      }
      else if (iVar1 == 0x5b) {
        local_24 = param_2[3];
        iVar1 = (*(code *)param_2[5])(local_4c,1,(code *)param_2[5],0);
        if (iVar1 == 0x5e) {
          local_54 = 1;
          local_24 = param_2[3];
          iVar1 = (*(code *)param_2[5])(local_4c,1);
        }
        if (param_2[4] == 0) {
          iVar2 = 0;
          do {
            iVar6 = iVar2 + 1;
            local_48[iVar2] = 0;
            iVar2 = iVar6;
          } while (iVar6 < 8);
        }
        do {
          if (iVar1 == 0) {
            return local_28;
          }
          if (param_2[4] == 0) {
            local_48[(int)(((uint)(iVar1 >> 0x1f) >> 0x1b) + iVar1) >> 5] =
                 local_48[(int)(((uint)(iVar1 >> 0x1f) >> 0x1b) + iVar1) >> 5] |
                 1 << (iVar1 % 0x20 & 0xffU);
          }
          else {
            local_50 = local_50 + 1;
          }
          iVar1 = (*(code *)param_2[5])(local_4c,1);
        } while (iVar1 != 0x5d);
        if (local_54 != 0) {
          iVar1 = 0;
          do {
            iVar2 = iVar1 + 1;
            local_48[iVar1] = ~local_48[iVar1];
            iVar1 = iVar2;
          } while (iVar2 < 8);
        }
        puVar8 = local_48;
      }
      iVar1 = local_58;
      if (param_2[4] == 0) {
        if ((int)((uint)*(byte *)(param_2 + 1) << 0x1d) < 0) {
          iVar1 = fn_00100cee(0xfffffffe,local_1c,param_2);
        }
        else {
          iVar1 = fn_00100a66(0xfffffffe,local_1c,param_2,puVar8);
        }
      }
      else {
        local_58 = local_50;
        local_50 = iVar1;
        if ((int)((uint)*(byte *)(param_2 + 1) << 0x1d) < 0) {
          iVar1 = fn_00100ef6(0xfffffffe,local_1c,param_2);
        }
        else {
          iVar1 = fn_00100e0e(0xfffffffe,local_1c,param_2,local_24);
        }
      }
    }
  }
  else {
    if (iVar1 == 0x6f) {
      param_2[1] = uVar9 | 0x40;
      if (-1 < (int)(uVar9 << 0x1e)) {
        uVar7 = 8;
        goto LAB_001018d0;
      }
      uVar7 = 8;
    }
    else {
      if (0x6f < iVar1) {
        if (iVar1 != 0x70) {
          if (iVar1 == 0x73) goto LAB_001018dc;
          if (iVar1 == 0x75) goto LAB_001018a0;
          if (iVar1 != 0x78) {
            return local_28;
          }
          goto LAB_001018b0;
        }
        param_2[1] = uVar9 & 0xfffff7f1;
        goto LAB_001018cc;
      }
      if ((iVar1 == 0x66) || (iVar1 == 0x67)) goto LAB_00101828;
      if (iVar1 != 0x69) {
        if (iVar1 != 0x6e) {
          return local_28;
        }
        if ((uVar9 & 1) == 0) {
          puVar4 = (undefined4 *)*param_2;
          *param_2 = puVar4 + 1;
          piVar5 = (int *)*puVar4;
          if ((int)(uVar9 << 0x14) < 0) {
            *(char *)piVar5 = (char)iVar10;
          }
          else if ((int)(uVar9 << 0x1c) < 0) {
            *(short *)piVar5 = (short)iVar10;
          }
          else if ((int)(uVar9 << 0x1e) < 0) {
            *piVar5 = iVar10;
            piVar5[1] = iVar10 >> 0x1f;
          }
          else {
            *piVar5 = iVar10;
          }
        }
        goto LAB_00101692;
      }
      param_2[1] = uVar9 | 0x40;
      if (-1 < (int)(uVar9 << 0x1e)) {
        uVar7 = 0;
        goto LAB_001018d0;
      }
      uVar7 = 0;
    }
LAB_001018c0:
    iVar1 = fn_00100ba4(0xfffffffe,local_1c,uVar7,param_2);
  }
  if (iVar1 < 0) {
    if (iVar1 != -1) {
      return local_28;
    }
    if (local_20 == 0) {
      return local_28;
    }
    return -1;
  }
  if ((uVar9 & 1) == 0) {
    local_28 = local_28 + 1;
  }
  iVar10 = iVar10 + iVar1;
  local_20 = 0;
  goto LAB_00101692;
}


