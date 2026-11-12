#include "006da56c_006daa90.h"



void fn_006daa90(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  
  fn_0050ba68("[Analysis] ------ BEGIN(%s, %d.%03d sec. passed) ------",param_1 + 0x308,
               *(int *)(param_1 + 0x304) / 1000,*(int *)(param_1 + 0x304) % 1000);
  fn_0050ba68("[Analysis] ProtocolId, TotalNum, TotalSize, AverageSize, Protocol(port)");
  iVar2 = *(int *)(param_1 + 0x328);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_00169f1c(*(undefined4 *)(param_1 + 0x32c),iVar2);
  }
  fn_0050ba68((char *)&DAT_006dacb8,iVar2,
               *(undefined4 *)(param_1 + 0x32c),uVar1);
  uVar3 = 0;
  if (*(int *)(param_1 + 0x300) != 0) {
    do {
      puVar4 = (uint *)(param_1 + uVar3 * 0x18);
      if (param_2 != 0) goto LAB_006dab28;
      uVar7 = *puVar4 >> 0x10;
      if (uVar7 != 0x400) {
        if (uVar7 < 0x400) {
          if (uVar7 != 0x100) {
            if (uVar7 < 0x100) {
              if (uVar7 != 0x80 && uVar7 != 0xc0) {
LAB_006dab28:
                uVar6 = *puVar4;
                uVar7 = uVar6 >> 0x10;
                iVar2 = uVar7 - 0x1810;
                if (uVar7 == 0x1810) {
                  pcVar5 = "Sync";
                }
                else if (uVar7 < 0x1810) {
                  if (uVar7 == 0x210) {
                    pcVar5 = "SyncClock";
                  }
                  else if (uVar7 < 0x210) {
                    if (uVar7 == 0x80) {
                      pcVar5 = "Relay";
                    }
                    else if (uVar7 == 0xc0) {
                      pcVar5 = "KeepAlive";
                    }
                    else if (uVar7 == 0x100) {
                      pcVar5 = "Station";
                    }
                    else if (uVar7 == 0x200) {
                      pcVar5 = "Mesh";
                    }
                    else {
LAB_006dadb4:
                      pcVar5 = "(UNKNOWN PROTOCOL NAME)";
                    }
                  }
                  else if (uVar7 == 0x400) {
                    pcVar5 = "Nat";
                  }
                  else if (uVar7 == 0x410) {
                    pcVar5 = "Gateway";
                  }
                  else if (uVar7 == 0x600) {
                    pcVar5 = "Rtt";
                  }
                  else {
                    if (uVar7 != 0x1800) goto LAB_006dadb4;
                    pcVar5 = "SyncOld";
                  }
                }
                else if (iVar2 == 0x17f0) {
                  pcVar5 = "Reliable";
                }
                else if (iVar2 < 0x17f0) {
                  if (iVar2 == 0x7f0) {
                    pcVar5 = "Unreliable";
                  }
                  else if (iVar2 == 0x8f0) {
                    pcVar5 = "RoundrobinUnreliable";
                  }
                  else if (iVar2 == 0xbf0) {
                    pcVar5 = "Clone";
                  }
                  else {
                    if (iVar2 != 0xff0) goto LAB_006dadb4;
                    pcVar5 = "Voice";
                  }
                }
                else if (iVar2 == 0x57f0) {
                  pcVar5 = "ReliableBroadcast";
                }
                else if (iVar2 == 0x59f0) {
                  pcVar5 = "Session";
                }
                else if (iVar2 == 0x67f0) {
                  pcVar5 = "Feedback";
                }
                else {
                  if (iVar2 != 0x69f0) goto LAB_006dadb4;
                  pcVar5 = "RelayService";
                }
                uVar7 = puVar4[1];
                if (uVar7 == 0) {
                  uVar1 = 0xffffffff;
                }
                else {
                  uVar1 = fn_00169f1c(puVar4[2],uVar7);
                }
                fn_0050ba68((char *)&DAT_006dae64,uVar6,uVar7,puVar4[2],
                             uVar1,pcVar5,(short)*puVar4);
              }
            }
            else if (uVar7 != 0x200 && uVar7 != 0x210) goto LAB_006dab28;
          }
        }
        else if (uVar7 != 0x7200) {
          if (uVar7 < 0x7200) {
            if (uVar7 != 0x410 && uVar7 != 0x600) goto LAB_006dab28;
          }
          else if (uVar7 != 0x8000 && uVar7 != 0x8200) goto LAB_006dab28;
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x300));
  }
  fn_0050ba68("[Analysis] ---------------------------- END ----------------------------");
  return;
}



