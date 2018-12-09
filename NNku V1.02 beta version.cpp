#include <stdio.h>
#include <math.h>
#include <stdlib.h>
long int n;
int L,choose;
float w11,w12,w13,w21,w22,w23,w31,w32,w33,i1,i2,i3,e,a,wb1,wb2,wb3,dwb1,dwb2,dwb3,dw11,dw12,dw13,dw21,dw22,dw23,dw31,dw32,dw33;
float net1,net2,net3,o1,o2,o3,error1,error2,error3,dw11_lama,dw12_lama,dw13_lama,dw21_lama,dw22_lama,dw23_lama,dw31_lama,dw32_lama,dw33_lama,dwb1_lama,dwb2_lama,dwb3_lama,total_error;
float tampil_total_error[100000];

int main(){
    printf("Welcome to NNku V1.02 beta in C programming");
    printf("\nThis program menu what will you do");
    printf("\n1. you will manual input !");
    printf("\n2. you will automatic input !");
    printf("\n3. you will random input !");
    printf("\nInput what you want :");
    scanf("%d",&choose);
    system("cls");
    if(choose==1){      /*this is if you choose to input manualy */
                  printf("you will input manual");
    
                  printf("\nw11,w12,w13");
                  scanf("%f%f%f",&w11,&w12,&w13);
                  printf("\nw21,w22,w23");
                  scanf("%f%f%f",&w21,&w22,&w23);
                  printf("\nw31,w32,w33");
                  scanf("%f%f%f",&w31,&w32,&w33);
                  printf("\nadding bias 1 :");
                  scanf("%f",&wb1);
                  
                  printf("\nadding bias 2 :");
                  scanf("%f",&wb2);
                  
                  printf("\nadding bias 3 :");
                  scanf("%f",&e);
                  printf("\nlearning rate :");
                  scanf("%f",&a);   
                  
                  }
                  else if(choose==2){       /* this is the program automatic to input not random*/
                  printf("the program will print automatic and always like this");
                  printf("\nthe program will write this");
                  printf("\nw11=0.7,w12=0.2,w13=-0.4");
                  printf("\nw21=-0.6,w22=0.8,w23=0.5");
                  printf("\nw31=-0.1,w32=0.1,w33=0.2");
                  printf("\nadding bias wb1=0.5,wb2=1,wb=0.7");
                  printf("\nlearning rate = 10");
                  printf("\nmomentum rate = 5");
                    w11=0.7;
                    w12=0.2;
                    w13=-0.4;
                    w21=-0.6;
                    w22=0.8;
                    w23=0.5;
                  w31=-0.1;
                  w32=0.1;w33=0.2;
                  wb1=0.5;
                  wb2=1;
                  wb3=0.7;
                  e = 10;
                  a = 5;
            system("pause");                        
                       }
                       else{return 0;}          
dw11_lama=0;
dw12_lama=0;
dw13_lama=0;
dw21_lama=0;
dw22_lama=0;
dw23_lama=0;
dw31_lama=0;
dw32_lama=0;
dw33_lama=0;
L=1;
while(n>100000&&total_error>=0.001)
{

/*satu*/
i1=0.9;
i2=0.2;
i3=0.1;
net1=(i1*w11)+(i2*w12)+(i3*w13)+wb1;
o1=1/(1+exp(-L*net1));
net2=(i1*w21)+(i2*w22)+(i3*w23)+wb2;
o2=1/(1+exp(-L*net2));
net3=(i1*w31)+(i2*w32)+(i3*w33)+wb3;
o3=1/(1+exp(-L*net3));
error1=0.5*(pow((1-o1),2)+pow((0-o2),2)+pow((0-o3),2));
dw11=L*(1-o1)*o1*(1-o1)*i1;
dw12=L*(0-o2)*o2*(1-o2)*i1;
dw13=L*(0-o3)*o3*(1-o3)*i1;
dw21=L*(1-o1)*o1*(1-o1)*i2;
dw22=L*(0-o2)*o2*(1-o2)*i2;
dw23=L*(0-o3)*o3*(1-o3)*i2;
dw31=L*(1-o1)*o1*(1-o1)*i3;
dw32=L*(0-o2)*o2*(1-o2)*i3;
dw33=L*(0-o3)*o3*(1-o3)*i3;
dwb1=L*(1-o1)*o1*(1-o1)*1;
dwb2=L*(0-o2)*o2*(1-o2)*1;
dwb3=L*(0-o3)*o3*(1-o3)*1;
w11=w11+e*dw11+a*dw11_lama;
w12=w12+e*dw12+a*dw12_lama;
w13=w13+e*dw13+a*dw13_lama;
w21=w21+e*dw21+a*dw21_lama;
w22=w22+e*dw22+a*dw22_lama;
w23=w23+e*dw23+a*dw23_lama;
w31=w31+e*dw31+a*dw31_lama;
w32=w32+e*dw32+a*dw32_lama;
w33=w33+e*dw33+a*dw33_lama;
wb1=wb1+e*dwb1+a*dwb1_lama;
wb2=wb2+e*dwb2+a*dwb2_lama;
wb1=wb3+e*dwb3+a*dwb3_lama;
dw11_lama=dw11;
dw12_lama=dw12;
dw13_lama=dw13;
dw21_lama=dw21;
dw22_lama=dw22;
dw23_lama=dw23;
dw31_lama=dw21;
dw32_lama=dw22;
dw33_lama=dw23;
dwb1_lama=dwb1;
dwb2_lama=dwb2;
dwb3_lama=dwb3;

/*DUA*/
i1=0.2;
i2=0.5;
i3=0.3;
net1=(i1*w11)+(i2*w12)+(i3*w13)+wb1;
o1=1/(1+exp(-L*net1));
net2=(i1*w21)+(i2*w22)+(i3*w23)+wb2;
o2=1/(1+exp(-L*net2));
net3=(i1*w31)+(i2*w32)+(i3*w33)+wb3;
o3=1/(1+exp(-L*net3));
error2=0.5*(pow((0-o1),2)+pow((1-o2),2)+pow((0-o3),2));
dw11=L*(0-o1)*o1*(1-o1)*i1;
dw12=L*(1-o2)*o2*(1-o2)*i1;
dw13=L*(0-o3)*o3*(1-o3)*i1;
dw21=L*(0-o1)*o1*(1-o1)*i2;
dw22=L*(1-o2)*o2*(1-o2)*i2;
dw23=L*(0-o3)*o3*(1-o3)*i2;
dw31=L*(0-o1)*o1*(1-o1)*i3;
dw32=L*(1-o2)*o2*(1-o2)*i3;
dw33=L*(0-o3)*o3*(1-o3)*i3;
dwb1=L*(0-o1)*o1*(1-o1)*1;
dwb2=L*(1-o2)*o2*(1-o2)*1;
dwb3=L*(0-o3)*o3*(1-o3)*1;
w11=w11+e*dw11+a*dw11_lama;
w12=w12+e*dw12+a*dw12_lama;
w13=w13+e*dw13+a*dw13_lama;
w21=w21+e*dw21+a*dw21_lama;
w22=w22+e*dw22+a*dw22_lama;
w23=w23+e*dw23+a*dw23_lama;
w31=w31+e*dw31+a*dw31_lama;
w32=w32+e*dw32+a*dw32_lama;
w33=w33+e*dw33+a*dw33_lama;
wb1=wb1+e*dwb1+a*dwb1_lama;
wb2=wb2+e*dwb2+a*dwb2_lama;
wb1=wb3+e*dwb3+a*dwb3_lama;
dw11_lama=dw11;
dw12_lama=dw12;
dw13_lama=dw13;
dw21_lama=dw21;
dw22_lama=dw22;
dw23_lama=dw23;
dw31_lama=dw21;
dw32_lama=dw22;
dw33_lama=dw23;
dwb1_lama=dwb1;
dwb2_lama=dwb2;
dwb3_lama=dwb3;


/*tiga*/
i1=0.9;
i2=0.2;
i3=0.1;
net1=(i1*w11)+(i2*w12)+(i3*w13)+wb1;
o1=1/(1+exp(-L*net1));
net2=(i1*w21)+(i2*w22)+(i3*w23)+wb2;
o2=1/(1+exp(-L*net2));
net3=(i1*w31)+(i2*w32)+(i3*w33)+wb3;
o3=1/(1+exp(-L*net3));
error3=0.5*(pow((0-o1),2)+pow((0-o2),2)+pow((1-o3),2));
dw11=L*(0-o1)*o1*(1-o1)*i1;
dw12=L*(0-o2)*o2*(1-o2)*i1;
dw13=L*(1-o3)*o3*(1-o3)*i1;
dw21=L*(0-o1)*o1*(1-o1)*i2;
dw22=L*(0-o2)*o2*(1-o2)*i2;
dw23=L*(1-o3)*o3*(1-o3)*i2;
dw31=L*(0-o1)*o1*(1-o1)*i3;
dw32=L*(0-o2)*o2*(1-o2)*i3;
dw33=L*(1-o3)*o3*(1-o3)*i3;
dwb1=L*(0-o1)*o1*(1-o1)*1;
dwb2=L*(0-o2)*o2*(1-o2)*1;
dwb3=L*(0-o3)*o3*(1-o3)*1;
w11=w11+e*dw11+a*dw11_lama;
w12=w12+e*dw12+a*dw12_lama;
w13=w13+e*dw13+a*dw13_lama;
w21=w21+e*dw21+a*dw21_lama;
w22=w22+e*dw22+a*dw22_lama;
w23=w23+e*dw23+a*dw23_lama;
w31=w31+e*dw31+a*dw31_lama;
w32=w32+e*dw32+a*dw32_lama;
w33=w33+e*dw33+a*dw33_lama;
wb1=wb1+e*dwb1+a*dwb1_lama;
wb2=wb2+e*dwb2+a*dwb2_lama;
wb1=wb3+e*dwb3+a*dwb3_lama;
dw11_lama=dw11;
dw12_lama=dw12;
dw13_lama=dw13;
dw21_lama=dw21;
dw22_lama=dw22;
dw23_lama=dw23;
dw31_lama=dw21;
dw32_lama=dw22;
dw33_lama=dw23;
dwb1_lama=dwb1;
dwb2_lama=dwb2;
dwb3_lama=dwb3;
total_error= error1+error2+error3;       

n=n+1;

       }
       
printf("\ntotal eror :%f",total_error);
printf("\neppoch :%f",n);
printf("\nweight11 :%f",w11);
printf("\nweight12 :%f",w12);
printf("\nweight13 :%f",w13);
printf("\nweight21 :%f",w21);
printf("\nweight22 :%f",w22);
printf("\nweight23 :%f",w23);
printf("\nweight31 :%f",w31);
printf("\nweight32 :%f",w32);
printf("\nweight33 :%f",w33);
printf("\naddingbias 1 :%f",wb1);
printf("\naddingbias 2 :%f",wb2);
printf("\naddingbias 3 :%f",wb3);

system("pause");

return 0;

}
