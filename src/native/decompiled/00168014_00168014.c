#include "00168014_00168014.h"



void fn_00168014(undefined4 *param_1,int param_2,int *param_3,byte *param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  char *pcVar10;
  byte *pbVar11;
  byte *pbVar12;
  bool bVar13;
  
  *param_1 = *(undefined4 *)(param_2 + 0x10);
  iVar3 = *(int *)(param_2 + 0x10);
  iVar6 = *(int *)(iVar3 + 8);
  bVar13 = *param_3 != iVar6;
  if (!bVar13) {
    iVar6 = *(int *)param_4;
  }
  pbVar9 = param_4;
  if ((bVar13 || iVar6 != iVar3) || (*(int *)(param_2 + 0x14) == 0)) {
    while (pbVar8 = (byte *)*param_3, pbVar8 != *(byte **)param_4) {
      iVar6 = *(int *)(pbVar8 + 0xc);
      if (iVar6 == 0) {
        pbVar12 = *(byte **)(pbVar8 + 4);
        pbVar9 = *(byte **)(pbVar12 + 0xc);
        pbVar4 = pbVar12;
        if (pbVar8 == pbVar9) {
          do {
            *param_3 = (int)pbVar4;
            pbVar12 = *(byte **)(pbVar4 + 4);
            pbVar9 = *(byte **)(pbVar12 + 0xc);
            bVar13 = pbVar4 == pbVar9;
            pbVar4 = pbVar12;
          } while (bVar13);
        }
        if (*(byte **)(*param_3 + 0xc) != pbVar12) {
          *param_3 = (int)pbVar12;
        }
      }
      else {
        *param_3 = iVar6;
        while (iVar6 = *(int *)(iVar6 + 8), iVar6 != 0) {
          *param_3 = iVar6;
        }
      }
      pbVar4 = *(byte **)(param_2 + 0x10);
      if (pbVar8 != pbVar4) {
        pbVar12 = *(byte **)(pbVar8 + 0xc);
        if (*(byte **)(pbVar8 + 0xc) == (byte *)0x0) {
          pbVar12 = *(byte **)(pbVar8 + 4);
          pbVar9 = *(byte **)(pbVar12 + 0xc);
          pbVar4 = pbVar8;
          if (pbVar8 == pbVar9) {
            do {
              pbVar4 = pbVar12;
              pbVar12 = *(byte **)(pbVar4 + 4);
            } while (pbVar4 == *(byte **)(pbVar12 + 0xc));
          }
          if (*(byte **)(pbVar4 + 0xc) != pbVar12) {
            pbVar4 = pbVar12;
          }
        }
        else {
          do {
            pbVar4 = pbVar12;
            pbVar12 = *(byte **)(pbVar4 + 8);
          } while (*(byte **)(pbVar4 + 8) != (byte *)0x0);
        }
        pbVar7 = *(byte **)(pbVar8 + 8);
        pbVar5 = *(byte **)(pbVar8 + 0xc);
        pbVar12 = pbVar8;
        if (pbVar7 == (byte *)0x0) {
          if (pbVar5 != (byte *)0x0) goto LAB_001681e4;
          pbVar5 = *(byte **)(pbVar8 + 4);
          if (*(byte **)(param_2 + 0x10) == pbVar5) {
            *(byte **)(*(byte **)(param_2 + 0x10) + 0xc) = pbVar5;
            *(byte **)(*(int *)(param_2 + 0x10) + 8) = pbVar5;
            *(undefined4 *)(*(int *)(param_2 + 0x10) + 4) = 0;
          }
          else if (*(byte **)(pbVar5 + 8) == pbVar8) {
            pbVar5[8] = 0;
            pbVar5[9] = 0;
            pbVar5[10] = 0;
            pbVar5[0xb] = 0;
            pbVar9 = *(byte **)(*(int *)(param_2 + 0x10) + 8);
            if (pbVar9 == pbVar8) {
              *(byte **)(*(int *)(param_2 + 0x10) + 8) = pbVar5;
            }
          }
          else {
            pbVar5[0xc] = 0;
            pbVar5[0xd] = 0;
            pbVar5[0xe] = 0;
            pbVar5[0xf] = 0;
            pbVar9 = *(byte **)(*(int *)(param_2 + 0x10) + 0xc);
            if (pbVar9 == pbVar8) {
              *(byte **)(*(int *)(param_2 + 0x10) + 0xc) = pbVar5;
            }
          }
        }
        else {
          if (pbVar5 == (byte *)0x0) {
            pbVar5 = pbVar7;
          }
          else {
            iVar6 = *(int *)(pbVar5 + 8);
            pbVar12 = pbVar5;
            while (iVar6 != 0) {
              pbVar12 = *(byte **)(pbVar12 + 8);
              iVar6 = *(int *)(pbVar12 + 8);
            }
            pbVar5 = *(byte **)(pbVar12 + 0xc);
          }
LAB_001681e4:
          if (pbVar12 == pbVar8) {
            *(undefined4 *)(pbVar5 + 4) = *(undefined4 *)(pbVar12 + 4);
            if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar8) {
              *(byte **)(*(int *)(param_2 + 0x10) + 4) = pbVar5;
            }
            else {
              iVar6 = *(int *)(pbVar8 + 4);
              if (*(byte **)(iVar6 + 8) == pbVar8) {
                *(byte **)(iVar6 + 8) = pbVar5;
              }
              else {
                *(byte **)(iVar6 + 0xc) = pbVar5;
              }
            }
            iVar6 = *(int *)(param_2 + 0x10);
            if (*(byte **)(iVar6 + 8) == pbVar8) {
              if (*(int *)(pbVar8 + 0xc) == 0) {
                *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(pbVar8 + 4);
              }
              else {
                pbVar7 = *(byte **)(pbVar5 + 8);
                pbVar9 = pbVar5;
                while (pbVar11 = pbVar7, pbVar11 != (byte *)0x0) {
                  pbVar9 = pbVar11;
                  pbVar7 = *(byte **)(pbVar11 + 8);
                }
                *(byte **)(iVar6 + 8) = pbVar9;
              }
            }
            pbVar9 = *(byte **)(param_2 + 0x10);
            if (*(byte **)(pbVar9 + 0xc) == pbVar8) {
              if (*(int *)(pbVar8 + 8) == 0) {
                *(undefined4 *)(pbVar9 + 0xc) = *(undefined4 *)(pbVar8 + 4);
              }
              else {
                pbVar7 = *(byte **)(pbVar5 + 0xc);
                pbVar8 = pbVar5;
                while (pbVar11 = pbVar7, pbVar11 != (byte *)0x0) {
                  pbVar8 = pbVar11;
                  pbVar7 = *(byte **)(pbVar11 + 0xc);
                }
                *(byte **)(pbVar9 + 0xc) = pbVar8;
              }
            }
          }
          else {
            *(byte **)(pbVar7 + 4) = pbVar12;
            *(undefined4 *)(pbVar12 + 8) = *(undefined4 *)(pbVar8 + 8);
            if (*(byte **)(pbVar8 + 0xc) == pbVar12) {
              if (pbVar5 != (byte *)0x0) {
                *(byte **)(pbVar5 + 4) = pbVar12;
              }
            }
            else {
              if (pbVar5 != (byte *)0x0) {
                *(undefined4 *)(pbVar5 + 4) = *(undefined4 *)(pbVar12 + 4);
              }
              *(byte **)(*(int *)(pbVar12 + 4) + 8) = pbVar5;
              *(undefined4 *)(pbVar12 + 0xc) = *(undefined4 *)(pbVar8 + 0xc);
              *(byte **)(*(int *)(pbVar8 + 0xc) + 4) = pbVar12;
            }
            if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar8) {
              *(byte **)(*(int *)(param_2 + 0x10) + 4) = pbVar12;
            }
            else {
              iVar6 = *(int *)(pbVar8 + 4);
              if (*(byte **)(iVar6 + 8) == pbVar8) {
                *(byte **)(iVar6 + 8) = pbVar12;
              }
              else {
                *(byte **)(iVar6 + 0xc) = pbVar12;
              }
            }
            if (pbVar5 == (byte *)0x0) {
              pbVar5 = pbVar12;
            }
            *(undefined4 *)(pbVar12 + 4) = *(undefined4 *)(pbVar8 + 4);
            pbVar9 = (byte *)(uint)*pbVar8;
            bVar1 = *pbVar12;
            *pbVar12 = *pbVar8;
            *pbVar8 = bVar1;
            pbVar12 = pbVar8;
          }
        }
        pbVar8 = *(byte **)(param_2 + 0x10);
        bVar13 = pbVar8 != pbVar5;
        if (bVar13) {
          pbVar8 = (byte *)(uint)*pbVar12;
        }
        if (bVar13 && pbVar8 != (byte *)0x0) {
LAB_00168528:
          if ((*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar5) || (*pbVar5 != 1))
          goto LAB_00168544;
          pbVar7 = *(byte **)(pbVar5 + 4);
          pbVar8 = *(byte **)(pbVar7 + 8);
          if (pbVar8 == pbVar5) {
            pbVar8 = *(byte **)(pbVar7 + 0xc);
            if (pbVar8 != (byte *)0x0) {
              if (*pbVar8 == 0) {
                *pbVar8 = 1;
                **(undefined1 **)(pbVar5 + 4) = 0;
                iVar6 = *(int *)(pbVar5 + 4);
                iVar3 = *(int *)(iVar6 + 0xc);
                *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)(iVar3 + 8);
                if (*(int *)(iVar3 + 8) != 0) {
                  *(int *)(*(int *)(iVar3 + 8) + 4) = iVar6;
                }
                *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar6 + 4);
                pbVar9 = *(byte **)(param_2 + 0x10);
                if (*(int *)(pbVar9 + 4) == iVar6) {
                  *(int *)(pbVar9 + 4) = iVar3;
                }
                else {
                  pbVar9 = *(byte **)(iVar6 + 4);
                  if (*(int *)(pbVar9 + 8) == iVar6) {
                    *(int *)(pbVar9 + 8) = iVar3;
                  }
                  else {
                    *(int *)(pbVar9 + 0xc) = iVar3;
                  }
                }
                *(int *)(iVar3 + 8) = iVar6;
                *(int *)(iVar6 + 4) = iVar3;
                pbVar7 = *(byte **)(pbVar5 + 4);
                pbVar8 = *(byte **)(pbVar7 + 0xc);
                if (pbVar8 == (byte *)0x0) goto LAB_00168500;
              }
              pbVar7 = *(byte **)(pbVar8 + 8);
              if (pbVar7 != (byte *)0x0) {
                pbVar9 = (byte *)(uint)*pbVar7;
              }
              if (pbVar7 == (byte *)0x0 || pbVar9 == &DAT_00000001) {
                pbVar11 = *(byte **)(pbVar8 + 0xc);
                pbVar9 = (byte *)0x0;
                if (pbVar11 != (byte *)0x0) {
                  pbVar9 = (byte *)(uint)*pbVar11;
                }
                if (pbVar11 == (byte *)0x0 || pbVar9 == &DAT_00000001) goto LAB_00168520;
              }
              pcVar10 = *(char **)(pbVar8 + 0xc);
              cVar2 = '\0';
              if (pcVar10 != (char *)0x0) {
                cVar2 = *pcVar10;
              }
              if (pcVar10 == (char *)0x0 || cVar2 == '\x01') {
                if (pbVar7 != (byte *)0x0) {
                  *pbVar7 = 1;
                }
                *pbVar8 = 0;
                iVar6 = *(int *)(pbVar8 + 8);
                *(undefined4 *)(pbVar8 + 8) = *(undefined4 *)(iVar6 + 0xc);
                if (*(int *)(iVar6 + 0xc) != 0) {
                  *(byte **)(*(int *)(iVar6 + 0xc) + 4) = pbVar8;
                }
                *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(pbVar8 + 4);
                pbVar9 = *(byte **)(param_2 + 0x10);
                if (*(byte **)(pbVar9 + 4) == pbVar8) {
                  *(int *)(pbVar9 + 4) = iVar6;
                }
                else {
                  pbVar9 = *(byte **)(pbVar8 + 4);
                  if (*(byte **)(pbVar9 + 0xc) == pbVar8) {
                    *(int *)(pbVar9 + 0xc) = iVar6;
                  }
                  else {
                    *(int *)(pbVar9 + 8) = iVar6;
                  }
                }
                *(byte **)(iVar6 + 0xc) = pbVar8;
                *(int *)(pbVar8 + 4) = iVar6;
                pbVar8 = *(byte **)(*(int *)(pbVar5 + 4) + 0xc);
                if (pbVar8 == (byte *)0x0) goto LAB_00168544;
              }
              *pbVar8 = **(byte **)(pbVar5 + 4);
              **(undefined1 **)(pbVar5 + 4) = 1;
              if (*(undefined1 **)(pbVar8 + 0xc) != (undefined1 *)0x0) {
                **(undefined1 **)(pbVar8 + 0xc) = 1;
              }
              iVar3 = *(int *)(pbVar5 + 4);
              iVar6 = *(int *)(iVar3 + 0xc);
              *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar6 + 8);
              if (*(int *)(iVar6 + 8) != 0) {
                *(int *)(*(int *)(iVar6 + 8) + 4) = iVar3;
              }
              *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(iVar3 + 4);
              pbVar9 = *(byte **)(param_2 + 0x10);
              if (*(int *)(pbVar9 + 4) == iVar3) {
                *(int *)(pbVar9 + 4) = iVar6;
              }
              else {
                pbVar9 = *(byte **)(iVar3 + 4);
                if (*(int *)(pbVar9 + 8) == iVar3) {
                  *(int *)(pbVar9 + 8) = iVar6;
                }
                else {
                  *(int *)(pbVar9 + 0xc) = iVar6;
                }
              }
              *(int *)(iVar6 + 8) = iVar3;
              *(int *)(iVar3 + 4) = iVar6;
              goto LAB_00168544;
            }
LAB_00168500:
            *pbVar5 = 0;
            pbVar5 = pbVar7;
            goto LAB_00168528;
          }
          if (pbVar8 == (byte *)0x0) goto LAB_00168500;
          if (*pbVar8 == 0) {
            *pbVar8 = 1;
            **(undefined1 **)(pbVar5 + 4) = 0;
            iVar6 = *(int *)(pbVar5 + 4);
            iVar3 = *(int *)(iVar6 + 8);
            *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar3 + 0xc);
            if (*(int *)(iVar3 + 0xc) != 0) {
              *(int *)(*(int *)(iVar3 + 0xc) + 4) = iVar6;
            }
            *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar6 + 4);
            pbVar9 = *(byte **)(param_2 + 0x10);
            if (*(int *)(pbVar9 + 4) == iVar6) {
              *(int *)(pbVar9 + 4) = iVar3;
            }
            else {
              pbVar9 = *(byte **)(iVar6 + 4);
              if (*(int *)(pbVar9 + 0xc) == iVar6) {
                *(int *)(pbVar9 + 0xc) = iVar3;
              }
              else {
                *(int *)(pbVar9 + 8) = iVar3;
              }
            }
            *(int *)(iVar3 + 0xc) = iVar6;
            *(int *)(iVar6 + 4) = iVar3;
            pbVar7 = *(byte **)(pbVar5 + 4);
            pbVar8 = *(byte **)(pbVar7 + 8);
            if (pbVar8 == (byte *)0x0) goto LAB_00168500;
          }
          pbVar7 = *(byte **)(pbVar8 + 0xc);
          if (pbVar7 != (byte *)0x0) {
            pbVar9 = (byte *)(uint)*pbVar7;
          }
          if (pbVar7 == (byte *)0x0 || pbVar9 == &DAT_00000001) {
            pbVar11 = *(byte **)(pbVar8 + 8);
            pbVar9 = (byte *)0x0;
            if (pbVar11 != (byte *)0x0) {
              pbVar9 = (byte *)(uint)*pbVar11;
            }
            if (pbVar11 == (byte *)0x0 || pbVar9 == &DAT_00000001) {
LAB_00168520:
              *pbVar8 = 0;
              pbVar5 = *(byte **)(pbVar5 + 4);
              goto LAB_00168528;
            }
          }
          pcVar10 = *(char **)(pbVar8 + 8);
          cVar2 = '\0';
          if (pcVar10 != (char *)0x0) {
            cVar2 = *pcVar10;
          }
          if (pcVar10 == (char *)0x0 || cVar2 == '\x01') {
            if (pbVar7 != (byte *)0x0) {
              *pbVar7 = 1;
            }
            *pbVar8 = 0;
            iVar6 = *(int *)(pbVar8 + 0xc);
            *(undefined4 *)(pbVar8 + 0xc) = *(undefined4 *)(iVar6 + 8);
            if (*(int *)(iVar6 + 8) != 0) {
              *(byte **)(*(int *)(iVar6 + 8) + 4) = pbVar8;
            }
            *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(pbVar8 + 4);
            pbVar9 = *(byte **)(param_2 + 0x10);
            if (*(byte **)(pbVar9 + 4) == pbVar8) {
              *(int *)(pbVar9 + 4) = iVar6;
            }
            else {
              pbVar9 = *(byte **)(pbVar8 + 4);
              if (*(byte **)(pbVar9 + 8) == pbVar8) {
                *(int *)(pbVar9 + 8) = iVar6;
              }
              else {
                *(int *)(pbVar9 + 0xc) = iVar6;
              }
            }
            *(byte **)(iVar6 + 8) = pbVar8;
            *(int *)(pbVar8 + 4) = iVar6;
            pbVar8 = *(byte **)(*(int *)(pbVar5 + 4) + 8);
            if (pbVar8 == (byte *)0x0) goto LAB_00168544;
          }
          *pbVar8 = **(byte **)(pbVar5 + 4);
          **(undefined1 **)(pbVar5 + 4) = 1;
          if (*(undefined1 **)(pbVar8 + 8) != (undefined1 *)0x0) {
            **(undefined1 **)(pbVar8 + 8) = 1;
          }
          iVar6 = *(int *)(pbVar5 + 4);
          iVar3 = *(int *)(iVar6 + 8);
          *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar3 + 0xc);
          if (*(int *)(iVar3 + 0xc) != 0) {
            *(int *)(*(int *)(iVar3 + 0xc) + 4) = iVar6;
          }
          *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar6 + 4);
          pbVar9 = *(byte **)(param_2 + 0x10);
          if (*(int *)(pbVar9 + 4) == iVar6) {
            *(int *)(pbVar9 + 4) = iVar3;
          }
          else {
            pbVar9 = *(byte **)(iVar6 + 4);
            if (*(int *)(pbVar9 + 0xc) == iVar6) {
              *(int *)(pbVar9 + 0xc) = iVar3;
            }
            else {
              *(int *)(pbVar9 + 8) = iVar3;
            }
          }
          *(int *)(iVar3 + 0xc) = iVar6;
          *(int *)(iVar6 + 4) = iVar3;
LAB_00168544:
          *pbVar5 = 1;
        }
        *(undefined4 *)(pbVar12 + 0xc) = *(undefined4 *)(param_2 + 4);
        fn_00170f54(pbVar12 + 0x10);
        *(byte **)(param_2 + 4) = pbVar12;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -1;
      }
      *param_1 = pbVar4;
    }
  }
  else {
    iVar6 = *(int *)(iVar3 + 4);
    while (iVar6 != 0) {
      fn_00177798(param_2,*(undefined4 *)(iVar6 + 0xc));
      iVar3 = *(int *)(iVar6 + 8);
      *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)(param_2 + 4);
      fn_00170f54(iVar6 + 0x10);
      *(int *)(param_2 + 4) = iVar6;
      iVar6 = iVar3;
    }
    *(int *)(*(int *)(param_2 + 0x10) + 8) = *(int *)(param_2 + 0x10);
    *(undefined4 *)(*(int *)(param_2 + 0x10) + 4) = 0;
    *(int *)(*(int *)(param_2 + 0x10) + 0xc) = *(int *)(param_2 + 0x10);
    *(undefined4 *)(param_2 + 0x14) = 0;
    *param_1 = *(undefined4 *)(param_2 + 0x10);
  }
  return;
}