longlong fn_006da94c(int param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  uint local_18;
  int iStack_14;
  
  if (0x3fefffff < param_2 - 0x100000U) {
    if (DAT_008c0630 != 0) {
      param_2 = 8;
    }
    return CONCAT44(param_2,0xe0e14826);
  }
  fn_0017821c(param_2,param_1,0x10c);
  if (DAT_008bf4d4 - 0x100000U < 0x3ff00000) {
    uVar1 = *(uint *)(DAT_008bf4d4 + 8);
    iVar3 = *(int *)(DAT_008bf4d4 + 0xc);
    uVar4 = *(uint *)(param_1 + 0x110);
    iVar5 = *(int *)(param_1 + 0x114);
    puVar2 = (undefined4 *)fn_004f0ce8();
    uVar6 = fn_0011c134(uVar1 - uVar4,iVar3 - (iVar5 + (uint)(uVar1 < uVar4)),*puVar2,puVar2[1]);
    uVar1 = (uint)((ulonglong)uVar6 >> 0x20);
    *(int *)(param_2 + 0x108) = (int)uVar6;
  }
  else {
    local_18 = 0;
    iStack_14 = 0;
    fn_004f01f4(&local_18);
    iVar3 = local_18 - *(uint *)(param_1 + 0x110);
    iVar5 = iStack_14 - (*(int *)(param_1 + 0x114) + (uint)(local_18 < *(uint *)(param_1 + 0x110)));
    puVar2 = (undefined4 *)fn_004f0ce8();
    uVar6 = fn_0011c134(iVar3,iVar5,*puVar2,puVar2[1]);
    uVar1 = (uint)((ulonglong)uVar6 >> 0x20);
    *(int *)(param_2 + 0x108) = (int)uVar6;
  }
  return (ulonglong)uVar1 << 0x20;
}



undefined4 fn_006da728(int param_1,int param_2,int *param_3,int *param_4)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  uVar11 = 0;
  iVar8 = 0;
  uVar10 = *(uint *)(DAT_008bf4d4 + 0x30);
  uVar3 = (uint)*(byte *)(param_1 + 0x29) * uVar10 * uVar10;
  if ((uVar3 & 7) != 0) {
    uVar3 = uVar3 + (8 - (uVar3 & 7));
  }
  uVar3 = uVar3 >> 3;
  piVar7 = (int *)(uVar3 + uVar10 * 4 + 4);
  piVar6 = param_3;
  if (param_3 < piVar7) {
    piVar6 = param_4;
  }
  uVar4 = 0xe0e14826;
  if (param_3 < piVar7) {
    *piVar6 = 0;
  }
  else if (param_2 - 0x100000U < 0x3ff00000) {
    fn_00158f6c(param_2);
    uVar12 = 0;
    if (uVar10 != 0) {
      do {
        uVar9 = 0;
        if (uVar10 != 0) {
          do {
            bVar2 = *(byte *)(uVar9 + uVar12 * uVar10 + *(int *)(param_1 + 8));
            cVar1 = ('\b' - (char)uVar11) - *(byte *)(param_1 + 0x29);
            uVar5 = (uint)cVar1;
            if ((int)uVar5 < 0) {
              *(byte *)(param_2 + iVar8) =
                   ((char)(1 << (*(byte *)(param_1 + 0x29) + uVar5 & 0xff)) - 1U &
                   bVar2 >> (-uVar5 & 0xff)) + *(char *)(param_2 + iVar8);
              iVar8 = iVar8 + 1;
              uVar5 = (uint)(char)(cVar1 + '\b');
            }
            uVar11 = 8 - uVar5 & 0xff;
            *(byte *)(param_2 + iVar8) = *(char *)(param_2 + iVar8) + (bVar2 << (uVar5 & 0xff));
            if (uVar5 == 0) {
              uVar11 = 0;
              iVar8 = iVar8 + 1;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar10);
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar10);
    }
    uVar11 = 0;
    if (uVar10 != 0) {
      do {
        uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x10) + uVar11 * 4);
        uVar11 = uVar11 + 1;
        *(char *)(param_2 + uVar3) = (char)((uint)uVar4 >> 0x18);
        *(char *)(param_2 + uVar3 + 1) = (char)((uint)uVar4 >> 0x10);
        *(char *)(param_2 + uVar3 + 2) = (char)((uint)uVar4 >> 8);
        iVar8 = uVar3 + 3;
        uVar3 = uVar3 + 4;
        *(char *)(param_2 + iVar8) = (char)uVar4;
      } while (uVar11 < uVar10);
    }
    fn_001694e4(param_2 + uVar3,param_1 + 0x30,4);
    *param_4 = uVar3 + 4;
    uVar4 = 0;
  }
  return uVar4;
}



