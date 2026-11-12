#include "00778438_00778438.h"



void fn_00778438(undefined4 *param_1,int param_2,int *param_3,int *param_4)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  byte *unaff_r9;
  char *pcVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  bool bVar13;
  
  *param_1 = *(undefined4 *)(param_2 + 0x10);
  iVar4 = *(int *)(param_2 + 0x10);
  iVar7 = *(int *)(iVar4 + 8);
  bVar13 = *param_3 == iVar7;
  if (bVar13) {
    iVar7 = *param_4;
  }
  if ((bVar13 && iVar7 == iVar4) && (*(int *)(param_2 + 0x14) != 0)) {
    iVar7 = *(int *)(iVar4 + 4);
    while (iVar7 != 0) {
      fn_00778b94(param_2,*(undefined4 *)(iVar7 + 0xc));
      iVar4 = *(int *)(iVar7 + 8);
      *(undefined4 *)(iVar7 + 0xc) = *(undefined4 *)(param_2 + 4);
      *(int *)(param_2 + 4) = iVar7;
      iVar7 = iVar4;
    }
    *(int *)(*(int *)(param_2 + 0x10) + 8) = *(int *)(param_2 + 0x10);
    *(undefined4 *)(*(int *)(param_2 + 0x10) + 4) = 0;
    *(int *)(*(int *)(param_2 + 0x10) + 0xc) = *(int *)(param_2 + 0x10);
    *(undefined4 *)(param_2 + 0x14) = 0;
    *param_1 = *(undefined4 *)(param_2 + 0x10);
  }
  else {
    while (pbVar5 = (byte *)*param_3, pbVar5 != (byte *)*param_4) {
      iVar7 = *(int *)(pbVar5 + 0xc);
      if (iVar7 == 0) {
        iVar4 = *(int *)(pbVar5 + 4);
        iVar7 = iVar4;
        if (pbVar5 == *(byte **)(iVar4 + 0xc)) {
          do {
            *param_3 = iVar7;
            iVar4 = *(int *)(iVar7 + 4);
            bVar13 = iVar7 == *(int *)(iVar4 + 0xc);
            iVar7 = iVar4;
          } while (bVar13);
        }
        if (*(int *)(*param_3 + 0xc) != iVar4) {
          *param_3 = iVar4;
        }
      }
      else {
        *param_3 = iVar7;
        while (iVar7 = *(int *)(iVar7 + 8), iVar7 != 0) {
          *param_3 = iVar7;
        }
      }
      pbVar10 = *(byte **)(param_2 + 0x10);
      if (pbVar5 != pbVar10) {
        pbVar6 = *(byte **)(pbVar5 + 0xc);
        if (*(byte **)(pbVar5 + 0xc) == (byte *)0x0) {
          pbVar6 = *(byte **)(pbVar5 + 4);
          pbVar10 = pbVar5;
          if (pbVar5 == *(byte **)(pbVar6 + 0xc)) {
            do {
              pbVar10 = pbVar6;
              pbVar6 = *(byte **)(pbVar10 + 4);
            } while (pbVar10 == *(byte **)(pbVar6 + 0xc));
          }
          if (*(byte **)(pbVar10 + 0xc) != pbVar6) {
            pbVar10 = pbVar6;
          }
        }
        else {
          do {
            pbVar10 = pbVar6;
            pbVar6 = *(byte **)(pbVar10 + 8);
          } while (*(byte **)(pbVar10 + 8) != (byte *)0x0);
        }
        pbVar12 = *(byte **)(pbVar5 + 8);
        pbVar11 = *(byte **)(pbVar5 + 0xc);
        pbVar6 = pbVar5;
        if (pbVar12 == (byte *)0x0) {
          if (pbVar11 != (byte *)0x0) goto LAB_007785f4;
          pbVar11 = *(byte **)(pbVar5 + 4);
          if (*(byte **)(param_2 + 0x10) == pbVar11) {
            *(byte **)(*(byte **)(param_2 + 0x10) + 0xc) = pbVar11;
            *(byte **)(*(int *)(param_2 + 0x10) + 8) = pbVar11;
            *(undefined4 *)(*(int *)(param_2 + 0x10) + 4) = 0;
          }
          else if (*(byte **)(pbVar11 + 8) == pbVar5) {
            pbVar11[8] = 0;
            pbVar11[9] = 0;
            pbVar11[10] = 0;
            pbVar11[0xb] = 0;
            unaff_r9 = *(byte **)(*(int *)(param_2 + 0x10) + 8);
            if (unaff_r9 == pbVar5) {
              *(byte **)(*(int *)(param_2 + 0x10) + 8) = pbVar11;
            }
          }
          else {
            pbVar11[0xc] = 0;
            pbVar11[0xd] = 0;
            pbVar11[0xe] = 0;
            pbVar11[0xf] = 0;
            unaff_r9 = *(byte **)(*(int *)(param_2 + 0x10) + 0xc);
            if (unaff_r9 == pbVar5) {
              *(byte **)(*(int *)(param_2 + 0x10) + 0xc) = pbVar11;
            }
          }
        }
        else {
          if (pbVar11 == (byte *)0x0) {
            pbVar11 = pbVar12;
          }
          else {
            iVar7 = *(int *)(pbVar11 + 8);
            pbVar6 = pbVar11;
            while (iVar7 != 0) {
              pbVar6 = *(byte **)(pbVar6 + 8);
              iVar7 = *(int *)(pbVar6 + 8);
            }
            pbVar11 = *(byte **)(pbVar6 + 0xc);
          }
LAB_007785f4:
          if (pbVar6 == pbVar5) {
            *(undefined4 *)(pbVar11 + 4) = *(undefined4 *)(pbVar6 + 4);
            if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar5) {
              *(byte **)(*(int *)(param_2 + 0x10) + 4) = pbVar11;
            }
            else {
              iVar7 = *(int *)(pbVar5 + 4);
              if (*(byte **)(iVar7 + 8) == pbVar5) {
                *(byte **)(iVar7 + 8) = pbVar11;
              }
              else {
                *(byte **)(iVar7 + 0xc) = pbVar11;
              }
            }
            iVar7 = *(int *)(param_2 + 0x10);
            if (*(byte **)(iVar7 + 8) == pbVar5) {
              if (*(int *)(pbVar5 + 0xc) == 0) {
                *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(pbVar5 + 4);
              }
              else {
                pbVar9 = *(byte **)(pbVar11 + 8);
                pbVar12 = pbVar11;
                while (pbVar3 = pbVar9, pbVar3 != (byte *)0x0) {
                  pbVar12 = pbVar3;
                  pbVar9 = *(byte **)(pbVar3 + 8);
                }
                *(byte **)(iVar7 + 8) = pbVar12;
              }
            }
            unaff_r9 = *(byte **)(param_2 + 0x10);
            if (*(byte **)(unaff_r9 + 0xc) == pbVar5) {
              if (*(int *)(pbVar5 + 8) == 0) {
                *(undefined4 *)(unaff_r9 + 0xc) = *(undefined4 *)(pbVar5 + 4);
              }
              else {
                pbVar12 = *(byte **)(pbVar11 + 0xc);
                pbVar5 = pbVar11;
                while (pbVar9 = pbVar12, pbVar9 != (byte *)0x0) {
                  pbVar5 = pbVar9;
                  pbVar12 = *(byte **)(pbVar9 + 0xc);
                }
                *(byte **)(unaff_r9 + 0xc) = pbVar5;
              }
            }
          }
          else {
            *(byte **)(pbVar12 + 4) = pbVar6;
            *(undefined4 *)(pbVar6 + 8) = *(undefined4 *)(pbVar5 + 8);
            if (*(byte **)(pbVar5 + 0xc) == pbVar6) {
              if (pbVar11 != (byte *)0x0) {
                *(byte **)(pbVar11 + 4) = pbVar6;
              }
            }
            else {
              if (pbVar11 != (byte *)0x0) {
                *(undefined4 *)(pbVar11 + 4) = *(undefined4 *)(pbVar6 + 4);
              }
              *(byte **)(*(int *)(pbVar6 + 4) + 8) = pbVar11;
              *(undefined4 *)(pbVar6 + 0xc) = *(undefined4 *)(pbVar5 + 0xc);
              *(byte **)(*(int *)(pbVar5 + 0xc) + 4) = pbVar6;
            }
            if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar5) {
              *(byte **)(*(int *)(param_2 + 0x10) + 4) = pbVar6;
            }
            else {
              iVar7 = *(int *)(pbVar5 + 4);
              if (*(byte **)(iVar7 + 8) == pbVar5) {
                *(byte **)(iVar7 + 8) = pbVar6;
              }
              else {
                *(byte **)(iVar7 + 0xc) = pbVar6;
              }
            }
            if (pbVar11 == (byte *)0x0) {
              pbVar11 = pbVar6;
            }
            *(undefined4 *)(pbVar6 + 4) = *(undefined4 *)(pbVar5 + 4);
            unaff_r9 = (byte *)(uint)*pbVar5;
            bVar1 = *pbVar6;
            *pbVar6 = *pbVar5;
            *pbVar5 = bVar1;
            pbVar6 = pbVar5;
          }
        }
        pbVar5 = *(byte **)(param_2 + 0x10);
        bVar13 = pbVar5 != pbVar11;
        if (bVar13) {
          pbVar5 = (byte *)(uint)*pbVar6;
        }
        if (bVar13 && pbVar5 != (byte *)0x0) {
          while( true ) {
            if ((*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar11) || (*pbVar11 != 1))
            goto LAB_00778950;
            pbVar5 = *(byte **)(pbVar11 + 4);
            pbVar12 = *(byte **)(pbVar5 + 8);
            if (pbVar12 != pbVar11) break;
            pbVar12 = *(byte **)(pbVar5 + 0xc);
            if (pbVar12 == (byte *)0x0) {
LAB_0077890c:
              *pbVar11 = 0;
              pbVar11 = pbVar5;
            }
            else {
              if (*pbVar12 == 0) {
                *pbVar12 = 1;
                **(undefined1 **)(pbVar11 + 4) = 0;
                iVar4 = *(int *)(pbVar11 + 4);
                iVar7 = *(int *)(iVar4 + 0xc);
                *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(iVar7 + 8);
                if (*(int *)(iVar7 + 8) != 0) {
                  *(int *)(*(int *)(iVar7 + 8) + 4) = iVar4;
                }
                *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(iVar4 + 4);
                unaff_r9 = *(byte **)(param_2 + 0x10);
                if (*(int *)(unaff_r9 + 4) == iVar4) {
                  *(int *)(unaff_r9 + 4) = iVar7;
                }
                else {
                  unaff_r9 = *(byte **)(iVar4 + 4);
                  if (*(int *)(unaff_r9 + 8) == iVar4) {
                    *(int *)(unaff_r9 + 8) = iVar7;
                  }
                  else {
                    *(int *)(unaff_r9 + 0xc) = iVar7;
                  }
                }
                *(int *)(iVar7 + 8) = iVar4;
                *(int *)(iVar4 + 4) = iVar7;
                pbVar5 = *(byte **)(pbVar11 + 4);
                pbVar12 = *(byte **)(pbVar5 + 0xc);
                if (pbVar12 == (byte *)0x0) goto LAB_0077890c;
              }
              pbVar5 = *(byte **)(pbVar12 + 8);
              if (pbVar5 != (byte *)0x0) {
                unaff_r9 = (byte *)(uint)*pbVar5;
              }
              if (pbVar5 != (byte *)0x0 && unaff_r9 != &DAT_00000001) {
LAB_00778814:
                pcVar8 = *(char **)(pbVar12 + 0xc);
                cVar2 = '\0';
                if (pcVar8 != (char *)0x0) {
                  cVar2 = *pcVar8;
                }
                if (pcVar8 == (char *)0x0 || cVar2 == '\x01') {
                  if (pbVar5 != (byte *)0x0) {
                    *pbVar5 = 1;
                  }
                  *pbVar12 = 0;
                  iVar7 = *(int *)(pbVar12 + 8);
                  *(undefined4 *)(pbVar12 + 8) = *(undefined4 *)(iVar7 + 0xc);
                  if (*(int *)(iVar7 + 0xc) != 0) {
                    *(byte **)(*(int *)(iVar7 + 0xc) + 4) = pbVar12;
                  }
                  *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(pbVar12 + 4);
                  unaff_r9 = *(byte **)(param_2 + 0x10);
                  if (*(byte **)(unaff_r9 + 4) == pbVar12) {
                    *(int *)(unaff_r9 + 4) = iVar7;
                  }
                  else {
                    unaff_r9 = *(byte **)(pbVar12 + 4);
                    if (*(byte **)(unaff_r9 + 0xc) == pbVar12) {
                      *(int *)(unaff_r9 + 0xc) = iVar7;
                    }
                    else {
                      *(int *)(unaff_r9 + 8) = iVar7;
                    }
                  }
                  *(byte **)(iVar7 + 0xc) = pbVar12;
                  *(int *)(pbVar12 + 4) = iVar7;
                  pbVar12 = *(byte **)(*(int *)(pbVar11 + 4) + 0xc);
                  if (pbVar12 == (byte *)0x0) goto LAB_00778950;
                }
                *pbVar12 = **(byte **)(pbVar11 + 4);
                **(undefined1 **)(pbVar11 + 4) = 1;
                if (*(undefined1 **)(pbVar12 + 0xc) != (undefined1 *)0x0) {
                  **(undefined1 **)(pbVar12 + 0xc) = 1;
                }
                iVar4 = *(int *)(pbVar11 + 4);
                iVar7 = *(int *)(iVar4 + 0xc);
                *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(iVar7 + 8);
                if (*(int *)(iVar7 + 8) != 0) {
                  *(int *)(*(int *)(iVar7 + 8) + 4) = iVar4;
                }
                *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(iVar4 + 4);
                unaff_r9 = *(byte **)(param_2 + 0x10);
                if (*(int *)(unaff_r9 + 4) == iVar4) {
                  *(int *)(unaff_r9 + 4) = iVar7;
                }
                else {
                  unaff_r9 = *(byte **)(iVar4 + 4);
                  if (*(int *)(unaff_r9 + 8) == iVar4) {
                    *(int *)(unaff_r9 + 8) = iVar7;
                  }
                  else {
                    *(int *)(unaff_r9 + 0xc) = iVar7;
                  }
                }
                *(int *)(iVar7 + 8) = iVar4;
                goto LAB_00778a90;
              }
              pbVar9 = *(byte **)(pbVar12 + 0xc);
              unaff_r9 = (byte *)0x0;
              if (pbVar9 != (byte *)0x0) {
                unaff_r9 = (byte *)(uint)*pbVar9;
              }
              if (pbVar9 != (byte *)0x0 && unaff_r9 != &DAT_00000001) goto LAB_00778814;
LAB_0077892c:
              *pbVar12 = 0;
              pbVar11 = *(byte **)(pbVar11 + 4);
            }
          }
          if (pbVar12 == (byte *)0x0) goto LAB_0077890c;
          if (*pbVar12 == 0) {
            *pbVar12 = 1;
            **(undefined1 **)(pbVar11 + 4) = 0;
            iVar4 = *(int *)(pbVar11 + 4);
            iVar7 = *(int *)(iVar4 + 8);
            *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar7 + 0xc);
            if (*(int *)(iVar7 + 0xc) != 0) {
              *(int *)(*(int *)(iVar7 + 0xc) + 4) = iVar4;
            }
            *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(iVar4 + 4);
            unaff_r9 = *(byte **)(param_2 + 0x10);
            if (*(int *)(unaff_r9 + 4) == iVar4) {
              *(int *)(unaff_r9 + 4) = iVar7;
            }
            else {
              unaff_r9 = *(byte **)(iVar4 + 4);
              if (*(int *)(unaff_r9 + 0xc) == iVar4) {
                *(int *)(unaff_r9 + 0xc) = iVar7;
              }
              else {
                *(int *)(unaff_r9 + 8) = iVar7;
              }
            }
            *(int *)(iVar7 + 0xc) = iVar4;
            *(int *)(iVar4 + 4) = iVar7;
            pbVar5 = *(byte **)(pbVar11 + 4);
            pbVar12 = *(byte **)(pbVar5 + 8);
            if (pbVar12 == (byte *)0x0) goto LAB_0077890c;
          }
          pbVar5 = *(byte **)(pbVar12 + 0xc);
          if (pbVar5 != (byte *)0x0) {
            unaff_r9 = (byte *)(uint)*pbVar5;
          }
          if (pbVar5 == (byte *)0x0 || unaff_r9 == &DAT_00000001) {
            pbVar9 = *(byte **)(pbVar12 + 8);
            unaff_r9 = (byte *)0x0;
            if (pbVar9 != (byte *)0x0) {
              unaff_r9 = (byte *)(uint)*pbVar9;
            }
            if (pbVar9 == (byte *)0x0 || unaff_r9 == &DAT_00000001) goto LAB_0077892c;
          }
          pcVar8 = *(char **)(pbVar12 + 8);
          cVar2 = '\0';
          if (pcVar8 != (char *)0x0) {
            cVar2 = *pcVar8;
          }
          if (pcVar8 == (char *)0x0 || cVar2 == '\x01') {
            if (pbVar5 != (byte *)0x0) {
              *pbVar5 = 1;
            }
            *pbVar12 = 0;
            iVar7 = *(int *)(pbVar12 + 0xc);
            *(undefined4 *)(pbVar12 + 0xc) = *(undefined4 *)(iVar7 + 8);
            if (*(int *)(iVar7 + 8) != 0) {
              *(byte **)(*(int *)(iVar7 + 8) + 4) = pbVar12;
            }
            *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(pbVar12 + 4);
            unaff_r9 = *(byte **)(param_2 + 0x10);
            if (*(byte **)(unaff_r9 + 4) == pbVar12) {
              *(int *)(unaff_r9 + 4) = iVar7;
            }
            else {
              unaff_r9 = *(byte **)(pbVar12 + 4);
              if (*(byte **)(unaff_r9 + 8) == pbVar12) {
                *(int *)(unaff_r9 + 8) = iVar7;
              }
              else {
                *(int *)(unaff_r9 + 0xc) = iVar7;
              }
            }
            *(byte **)(iVar7 + 8) = pbVar12;
            *(int *)(pbVar12 + 4) = iVar7;
            pbVar12 = *(byte **)(*(int *)(pbVar11 + 4) + 8);
            if (pbVar12 != (byte *)0x0) goto LAB_00778a20;
          }
          else {
LAB_00778a20:
            *pbVar12 = **(byte **)(pbVar11 + 4);
            **(undefined1 **)(pbVar11 + 4) = 1;
            if (*(undefined1 **)(pbVar12 + 8) != (undefined1 *)0x0) {
              **(undefined1 **)(pbVar12 + 8) = 1;
            }
            iVar4 = *(int *)(pbVar11 + 4);
            iVar7 = *(int *)(iVar4 + 8);
            *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar7 + 0xc);
            if (*(int *)(iVar7 + 0xc) != 0) {
              *(int *)(*(int *)(iVar7 + 0xc) + 4) = iVar4;
            }
            *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(iVar4 + 4);
            unaff_r9 = *(byte **)(param_2 + 0x10);
            if (*(int *)(unaff_r9 + 4) == iVar4) {
              *(int *)(unaff_r9 + 4) = iVar7;
            }
            else {
              unaff_r9 = *(byte **)(iVar4 + 4);
              if (*(int *)(unaff_r9 + 0xc) == iVar4) {
                *(int *)(unaff_r9 + 0xc) = iVar7;
              }
              else {
                *(int *)(unaff_r9 + 8) = iVar7;
              }
            }
            *(int *)(iVar7 + 0xc) = iVar4;
LAB_00778a90:
            *(int *)(iVar4 + 4) = iVar7;
          }
LAB_00778950:
          *pbVar11 = 1;
        }
        *(undefined4 *)(pbVar6 + 0xc) = *(undefined4 *)(param_2 + 4);
        *(byte **)(param_2 + 4) = pbVar6;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -1;
      }
      *param_1 = pbVar10;
    }
  }
  return;
}


