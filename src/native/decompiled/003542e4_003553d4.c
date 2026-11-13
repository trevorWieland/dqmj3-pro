#include "003542e4_003553d4.h"



void fn_003553d4(undefined4 param_1)

{
  fn_00313870(param_1,0xc,0x14);
  return;
}



void fn_0035522c(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 local_58 [5];
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  fn_00101a1c(local_58,&LAB_0035490c,8);
  iVar7 = 0;
  iVar4 = 0;
LAB_003552bc:
  iVar6 = *(int *)(*(int *)(param_1 + 0x90) + iVar4 * 4);
  do {
    if (iVar6 != 0) {
      iVar3 = 0;
      do {
        if (*(int *)(param_1 + (iVar3 % 2) * 0x20 + (iVar3 / 2) * 8 + 0x118) == iVar6) {
          iVar6 = param_1 + (iVar3 % 2) * 0x20 + (iVar3 / 2) * 8;
          uVar5 = *(undefined4 *)(iVar6 + 0x118);
          *(undefined1 *)(local_58 + iVar7 * 8 + iVar4 * 2) = *(undefined1 *)(iVar6 + 0x114);
          (local_58 + iVar7 * 8 + iVar4 * 2)[1] = uVar5;
          break;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 8);
    }
    iVar4 = iVar4 + 1;
    if (3 < iVar4) {
      iVar7 = iVar7 + 1;
      if (1 < iVar7) {
        *(undefined4 *)(param_1 + 0x114) = local_58[0];
        *(undefined4 *)(param_1 + 0x118) = local_58[1];
        bVar2 = false;
        iVar4 = 0;
        *(undefined4 *)(param_1 + 0x11c) = local_58[2];
        *(undefined4 *)(param_1 + 0x120) = local_58[3];
        *(undefined4 *)(param_1 + 0x124) = local_58[4];
        *(undefined4 *)(param_1 + 0x128) = uStack_44;
        *(undefined4 *)(param_1 + 300) = local_40;
        *(undefined4 *)(param_1 + 0x130) = uStack_3c;
        *(undefined4 *)(param_1 + 0x134) = local_38;
        *(undefined4 *)(param_1 + 0x138) = uStack_34;
        *(undefined4 *)(param_1 + 0x13c) = local_30;
        *(undefined4 *)(param_1 + 0x140) = uStack_2c;
        *(undefined4 *)(param_1 + 0x144) = local_28;
        *(undefined4 *)(param_1 + 0x148) = uStack_24;
        *(undefined4 *)(param_1 + 0x14c) = local_20;
        *(undefined4 *)(param_1 + 0x150) = uStack_1c;
        do {
          cVar1 = (char)*(undefined4 *)(param_1 + iVar4 * 8 + 0x134);
          if ((int)cVar1 - 0x10U < 8) {
            iVar7 = fn_00174828(DAT_008977e4);
            iVar7 = iVar7 + cVar1 * 0x418;
            cVar1 = '\0';
            if (iVar7 != 0x4080) {
              cVar1 = *(char *)(iVar7 + -0x3c6c);
            }
            if (iVar7 != 0x4080 && cVar1 != '\0') {
              bVar2 = true;
            }
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < 4);
        if (bVar2) {
          *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) | 2;
        }
        return;
      }
      iVar4 = 0;
    }
    if (iVar7 == 0) goto LAB_003552bc;
    iVar6 = *(int *)(*(int *)(param_1 + 0x9c) + iVar4 * 4);
  } while( true );
}



void fn_00354bc0(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = fn_006a7b78(DAT_008977e4);
  pcVar3 = (char *)(iVar2 + 0x58);
  cVar1 = *pcVar3;
  if (cVar1 == '\0') {
    pcVar3 = (char *)(uint)*(byte *)(iVar2 + 100);
  }
  if (cVar1 == '\0' && pcVar3 == (char *)0x0) {
    *(undefined1 *)(param_1 + 0xd5) = 1;
    *(undefined1 *)(param_1 + 0xd4) = 1;
    fn_00689828(param_1,0);
    *(undefined1 *)(param_1 + 0xc0) = 4;
  }
  return;
}



undefined4 fn_00354b70(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 % 2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00354bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0xa8) + 0x30))
                      (*(int **)(param_1 + 0xa8),0,param_2 / 2);
    return uVar1;
  }
  if (param_2 % 2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00354ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0xac) + 0x30))(*(int **)(param_1 + 0xac),0);
    return uVar1;
  }
  return 0;
}



