#include "00689d10_0068a438.h"



void fn_0068a438(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  if (*(int *)(param_1 + 0x60) != 0) {
    fn_0028c284(*(int *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x54),param_2,param_3,10);
  }
  *(undefined1 *)(param_1 + 0x53) = param_4;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  return;
}



void fn_0068a394(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  *(undefined1 *)(param_1 + 0x1c) = 1;
  if (*(int *)(param_1 + 0x60) != 0) {
    fn_0028c12c(*(int *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x54),param_2,param_3,10);
  }
  if (param_4 != 0) {
    *(undefined1 *)(param_1 + 0xc) = 0;
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  *(char *)(param_1 + 0x52) = (char)param_4;
  return;
}



void fn_0068a364(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 local_c [3];
  
  local_c[0] = *param_2;
  fn_001f757c(*(undefined4 *)(*(int *)(param_1 + 4) + 0x18),local_c,param_3,param_4,param_5);
  return;
}



void fn_0068a204(int *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1[0xf] + 0x10);
  if ((uVar1 & 0x10000) == 0) {
    if ((uVar1 & 0x20000) == 0) {
      if ((uVar1 & 0x40000) == 0) {
        if ((uVar1 & 0x80000) == 0) {
          if ((uVar1 & 0x100000) == 0) {
            if ((uVar1 & 0x200000) == 0) {
              if ((uVar1 & 1) == 0) {
                if ((uVar1 & 2) != 0) {
                  (**(code **)(*param_1 + 0xa8))(param_1);
                }
              }
              else {
                (**(code **)(*param_1 + 0xa4))(param_1);
              }
            }
            else {
              (**(code **)(*param_1 + 0xa0))(param_1);
            }
          }
          else {
            (**(code **)(*param_1 + 0x9c))(param_1);
          }
        }
        else {
          (**(code **)(*param_1 + 0x98))(param_1);
        }
      }
      else {
        (**(code **)(*param_1 + 0x94))(param_1);
      }
    }
    else {
      (**(code **)(*param_1 + 0x90))(param_1);
    }
  }
  else {
    (**(code **)(*param_1 + 0x8c))(param_1);
  }
  if ((uVar1 & 4) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0068a308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xac))(param_1);
    return;
  }
  if ((uVar1 & 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0068a324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb0))(param_1);
    return;
  }
  if ((uVar1 & 0x400000) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0068a340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb4))(param_1);
    return;
  }
  if ((uVar1 & 0x1000000) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0068a35c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb8))(param_1);
  return;
}



void fn_0068a0a4(int *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1[0xf] + 0x14);
  if ((uVar1 & 0x10000) == 0) {
    if ((uVar1 & 0x20000) == 0) {
      if ((uVar1 & 0x40000) == 0) {
        if ((uVar1 & 0x80000) == 0) {
          if ((uVar1 & 0x100000) == 0) {
            if ((uVar1 & 0x200000) == 0) {
              if ((uVar1 & 1) == 0) {
                if ((uVar1 & 2) != 0) {
                  (**(code **)(*param_1 + 0xd8))(param_1);
                }
              }
              else {
                (**(code **)(*param_1 + 0xd4))(param_1);
              }
            }
            else {
              (**(code **)(*param_1 + 0xd0))(param_1);
            }
          }
          else {
            (**(code **)(*param_1 + 0xcc))(param_1);
          }
        }
        else {
          (**(code **)(*param_1 + 200))(param_1);
        }
      }
      else {
        (**(code **)(*param_1 + 0xc4))(param_1);
      }
    }
    else {
      (**(code **)(*param_1 + 0xc0))(param_1);
    }
  }
  else {
    (**(code **)(*param_1 + 0xbc))(param_1);
  }
  if ((uVar1 & 4) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0068a1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xdc))(param_1);
    return;
  }
  if ((uVar1 & 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0068a1c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xe0))(param_1);
    return;
  }
  if ((uVar1 & 0x400000) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0068a1e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xe4))(param_1);
    return;
  }
  if ((uVar1 & 0x1000000) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0068a1fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}



