#include <stdio.h>
#include <stdlib.h>
float funcaoINSS(float SalarioBruto){
	if (SalarioBruto<=1412.00) {
		return SalarioBruto*0.075;
	} else if (SalarioBruto <=2666.98) {
		return SalarioBruto*0.09;
	} else if (SalarioBruto>2666.98 && SalarioBruto<=4000.03) {
		return SalarioBruto*0.12;
	} else if (SalarioBruto>=4000.04) {
		return SalarioBruto*0.14;
	}
}
float funcaoIRPF (float SalarioBase){
    if (SalarioBase<=2259.20) {
		    return 0;
	} else if(SalarioBase>2258.19 && SalarioBase<=2826.65) {
	    return SalarioBase*0.075;
	} else if(SalarioBase>2826.65 && SalarioBase<=3751.05) {
		return SalarioBase*0.15;
	} else if(SalarioBase>3751.05 && SalarioBase<=4664.68) {
		return SalarioBase*0.225;
	} else if(SalarioBase>4664.68) {
		return SalarioBase*0.275;
	}
}
int main()
{
    float SalarioBase,SalarioBruto,INSS,IRPF,Horas,ValorHora;

	printf("Horas trabalhas e Valor da hora: ");
	scanf("%f %f",&Horas,&ValorHora);
	SalarioBruto =(ValorHora*Horas);

    INSS= funcaoINSS(SalarioBruto);

    SalarioBase = SalarioBruto-INSS;
    
    IRPF= funcaoIRPF(SalarioBase);
    printf("\n=================================\n   RECIBO DE PAGAMENTO DE SALARIO (CONTRA CHEQUE)\n=================================\nSALARIO BRUTO (Horas x Valor) : R$%.2f \n(-) Desconto INSS:      R$%2.f \n(-) DESCONTOS IRPF:     R$%.2f\n =================================\n LIQUIDO A RECEBER:  R$%.2f",SalarioBruto,INSS,IRPF,(SalarioBase-IRPF));
    
    
/*	printf("\n SalarioBase %f \n",SalarioBase);
	printf("\n SalarioBruto %f \n",SalarioBruto);
	printf("\n INSS %f \n",INSS);
	printf("\n IRPF %f\n",IRPF);
	printf("\n Horas %f\n",Horas);
	printf("\n ValorHora %f\n",ValorHora);
*/
return 0;
}