void fn_00354764(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0xbc) + 0x90))();
  if (iVar1 < 0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0xbc) + 0xa8))();
    iVar4 = **(int **)(param_1 + 0xbc);
    if (iVar1 < 0) {
      iVar1 = (**(code **)(iVar4 + 0xc0))();
      if (-1 < iVar1) {
        (**(code **)(**(int **)(param_1 + 0xbc) + 0x2c))(*(int **)(param_1 + 0xbc),0,4);
        fn_0068ab44(param_1,0x100094e);
      }
    }
    else {
      (**(code **)(iVar4 + 0x2c))(*(int **)(param_1 + 0xbc),1,4,0);
      fn_0068ab44(param_1,0x100094e);
    }
  }
  else {
    (**(code **)(**(int **)(param_1 + 0xbc) + 0x54))();
    iVar1 = fn_0035491c(param_1,iVar1);
    if (iVar1 == 0) {
      return;
    }
  }
  fn_003569f0(param_1);
  uVar2 = (**(code **)(**(int **)(param_1 + 0xbc) + 0x80))();
  if (uVar2 < 8) {
    uVar3 = fn_006a833c(*(undefined4 *)(param_1 + 0xbc),uVar2);
    fn_003555a0(param_1,uVar3);
    if (*(int *)(param_1 + 0xd0) != -1) {
      fn_0068ab44(param_1,0x100094b);
    }
  }
  uVar2 = (**(code **)(**(int **)(param_1 + 0xbc) + 0xa0))();
  if (uVar2 < 8) {
    iVar1 = fn_006a833c(*(undefined4 *)(param_1 + 0xbc),uVar2);
    if (iVar1 % 2 == 0) {
      iVar4 = *(int *)(*(int *)(param_1 + 0x90) + (iVar1 / 2) * 4);
    }
    else {
      if (iVar1 % 2 != 1) {
        return;
      }
      iVar4 = *(int *)(*(int *)(param_1 + 0x9c) + (iVar1 / 2) * 4);
    }
    if (iVar4 != 0) {
      fn_003553e0(param_1,iVar1);
      fn_0068ab44(param_1,0x100094b);
      return;
    }
  }
  return;
}



