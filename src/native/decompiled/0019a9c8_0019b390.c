#include "0019a9c8_0019b390.h"



void fn_0019b390(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 unaff_r6;
  
  iVar1 = fn_002fece8(param_2 * 0x14);
  if (0 < param_2) {
    unaff_r6 = 0x1000001;
  }
  iVar2 = 0;
  if (0 < param_2) {
    do {
      puVar3 = (undefined4 *)(iVar1 + iVar2 * 0x14);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = unaff_r6;
        puVar3[1] = 0;
        puVar3[2] = unaff_r6;
        puVar3[3] = 0;
        puVar3[4] = 0;
      }
      iVar2 = iVar2 + 1;
      puVar3[4] = 0;
    } while (iVar2 < param_2);
  }
  *(int *)(param_1 + 0x24) = param_2;
  *(int *)(param_1 + 0x20) = iVar1;
  *(int *)(param_1 + 0x1c) = param_2 * 0x14 + -0x14 + iVar1;
  return;
}



int * fn_0019b268(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint local_20;
  int *local_1c;
  uint local_18;
  int *local_14;
  
  local_20 = 0x1000001;
  local_1c = (int *)0x0;
  local_14 = (int *)fn_0019ba68(*(undefined4 *)(param_1 + 0x30),param_2,0xffffffff);
  local_18 = 0x8000010;
  if (local_14 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    fn_00146590();
  }
  local_14[1] = local_14[1] + 1;
  iVar2 = fn_001a1dc8(*(undefined4 *)(param_1 + 4),&local_18,&local_20);
  if (((local_18 & 0x8000000) != 0) &&
     (iVar3 = local_14[1], local_14[1] = iVar3 + -1, iVar3 + -1 == 0)) {
    (**(code **)(*local_14 + 8))();
  }
  piVar1 = local_1c;
  if (iVar2 == 0) {
    if (((local_20 & 0x8000000) != 0) &&
       (iVar2 = local_1c[1], local_1c[1] = iVar2 + -1, iVar2 + -1 == 0)) {
      (**(code **)(*local_1c + 8))();
    }
    return (int *)0x102;
  }
  if (((local_20 & 0x8000000) != 0) &&
     (iVar2 = local_1c[1], local_1c[1] = iVar2 + -1, iVar2 + -1 == 0)) {
    (**(code **)(*local_1c + 8))();
  }
  return piVar1;
}



