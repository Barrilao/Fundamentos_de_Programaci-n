//Juan Sánchez Rodríguez

/*Indique si se produce un problema de precisión o de desbordamiento en los siguientes
ejemplos y diga cuál sería el resultado final de las operaciones.

a)int chico, chico1, chico2;

chico1=1234567;
chico2=1234567;
chico = chico1*chico2;

Se produce desbordamiento, la salida sería -557712591

b) long grande;
int chico1, chico2;

chico1=1234567;
chico2=1234567;
grande = chico1*chico2;

Se produce desbordamiento, la salida sería -557712591

c)double real, real1, real2;

real1=123.1;
real2=124.2;
resultado = real1*real2;

Variable resultado no declarada

d)double real, real1, real2;

real1=123456789.1;
real2=123456789.2;
resultado = real1*real2;

Variable resultado no declarada

e)double real, otro_real;

real=2e34;
otro_real=real+1;
otro_real=otro_real-real;

Se produce un error de precision, la salida sería 0

f)double real, otro_real;

real=1e+300;
otro_real=1e+200;
otro_real=otro_real*real;

Se produce un error de desbordamiento, la salida sería infinito

g)float chico;
double grande;
grande= 2e+150;
chico=grande;

cout << chico;

Se produce un error de desbordamiento, la salida sería infinito                           */