void fn_00689f44(int *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1[0xf] + 0xc);
  if ((uVar1 & 0x10000) == 0) {
    if ((uVar1 & 0x20000) == 0) {
      if ((uVar1 & 0x40000) == 0) {
        if ((uVar1 & 0x80000) == 0) {
          if ((uVar1 & 0x100000) == 0) {
            if ((uVar1 & 0x200000) == 0) {
              if ((uVar1 & 1) == 0) {
                if ((uVar1 & 2) != 0) {
                  (**(code **)(*param_1 + 0x78))(param_1);
                }
              }
              else {
                (**(code **)(*param_1 + 0x74))(param_1);
              }
            }
            else {
              (**(code **)(*param_1 + 0x70))(param_1);
            }
          }
          else {
            (**(code **)(*param_1 + 0x6c))(param_1);
          }
        }
        else {
          (**(code **)(*param_1 + 0x68))(param_1);
        }
      }
      else {
        (**(code **)(*param_1 + 100))(param_1);
      }
    }
    else {
      (**(code **)(*param_1 + 0x60))(param_1);
    }
  }
  else {
    (**(code **)(*param_1 + 0x5c))(param_1);
  }
  if ((uVar1 & 4) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0068a048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x7c))(param_1);
    return;
  }
  if ((uVar1 & 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0068a064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x80))(param_1);
    return;
  }
  if ((uVar1 & 0x400000) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0068a080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x84))(param_1);
    return;
  }
  if ((uVar1 & 0x1000000) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0068a09c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x88))(param_1);
  return;
}



void fn_00689ed4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_003dd57c(*(undefined4 *)(param_1 + 0xfc));
  iVar2 = fn_0028eac0(*(undefined4 *)(*(int *)(param_1 + 4) + 0x18));
  if (iVar2 == 0) {
    fn_001f7438(*(undefined4 *)(*(int *)(param_1 + 4) + 0x18),uVar1,0,0);
    return;
  }
  return;
}



void fn_00689d6c(int *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1[0xf] + 8);
  if ((uVar1 & 0x10000) == 0) {
    if ((uVar1 & 0x20000) == 0) {
      if ((uVar1 & 0x40000) == 0) {
        if ((uVar1 & 0x80000) == 0) {
          if ((uVar1 & 0x100000) == 0) {
            if ((uVar1 & 0x200000) == 0) {
              if ((uVar1 & 1) == 0) {
                if ((uVar1 & 2) != 0) {
                  (**(code **)(*param_1 + 0x48))(param_1);
                }
              }
              else {
                (**(code **)(*param_1 + 0x44))(param_1);
              }
            }
            else {
              (**(code **)(*param_1 + 0x40))(param_1);
            }
          }
          else {
            (**(code **)(*param_1 + 0x3c))(param_1);
          }
        }
        else {
          (**(code **)(*param_1 + 0x38))(param_1);
        }
      }
      else {
        (**(code **)(*param_1 + 0x34))(param_1);
      }
    }
    else {
      (**(code **)(*param_1 + 0x30))(param_1);
    }
  }
  else {
    (**(code **)(*param_1 + 0x2c))(param_1);
  }
  if ((uVar1 & 4) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00689e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x4c))(param_1);
    return;
  }
  if ((uVar1 & 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00689e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x50))(param_1);
    return;
  }
  if ((uVar1 & 0x400000) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00689ea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x54))(param_1);
    return;
  }
  if ((uVar1 & 0x1000000) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00689ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x58))(param_1);
  return;
}



void fn_00689d10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = fn_0028eac0(*(undefined4 *)(*(int *)(param_1 + 4) + 0x18));
  if (iVar1 == 0) {
    fn_001f7390(*(undefined4 *)(*(int *)(param_1 + 4) + 0x18),param_2,param_3,param_4);
    return;
  }
  return;
}