undefined4 fn_006da698(int param_1,uint param_2,uint *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = 0xe0e14826;
  uVar4 = *(uint *)(DAT_008bf4d4 + 0x30);
  if ((param_2 < uVar4) && (param_3 + -0x40000 < (uint *)0x3ff00000)) {
    uVar5 = 1;
    *param_3 = 0;
    if (uVar4 != 0) {
      uVar2 = 0;
      pbVar3 = (byte *)(param_2 * uVar4 + *(int *)(param_1 + 0x38));
      do {
        if (*pbVar3 == uVar2) {
          *param_3 = *param_3 | uVar5;
        }
        uVar4 = uVar4 - 1;
        uVar5 = uVar5 << 1;
        uVar2 = uVar2 + 1;
        pbVar3 = pbVar3 + 1;
      } while (uVar4 != 0);
    }
    uVar1 = 0;
  }
  return uVar1;
}



int fn_006da658(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_008bf4d4 + 0x30);
  uVar1 = (uint)*(byte *)(param_1 + 0x29) * iVar2 * iVar2;
  if ((uVar1 & 7) != 0) {
    uVar1 = uVar1 + (8 - (uVar1 & 7));
  }
  return (uVar1 >> 3) + iVar2 * 4 + 4;
}



undefined4 fn_006da5fc(int param_1,uint param_2,uint param_3,undefined1 *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = 0xe0e14826;
  uVar2 = *(uint *)(DAT_008bf4d4 + 0x30);
  if ((param_2 < uVar2 && param_3 < uVar2) && (param_4 + -0x100000 < (undefined1 *)0x3ff00000)) {
    *param_4 = *(undefined1 *)(param_3 + param_2 * uVar2 + *(int *)(param_1 + 0x38));
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 fn_006da56c(int param_1,uint param_2,uint *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = 0xe0e14826;
  uVar4 = *(uint *)(DAT_008bf4d4 + 0x30);
  if ((param_2 < uVar4) && (param_3 + -0x40000 < (uint *)0x3ff00000)) {
    uVar5 = 1;
    *param_3 = 0;
    if (uVar4 != 0) {
      uVar2 = 0;
      pbVar3 = (byte *)(param_2 * uVar4 + *(int *)(param_1 + 8));
      do {
        if (*pbVar3 == uVar2) {
          *param_3 = *param_3 | uVar5;
        }
        uVar4 = uVar4 - 1;
        uVar5 = uVar5 << 1;
        uVar2 = uVar2 + 1;
        pbVar3 = pbVar3 + 1;
      } while (uVar4 != 0);
    }
    uVar1 = 0;
  }
  return uVar1;
}