undefined4 fn_0019a9c8(int param_1,uint param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte local_50 [8];
  undefined1 local_48 [12];
  int *local_3c;
  undefined1 auStack_2c [8];
  
  for (uVar2 = 0; uVar2 < *(uint *)(param_1 + 0x38); uVar2 = uVar2 + 1) {
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  iVar3 = (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28));
  if (0xff < iVar3) {
    (**(code **)(param_1 + 0x40))(*(undefined4 *)(param_1 + 0x44),(char *)&DAT_0080e0fc);
  }
  if (iVar3 == 0) {
    *(undefined1 *)(param_1 + 0x2c) = 0;
  }
  else {
    *(char *)(param_1 + 0x2c) = (char)iVar3;
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  if (*(char *)(param_1 + 0x2c) == '\0') {
    return 0xffffffff;
  }
  do {
    bVar1 = *(byte *)(param_1 + 0x2c);
    while (uVar2 = (uint)bVar1, uVar2 != param_2) {
      if (uVar2 == 0) {
        (**(code **)(param_1 + 0x40))(*(undefined4 *)(param_1 + 0x44),(char *)&DAT_0019add4);
        return 0xffffffff;
      }
      if (uVar2 == 10) {
        if (param_3 == 0) {
          (**(code **)(param_1 + 0x40))(*(undefined4 *)(param_1 + 0x44),(char *)&DAT_0019ade8);
        }
        local_50[0] = *(byte *)(param_1 + 0x2c);
        fn_001a293c(param_1 + 0x34,local_50);
        iVar3 = (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28));
        if (0xff < iVar3) {
          (**(code **)(param_1 + 0x40))(*(undefined4 *)(param_1 + 0x44),(char *)&DAT_0080e0fc);
        }
        if (iVar3 == 0) {
          *(undefined1 *)(param_1 + 0x2c) = 0;
        }
        else {
          *(char *)(param_1 + 0x2c) = (char)iVar3;
        }
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
      }
      else {
        if (uVar2 == 0x5c) {
          if (param_3 == 0) {
            iVar3 = (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28));
            if (0xff < iVar3) {
              (**(code **)(param_1 + 0x40))(*(undefined4 *)(param_1 + 0x44),(char *)&DAT_0080e0fc);
            }
            if (iVar3 == 0) {
              *(undefined1 *)(param_1 + 0x2c) = 0;
            }
            else {
              *(char *)(param_1 + 0x2c) = (char)iVar3;
            }
            bVar1 = *(byte *)(param_1 + 0x2c);
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
            if (bVar1 == 0x66) {
              local_50[0] = 0xc;
              fn_001a293c(param_1 + 0x34,local_50);
              iVar3 = (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28));
              if (0xff < iVar3) {
                (**(code **)(param_1 + 0x40))(*(undefined4 *)(param_1 + 0x44),(char *)&DAT_0080e0fc);
              }
            }
            else if (bVar1 < 0x67) {
              if (bVar1 == 0x5c) {
                local_50[0] = 0x5c;
                fn_001a293c(param_1 + 0x34,local_50);
                iVar3 = (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28));
                if (0xff < iVar3) {
                  (**(code **)(param_1 + 0x40))(*(undefined4 *)(param_1 + 0x44),(char *)&DAT_0080e0fc)
                  ;
                }
              }
              else if (bVar1 < 0x5d) {
                if (bVar1 == 0x22) {
                  local_50[0] = 0x22;
                  fn_001a293c(param_1 + 0x34,local_50);
                  iVar3 = (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28));
                  if (0xff < iVar3) {
                    (**(code **)(param_1 + 0x40))
                              (*(undefined4 *)(param_1 + 0x44),(char *)&DAT_0080e0fc);
                  }
                }
                else if (bVar1 == 0x27) {
                  local_50[0] = 0x27;
                  fn_001a293c(param_1 + 0x34,local_50);
                  iVar3 = (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28));
                  if (0xff < iVar3) {
                    (**(code **)(param_1 + 0x40))
                              (*(undefined4 *)(param_1 + 0x44),(char *)&DAT_0080e0fc);
                  }
                }
                else {
                  if (bVar1 != 0x30) goto LAB_0019ac60;
                  local_50[0] = 0;
                  fn_001a293c(param_1 + 0x34,local_50);
                  iVar3 = (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28));
                  if (0xff < iVar3) {
                    (**(code **)(param_1 + 0x40))
                              (*(undefined4 *)(param_1 + 0x44),(char *)&DAT_0080e0fc);
                  }
                }
              }
              else if (bVar1 == 0x61) {
                local_50[0] = 7;
                fn_001a293c(param_1 + 0x34,local_50);
                iVar3 = (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28));
                if (0xff < iVar3) {
                  (**(code **)(param_1 + 0x40))(*(undefined4 *)(param_1 + 0x44),(char *)&DAT_0080e0fc)
                  ;
                }
              }
              else {
                if (bVar1 != 0x62) goto LAB_0019ac60;
                local_50[0] = 8;
                fn_001a293c(param_1 + 0x34,local_50);
                iVar3 = (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28));
                if (0xff < iVar3) {
                  (**(code **)(param_1 + 0x40))(*(undefined4 *)(param_1 + 0x44),(char *)&DAT_0080e0fc)
                  ;
                }
              }
            }
            else if (bVar1 == 0x74) {
              local_50[0] = 9;
              fn_001a293c(param_1 + 0x34,local_50);
              iVar3 = (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28));
              if (0xff < iVar3) {
                (**(code **)(param_1 + 0x40))(*(undefined4 *)(param_1 + 0x44),(char *)&DAT_0080e0fc);
              }
            }
            else if (bVar1 < 0x75) {
              if (bVar1 == 0x6e) {
                local_50[0] = 10;
                fn_001a293c(param_1 + 0x34,local_50);
                iVar3 = (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28));
                if (0xff < iVar3) {
                  (**(code **)(param_1 + 0x40))(*(undefined4 *)(param_1 + 0x44),(char *)&DAT_0080e0fc)
                  ;
                }
              }
              else {
                if (bVar1 != 0x72) goto LAB_0019ac60;
                local_50[0] = 0xd;
                fn_001a293c(param_1 + 0x34,local_50);
                iVar3 = (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28));
                if (0xff < iVar3) {
                  (**(code **)(param_1 + 0x40))(*(undefined4 *)(param_1 + 0x44),(char *)&DAT_0080e0fc)
                  ;
                }
              }
            }
            else {
              if (bVar1 != 0x76) {
                if (bVar1 == 0x78) {
                  iVar3 = (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28));
                  if (0xff < iVar3) {
                    (**(code **)(param_1 + 0x40))
                              (*(undefined4 *)(param_1 + 0x44),(char *)&DAT_0080e0fc);
                  }
                  if (iVar3 == 0) {
                    *(undefined1 *)(param_1 + 0x2c) = 0;
                  }
                  else {
                    *(char *)(param_1 + 0x2c) = (char)iVar3;
                  }
                  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
                  bVar1 = *(byte *)(param_1 + 0x2c);
                  local_3c = (int *)fn_002fea64();
                  uVar2 = (uint)*(byte *)(*local_3c + (uint)bVar1);
                  if (((uVar2 ^ uVar2 << 2) & 0x80) == 0) {
                    (**(code **)(param_1 + 0x40))
                              (*(undefined4 *)(param_1 + 0x44),(char *)&DAT_0019ae1c);
                  }
                  iVar3 = 0;
                  while ((uVar2 = (uint)*(byte *)(*local_3c + (uint)*(byte *)(param_1 + 0x2c)),
                         ((uVar2 ^ uVar2 << 2) & 0x80) != 0 && (iVar3 < 4))) {
                    local_50[iVar3] = *(byte *)(param_1 + 0x2c);
                    iVar3 = iVar3 + 1;
                    iVar4 = (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28));
                    if (0xff < iVar4) {
                      (**(code **)(param_1 + 0x40))
                                (*(undefined4 *)(param_1 + 0x44),(char *)&DAT_0080e0fc);
                    }
                    if (iVar4 == 0) {
                      *(undefined1 *)(param_1 + 0x2c) = 0;
                    }
                    else {
                      *(char *)(param_1 + 0x2c) = (char)iVar4;
                    }
                    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
                  }
                  local_50[iVar3] = 0;
                  local_48[0] = fn_00102c18(local_50,auStack_2c,0x10);
                  fn_001a293c(param_1 + 0x34,local_48);
                  goto LAB_0019b10c;
                }
