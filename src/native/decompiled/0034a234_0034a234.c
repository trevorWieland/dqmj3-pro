#include "0034a234_0034a234.h"



void fn_0034a234(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  
  iVar1 = fn_0026a2a0(DAT_00897818);
  if (iVar1 != 0) {
    return;
  }
  iVar1 = param_1[0x1a];
  if (iVar1 == 0) {
    if (param_2 == 0) {
      return;
    }
    if (param_2 != 1) {
      return;
    }
    if (*(char *)(param_1[0x28] + 8) != '\0') {
      param_1[0x1c] = 1;
    }
    if (param_1[0x23] == 0) {
      param_1[0x23] = *(int *)(DAT_00897850 + 0x34);
      return;
    }
    return;
  }
  if (iVar1 != 1) {
    if (iVar1 == 2) {
      if (param_2 == 0) {
        return;
      }
      if (param_2 != 1) {
        return;
      }
      iVar1 = (**(code **)(*param_1 + 8))(param_1);
      uVar2 = fn_0028ec90(*(undefined4 *)(*(int *)(iVar1 + 0x18) + 0x10));
      iVar1 = (**(code **)(*param_1 + 8))(param_1);
      uVar3 = fn_0028ec90(*(undefined4 *)(*(int *)(iVar1 + 0x18) + 0x14));
      if ((uVar2 & uVar3) == 0) {
        return;
      }
      fn_001296e8(DAT_00898840);
      fn_006899f4(param_1,0,1);
      fn_00689d04(param_1,0);
      iVar1 = 3;
    }
    else if (iVar1 == 3) {
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      }
      if (param_2 != 1) {
        return;
      }
      iVar1 = fn_006ad868(param_1,1);
      if (iVar1 == 0) {
        return;
      }
      iVar1 = fn_00129004();
      if (*(int *)(iVar1 + 0x5c) != 0) {
        return;
      }
      if ((char)param_1[0x2a] == '\0') {
        iVar1 = fn_001f7424(param_1,0x48);
        if (iVar1 == 0) {
          fn_00689bd0(param_1,0,0);
        }
        else {
          fn_0036c340(param_1[0x17]);
        }
        *(undefined1 *)(param_1 + 0x2a) = 1;
        return;
      }
      iVar1 = (**(code **)(*param_1 + 8))(param_1);
      iVar1 = fn_0028eb38(*(undefined4 *)(*(int *)(iVar1 + 0x18) + 0xc));
      if (iVar1 != 0) {
        return;
      }
      fn_001f7768(param_1,0,1);
      iVar1 = 4;
    }
    else if (iVar1 == 4) {
      if (param_2 == 0) {
        if ((char)param_1[0x24] == '\0') {
          uVar6 = fn_0022f584((char *)&DAT_0034aaf4,0);
        }
        else {
          uVar6 = fn_0022f584((char *)&DAT_0034aad4,0);
        }
        fn_0036c5f4(param_1[0x17],uVar6,1,0,1,1,0,0,1);
        fn_00689bd0(param_1,0x48,0);
        fn_00178eec(param_1[0x20],param_1[0x22],1);
        if (*(char *)(param_1[0x28] + 0xd) == '\0') {
          return;
        }
        fn_002d6808(DAT_00897828);
        return;
      }
      if (param_2 != 1) {
        return;
      }
      if (*(char *)(param_1[0x17] + 0x31) != '\x01') {
        return;
      }
      *(undefined1 *)(param_1[0x17] + 0x31) = 0;
      iVar1 = 5;
    }
    else if (iVar1 == 5) {
      if (param_2 == 0) {
        return;
      }
      if (param_2 != 1) {
        return;
      }
      iVar1 = fn_001296d0(DAT_00898840);
      if (iVar1 != 0) {
        return;
      }
      fn_001f7cac(param_1,1);
      *(undefined1 *)(DAT_00897840 + 0x35) = 0;
      iVar1 = 6;
    }
    else {
      if (iVar1 == 6) {
        if (param_2 == 0) {
          return;
        }
        if (param_2 != 1) {
          return;
        }
        iVar1 = fn_006ad868(param_1,1);
        if (iVar1 == 0) {
          return;
        }
        *(undefined1 *)(param_1[0x28] + 8) = 0;
        *(undefined1 *)(param_1[0x28] + 9) = 0;
        *(undefined1 *)(param_1[0x28] + 0xe) = 0;
        *(undefined1 *)(param_1[0x28] + 10) = 0;
        fn_00178eec(param_1[0x20],param_1[0x22],0);
        param_1[0x1c] = 0xf;
        param_1[0x26] = 0;
        return;
      }
      if (iVar1 == 7) {
        if (param_2 == 0) {
          return;
        }
        if (param_2 != 1) {
          return;
        }
        iVar1 = (**(code **)(*param_1 + 8))(param_1);
        uVar2 = fn_0028ec90(*(undefined4 *)(*(int *)(iVar1 + 0x18) + 0x10));
        iVar1 = (**(code **)(*param_1 + 8))(param_1);
        uVar3 = fn_0028ec90(*(undefined4 *)(*(int *)(iVar1 + 0x18) + 0x14));
        if ((uVar2 & uVar3) != 0) {
                    /* WARNING: Subroutine does not return */
          fn_001638a0();
        }
        return;
      }
      if (iVar1 == 8) {
        if (param_2 == 0) {
          if (*(int *)(DAT_00898840 + 0x20) == 0xb) {
            return;
          }
          if ((uint)param_1[0x27] < (uint)param_1[0x26]) {
            return;
          }
          if (*(int *)(DAT_00898840 + 0x20) == 7) {
            uVar6 = fn_0022f584((char *)&DAT_0034aaf4,0);
            fn_005f3ad4(DAT_00898840,uVar6);
            return;
          }
          fn_005f3b74(DAT_00898840,*(undefined4 *)(DAT_00898840 + 0x24));
          return;
        }
        if (param_2 != 1) {
          return;
        }
        iVar1 = fn_0066e42c(DAT_00898840);
        if (iVar1 == 0) {
          return;
        }
        if (*(char *)(param_1[0x28] + 0xd) != '\0') {
          fn_002d6808(DAT_00897830);
        }
        if (*(int *)(DAT_00898840 + 0x20) == 7) {
          *(undefined1 *)(param_1[0x28] + 8) = 0;
          *(undefined1 *)(param_1[0x28] + 9) = 0;
          *(undefined1 *)(param_1[0x28] + 0xe) = 0;
          *(undefined1 *)(param_1[0x28] + 10) = 0;
          fn_00178eec(param_1[0x20],param_1[0x22],0);
          param_1[0x1c] = 0xe;
          param_1[0x26] = 0;
          return;
        }
        iVar1 = 9;
      }
      else {
        if (iVar1 == 9) {
          if (param_2 != 0) {
            if (param_2 != 1) {
              return;
            }
            iVar1 = fn_006ad868(param_1,1);
            if (iVar1 == 0) {
              return;
            }
            iVar1 = (**(code **)(*param_1 + 8))(param_1);
            iVar1 = fn_0028eb38(*(undefined4 *)(*(int *)(iVar1 + 0x18) + 0x10));
            if (iVar1 != 0) {
              return;
            }
            if (param_1[0x25] == 0) {
              fn_0036c340(param_1[0x17]);
            }
            else if (4 < (uint)param_1[0x25]) {
              fn_001f7810(param_1,1,0);
              if ((uint)param_1[0x27] < (uint)param_1[0x26]) {
                *(undefined1 *)(param_1[0x28] + 8) = 0;
                *(undefined1 *)(param_1[0x28] + 9) = 0;
                *(undefined1 *)(param_1[0x28] + 0xe) = 0;
                *(undefined1 *)(param_1[0x28] + 10) = 0;
                fn_00178eec(param_1[0x20],param_1[0x22],0);
                param_1[0x1c] = 10;
                param_1[0x26] = 0;
              }
              else {
                param_1[0x1c] = 0xc;
              }
            }
            param_1[0x25] = param_1[0x25] + 1;
            return;
          }
LAB_0034ae24:
          param_1[0x25] = 0;
          return;
        }
        if (iVar1 == 10) {
          if (param_2 == 0) {
            uVar6 = fn_0022f584((char *)&DAT_0034af8c,0);
            fn_0068974c(param_1,uVar6,0,1);
            *(undefined1 *)(param_1[0x17] + 0x30) = 0;
            iVar1 = fn_00145b00(0x9c,&DAT_00812c8c);
            if (iVar1 == 0) {
              piVar7 = (int *)0x0;
            }
            else {
              puVar4 = (undefined4 *)fn_005f62c0();
              puVar4[8] = &DAT_00859420;
              puVar4[9] = 0;
              puVar4[10] = 0;
              puVar4[0xb] = 0;
              puVar4[0xc] = 0;
              puVar4[0xd] = 0;
              *puVar4 = &DAT_00859b38;
              iVar1 = fn_00119b40(puVar4 + 0x10);
              piVar7 = (int *)(iVar1 + -0x40);
              fn_0066ddbc();
              fn_002fec40(iVar1 + 0x18,s_TaskEndMatchmake_008c6e09);
              *piVar7 = (int)&DAT_00859e00;
              fn_00673818(piVar7);
            }
            piVar5 = (int *)param_1[0x29];
            if (piVar5 != piVar7) {
              if (piVar5 != (int *)0x0) {
                (**(code **)(*piVar5 + 4))();
              }
              param_1[0x29] = (int)piVar7;
            }
            *(undefined1 *)(DAT_00898840 + 0x60) = 0;
            fn_0066de6c(param_1[0x29]);
            return;
          }
          if (param_2 != 1) {
            return;
          }
          fn_005f6270(param_1[0x29]);
          iVar1 = (**(code **)(*(int *)param_1[0x29] + 0x14))();
          if (iVar1 != 0) {
            return;
          }
          if (*(int *)(param_1[0x29] + 0x44) == 0) {
            *(undefined1 *)(param_1[0x17] + 0x30) = 1;
            param_1[0x1c] = 0xb;
            fn_0066ec10(DAT_00897850);
            return;
          }
          fn_005f3b74(DAT_00897850,*(undefined4 *)(param_1[0x29] + 0x48));
          iVar1 = 0xe;
        }
        else if (iVar1 == 0xb) {
          if (param_2 == 0) {
            return;
          }
          if (param_2 != 1) {
            return;
          }
          if (*(char *)(param_1[0x17] + 0x31) != '\x01') {
            return;
          }
          iVar1 = 0xe;
        }
        else {
          if (iVar1 != 0xc) {
            if (iVar1 == 0xd) {
              if (param_2 == 0) {
                *(undefined1 *)(param_1[0x17] + 0x30) = 1;
                uVar6 = fn_0022f584((char *)&DAT_0034afe0,0);
                fn_0068974c(param_1,uVar6,0,1);
                if ((char)param_1[0x24] == '\0') {
                  uVar6 = fn_0022f584((char *)&DAT_0034aaf4,0);
                  fn_0036c13c(param_1[0x17],uVar6);
                  return;
                }
                uVar6 = fn_0022f584((char *)&DAT_0034aad4,0);
                fn_0036c13c(param_1[0x17],uVar6);
                return;
              }
              if (param_2 != 1) {
                return;
              }
              if (*(char *)(param_1[0x17] + 0x31) == '\x01') {
                *(undefined1 *)(param_1[0x28] + 8) = 0;
                *(undefined1 *)(param_1[0x28] + 9) = 0;
                *(undefined1 *)(param_1[0x28] + 0xe) = 0;
                *(undefined1 *)(param_1[0x28] + 10) = 0;
                fn_00178eec(param_1[0x20],param_1[0x22],0);
                param_1[0x1c] = 0xe;
                param_1[0x26] = 0;
                return;
              }
              return;
            }
            if (iVar1 != 0xe) {
              if (iVar1 == 0xf && param_2 == 0) {
                *(undefined1 *)(DAT_00898840 + 0x60) = 0;
                *(undefined1 *)(param_1[0x28] + 0xb) = 1;
                *(undefined4 *)(DAT_00897828 + 0x68) = 0xda;
                DAT_008972cc = 1;
                return;
              }
              return;
            }
            if (param_2 == 0) {
              fn_0036c340(param_1[0x17]);
              param_1[0x25] = 0;
              return;
            }
            if (param_2 != 1) {
              return;
            }
            iVar1 = param_1[0x25];
            param_1[0x25] = iVar1 + 1U;
            if (iVar1 + 1U < 5) {
              return;
            }
            *(undefined1 *)(DAT_00898840 + 0x60) = 0;
            *(undefined1 *)(param_1[0x28] + 0xb) = 1;
            (**(code **)(*param_1 + 0x28))(param_1,0,0);
            DAT_00897798 = 1;
            return;
          }
          if (param_2 == 0) {
            uVar6 = fn_0022f584((char *)&DAT_0034afbc,0);
            fn_0068974c(param_1,uVar6,0,1);
            *(undefined1 *)(param_1[0x17] + 0x30) = 0;
            goto LAB_0034ae24;
          }
          if (param_2 != 1) {
            return;
          }
          iVar1 = param_1[0x25];
          param_1[0x25] = iVar1 + 1U;
          if (iVar1 + 1U < 0x10) {
            return;
          }
          iVar1 = 0xd;
          param_1[0x25] = 0;
        }
      }
    }
LAB_0034ac98:
    param_1[0x1c] = iVar1;
    return;
  }
  if (param_2 == 0) {
    *(undefined1 *)(param_1[0x28] + 0xb) = 0;
    goto LAB_0034ae24;
  }
  if (param_2 != 1) {
    return;
  }
  if (param_1[0x23] == 0) {
    param_1[0x23] = *(int *)(DAT_00897850 + 0x34);
  }
  iVar1 = param_1[0x28];
  if (*(char *)(iVar1 + 0xe) == '\0') {
    param_1[0x26] = 0;
  }
  else {
    param_1[0x26] = param_1[0x26] + 1;
  }
  if (*(char *)(iVar1 + 8) == '\0') {
    iVar1 = 0;
    goto LAB_0034ac98;
  }
  if (((*(char *)(iVar1 + 10) != '\x01') && (iVar1 = fn_0066e158(DAT_00898840), iVar1 == 0)) &&
     ((uint)param_1[0x26] <= (uint)param_1[0x27])) {
    return;
  }
  if (((param_1[0x23] == 2) && (*(char *)(param_1[0x28] + 0xc) == '\0')) &&
     (*(int *)(DAT_00898840 + 0x20) == 7)) {
    return;
  }
  *(undefined1 *)(DAT_00898840 + 0x60) = 1;
  iVar1 = param_1[0x25];
  param_1[0x25] = iVar1 + 1U;
  if (iVar1 + 1U < 0x10) {
    return;
  }
  if (param_1[0x23] == 2) {
    *(undefined4 *)(DAT_00897830 + 0x68) = 0xda;
  }
  if (*(int *)(DAT_00898840 + 0x20) == 8) {
    *(undefined1 *)(param_1 + 0x24) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x24) = 0;
  }
  *(undefined1 *)(param_1[0x28] + 9) = 1;
  if (param_1[0x23] == 1) {
    iVar1 = (**(code **)(*param_1 + 8))(param_1);
    uVar2 = fn_0028ec90(*(undefined4 *)(*(int *)(iVar1 + 0x18) + 0x10));
    iVar1 = (**(code **)(*param_1 + 8))(param_1);
    uVar3 = fn_0028ec90(*(undefined4 *)(*(int *)(iVar1 + 0x18) + 0x14));
    if ((uVar2 & uVar3) == 0) {
      iVar1 = 2;
    }
    else {
      fn_001296e8(DAT_00898840);
      fn_006899f4(param_1,0,1);
      fn_00689d04(param_1,0);
      iVar1 = 3;
    }
  }
  else {
    if (param_1[0x23] != 2) goto LAB_0034a524;
    iVar1 = (**(code **)(*param_1 + 8))(param_1);
    uVar2 = fn_0028ec90(*(undefined4 *)(*(int *)(iVar1 + 0x18) + 0x10));
    iVar1 = (**(code **)(*param_1 + 8))(param_1);
    uVar3 = fn_0028ec90(*(undefined4 *)(*(int *)(iVar1 + 0x18) + 0x14));
    if ((uVar2 & uVar3) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    iVar1 = 7;
  }
  param_1[0x1c] = iVar1;
LAB_0034a524:
  if (*(char *)(param_1[0x28] + 10) == '\x02') {
    fn_0011de7c();
    return;
  }
  return;
}


