#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <assert.h>
#include "physgetime.h"
void getime_density(double hh[], double u[], double *par)
{
double *u1=u+30;
double *u0=u+60;
double comp[39];
*(comp+0)=(-1 + pow(1 + ((*(u0+1)) + (*(u1+1)))/2.,2) + pow((*(u0+11)) + (*(u1+11)),2)/4. + pow((*(u0+21)) + (*(u1+21)),2)/4.)/2.;
*(comp+1)=(((1 + ((*(u0+1)) + (*(u1+1)))/2.)*((*(u0+2)) + (*(u1+2))))/2. + (((*(u0+11)) + (*(u1+11)))*(1 + ((*(u0+12)) + (*(u1+12)))/2.))/2. + (((*(u0+21)) + (*(u1+21)))*((*(u0+22)) + (*(u1+22))))/4.)/2.;
*(comp+2)=(((1 + ((*(u0+1)) + (*(u1+1)))/2.)*((*(u0+3)) + (*(u1+3))))/2. + (((*(u0+11)) + (*(u1+11)))*((*(u0+13)) + (*(u1+13))))/4. + (((*(u0+21)) + (*(u1+21)))*(1 + ((*(u0+23)) + (*(u1+23)))/2.))/2.)/2.;
*(comp+3)=(-1 + pow((*(u0+2)) + (*(u1+2)),2)/4. + pow(1 + ((*(u0+12)) + (*(u1+12)))/2.,2) + pow((*(u0+22)) + (*(u1+22)),2)/4.)/2.;
*(comp+4)=((((*(u0+2)) + (*(u1+2)))*((*(u0+3)) + (*(u1+3))))/4. + ((1 + ((*(u0+12)) + (*(u1+12)))/2.)*((*(u0+13)) + (*(u1+13))))/2. + (((*(u0+22)) + (*(u1+22)))*(1 + ((*(u0+23)) + (*(u1+23)))/2.))/2.)/2.;
*(comp+5)=(-1 + pow((*(u0+3)) + (*(u1+3)),2)/4. + pow((*(u0+13)) + (*(u1+13)),2)/4. + pow(1 + ((*(u0+23)) + (*(u1+23)))/2.,2))/2.;
*(comp+6)=((1 + ((*(u0+1)) + (*(u1+1)))/2.)*((*(u0+4)) + (*(u1+4))) + (((*(u0+11)) + (*(u1+11)))*((*(u0+14)) + (*(u1+14))))/2. + (((*(u0+21)) + (*(u1+21)))*((*(u0+24)) + (*(u1+24))))/2.)/2.;
*(comp+7)=((1 + ((*(u0+1)) + (*(u1+1)))/2.)*((*(u0+5)) + (*(u1+5))) + (((*(u0+11)) + (*(u1+11)))*((*(u0+15)) + (*(u1+15))))/2. + (((*(u0+21)) + (*(u1+21)))*((*(u0+25)) + (*(u1+25))))/2.)/2.;
*(comp+8)=((1 + ((*(u0+1)) + (*(u1+1)))/2.)*((*(u0+6)) + (*(u1+6))) + (((*(u0+11)) + (*(u1+11)))*((*(u0+16)) + (*(u1+16))))/2. + (((*(u0+21)) + (*(u1+21)))*((*(u0+26)) + (*(u1+26))))/2.)/2.;
*(comp+9)=((((*(u0+2)) + (*(u1+2)))*((*(u0+4)) + (*(u1+4))))/4. + ((1 + ((*(u0+1)) + (*(u1+1)))/2.)*((*(u0+5)) + (*(u1+5))))/2. + ((1 + ((*(u0+12)) + (*(u1+12)))/2.)*((*(u0+14)) + (*(u1+14))))/2. + (((*(u0+11)) + (*(u1+11)))*((*(u0+15)) + (*(u1+15))))/4. + (((*(u0+22)) + (*(u1+22)))*((*(u0+24)) + (*(u1+24))))/4. + (((*(u0+21)) + (*(u1+21)))*((*(u0+25)) + (*(u1+25))))/4.)/2.;
*(comp+10)=((((*(u0+2)) + (*(u1+2)))*((*(u0+5)) + (*(u1+5))))/4. + ((1 + ((*(u0+1)) + (*(u1+1)))/2.)*((*(u0+7)) + (*(u1+7))))/2. + ((1 + ((*(u0+12)) + (*(u1+12)))/2.)*((*(u0+15)) + (*(u1+15))))/2. + (((*(u0+11)) + (*(u1+11)))*((*(u0+17)) + (*(u1+17))))/4. + (((*(u0+22)) + (*(u1+22)))*((*(u0+25)) + (*(u1+25))))/4. + (((*(u0+21)) + (*(u1+21)))*((*(u0+27)) + (*(u1+27))))/4.)/2.;
*(comp+11)=((((*(u0+2)) + (*(u1+2)))*((*(u0+6)) + (*(u1+6))))/4. + ((1 + ((*(u0+1)) + (*(u1+1)))/2.)*((*(u0+8)) + (*(u1+8))))/2. + ((1 + ((*(u0+12)) + (*(u1+12)))/2.)*((*(u0+16)) + (*(u1+16))))/2. + (((*(u0+11)) + (*(u1+11)))*((*(u0+18)) + (*(u1+18))))/4. + (((*(u0+22)) + (*(u1+22)))*((*(u0+26)) + (*(u1+26))))/4. + (((*(u0+21)) + (*(u1+21)))*((*(u0+28)) + (*(u1+28))))/4.)/2.;
*(comp+12)=((((*(u0+3)) + (*(u1+3)))*((*(u0+4)) + (*(u1+4))))/4. + ((1 + ((*(u0+1)) + (*(u1+1)))/2.)*((*(u0+6)) + (*(u1+6))))/2. + (((*(u0+13)) + (*(u1+13)))*((*(u0+14)) + (*(u1+14))))/4. + (((*(u0+11)) + (*(u1+11)))*((*(u0+16)) + (*(u1+16))))/4. + ((1 + ((*(u0+23)) + (*(u1+23)))/2.)*((*(u0+24)) + (*(u1+24))))/2. + (((*(u0+21)) + (*(u1+21)))*((*(u0+26)) + (*(u1+26))))/4.)/2.;
*(comp+13)=((((*(u0+3)) + (*(u1+3)))*((*(u0+5)) + (*(u1+5))))/4. + ((1 + ((*(u0+1)) + (*(u1+1)))/2.)*((*(u0+8)) + (*(u1+8))))/2. + (((*(u0+13)) + (*(u1+13)))*((*(u0+15)) + (*(u1+15))))/4. + (((*(u0+11)) + (*(u1+11)))*((*(u0+18)) + (*(u1+18))))/4. + ((1 + ((*(u0+23)) + (*(u1+23)))/2.)*((*(u0+25)) + (*(u1+25))))/2. + (((*(u0+21)) + (*(u1+21)))*((*(u0+28)) + (*(u1+28))))/4.)/2.;
*(comp+14)=((((*(u0+3)) + (*(u1+3)))*((*(u0+6)) + (*(u1+6))))/4. + ((1 + ((*(u0+1)) + (*(u1+1)))/2.)*((*(u0+9)) + (*(u1+9))))/2. + (((*(u0+13)) + (*(u1+13)))*((*(u0+16)) + (*(u1+16))))/4. + (((*(u0+11)) + (*(u1+11)))*((*(u0+19)) + (*(u1+19))))/4. + ((1 + ((*(u0+23)) + (*(u1+23)))/2.)*((*(u0+26)) + (*(u1+26))))/2. + (((*(u0+21)) + (*(u1+21)))*((*(u0+29)) + (*(u1+29))))/4.)/2.;
*(comp+15)=((((*(u0+2)) + (*(u1+2)))*((*(u0+5)) + (*(u1+5))))/2. + (1 + ((*(u0+12)) + (*(u1+12)))/2.)*((*(u0+15)) + (*(u1+15))) + (((*(u0+22)) + (*(u1+22)))*((*(u0+25)) + (*(u1+25))))/2.)/2.;
*(comp+16)=((((*(u0+2)) + (*(u1+2)))*((*(u0+7)) + (*(u1+7))))/2. + (1 + ((*(u0+12)) + (*(u1+12)))/2.)*((*(u0+17)) + (*(u1+17))) + (((*(u0+22)) + (*(u1+22)))*((*(u0+27)) + (*(u1+27))))/2.)/2.;
*(comp+17)=((((*(u0+2)) + (*(u1+2)))*((*(u0+8)) + (*(u1+8))))/2. + (1 + ((*(u0+12)) + (*(u1+12)))/2.)*((*(u0+18)) + (*(u1+18))) + (((*(u0+22)) + (*(u1+22)))*((*(u0+28)) + (*(u1+28))))/2.)/2.;
*(comp+18)=((((*(u0+3)) + (*(u1+3)))*((*(u0+5)) + (*(u1+5))))/4. + (((*(u0+2)) + (*(u1+2)))*((*(u0+6)) + (*(u1+6))))/4. + (((*(u0+13)) + (*(u1+13)))*((*(u0+15)) + (*(u1+15))))/4. + ((1 + ((*(u0+12)) + (*(u1+12)))/2.)*((*(u0+16)) + (*(u1+16))))/2. + ((1 + ((*(u0+23)) + (*(u1+23)))/2.)*((*(u0+25)) + (*(u1+25))))/2. + (((*(u0+22)) + (*(u1+22)))*((*(u0+26)) + (*(u1+26))))/4.)/2.;
*(comp+19)=((((*(u0+3)) + (*(u1+3)))*((*(u0+7)) + (*(u1+7))))/4. + (((*(u0+2)) + (*(u1+2)))*((*(u0+8)) + (*(u1+8))))/4. + (((*(u0+13)) + (*(u1+13)))*((*(u0+17)) + (*(u1+17))))/4. + ((1 + ((*(u0+12)) + (*(u1+12)))/2.)*((*(u0+18)) + (*(u1+18))))/2. + ((1 + ((*(u0+23)) + (*(u1+23)))/2.)*((*(u0+27)) + (*(u1+27))))/2. + (((*(u0+22)) + (*(u1+22)))*((*(u0+28)) + (*(u1+28))))/4.)/2.;
*(comp+20)=((((*(u0+3)) + (*(u1+3)))*((*(u0+8)) + (*(u1+8))))/4. + (((*(u0+2)) + (*(u1+2)))*((*(u0+9)) + (*(u1+9))))/4. + (((*(u0+13)) + (*(u1+13)))*((*(u0+18)) + (*(u1+18))))/4. + ((1 + ((*(u0+12)) + (*(u1+12)))/2.)*((*(u0+19)) + (*(u1+19))))/2. + ((1 + ((*(u0+23)) + (*(u1+23)))/2.)*((*(u0+28)) + (*(u1+28))))/2. + (((*(u0+22)) + (*(u1+22)))*((*(u0+29)) + (*(u1+29))))/4.)/2.;
*(comp+21)=((((*(u0+3)) + (*(u1+3)))*((*(u0+6)) + (*(u1+6))))/2. + (((*(u0+13)) + (*(u1+13)))*((*(u0+16)) + (*(u1+16))))/2. + (1 + ((*(u0+23)) + (*(u1+23)))/2.)*((*(u0+26)) + (*(u1+26))))/2.;
*(comp+22)=((((*(u0+3)) + (*(u1+3)))*((*(u0+8)) + (*(u1+8))))/2. + (((*(u0+13)) + (*(u1+13)))*((*(u0+18)) + (*(u1+18))))/2. + (1 + ((*(u0+23)) + (*(u1+23)))/2.)*((*(u0+28)) + (*(u1+28))))/2.;
*(comp+23)=((((*(u0+3)) + (*(u1+3)))*((*(u0+9)) + (*(u1+9))))/2. + (((*(u0+13)) + (*(u1+13)))*((*(u0+19)) + (*(u1+19))))/2. + (1 + ((*(u0+23)) + (*(u1+23)))/2.)*((*(u0+29)) + (*(u1+29))))/2.;
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
hh[0]=(*(comp+26))*(-3*pow((*(comp+25)),2) + pow((*(comp+26)),2))*(*(comp+36)) + (pow((*(comp+25)),2) + pow((*(comp+26)),2))*(*(comp+37)) + pow(pow((*(comp+25)),2) + pow((*(comp+26)),2),2)*(*(comp+38)) + pow((*(comp+24)),2)*(*(par+2)) + (pow((*(comp+1)),2) + pow((*(comp+2)),2) + pow((*(comp+4)),2))*(*(par+3)) + (pow((*(comp+30)),2) + pow((*(comp+31)),2) + pow((*(comp+32)),2) + pow((*(comp+33)),2) + pow((*(comp+34)),2) + pow((*(comp+35)),2))*pow((*(par+4)),2) + ((*(par+5))*pow(-(*(u0+0)) + (*(u1+0)),2))/(2.*pow((*(par+7)),2)) + ((*(par+5))*pow(-(*(u0+10)) + (*(u1+10)),2))/(2.*pow((*(par+7)),2)) + ((*(par+5))*pow(-(*(u0+20)) + (*(u1+20)),2))/(2.*pow((*(par+7)),2));

hh[1]=0;
}


// boundary
void getime_densityb(double hh[], double u[], double traction, double *par, int order)
{

hh[0]=(u[1]+u[2])/2*traction;
hh[1]=1;

}