void fn_003542e4(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = 0x13121110;
  iVar5 = 0;
  uVar2 = 0x1b1a1918;
  do {
    iVar3 = (int)*(char *)(param_2 + iVar5);
    if (iVar3 != 0) {
      if ((char)uVar1 == iVar3) {
        uVar1 = uVar1 & 0xffffff00;
      }
      else if ((char)uVar2 == iVar3) {
        uVar2 = uVar2 & 0xffffff00;
      }
      if ((int)(uVar1 << 0x10) >> 0x18 == iVar3) {
        uVar1 = uVar1 & 0xffff00ff;
      }
      else if ((int)(uVar2 << 0x10) >> 0x18 == iVar3) {
        uVar2 = uVar2 & 0xffff00ff;
      }
      if ((int)(uVar1 << 8) >> 0x18 == iVar3) {
        uVar1 = uVar1 & 0xff00ffff;
      }
      else if ((int)(uVar2 << 8) >> 0x18 == iVar3) {
        uVar2 = uVar2 & 0xff00ffff;
      }
      if ((int)uVar1 >> 0x18 == iVar3) {
        uVar1 = uVar1 & 0xffffff;
      }
      else if ((int)uVar2 >> 0x18 == iVar3) {
        uVar2 = uVar2 & 0xffffff;
      }
    }
    iVar3 = (int)*(char *)(param_3 + iVar5);
    if (iVar3 != 0) {
      if ((char)uVar1 == iVar3) {
        uVar1 = uVar1 & 0xffffff00;
      }
      else if ((char)uVar2 == iVar3) {
        uVar2 = uVar2 & 0xffffff00;
      }
      if ((int)(uVar1 << 0x10) >> 0x18 == iVar3) {
        uVar1 = uVar1 & 0xffff00ff;
      }
      else if ((int)(uVar2 << 0x10) >> 0x18 == iVar3) {
        uVar2 = uVar2 & 0xffff00ff;
      }
      if ((int)(uVar1 << 8) >> 0x18 == iVar3) {
        uVar1 = uVar1 & 0xff00ffff;
      }
      else if ((int)(uVar2 << 8) >> 0x18 == iVar3) {
        uVar2 = uVar2 & 0xff00ffff;
      }
      if ((int)uVar1 >> 0x18 == iVar3) {
        uVar1 = uVar1 & 0xffffff;
      }
      else if ((int)uVar2 >> 0x18 == iVar3) {
        uVar2 = uVar2 & 0xffffff;
      }
    }
    iVar5 = (int)(char)((char)iVar5 + '\x01');
  } while (iVar5 < 4);
  iVar5 = 0;
  do {
    uVar4 = uVar2;
    if (*(char *)(param_2 + iVar5) == '\0') {
      if ((char)uVar1 == '\0') {
        if ((int)(uVar1 << 0x10) >> 0x18 == 0) {
          if ((int)(uVar1 << 8) >> 0x18 == 0) {
            if ((int)uVar1 >> 0x18 == 0) {
              if ((char)uVar2 == '\0') {
                if ((int)(uVar2 << 0x10) >> 0x18 == 0) {
                  if ((int)(uVar2 << 8) >> 0x18 == 0) {
                    if ((int)uVar2 >> 0x18 != 0) {
                      uVar4 = uVar2 & 0xffffff;
                      *(char *)(param_2 + iVar5) = (char)(uVar2 >> 0x18);
                    }
                    goto LAB_0035463c;
                  }
                  uVar4 = uVar2 & 0xff00ffff;
                  *(char *)(param_2 + iVar5) = (char)(uVar2 >> 0x10);
                }
                else {
                  uVar4 = uVar2 & 0xffff00ff;
                  *(char *)(param_2 + iVar5) = (char)(uVar2 >> 8);
                }
              }
              else {
                *(char *)(param_2 + iVar5) = (char)uVar2;
                uVar4 = uVar2 & 0xffffff00;
              }
            }
            else {
              *(char *)(param_2 + iVar5) = (char)(uVar1 >> 0x18);
              uVar1 = uVar1 & 0xffffff;
            }
            goto LAB_0035463c;
          }
          uVar2 = uVar1 & 0xff00ffff;
          *(char *)(param_2 + iVar5) = (char)(uVar1 >> 0x10);
        }
        else {
          uVar2 = uVar1 & 0xffff00ff;
          *(char *)(param_2 + iVar5) = (char)(uVar1 >> 8);
        }
        uVar1 = uVar2;
      }
      else {
        *(char *)(param_2 + iVar5) = (char)uVar1;
        uVar1 = uVar1 & 0xffffff00;
      }
    }
LAB_0035463c:
    iVar5 = (int)(char)((char)iVar5 + '\x01');
    uVar2 = uVar4;
  } while (iVar5 < 4);
  iVar5 = 0;
  do {
    uVar2 = uVar4;
    if (*(char *)(param_3 + iVar5) == '\0') {
      if ((char)uVar1 == '\0') {
        if ((int)(uVar1 << 0x10) >> 0x18 == 0) {
          if ((int)(uVar1 << 8) >> 0x18 == 0) {
            if ((int)uVar1 >> 0x18 == 0) {
              if ((char)uVar4 == '\0') {
                if ((int)(uVar4 << 0x10) >> 0x18 == 0) {
                  if ((int)(uVar4 << 8) >> 0x18 == 0) {
                    if ((int)uVar4 >> 0x18 != 0) {
                      uVar2 = uVar4 & 0xffffff;
                      *(char *)(param_3 + iVar5) = (char)(uVar4 >> 0x18);
                    }
                    goto LAB_0035474c;
                  }
                  uVar2 = uVar4 & 0xff00ffff;
                  *(char *)(param_3 + iVar5) = (char)(uVar4 >> 0x10);
                }
                else {
                  uVar2 = uVar4 & 0xffff00ff;
                  *(char *)(param_3 + iVar5) = (char)(uVar4 >> 8);
                }
              }
              else {
                *(char *)(param_3 + iVar5) = (char)uVar4;
                uVar2 = uVar4 & 0xffffff00;
              }
            }
            else {
              *(char *)(param_3 + iVar5) = (char)(uVar1 >> 0x18);
              uVar1 = uVar1 & 0xffffff;
            }
          }
          else {
            *(char *)(param_3 + iVar5) = (char)(uVar1 >> 0x10);
            uVar1 = uVar1 & 0xff00ffff;
          }
        }
        else {
          *(char *)(param_3 + iVar5) = (char)(uVar1 >> 8);
          uVar1 = uVar1 & 0xffff00ff;
        }
      }
      else {
        *(char *)(param_3 + iVar5) = (char)uVar1;
        uVar1 = uVar1 & 0xffffff00;
      }
    }
LAB_0035474c:
    iVar5 = (int)(char)((char)iVar5 + '\x01');
    uVar4 = uVar2;
    if (3 < iVar5) {
      return;
    }
  } while( true );
}


