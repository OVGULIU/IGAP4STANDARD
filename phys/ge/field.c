#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <assert.h>
#include "physge.h"
void ge_field(double *field_, double *u, double *par)
{
double comp[39];
*(comp+0)=(-1 + pow(1 + (*(u+1)),2) + pow((*(u+11)),2) + pow((*(u+21)),2))/2.;
*(comp+1)=((1 + (*(u+1)))*(*(u+2)) + (*(u+11))*(1 + (*(u+12))) + (*(u+21))*(*(u+22)))/2.;
*(comp+2)=((1 + (*(u+1)))*(*(u+3)) + (*(u+11))*(*(u+13)) + (*(u+21))*(1 + (*(u+23))))/2.;
*(comp+3)=(-1 + pow((*(u+2)),2) + pow(1 + (*(u+12)),2) + pow((*(u+22)),2))/2.;
*(comp+4)=((*(u+2))*(*(u+3)) + (1 + (*(u+12)))*(*(u+13)) + (*(u+22))*(1 + (*(u+23))))/2.;
*(comp+5)=(-1 + pow((*(u+3)),2) + pow((*(u+13)),2) + pow(1 + (*(u+23)),2))/2.;
*(comp+6)=(2*(1 + (*(u+1)))*(*(u+4)) + 2*(*(u+11))*(*(u+14)) + 2*(*(u+21))*(*(u+24)))/2.;
*(comp+7)=(2*(1 + (*(u+1)))*(*(u+5)) + 2*(*(u+11))*(*(u+15)) + 2*(*(u+21))*(*(u+25)))/2.;
*(comp+8)=(2*(1 + (*(u+1)))*(*(u+6)) + 2*(*(u+11))*(*(u+16)) + 2*(*(u+21))*(*(u+26)))/2.;
*(comp+9)=((*(u+2))*(*(u+4)) + (1 + (*(u+1)))*(*(u+5)) + (1 + (*(u+12)))*(*(u+14)) + (*(u+11))*(*(u+15)) + (*(u+22))*(*(u+24)) + (*(u+21))*(*(u+25)))/2.;
*(comp+10)=((*(u+2))*(*(u+5)) + (1 + (*(u+1)))*(*(u+7)) + (1 + (*(u+12)))*(*(u+15)) + (*(u+11))*(*(u+17)) + (*(u+22))*(*(u+25)) + (*(u+21))*(*(u+27)))/2.;
*(comp+11)=((*(u+2))*(*(u+6)) + (1 + (*(u+1)))*(*(u+8)) + (1 + (*(u+12)))*(*(u+16)) + (*(u+11))*(*(u+18)) + (*(u+22))*(*(u+26)) + (*(u+21))*(*(u+28)))/2.;
*(comp+12)=((*(u+3))*(*(u+4)) + (1 + (*(u+1)))*(*(u+6)) + (*(u+13))*(*(u+14)) + (*(u+11))*(*(u+16)) + (1 + (*(u+23)))*(*(u+24)) + (*(u+21))*(*(u+26)))/2.;
*(comp+13)=((*(u+3))*(*(u+5)) + (1 + (*(u+1)))*(*(u+8)) + (*(u+13))*(*(u+15)) + (*(u+11))*(*(u+18)) + (1 + (*(u+23)))*(*(u+25)) + (*(u+21))*(*(u+28)))/2.;
*(comp+14)=((*(u+3))*(*(u+6)) + (1 + (*(u+1)))*(*(u+9)) + (*(u+13))*(*(u+16)) + (*(u+11))*(*(u+19)) + (1 + (*(u+23)))*(*(u+26)) + (*(u+21))*(*(u+29)))/2.;
*(comp+15)=(2*(*(u+2))*(*(u+5)) + 2*(1 + (*(u+12)))*(*(u+15)) + 2*(*(u+22))*(*(u+25)))/2.;
*(comp+16)=(2*(*(u+2))*(*(u+7)) + 2*(1 + (*(u+12)))*(*(u+17)) + 2*(*(u+22))*(*(u+27)))/2.;
*(comp+17)=(2*(*(u+2))*(*(u+8)) + 2*(1 + (*(u+12)))*(*(u+18)) + 2*(*(u+22))*(*(u+28)))/2.;
*(comp+18)=((*(u+3))*(*(u+5)) + (*(u+2))*(*(u+6)) + (*(u+13))*(*(u+15)) + (1 + (*(u+12)))*(*(u+16)) + (1 + (*(u+23)))*(*(u+25)) + (*(u+22))*(*(u+26)))/2.;
*(comp+19)=((*(u+3))*(*(u+7)) + (*(u+2))*(*(u+8)) + (*(u+13))*(*(u+17)) + (1 + (*(u+12)))*(*(u+18)) + (1 + (*(u+23)))*(*(u+27)) + (*(u+22))*(*(u+28)))/2.;
*(comp+20)=((*(u+3))*(*(u+8)) + (*(u+2))*(*(u+9)) + (*(u+13))*(*(u+18)) + (1 + (*(u+12)))*(*(u+19)) + (1 + (*(u+23)))*(*(u+28)) + (*(u+22))*(*(u+29)))/2.;
*(comp+21)=(2*(*(u+3))*(*(u+6)) + 2*(*(u+13))*(*(u+16)) + 2*(1 + (*(u+23)))*(*(u+26)))/2.;
*(comp+22)=(2*(*(u+3))*(*(u+8)) + 2*(*(u+13))*(*(u+18)) + 2*(1 + (*(u+23)))*(*(u+28)))/2.;
*(comp+23)=(2*(*(u+3))*(*(u+9)) + 2*(*(u+13))*(*(u+19)) + 2*(1 + (*(u+23)))*(*(u+29)))/2.;
*(comp+24)=((*(comp+0)) + (*(comp+3)) + (*(comp+5)))/sqrt(3);
*(comp+25)=((*(comp+0)) - (*(comp+3)))/sqrt(2);
*(comp+26)=((*(comp+0)) + (*(comp+3)) - 2*(*(comp+5)))/sqrt(6);
*(comp+27)=((*(comp+6)) + (*(comp+15)) + (*(comp+21)))/sqrt(3);
*(comp+28)=((*(comp+7)) + (*(comp+16)) + (*(comp+22)))/sqrt(3);
*(comp+29)=((*(comp+8)) + (*(comp+17)) + (*(comp+23)))/sqrt(3);
*(comp+30)=((*(comp+6)) - (*(comp+15)))/sqrt(2);
*(comp+31)=((*(comp+7)) - (*(comp+16)))/sqrt(2);
*(comp+32)=((*(comp+8)) - (*(comp+17)))/sqrt(2);
*(comp+33)=((*(comp+6)) + (*(comp+15)) - 2*(*(comp+21)))/sqrt(6);
*(comp+34)=((*(comp+7)) + (*(comp+16)) - 2*(*(comp+22)))/sqrt(6);
*(comp+35)=((*(comp+8)) + (*(comp+17)) - 2*(*(comp+23)))/sqrt(6);
*(comp+36)=-((1.3333333333333333*(*(par+0)) - 1.3333333333333333*(*(par+0))*(*(par+1)))/(pow((*(par+0)),2)*(pow((*(par+0)),2) - 2*pow((*(par+0)),2)*(*(par+1)) - (*(par+0))*(1.3333333333333333*(*(par+0)) - 1.3333333333333333*(*(par+0))*(*(par+1))))));
*(comp+37)=(2*(*(par+1)))/(pow((*(par+0)),2) - 2*pow((*(par+0)),2)*(*(par+1)) - (*(par+0))*(1.3333333333333333*(*(par+0)) - 1.3333333333333333*(*(par+0))*(*(par+1))));
*(comp+38)=-(1/(pow((*(par+0)),2)*(pow((*(par+0)),2) - 2*pow((*(par+0)),2)*(*(par+1)) - (*(par+0))*(1.3333333333333333*(*(par+0)) - 1.3333333333333333*(*(par+0))*(*(par+1))))));

for (int i=0; i<30; i++) { field_[i]=u[i]; }
field_[30]=(*(comp+25));
field_[31]=(*(comp+26));
field_[32]=(1.4999999999999998*pow(field_[30],4) + pow(field_[31],2)*(1.4999999999999998*pow(field_[31],2) + field_[31]*(*(par+0))*(1.9999999999999996 - 1.9999999999999996*(*(par+1))) - 2.9999999999999996*pow((*(par+0)),2)*(*(par+1))) + pow(field_[30],2)*(2.9999999999999996*pow(field_[31],2) - 2.9999999999999996*pow((*(par+0)),2)*(*(par+1)) + field_[31]*(*(par+0))*(-5.999999999999999 + 5.999999999999999*(*(par+1)))))/(pow((*(par+0)),4)*(0.49999999999999983 + 1.*(*(par+1))));
if      ((field_[32]<-0.5) && (field_[31]<0)) {field_[32]=3.0;}
else if ((field_[32]<-0.5) && (field_[30]>0)) {field_[32]=1.0;}
else if ((field_[32]<-0.5) && (field_[30]<0)) {field_[32]=2.0;}
else                                          {field_[32]=0.0;}
}
