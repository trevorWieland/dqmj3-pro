#include "00764660_00764660.h"



void fn_00764660(undefined4 *param_1,int param_2,int *param_3,byte *param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  char *pcVar9;
  byte *pbVar10;
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
  if ((bVar13 || iVar6 != iVar3) || (*(int *)(param_2 + 0x14) == 0)) {
    pbVar8 = param_4;
    if (*param_3 != *(int *)param_4) {
      do {
        pbVar11 = (byte *)*param_3;
        iVar6 = *(int *)(pbVar11 + 0xc);
        if (iVar6 == 0) {
          iVar3 = *(int *)(pbVar11 + 4);
          iVar6 = iVar3;
          if (pbVar11 == *(byte **)(iVar3 + 0xc)) {
            do {
              *param_3 = iVar6;
              iVar3 = *(int *)(iVar6 + 4);
              bVar13 = iVar6 == *(int *)(iVar3 + 0xc);
              iVar6 = iVar3;
            } while (bVar13);
          }
          if (*(int *)(*param_3 + 0xc) != iVar3) {
            *param_3 = iVar3;
          }
        }
        else {
          *param_3 = iVar6;
          while (iVar6 = *(int *)(iVar6 + 8), iVar6 != 0) {
            *param_3 = iVar6;
          }
        }
        pbVar4 = *(byte **)(param_2 + 0x10);
        if (pbVar11 != pbVar4) {
          pbVar12 = *(byte **)(pbVar11 + 0xc);
          if (*(byte **)(pbVar11 + 0xc) == (byte *)0x0) {
            pbVar12 = *(byte **)(pbVar11 + 4);
            pbVar4 = pbVar11;
            if (pbVar11 == *(byte **)(pbVar12 + 0xc)) {
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
          pbVar7 = *(byte **)(pbVar11 + 8);
          pbVar5 = *(byte **)(pbVar11 + 0xc);
          pbVar12 = pbVar11;
          if (pbVar7 == (byte *)0x0) {
            if (pbVar5 != (byte *)0x0) goto LAB_00764834;
            pbVar5 = *(byte **)(pbVar11 + 4);
            if (*(byte **)(param_2 + 0x10) == pbVar5) {
              *(byte **)(*(byte **)(param_2 + 0x10) + 0xc) = pbVar5;
              *(byte **)(*(int *)(param_2 + 0x10) + 8) = pbVar5;
              *(undefined4 *)(*(int *)(param_2 + 0x10) + 4) = 0;
            }
            else if (*(byte **)(pbVar5 + 8) == pbVar11) {
              pbVar5[8] = 0;
              pbVar5[9] = 0;
              pbVar5[10] = 0;
              pbVar5[0xb] = 0;
              pbVar8 = *(byte **)(*(int *)(param_2 + 0x10) + 8);
              if (pbVar8 == pbVar11) {
                *(byte **)(*(int *)(param_2 + 0x10) + 8) = pbVar5;
              }
            }
            else {
              pbVar5[0xc] = 0;
              pbVar5[0xd] = 0;
              pbVar5[0xe] = 0;
              pbVar5[0xf] = 0;
              pbVar8 = *(byte **)(*(int *)(param_2 + 0x10) + 0xc);
              if (pbVar8 == pbVar11) {
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
LAB_00764834:
            if (pbVar12 == pbVar11) {
              *(undefined4 *)(pbVar5 + 4) = *(undefined4 *)(pbVar12 + 4);
              if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar11) {
                *(byte **)(*(int *)(param_2 + 0x10) + 4) = pbVar5;
              }
              else {
                iVar6 = *(int *)(pbVar11 + 4);
                if (*(byte **)(iVar6 + 8) == pbVar11) {
                  *(byte **)(iVar6 + 8) = pbVar5;
                }
                else {
                  *(byte **)(iVar6 + 0xc) = pbVar5;
                }
              }
              iVar6 = *(int *)(param_2 + 0x10);
              if (*(byte **)(iVar6 + 8) == pbVar11) {
                if (*(int *)(pbVar11 + 0xc) == 0) {
                  *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(pbVar11 + 4);
                }
                else {
                  pbVar7 = *(byte **)(pbVar5 + 8);
                  pbVar8 = pbVar5;
                  while (pbVar10 = pbVar7, pbVar10 != (byte *)0x0) {
                    pbVar8 = pbVar10;
                    pbVar7 = *(byte **)(pbVar10 + 8);
                  }
                  *(byte **)(iVar6 + 8) = pbVar8;
                }
              }
              pbVar8 = *(byte **)(param_2 + 0x10);
              if (*(byte **)(pbVar8 + 0xc) == pbVar11) {
                if (*(int *)(pbVar11 + 8) == 0) {
                  *(undefined4 *)(pbVar8 + 0xc) = *(undefined4 *)(pbVar11 + 4);
                }
                else {
                  pbVar7 = *(byte **)(pbVar5 + 0xc);
                  pbVar11 = pbVar5;
                  while (pbVar10 = pbVar7, pbVar10 != (byte *)0x0) {
                    pbVar11 = pbVar10;
                    pbVar7 = *(byte **)(pbVar10 + 0xc);
                  }
                  *(byte **)(pbVar8 + 0xc) = pbVar11;
                }
              }
            }
            else {
              *(byte **)(pbVar7 + 4) = pbVar12;
              *(undefined4 *)(pbVar12 + 8) = *(undefined4 *)(pbVar11 + 8);
              if (*(byte **)(pbVar11 + 0xc) == pbVar12) {
                if (pbVar5 != (byte *)0x0) {
                  *(byte **)(pbVar5 + 4) = pbVar12;
                }
              }
              else {
                if (pbVar5 != (byte *)0x0) {
                  *(undefined4 *)(pbVar5 + 4) = *(undefined4 *)(pbVar12 + 4);
                }
                *(byte **)(*(int *)(pbVar12 + 4) + 8) = pbVar5;
                *(undefined4 *)(pbVar12 + 0xc) = *(undefined4 *)(pbVar11 + 0xc);
                *(byte **)(*(int *)(pbVar11 + 0xc) + 4) = pbVar12;
              }
              if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar11) {
                *(byte **)(*(int *)(param_2 + 0x10) + 4) = pbVar12;
              }
              else {
                iVar6 = *(int *)(pbVar11 + 4);
                if (*(byte **)(iVar6 + 8) == pbVar11) {
                  *(byte **)(iVar6 + 8) = pbVar12;
                }
                else {
                  *(byte **)(iVar6 + 0xc) = pbVar12;
                }
              }
              if (pbVar5 == (byte *)0x0) {
                pbVar5 = pbVar12;
              }
              *(undefined4 *)(pbVar12 + 4) = *(undefined4 *)(pbVar11 + 4);
              pbVar8 = (byte *)(uint)*pbVar11;
              bVar1 = *pbVar12;
              *pbVar12 = *pbVar11;
              *pbVar11 = bVar1;
              pbVar12 = pbVar11;
            }
          }
          pbVar11 = *(byte **)(param_2 + 0x10);
          bVar13 = pbVar11 != pbVar5;
          if (bVar13) {
            pbVar11 = (byte *)(uint)*pbVar12;
          }
          if (bVar13 && pbVar11 != (byte *)0x0) {
LAB_00764b78:
            if ((*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar5) || (*pbVar5 != 1))
            goto LAB_00764b94;
            pbVar7 = *(byte **)(pbVar5 + 4);
            pbVar11 = *(byte **)(pbVar7 + 8);
            if (pbVar11 == pbVar5) {
              pbVar11 = *(byte **)(pbVar7 + 0xc);
              if (pbVar11 != (byte *)0x0) {
                if (*pbVar11 == 0) {
                  *pbVar11 = 1;
                  **(undefined1 **)(pbVar5 + 4) = 0;
                  iVar6 = *(int *)(pbVar5 + 4);
                  iVar3 = *(int *)(iVar6 + 0xc);
                  *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)(iVar3 + 8);
                  if (*(int *)(iVar3 + 8) != 0) {
                    *(int *)(*(int *)(iVar3 + 8) + 4) = iVar6;
                  }
                  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar6 + 4);
                  pbVar8 = *(byte **)(param_2 + 0x10);
                  if (*(int *)(pbVar8 + 4) == iVar6) {
                    *(int *)(pbVar8 + 4) = iVar3;
                  }
                  else {
                    pbVar8 = *(byte **)(iVar6 + 4);
                    if (*(int *)(pbVar8 + 8) == iVar6) {
                      *(int *)(pbVar8 + 8) = iVar3;
                    }
                    else {
                      *(int *)(pbVar8 + 0xc) = iVar3;
                    }
                  }
                  *(int *)(iVar3 + 8) = iVar6;
                  *(int *)(iVar6 + 4) = iVar3;
                  pbVar7 = *(byte **)(pbVar5 + 4);
                  pbVar11 = *(byte **)(pbVar7 + 0xc);
                  if (pbVar11 == (byte *)0x0) goto LAB_00764b50;
                }
                pbVar7 = *(byte **)(pbVar11 + 8);
                if (pbVar7 != (byte *)0x0) {
                  pbVar8 = (byte *)(uint)*pbVar7;
                }
                if (pbVar7 == (byte *)0x0 || pbVar8 == &DAT_00000001) {
                  pbVar10 = *(byte **)(pbVar11 + 0xc);
                  pbVar8 = (byte *)0x0;
                  if (pbVar10 != (byte *)0x0) {
                    pbVar8 = (byte *)(uint)*pbVar10;
                  }
                  if (pbVar10 == (byte *)0x0 || pbVar8 == &DAT_00000001) goto LAB_00764b70;
                }
                pcVar9 = *(char **)(pbVar11 + 0xc);
                cVar2 = '\0';
                if (pcVar9 != (char *)0x0) {
                  cVar2 = *pcVar9;
                }
                if (pcVar9 == (char *)0x0 || cVar2 == '\x01') {
                  if (pbVar7 != (byte *)0x0) {
                    *pbVar7 = 1;
                  }
                  *pbVar11 = 0;
                  iVar6 = *(int *)(pbVar11 + 8);
                  *(undefined4 *)(pbVar11 + 8) = *(undefined4 *)(iVar6 + 0xc);
                  if (*(int *)(iVar6 + 0xc) != 0) {
                    *(byte **)(*(int *)(iVar6 + 0xc) + 4) = pbVar11;
                  }
                  *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(pbVar11 + 4);
                  pbVar8 = *(byte **)(param_2 + 0x10);
                  if (*(byte **)(pbVar8 + 4) == pbVar11) {
                    *(int *)(pbVar8 + 4) = iVar6;
                  }
                  else {
                    pbVar8 = *(byte **)(pbVar11 + 4);
                    if (*(byte **)(pbVar8 + 0xc) == pbVar11) {
                      *(int *)(pbVar8 + 0xc) = iVar6;
                    }
                    else {
                      *(int *)(pbVar8 + 8) = iVar6;
                    }
                  }
                  *(byte **)(iVar6 + 0xc) = pbVar11;
                  *(int *)(pbVar11 + 4) = iVar6;
                  pbVar11 = *(byte **)(*(int *)(pbVar5 + 4) + 0xc);
                  if (pbVar11 == (byte *)0x0) goto LAB_00764b94;
                }
                *pbVar11 = **(byte **)(pbVar5 + 4);
                **(undefined1 **)(pbVar5 + 4) = 1;
                if (*(undefined1 **)(pbVar11 + 0xc) != (undefined1 *)0x0) {
                  **(undefined1 **)(pbVar11 + 0xc) = 1;
                }
                pbVar8 = *(byte **)(pbVar5 + 4);
                iVar6 = *(int *)(pbVar8 + 0xc);
                *(undefined4 *)(pbVar8 + 0xc) = *(undefined4 *)(iVar6 + 8);
                if (*(int *)(iVar6 + 8) != 0) {
                  *(byte **)(*(int *)(iVar6 + 8) + 4) = pbVar8;
                }
                *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(pbVar8 + 4);
                if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar8) {
                  *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar6;
                }
                else {
                  iVar3 = *(int *)(pbVar8 + 4);
                  if (*(byte **)(iVar3 + 8) == pbVar8) {
                    *(int *)(iVar3 + 8) = iVar6;
                  }
                  else {
                    *(int *)(iVar3 + 0xc) = iVar6;
                  }
                }
                *(byte **)(iVar6 + 8) = pbVar8;
                *(int *)(pbVar8 + 4) = iVar6;
                goto LAB_00764b94;
              }
LAB_00764b50:
              *pbVar5 = 0;
              pbVar5 = pbVar7;
              goto LAB_00764b78;
            }
            if (pbVar11 == (byte *)0x0) goto LAB_00764b50;
            if (*pbVar11 == 0) {
              *pbVar11 = 1;
              **(undefined1 **)(pbVar5 + 4) = 0;
              iVar6 = *(int *)(pbVar5 + 4);
              iVar3 = *(int *)(iVar6 + 8);
              *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar3 + 0xc);
              if (*(int *)(iVar3 + 0xc) != 0) {
                *(int *)(*(int *)(iVar3 + 0xc) + 4) = iVar6;
              }
              *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar6 + 4);
              pbVar8 = *(byte **)(param_2 + 0x10);
              if (*(int *)(pbVar8 + 4) == iVar6) {
                *(int *)(pbVar8 + 4) = iVar3;
              }
              else {
                pbVar8 = *(byte **)(iVar6 + 4);
                if (*(int *)(pbVar8 + 0xc) == iVar6) {
                  *(int *)(pbVar8 + 0xc) = iVar3;
                }
                else {
                  *(int *)(pbVar8 + 8) = iVar3;
                }
              }
              *(int *)(iVar3 + 0xc) = iVar6;
              *(int *)(iVar6 + 4) = iVar3;
              pbVar7 = *(byte **)(pbVar5 + 4);
              pbVar11 = *(byte **)(pbVar7 + 8);
              if (pbVar11 == (byte *)0x0) goto LAB_00764b50;
            }
            pbVar7 = *(byte **)(pbVar11 + 0xc);
            if (pbVar7 != (byte *)0x0) {
              pbVar8 = (byte *)(uint)*pbVar7;
            }
            if (pbVar7 == (byte *)0x0 || pbVar8 == &DAT_00000001) {
              pbVar10 = *(byte **)(pbVar11 + 8);
              pbVar8 = (byte *)0x0;
              if (pbVar10 != (byte *)0x0) {
                pbVar8 = (byte *)(uint)*pbVar10;
              }
              if (pbVar10 == (byte *)0x0 || pbVar8 == &DAT_00000001) {
LAB_00764b70:
                *pbVar11 = 0;
                pbVar5 = *(byte **)(pbVar5 + 4);
                goto LAB_00764b78;
              }
            }
            pcVar9 = *(char **)(pbVar11 + 8);
            cVar2 = '\0';
            if (pcVar9 != (char *)0x0) {
              cVar2 = *pcVar9;
            }
            if (pcVar9 == (char *)0x0 || cVar2 == '\x01') {
              if (pbVar7 != (byte *)0x0) {
                *pbVar7 = 1;
              }
              *pbVar11 = 0;
              iVar6 = *(int *)(pbVar11 + 0xc);
              *(undefined4 *)(pbVar11 + 0xc) = *(undefined4 *)(iVar6 + 8);
              if (*(int *)(iVar6 + 8) != 0) {
                *(byte **)(*(int *)(iVar6 + 8) + 4) = pbVar11;
              }
              *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(pbVar11 + 4);
              pbVar8 = *(byte **)(param_2 + 0x10);
              if (*(byte **)(pbVar8 + 4) == pbVar11) {
                *(int *)(pbVar8 + 4) = iVar6;
              }
              else {
                pbVar8 = *(byte **)(pbVar11 + 4);
                if (*(byte **)(pbVar8 + 8) == pbVar11) {
                  *(int *)(pbVar8 + 8) = iVar6;
                }
                else {
                  *(int *)(pbVar8 + 0xc) = iVar6;
                }
              }
              *(byte **)(iVar6 + 8) = pbVar11;
              *(int *)(pbVar11 + 4) = iVar6;
              pbVar11 = *(byte **)(*(int *)(pbVar5 + 4) + 8);
              if (pbVar11 == (byte *)0x0) goto LAB_00764b94;
            }
            *pbVar11 = **(byte **)(pbVar5 + 4);
            **(undefined1 **)(pbVar5 + 4) = 1;
            if (*(undefined1 **)(pbVar11 + 8) != (undefined1 *)0x0) {
              **(undefined1 **)(pbVar11 + 8) = 1;
            }
            iVar6 = *(int *)(pbVar5 + 4);
            iVar3 = *(int *)(iVar6 + 8);
            *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar3 + 0xc);
            if (*(int *)(iVar3 + 0xc) != 0) {
              *(int *)(*(int *)(iVar3 + 0xc) + 4) = iVar6;
            }
            *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar6 + 4);
            pbVar8 = *(byte **)(param_2 + 0x10);
            if (*(int *)(pbVar8 + 4) == iVar6) {
              *(int *)(pbVar8 + 4) = iVar3;
            }
            else {
              pbVar8 = *(byte **)(iVar6 + 4);
              if (*(int *)(pbVar8 + 0xc) == iVar6) {
                *(int *)(pbVar8 + 0xc) = iVar3;
              }
              else {
                *(int *)(pbVar8 + 8) = iVar3;
              }
            }
            *(int *)(iVar3 + 0xc) = iVar6;
            *(int *)(iVar6 + 4) = iVar3;
LAB_00764b94:
            *pbVar5 = 1;
          }
          *(undefined4 *)(pbVar12 + 0xc) = *(undefined4 *)(param_2 + 4);
          (*(code *)**(undefined4 **)(pbVar12 + 0x10))(pbVar12 + 0x10);
          *(byte **)(param_2 + 4) = pbVar12;
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -1;
        }
        *param_1 = pbVar4;
        if (*param_3 == *(int *)param_4) {
          return;
        }
      } while( true );
    }
  }
  else {
    iVar6 = *(int *)(iVar3 + 4);
    while (iVar6 != 0) {
      fn_00764dfc(param_2,*(undefined4 *)(iVar6 + 0xc));
      iVar3 = *(int *)(iVar6 + 8);
      *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)(param_2 + 4);
      (*(code *)**(undefined4 **)(iVar6 + 0x10))(iVar6 + 0x10);
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