LAB_0019ac60:
                (**(code **)(param_1 + 0x40))
                          (*(undefined4 *)(param_1 + 0x44),(char *)&DAT_0019ae00);
                goto LAB_0019b10c;
              }
              local_50[0] = 0xb;
              fn_001a293c(param_1 + 0x34,local_50);
              iVar3 = (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28));
              if (0xff < iVar3) {
                (**(code **)(param_1 + 0x40))(*(undefined4 *)(param_1 + 0x44),(char *)&DAT_0080e0fc);
              }
            }
          }
          else {
            local_50[0] = 0x5c;
            fn_001a293c(param_1 + 0x34,local_50);
            iVar3 = (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28));
            if (0xff < iVar3) {
              (**(code **)(param_1 + 0x40))(*(undefined4 *)(param_1 + 0x44),(char *)&DAT_0080e0fc);
            }
          }
          if (iVar3 != 0) goto LAB_0019aab8;
LAB_0019b0fc:
          *(undefined1 *)(param_1 + 0x2c) = 0;
        }
        else {
          local_50[0] = bVar1;
          fn_001a293c(param_1 + 0x34,local_50);
          iVar3 = (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28));
          if (0xff < iVar3) {
            (**(code **)(param_1 + 0x40))(*(undefined4 *)(param_1 + 0x44),(char *)&DAT_0080e0fc);
          }
          if (iVar3 == 0) goto LAB_0019b0fc;
LAB_0019aab8:
          *(char *)(param_1 + 0x2c) = (char)iVar3;
        }
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      }
LAB_0019b10c:
      bVar1 = *(byte *)(param_1 + 0x2c);
    }
    iVar3 = (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28));
    if (0xff < iVar3) {
      (**(code **)(param_1 + 0x40))(*(undefined4 *)(param_1 + 0x44),(char *)&DAT_0080e0fc);
    }
    if (iVar3 == 0) {
      *(undefined1 *)(param_1 + 0x2c) = 0;
    }
    else {
      *(char *)(param_1 + 0x2c) = (char)iVar3;
    }
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    if ((param_3 == 0) || (local_50[0] = *(byte *)(param_1 + 0x2c), local_50[0] != 0x22)) {
      local_50[0] = 0;
      fn_001a293c(param_1 + 0x34,local_50);
      if (param_2 != 0x27) {
        *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x34);
        return 0x103;
      }
      if (*(int *)(param_1 + 0x38) == 1) {
        (**(code **)(param_1 + 0x40))(*(undefined4 *)(param_1 + 0x44),(char *)&DAT_0019b258);
      }
      else if (1 < *(int *)(param_1 + 0x38) + -1) {
        (**(code **)(param_1 + 0x40))(*(undefined4 *)(param_1 + 0x44),(char *)&DAT_0019b244);
      }
      *(int *)(param_1 + 0x1c) = (int)**(char **)(param_1 + 0x34);
      return 0x104;
    }
    fn_001a293c(param_1 + 0x34,local_50);
    iVar3 = (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28));
    if (0xff < iVar3) {
      (**(code **)(param_1 + 0x40))(*(undefined4 *)(param_1 + 0x44),(char *)&DAT_0080e0fc);
    }
    if (iVar3 == 0) {
      *(undefined1 *)(param_1 + 0x2c) = 0;
    }
    else {
      *(char *)(param_1 + 0x2c) = (char)iVar3;
    }
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  } while( true );
}


